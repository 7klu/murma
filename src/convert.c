// _________________________________________          libs               _________________________________________

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// _________________________________________ Get format (mp3, mp4, etc.) _________________________________________

const char* get_format(const char *path) {

  const char *ext = strrchr(path, '.');
  return ( ext != NULL ) ?  ext + 1 : NULL; // retourne l'extension "mp3", "mp4", etc. (sinon retourne NULL)
}

// _________________________________________   Convert to wav format     _________________________________________

void convert(const char *path) {

  const char *format  = get_format(path);

  char        cmd[512];
  char        name[512];

  size_t      lenPath = strlen(path);
  size_t      lenExt  = strlen(format);

  if (format != NULL && lenPath > lenExt) {

      strncpy(name, path, lenPath - lenExt);
      name[lenPath - lenExt] = '\0';

  } else { name[0]           = '\0'; }

  if( format != NULL && strcmp(format, "mp4") == 0) { snprintf(cmd, sizeof(cmd), "ffmpeg -y -i \"%s\" -vn -ar 44100 -ac 2 -f wav \"%s.wav\"", path, name); } // Convert un fichier vidéo mp4 en wav
  else                                              { snprintf(cmd, sizeof(cmd), "ffmpeg -y -i \"%s\" -ar 44100 -ac 2 -f wav \"%s.wav\"",     path, name); } // Convert n'importe ql fichier audio en .wav 

  system(cmd);
}