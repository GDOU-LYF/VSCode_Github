#include <stdio.h>
#include <stdlib.h>
typedef struct _node{
    int value;
    struct _node *next;
}Node;
typedef struct _list{
    Node *head;

}List;
void add_(List*plist,int number);
void Print(List *plist);
void Node_Dele(List *plist,int number);
void Node_free(List *plist);
int main(){
    List list;
    list.head=NULL;
    int number;
    do{
        scanf("%d",&number);
        if(number!=-1){
            add_(&list,number);
        }
    }while(number!=-1);
    Print(&list);
    // scanf("%d",&number);
    //查找
    // Node *p;
    // int isFound=0;
    // for(p=list.head;p;p=p->next){
    //     if(p->value==number){
    //         printf("find!\n");
    //         isFound=1;
    //         break;
    //     }
    // }
    // if(!isFound){
    //     printf("NO find!\n");
    // }
    //删除单结点
    // Node *q;
    // for(q=NULL,p=list.head;p;q=p,p=p->next){
    //     if(p->value==number){
    //         if(q){
    //             q->next=p->next;
    //         }else{
    //             list.head=p->next;
    //         }
    //         free(p);
    //         break;
    //     }
    // }
    // //释放
    // for(p=list.head;p;p=q){
    //     q=p->next;
    //     free(p);
    // }
    return 0;
}

void add_(List*plist,int number){//添加结点
            Node *p=(Node*)malloc(sizeof(Node));
            p->value=number;
            p->next=NULL;
            Node *last=plist->head;
            if(last){
                while(last->next){
                    last=last->next;
                }
                last->next=p;
            // }else{
            //     head=p;
            }
        // return head;
}
void Print(List *plist){//输出
    Node *p;
    for(p=(*plist).head;p;p=p->next){
        printf("%d\t",p->value);
    }
    printf("\n");

}

void Node_Find(List *plist,int number){//寻找
    Node *p;
    int isFound=0;
    for(p=plist->head;p;p=p->next){
        if(p->value==number){
            printf("find!\n");
            isFound=1;
            break;
        }
    }
    if(!isFound){
        printf("NO find!\n");
    }
}
void Node_Dele(List *plist,int number){//删除单结点
    Node *p;
    Node *q;
    for(q=NULL,p=plist->head;p;q=p,p=p->next){
        if(p->value==number){
            if(q){
                q->next=p->next;
            }else{
                plist->head=p->next;
            }
            free(p);
            break;
        }
    }
}
void Node_free(List *plist){//释放
    Node *p;
    Node *q;
    for(p=(*plist).head;p;p=q){
        q=p->next;
        free(p);
    }
}