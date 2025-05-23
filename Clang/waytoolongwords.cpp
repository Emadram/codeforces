#include <stdio.h>
#define MAX_LEN 101
int main(){
  char str[MAX_LEN];
  char temp;
  int len;
  int count = 0;
  scanf("%d\n", &count);
  while (count--){
  for (len = 0; (temp = getchar()) != '\n'; ++len)
    str[len] = temp;
  str[len] = '\0';
  if (len > 10)
    printf("%c%d%c\n", str[0], len - 2, str[len-1]);
  else
    puts(str);
  }
  return 0;
}
