#include"my_header.h"
void Transfer_Money(BANK *head)
{
        BANK *temp,*temp1;
        temp=temp1=head;
        ULLINT32_t Ac1_num,Ac2_num;UINT32_t amt;
        UINT32_t Pin;
        printf("Enter Your Account Number:");
        scanf("%lld",&Ac1_num);
        printf("Enter  Account Number to transfer:");
        scanf("%lld",&Ac2_num);
        printf("Enter the amount:");
        scanf("%u",&amt);
        if(Ac1_num==Ac2_num)
        {
                printf("Both accounts same:\n");
                return ;
        }
        while(temp)
        {
                if(temp->Account_number==Ac1_num)
                {
                        break;
                }
                temp=temp->next;
        }
        while(temp1)
        {
                if(temp1->Account_number==Ac2_num)
                {
                        break;
                }
                temp1=temp1->next;
        }
        if(temp==NULL)
        {
                printf("Your Account could not Found:\n");
                return;
        }
        if(temp1==NULL)
        {
                printf("Reciever Account could not Found:\n");
                return;
        }
        printf("Enter your pin:");
        scanf("%u",&Pin);
        if(temp->pin!=Pin)
        {
                printf("Incorrect pin:\n");
                return;
        }
                temp->Account_balance-=amt;
                temp1->Account_balance+=amt;
        printf("Transfer is successfull:\n");
temp1->Ac_Trans[temp1->Transaction_count].transaction_id=Tran_id++;
strcpy(temp1->Ac_Trans[temp1->Transaction_count].type,"Deposite");
temp1->Ac_Trans[temp1->Transaction_count].Transaction_Amount=amt;
                 temp1->Transaction_count++;
temp->Ac_Trans[temp->Transaction_count].transaction_id=Tran_id++;
strcpy(temp->Ac_Trans[temp->Transaction_count].type,"Withdraw");
temp->Ac_Trans[temp->Transaction_count].Transaction_Amount=amt;
                 temp->Transaction_count++;

}