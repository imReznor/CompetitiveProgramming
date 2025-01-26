#include <stdio.h>

int main(){
     int age = 25;
     float height = 1.75;
     char initial = 'A';

     printf("hello, world\n");

     for (int i = 0; i < 5; ++i) {
          printf("%d\n", i);
     }

     int num = 10;
     int *ptr = &num;

     printf("%d\n", *ptr);


return 0;
}

