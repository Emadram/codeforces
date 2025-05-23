#include <stdio.h>

int main(){
  int value = 0;
  scanf("%d", &value);
  if ((value - 2 > 0) && (value % 2 == 0)){
    puts("Yes");
    return 0;
  }
  puts("No");
  return 0;
}
