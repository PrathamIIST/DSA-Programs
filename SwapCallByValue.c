//Swap using function call  by value
#include<stdio.h>
int swap(int c, int d);

int main(){
    int a=2,b=3;
    swap(a,b);
}

int swap(int c,int d){
    int temp;
    temp=c;
    c=d;
    d=temp;
    printf("%d %d",c,d);
}