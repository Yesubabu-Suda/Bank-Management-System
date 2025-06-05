#include"my_header.h"
void Save_File(BANK* head)
{
        FILE*fp;
        int size=sizeof(BANK)-sizeof(BANK*);
        //printf("%d\n",size);
        fp=fopen("MY_BANK.txt","w");
        while(head)
        {
                fwrite(head,size,1,fp);
                head=head->next;
        }
        printf("Data is saved Successfully:\n");
        fclose(fp);
}