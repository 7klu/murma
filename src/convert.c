#include <sndfile.h>
#include <rnnoise.h>

int get_quality(int quality) {
  switch (quality) {
    case 1:
      return SF_FORMAT_WAV | SF_FORMAT_PCM_16;
    case 2:
      return SF_FORMAT_WAV | SF_FORMAT_PCM_24;
    case 3:
      return SF_FORMAT_WAV | SF_FORMAT_PCM_32;
    case 4:
      return SF_FORMAT_WAV | SF_FORMAT_FLOAT;
    default:
      return SF_FORMAT_WAV | SF_FORMAT_PCM_16;
  }
}

int mp3_to_wav(const char *name_in, const char *name_out, int quality) {
  SF_INFO sfInfo;
  SNDFILE *file_in = sf_open(name_in, SFM_READ, &sfInfo);
  if (!file_in)
    return 1;
  sfInfo.format = get_quality(quality);
  SNDFILE *file_out = sf_open(name_out, SFM_WRITE, &sfInfo);
  if (!file_out) {
    sf_close(file_in);
    return 2;
  }
  short buf[1024];
  int c;
  while ((c = sf_read_short(file_in, buf, 1024)) > 0) {
    sf_write_short(file_out, buf, c);
  }
  sf_close(file_in);
  sf_close(file_out);
  return 0;
}
