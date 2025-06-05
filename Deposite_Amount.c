#include"my_header.h"
void Deposite_Amount(BANK *head)
{
        BANK *temp;
        ULLINT32_t Ac_num;
        UINT32_t amt;
        printf("Enter your Account_number:");
        scanf("%lld",&Ac_num);
        printf("Enter ammount to deposite:");
        scanf("%d",&amt);
        temp=head;
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
                printf("Your Account Not Found:\n");
                return;
        }

                temp->Account_balance+=amt;
                printf("Deposite is successfull:\n");
                temp->Ac_Trans[temp->Transaction_count].transaction_id=Tran_id++;
                strcpy(temp->Ac_Trans[temp->Transaction_count].type,"Deposite");
                temp->Ac_Trans[temp->Transaction_count].Transaction_Amount=amt;
                temp->Transaction_count++;

}