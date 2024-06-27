#include<stdio.h>
int main(){
    int size,a[50][50];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            a[i][j]=0;
        }
    }
    int q,row,col;
    scanf("%d",&q);
    for ( ;q--; )
    {
        scanf(" %d %d", &row, &col);
        a[row][col]=1;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(a[i][j]==1){
                int count=0;
                 for(int k=i-1;k>=0;k--){
                    if(a[k][j]==1){
                        count++;
                        break;
                    }
                }
                for(int k=j-1;k>=0;k--){
                    if(a[i][k]==1){
                        count++;
                        break;
                    }
                }
                for(int k=i+1;k<size;k++){
                    if(a[k][j]==1){
                        count++;
                        break;
                    }
                }
                for(int k=j+1;k<size;k++){
                    if(a[i][k]==1){
                        count++;
                        break;
                    }
                }
                int x=i+1;
                for(int k=j+1;k<size;k++){
                    if(a[x][k]==1){
                        count++;
                        break;
                    }
                    x++;
                }
                x=i+1;
                for(int k=j-1;k>=0;k--){
                    if(a[x][k]==1){
                        count++;
                        break;
                    }
                    x++;
                }
                x=i-1;
                for(int k=j-1;k>=0;k--){
                    if(a[x][k]==1){
                        count++;
                        break;
                    }
                    x--;
                }
                x=i-1;
                for(int k=j+1;k<size;k++){
                    if(a[x][k]==1){
                        count++;
                        break;
                    }
                    x--;
                }
                printf("%d\n",count);
            }
        }
    }
    return 0;    
}