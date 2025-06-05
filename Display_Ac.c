#include"my_header.h"
void Display_Ac(BANK *head)
{
        printf("\033[1;36m");
        BANK *temp;
        int c=0;
        UINT32_t pin;
        if(head==NULL)
        {
                printf("Data is empty:\n");
                return;
        }
        temp=head;
        while(temp)
        {
                        printf("\033[1;35m");
                        printf("Account_Number:%lld\n",temp->Account_number);
                        printf("Account_Name:%s\n",temp->Account_name);
                        printf("Contact_Number:%lld\n",temp->Contact_num);
                        printf("Ac_transaction_count:%u\n",temp->Transaction_count);
                //      printf("Account_Balance:%u\n",temp->Account_balance);//for security purpose.
                        printf("Aadhar_Number:%lld\n",temp->Aadhar_Num);
                        printf("Pancard_Number:%s\n",temp->Pancard);
                temp=temp->next;
        }
        printf("\033[0;m");
}