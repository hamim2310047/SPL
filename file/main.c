#include<stdio.h>

int main(){
    FILE *file = fopen("sample.txt","r");
    if (file==NULL)
    {
        printf("FILE not found\n");
    }
    int i=0;
    int num;
    int sum=0,count=0;
    while (!feof(file))
    {
        fscanf(file,"%d",&num);
        if(num%7==0){
            sum+=num;
        }
    }
    file = fopen("Output.txt","w");
    if (file==NULL)
    {
        printf("FILE not found\n");
    }
    else{
        fprintf(file,"SUM=%d",sum);
    }
    fclose(file);

    return 0;
}
