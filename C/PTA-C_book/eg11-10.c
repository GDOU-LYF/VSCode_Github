#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stud_node
{
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};
struct stud_node*Create_Stu_Doc();//新建链表
struct stud_node*InsertDoc
(struct stud_node*head,struct stud_node *stud);//插入
struct stud_node*DeleteDoc(struct stud_node *head,int num);//删除
void Print_Stu_Doc(struct stud_node*head);//遍历
int main(){
    struct stud_node*head,*p;
    int choice,score,num;
    char name[20];
    int size=sizeof(struct stud_node);

    do{


        printf("1:Create 2:Insert 3:Delete 4:Print 0:EXit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                head=Create_Stu_Doc();
                break;
            case 2:
                printf("Input num,name and score:\n");
                scanf("%d %s %d",&num,name,&score);
                p=(struct stud_node*)malloc(size);
                p->num=num;//(*p).num=
                strcpy(p->name,name);
                p->score=score;
                head=InsertDoc(head,p);
                break;
            case 3:
                printf("Num:");
                scanf("%d",&num);
                head=DeleteDoc(head,num);
                break;
            case 4:
                Print_Stu_Doc(head);
                break;
            case 0:
                break;    
        }
    }while(choice!=0);
    return 0;
}

struct stud_node*Create_Stu_Doc(){
    struct stud_node*head,*p;
    int num,score;
    char name[20];
    int size=sizeof(struct stud_node);

    head=NULL;
    printf("Input num,name and score:\n");
    scanf("%d %s %d",&num,name,&score);
    while(num!=0){
        p=(struct stud_node*)malloc(size);
        p->num=num;//(*p).num=
        strcpy(p->name,name);
        p->score=score;
        head=InsertDoc(head,p);
        scanf("%d %s %d",&num,name,&score);
    }
    return head;
}
struct stud_node*InsertDoc
    (struct stud_node*head,struct stud_node *stud){
        struct stud_node *ptr,*ptr1,*ptr2;

        ptr2=head;
        ptr=stud; //待插入的结点

        if(head==NULL){
            head=ptr;
            head->next=NULL;
        }else{
            while((ptr->num > ptr2->num)&&(ptr2->next!=NULL)){
                ptr1=ptr2;
                ptr2=ptr2->next;
            }
            if(ptr->num <= ptr2->num){
                if(head==ptr2){
                    head=ptr;
                }else{ //插入的结点成为尾结点
                    ptr1->next=ptr;
                    ptr->next=NULL;
                }
            }
        }
        return head;
    }
struct stud_node*DeleteDoc(struct stud_node *head,int num){
    struct stud_node *ptr1,*ptr2;
    while(head!=NULL&&head->num==num){
        ptr2=head;
        head=head->next;
        free(ptr2);
    }
    if(head==NULL){
        return NULL;
    }

    ptr1=head;
    ptr2=head->next;
    while(ptr2!=NULL){
        if(ptr2->num==num){
            ptr1->next=ptr2->next;
            free(ptr2);
        }else{
            ptr1=ptr2;
        }
        ptr2=ptr2->next;
    }
    return head;
}
void Print_Stu_Doc(struct stud_node*head){//遍历
    struct stud_node *ptr;
    if(head==NULL){
        printf("\n NO Records\n");
        return ;
    }
    printf("data:\n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d\t%s\t%d\n",ptr->num,ptr->name,ptr->score);
    }

}