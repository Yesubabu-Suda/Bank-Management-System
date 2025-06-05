#include"my_header.h"
BANK * Create_Account(BANK *head)
{
        BANK *new,*temp,*temp1,*temp2;
        int amt;
        new=calloc(1,sizeof(BANK));
        new->next=NULL;
        new->Account_number=AC_NUM++;
        printf("Enter your name:");
        __fpurge(stdin);
        fgets(new->Account_name,100,stdin);
        if(new->Account_name[strlen(new->Account_name)-1]=='\n')
                new->Account_name[strlen(new->Account_name)-1]='\0';
        printf("Please deposite 500 or more to create account:");
        scanf("%d",&amt);
        new->Account_balance=amt;
        new->Transaction_count=0;
        new->Ac_Trans[new->Transaction_count].Transaction_Amount=amt;
        new->Ac_Trans[new->Transaction_count].transaction_id=Tran_id++;
        strcpy(new->Ac_Trans[new->Transaction_count].type,"deposite");
        new->Transaction_count++;
        printf("Enter Aadhar Number:");
        scanf("%lld",&new->Aadhar_Num);
        strcpy(new->Pancard,"N/A");
        printf("Enter contact_number:");
        scanf("%lld",&new->Contact_num);
        temp2=head;
        while(temp2)
        {
                if(temp2->Aadhar_Num==new->Aadhar_Num)
                {
                        printf("\033[1;31m");
                        printf("Sorry Account is detected with your Aadhar number so you could not create an account\n");
                        printf("\033[0;m");

                        return head;
                }
                temp2=temp2->next;
        }
        pin:printf("Set a pin:");
        scanf("%u",&new->pin);
        temp1=head;
        while(temp1)
        {
                if(temp1->pin==new->pin)
                {
                        printf("This password is matched with another account please enter again:\n");
                        goto  pin;
                }
                temp1=temp1->next;

        }
        if(head==NULL)
        {
                head=new;
        }
        else
        {
                temp=head;
                while(temp->next)
                {
                        temp=temp->next;
                }
                temp->next=new;
        }
        return head;
}
