#include<stdio.h>
void Tower(int n , char a, char b, char c ){
    if(n==1){
        printf("%c -> %c\n",a,c);
        return;
    }
    Tower(n-1,a,c,b);
    Tower(1,a,b,c);
    Tower(n-1,b,a,c);4
    
    }
int main(){
    char a='A', b='B', c='C';
    int n;
    scanf("%d",&n);
    Tower(n,a,b,c);
}