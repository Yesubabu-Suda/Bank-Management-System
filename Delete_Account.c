#include"my_header.h"
void* Delete_Account(BANK *head)
{
        BANK *temp,*prev;
        temp=head;prev=head;
        ULLINT32_t Ac_num;
        printf("Enter Account number to delete:");
        scanf("%lld",&Ac_num);
        if(head->Account_number==Ac_num)
        {
                printf("Your Account is Deleted:\n");
                head=head->next;
                return head;
        }
        else
        {
                while(temp)
                {
                        if(temp->Account_number==Ac_num)
                        {
                                break;
                        }
                        prev=temp;
                        temp=temp->next;
                }
        }
                if(temp==NULL)
                {
                printf("Account not found:\n");
                return NULL;
                }
                else
                {
                        prev->next=temp->next;
                printf("Your Account is Deleted:\n");
                }
                return head;
}