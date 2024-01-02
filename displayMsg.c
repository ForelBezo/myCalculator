#include <stdio.h>

int main()
{
    char loverMsg[50];
    int countMsgDisplay =0;
    printf("Send a message to your love\n");
    scanf("%49s \n",loverMsg);

    while(countMsgDisplay < 10)
    {
        printf("%s",loverMsg);
        countMsgDisplay ++;
    }

}