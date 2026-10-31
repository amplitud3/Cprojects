#include<stdio.h>
int main()
{

printf("---------------------------------------------------------");
printf("\n...........choclate chilli game............................");
printf("\n------------------------------------------------------------");
 printf("\nTOTAL NUMBER OF CHOCLATES : 13\n");
int choclate=13;
int player1;
int player2;
int flag;
while(1)
{

printf("\nREMAINING CHOCLATES AVAIABLE %d",choclate);

printf("\nPLAYER 1 -> choose the number of choclates [ 1-3] :");
scanf("%d",&player1);

if(player1<1 || player1>3 || choclate<player1)
{
    printf("\nINVALID OPTION >>>> PLAYER 1 LOST THE CHANCE\n");
    printf("IDIOT, CHECK THE RANGE AND REMAINING CHOCLATES\n");

}
else
{

    

    choclate = choclate - player1;
    flag=0;
}

if(choclate==0)
 break;


printf("\nREMAINING CHOCLATES AVAIABLE %d",choclate);

printf("\nPLAYER 2 -> choose the number of choclates [ 1-3] :");
scanf("%d",&player2);

if(player2<1 || player2>3 || choclate<player2 )
{
    printf("\nINVALID OPTION >>>> PLAYER2 LOST THE CHANCE\n");
     printf("IDIOT...CHECK THE RANGE OR REMAINING CHOCLATES\n");

}
else
{

    choclate = choclate - player2;
    flag=1;
}


if(choclate==0)
    break;

}

if(flag==0)
   printf("\nPLAYER 2 GOT THE CHILLI\nCONGRAGULATIONS PLAYER 1 YOU WON\n");
else
    printf("\nPLAYER 1 GOT THE CHILLI\nCONGRAGULATIONS PLAYER 2 YOU WON\n");

return 0;
}
