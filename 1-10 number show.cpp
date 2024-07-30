#include<stdio.h>
int main(){

char alphabet='A';
do
    printf("%c\t",alphabet++);
while(alphabet<='Z');
return 0;
}
