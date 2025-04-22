#include <stdlib.h>
#include <getopt.h>

int main(int ac, char **av) {
  int option;
  static struct option options[] = {
    {"help", no_argument, 0, 'h'},
    {"input", required_argument, 0, 'i'},
    {"output", required_argument, 0, 'o'},
    {"quality", required_argument, 0, 'q'},
    {"format", required_argument, 0, 'f'},
    {0, 0, 0, 0}
  };
  while ((option = getopt_long(ac, av, "hi:o:q:", options, NULL)) != -1) {
    switch (option) {
      case 'h':
        return 0;
      case 'i':
        break;
      case 'o':
        break;
      case 'q':
        break;
      case 'f':
        break;
      case '?':
        break;
      case ':':
        break;
      default:
        return 1;
    }
  }
  return 0;
}
