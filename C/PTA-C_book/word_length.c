#include <stdio.h>
#include <string.h>
// int main(){
//     char a[100];
//     gets(a);
//     int length=0;
//     int i;
//     if(a[0]!='.'){
//         for(i=0;a[i]!='\0';i++){
//             if((a[i]==' '||a[i]=='.')&&length!=0){
//                 if(a[i]==' '){
//                     printf("%d ",length);
//                 }else{
//                     printf("%d",length);
//                 }
//                 length=0;
//             }else{
//                 length++;
//             }
//         }
//     }
//     return 0;
// }
int main(){
    char a[100];
    int end=0;
    do{
        scanf("%s",&a);//取空格前内容
        int t=(int)strlen(a);//取有效长度,而数组是从0开始的
        if(a[t-1]!='.'){
            printf("%d ",t);
        }else if(a[t-1]=='.'){
            if(t>1){
                printf("%d",t-1);
            }
            end=1;
        }

    }while(!end);

    return 0;
}