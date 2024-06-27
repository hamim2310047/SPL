#include<stdio.h>

int countdigit(int num);
int main(){
    int  n ;
    scanf("%d",&n);
    printf("%d",countdigit(n));
    return 0;
}
int countdigit(int num){
    int count=0;
    if (num<0)
    {
        num=-num;
        
    }
    while (num>0)
    {
        num=num/10;
        count++;
    }
    return count;

}
