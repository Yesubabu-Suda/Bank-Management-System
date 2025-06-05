#include"my_header.h"
void Withdraw_Amount(BANK *head)
{
        BANK *temp;
        temp=head;
        ULLINT32_t Ac_num;
        UINT32_t amt;
        printf("Enter your Account_number:");
        scanf("%lld",&Ac_num);
        printf("Enter ammount to withdraw:");
        scanf("%u",&amt);
        while(temp)
        {
                if(temp->Account_number==Ac_num)
                {
                        break;
                }
                temp=temp->next;
        }
        if(temp==NULL)
        {
                printf("Sorry:Your Account not found:\n");
                return;
        }
        else
        {
                if(temp->Account_balance<=amt)
                {
                        printf("Insufficient balance:\n");
                        return;
                }
                else
                {
                        temp->Account_balance-=amt;
                        printf("Withdraw_amount is successfull:\n");

                temp->Ac_Trans[temp->Transaction_count].transaction_id=Tran_id++;
                strcpy(temp->Ac_Trans[temp->Transaction_count].type,"Withdraw");
                temp->Ac_Trans[temp->Transaction_count].Transaction_Amount=amt;
                temp->Transaction_count++;
                }
        }
}