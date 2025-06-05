#include"my_header.h"
void Finding_specific(BANK *head)
{

        BANK *temp;
        temp=head;
        ULLINT32_t Ac_num;
        printf("Enter Account number to find your account:");
        scanf("%lld",&Ac_num);
        UINT32_t pin;
        while(temp)
        {
                if(temp->Account_number==Ac_num)
                {
                        break;
                }
                temp=temp->next;
        }
        printf("\033[1;31m");
        if(temp==NULL)
        {
                printf("Account Not Found:\n");
                return ;
        }
        else
        {
                printf("\033[1;32m");
                printf("Account Found You can see details:\n");
                printf("\033[1;35m");
                        printf("Account number:%lld\n",temp->Account_number);
                        printf("Account_name:%s\n",temp->Account_name);
                        //printf("Account Balance:%u\n",temp->Account_balance);
                        printf("Contact_Number:%lld\n",temp->Contact_num);
                        printf("Aadhar_Number:%lld\n",temp->Aadhar_Num);
                        printf("Pancard_Number:%s\n",temp->Pancard);
                        printf("Transaction_count:%u\n",temp->Transaction_count);
        }
        printf("\033[0;m");

}