#include"my_header.h"
int main()
{
        BANK *head=NULL;//declartion of structure.
        char ch;
        head=Sync_File(head);//sync data from file previous data.
        if(head==NULL)
        {
                printf("data is empty:\n");//checking previous data is there or not.
        }
        while(1)
        {
                Print_menu();
                __fpurge(stdin);//clearing input buffer.
                scanf("%c",&ch);
                switch(ch)
                {
                        case 'c':case 'C':head=Create_Account(head);break;
                        case 'e':case 'E':Display_Ac(head);break;
                        case 'H':case 'h':Transaction_history(head);break;
                        case 'd':case 'D':Deposite_Amount(head);break;
                        case 't':case 'T':Transfer_Money(head);break;
                        case 'b':case 'B':Balance_Enquiry(head);break;
                        case 'w':case 'W':Withdraw_Amount(head);break;
                        case 'u':case 'U':Update_Account(head);break;
                        case 'f':case 'F':Finding_specific(head);break;
                        case 'r':case 'R':head=Delete_Account(head);break;
                        case 's':case 'S':Save_File(head);break;
                        case 'q':case 'Q':exit(0);
                }
        }

}
