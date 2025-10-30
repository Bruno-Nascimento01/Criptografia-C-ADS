#include <stdio.h>
#include <string.h>

int main() {
  char alpha[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char palavra[100];
  int razao = 3;
  int i;

  printf("Digite sua palavra (maiúsculas): ");
  scanf("%s", palavra);

  printf("Palavra criptografada com progressão aritmética (razão = 3): ");

  for (i = 0; i < strlen(palavra); i++) {
    if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
      int posicao = palavra[i] - 'A';

      int deslocamento = (i + 1) * razao;

      int nova_pos = (posicao + deslocamento) % 26;
      printf("%c", alpha[nova_pos]);
    } else {
      printf("%c", palavra[i]);
    }
  }

  printf("\n");
  return 0;
}
