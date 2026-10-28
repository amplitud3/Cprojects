#include<stdio.h>
int main()
{

int nofcb=0;
int nofvb=0;
int nofmb=0;
int noffb=0;
int nofw=0;
int value;
int flag=0;

int cb=250;
int vb=150;
int mb=300;
int fb=200;
int w=20;
printf("\n-------------Wlecome to Taj hotel---------------------\n");


while(flag!=1)
{
printf("----------------Menu_card----------------------------\n");

printf("1.Chicken Biriyani : 250 \n2.Veg Biriyani : 150 \n3.Mutton Biriyiani : 300 \n4.Fish Biriyani : 200\n5.water : 20\n6.To exit and complete the order\n");




printf("Enter your choice :");
scanf("%d",&value);



switch(value)
{
    case 1: printf("you ordered a cb\n");
            nofcb++;
            break;
    case 2: printf("you ordered a vb\n");
            nofvb++;
            break;
    case 3: printf("you ordered a mb\n");
            nofmb++; 
            break;
    case 4: printf("you ordered a fb\n");
            noffb++; 
            break;

    case 5: printf("you ordered a water\n");
            nofw++;            
            break;

    case 6: printf("your order is confirmed\n");
            flag=1;
            break;
   default:
           printf("invalid option\n");

}
}

printf("\titem\tnumber\tprice\ttotal\n");
if(nofcb!=0)
    printf("\tCB\t%d\t%d\t%d\n",nofcb,cb,nofcb*cb);
if(nofvb!=0)
    printf("\tVB\t%d\t%d\t%d\n",nofvb,vb,nofvb*vb);
if(nofmb!=0) 
    printf("\tMB\t%d\t%d\t%d\n",nofmb,mb,nofmb*mb);
if(noffb!=0)
    printf("\tFB\t%d\t%d\t%d\n",noffb,fb,noffb*fb);
if(nofw!=0)
    printf("\tWater\t%d\t%d\t%d\n",nofw,w,nofw*w);
int total;
total = nofcb * cb + nofvb * vb + nofmb * mb + noffb * fb + nofw * w;

printf("------------------------------------------------\n");
printf("TOTAL:                          %d:",total);
printf("\nThank you visit agian....\n");    
return 0;
}
