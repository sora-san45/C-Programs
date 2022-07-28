#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter a string :");
    fgets(str,100,stdin);
    printf("%s",str);
    int i,flag=0;
    if (('a'<=str[0]) && (str[0]<='z')){
        str[0]=str[0]-32;
    }
    for(i=1;str[i]!='\0';i++){
        if (('A'<=str[i])  && (str[i]<='Z')){
            str[i]=str[i]+32;
        } 
        if(str[i]==' '){
            flag=1;
            continue;
        }
        if (flag==1){
            if(('a'<=str[i]) && (str[i]<='z')){
                str[i]=str[i]-32;
                flag=0;
            }
            else{
                flag=0;
            }
        }
    }
    fputs(str,stdout);

}