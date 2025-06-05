out:Main.o Print_menu.o Create_Account.o Display_Ac.o globals.o Transaction_history.o Withdraw_Amount.o Balance_Enquiry.o Deposite_Amount.o Transfer_Money.o Save_file.o Sync_File.o Finding_specific.o Delete_Account.o Update_Account.o
        cc Main.o Print_menu.o Create_Account.o Display_Ac.o globals.o Transaction_history.o Withdraw_Amount.o Balance_Enquiry.o Deposite_Amount.o Transfer_Money.o Save_file.o Sync_File.o Finding_specific.o Delete_Account.o Update_Account.o -o bank
Main.o:Main.c
        cc -c Main.c
Print_menu.o:Print_menu.c
        cc -c Print_menu.c
Create_Account.o:Create_Account.c
        cc -c Create_Account.c
Deposite_Amount.o:Deposite_Amount.c
        cc -c Deposite_Amount.c
Display_Ac.o:Display_Ac.c
        cc -c Display_Ac.c
Transfer_Money.o:Transfer_Money.c
        cc -c Transfer_Money.c
Balance_Enquiry.o:Balance_Enquiry.c
        cc -c Balance_Enquiry.c
Save_file.o:Save_file.c
        cc -c Save_file.c
Update_Account.o:Update_Account.c
        cc -c Update_Account.c
Finding_specific.o:Finding_specific.c
        cc -c Finding_specific.c
Delete_Account.o:Delete_Account.c
        cc -c Delete_Account.c
Transaction_history.o:Transaction_history.c
        cc -c Transaction_history.c
globals.o:globals.c
        cc -c globals.c
Sync_File.o:Sync_File.c
        cc -c Sync_File.c
Withdraw_Amount.o:Withdraw_Amount.c
        cc -c Withdraw_Amount.c