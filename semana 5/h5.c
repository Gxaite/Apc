#include <stdio.h>
#include <string.h>
#include <ctype.h>

toup
int main() {
  char str[10002];
  char procura[42];
  char troca[42];

  fgets(str, 10002, stdin);

  fgets(procura, 42, stdin);

  fgets(troca, 42, stdin);

  procura[strlen(procura) - 1] = '\0';
  troca[strlen(troca) - 1] = '\0';

  char *pos = strstr(str, procura);

  if (pos) {

    int new_size = (strlen(str) - strlen(procura) + strlen(troca));

    char new_str[new_size + 1];

    strncpy(new_str, str, pos - str);

    strcat(new_str, troca);

    strcat(new_str, pos + strlen(procura));

    strcpy(str, new_str);
  }

  printf("%s\n", str);

  return 0;
}