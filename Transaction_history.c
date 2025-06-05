#include"my_header.h"
void Transaction_history(BANK *head)
{
        BANK *temp;
        temp=head;
        int c=0;
        ULLINT32_t Ac_num;
        printf("Enter the Account_number For Transactions:");
        scanf("%lld",&Ac_num);
        while(temp)
        {
                if(temp->Account_number==Ac_num)
                {
                        break;
                }
                else
                {
                        temp=temp->next;
                }
        }
        if(temp==NULL)
        {
                printf("\033[1;31m");
                printf("Account Not Found:\n");
        }
        else
        {
                for(int i=0;i<temp->Transaction_count;i++)
                {
                        printf("\033[1;34m");
                        printf("Transaction_id:%u\n",temp->Ac_Trans[i].transaction_id);
                        printf("Transaction_type:%s\n",temp->Ac_Trans[i].type);
                        printf("Transaction_Amount:%u\n",temp->Ac_Trans[i].Transaction_Amount);
                        printf("\033[0;m");
                }
        }
}