#include<stdio.h>
#include<string.h>
int main()
{
    int n,j=0,count=0;
    char a[100],c[100];
    while(1){
        gets(a);
        if(strcmp(a,"DONE")==0){
            break;
        }
        for(int i=0;i<strlen(a);i++){
            if(a[i]>=65 && a[i]<=90){
                a[i]=a[i]+32;
            }
            if(a[i]!='!' && a[i]!=',' && a[i]!='.' && a[i]!='?' && a[i]!=' '){
                c[j]=a[i];
                j++;
            }
        }
        c[j]='\0';
        int k=strlen(c)-1;
        for(int i=0;i<strlen(c);i++){
            if(c[i]==c[k]){
                count++;
            }
            k--;
        }
        if(count==strlen(c)){
            printf("You won't be eaten!\n");
        }
        else
            printf("Uh oh..\n");
    count=0;
    k=0;
    j=0;
    }
    return 0;
}
