#include"my_header.h"
void Balance_Enquiry(BANK *head)
{
        BANK *temp;
        temp=head;
        ULLINT32_t Ac_Num;
        printf("Enter account number:");
        scanf("%lld",&Ac_Num);
        UINT32_t Pin;
        printf("Enter Your pin:");
        scanf("%d",&Pin);
        while(temp)
        {
                if(temp->Account_number==Ac_Num)
                {
                        break;
                }
                temp=temp->next;
        }
        if(temp==NULL)
        {
                 printf("\033[1;31m");
                 printf("Account not Found:\n");
                 return ;
        }

        printf("\033[1;35m");
                if(temp->pin==Pin)
                {
                        printf("Your Balance:%u\n",temp->Account_balance);
                        return;
                }
                else
                {
                 printf("You entered wrong pin:\n");
                 printf("Please enter your correct pin then balance will show:\n");
                }
                 printf("\033[0;m");
}