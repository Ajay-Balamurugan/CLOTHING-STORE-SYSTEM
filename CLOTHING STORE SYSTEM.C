#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct cloth
{
int clothno;
char clothname[10];
int clothprice;
int qty;
int soldqty;
struct cloth *link;
};
struct cloth *first=NULL;
struct cloth *shirt=NULL;
struct cloth *pant=NULL;
struct cloth *sweater=NULL;
struct cloth *kurta=NULL;
struct cloth *saree=NULL;

int shirtprice=25;
int pantprice=35;
int sweaterprice=45;
int kurtaprice=25;
int sareeprice=55;

void transdetails()
{
char custname[10],cname[10];
int cqty;
printf("Enter customer name: ");
scanf("%s",custname);
c:
printf("\n\nwhat clothing item did %s purchase? ",custname);
scanf("%s",cname);
if(strcmp(cname,"shirt")==0)
{
printf("\n\nhow many %ss did %s purchase? ",cname,custname);
scanf("%d",&cqty);
shirt->soldqty=shirt->soldqty+cqty;
shirt->qty=shirt->qty-cqty;
printf("\n\nTRANSANCTION DETAILS STORED \nSTOCKS UPDATED\n");
getch();
}
else if(strcmp(cname,"pant")==0)
{
printf("\n\nhow many %ss did %s purchase? ",cname,custname);
scanf("%d",&cqty);
pant->soldqty=pant->soldqty+cqty;
pant->qty=pant->qty-cqty;
printf("\n\nTRANSANCTION DETAILS STORED \nSTOCKS UPDATED\n");
getch();
}
else if(strcmp(cname,"sweater")==0)
{
printf("\n\nhow many %ss did %s purchase? ",cname,custname);
scanf("%d",&cqty);
sweater->soldqty=sweater->soldqty+cqty;
sweater->qty=sweater->qty-cqty;
printf("\n\nTRANSANCTION DETAILS STORED \nSTOCKS UPDATED\n");
getch();
}
else if(strcmp(cname,"kurta")==0)
{
printf("\n\nhow many %ss did %s purchase? ",cname,custname);
scanf("%d",&cqty);
kurta->soldqty=kurta->soldqty+cqty;
kurta->qty=kurta->qty-cqty;
printf("\n\nTRANSANCTION DETAILS STORED \nSTOCKS UPDATED\n");
getch();
}
else if(strcmp(cname,"saree")==0)
{
printf("\n\nhow many %ss did %s purchase? ",cname,custname);
scanf("%d",&cqty);
saree->soldqty=saree->soldqty+cqty;
saree->qty=saree->qty-cqty;
printf("\n\nTRANSANCTION DETAILS STORED \nSTOCKS UPDATED\n");
getch();
}
else
{
printf("\n\nEnter the cloth name correctly \n");
goto c;
}
}


void viewstock()
{
struct cloth *temp;
temp=first;
clrscr();
printf("\033[1;34m");
printf("\t\t\t\tSTOCKS\n");
printf("\033[0m");
printf("\033[1;31m");
printf("\nCLOTH NO\t\tCLOTH NAME\t\tCLOTH PRICE\t\tQUANTITY");
printf("\033[0m");
printf("\n\n");
while(temp!=NULL)
{
printf("    %d\t\t\t%s\t\t\t\t%d\t\t  %d\n\n",temp->clothno,temp->clothname,temp->clothprice,temp->qty);
temp=temp->link;
}
getch();
}

void buystock()
{
int ch,qty1,i;
printf("\n\n");
printf("\033[1;31m");
printf("\t\t\t   AVAILABLE CLOTHING ITEMS : \n");
printf("\033[0m");
printf("\n\n\t\t\t1.SHIRT\t1 SHIRT=RS %d\n\n\n\t\t\t2.PANT\t1 PANT=RS %d\n\n\n\t\t\t3.SWEATER 1 SWEATER=RS %d\n\n\n\t\t\t4.KURTA\t1 KURTA=RS %d\n\n\n\t\t\t5.SAREE\t1 SAREE=RS %d\n\n\n\t\t\tENTER YOUR CHOICE : ",shirtprice,pantprice,sweaterprice,kurtaprice,sareeprice);
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n\t\t\tENTER THE NO OF SHIRTS TO BE ADDED TO STOCK : ");
scanf("%d",&qty1);
shirt->qty=shirt->qty+qty1;
break;

case 2:
printf("\n\t\t\tENTER THE NO OF PANTS TO BE ADDED TO STOCK : ");
scanf("%d",&qty1);
pant->qty=pant->qty+qty1;
break;

case 3:
printf("\n\t\t\tENTER THE NO OF SWEATERS TO BE ADDED TO STOCK : ");
scanf("%d",&qty1);
sweater->qty=sweater->qty+qty1;
break;

case 4:
printf("\n\t\t\tENTER THE NO OF KURTAS TO BE ADDED TO STOCK : ");
scanf("%d",&qty1);
kurta->qty=kurta->qty+qty1;
break;

case 5:
printf("\n\t\t\tENTER THE NO OF SAREES TO BE ADDED TO STOCK : ");
scanf("%d",&qty1);
saree->qty=saree->qty+qty1;
break;

default:
printf("\n\t\t\tENTER A VALID CHOICE\n");
break;
}
}

void dailyreport()
{
clrscr();
printf("\033[1;35m");
printf("\t\t\t DAILY SALES REPORT \n");
printf("\033[0m");
printf("\033[0;32m");
printf("\n\n\tSHIRT SALES : ");
printf("\033[0m");
printf("\nNUMBER OF SHIRTS SOLD : %d\n",shirt->soldqty);
printf("MONEY MADE FROM SHIRT SALES : %d\n",shirtprice*shirt->soldqty);
printf("\033[0;32m");
printf("\n\tPANT SALES : ");
printf("\033[0m");
printf("\nNUMBER OF PANTS SOLD : %d\n",pant->soldqty);
printf("MONEY MADE FROM PANT SALES : %d\n",pantprice*pant->soldqty);
printf("\033[0;32m");
printf("\n\tSWEATER SALES : ");
printf("\033[0m");
printf("\nNUMBER OF SWEATERS SOLD : %d\n",sweater->soldqty);
printf("MONEY MADE FROM SWEATER SALES : %d\n",sweaterprice*sweater->soldqty);
printf("\033[0;32m");
printf("\n\tKURTA SALES : ");
printf("\033[0m");
printf("\nNUMBER OF KURTAS SOLD : %d\n",kurta->soldqty);
printf("MONEY MADE FROM KURTA SALES : %d\n",kurtaprice*kurta->soldqty);
printf("\033[0;32m");
printf("\n\tSAREE SALES : ");
printf("\033[0m");
printf("\nNUMBER OF SAREES SOLD : %d\n",saree->soldqty);
printf("MONEY MADE FROM SAREE SALES : %d\n",sareeprice*saree->soldqty);
getch();
}

void setvalue()
{
int i;
struct cloth*temp;
for(i=1;i<=5;i++)
{
temp=(struct cloth*) malloc(sizeof(struct cloth));
if(i==1)
{
temp->clothno=1;
strcpy(temp->clothname,"shirt");
temp->clothprice=shirtprice;
temp->qty=0;
temp->soldqty=0;
shirt=temp;
}
if(i==2)
{
temp->clothno=2;
strcpy(temp->clothname,"pant");
temp->clothprice=pantprice;
temp->qty=0;
temp->soldqty=0;
pant=temp;
}
if(i==3)
{
temp->clothno=3;
strcpy(temp->clothname,"sweater");
temp->clothprice=sweaterprice;
temp->qty=0;
temp->soldqty=0;
sweater=temp;
}
if(i==4)
{
temp->clothno=4;
strcpy(temp->clothname,"kurta");
temp->clothprice=kurtaprice;
temp->qty=0;
temp->soldqty=0;
kurta=temp;
}
if(i==5)
{
temp->clothno=5;
strcpy(temp->clothname,"saree");
temp->clothprice=sareeprice;
temp->qty=0;
temp->soldqty=0;
saree=temp;
}
}
first=shirt;
shirt->link=pant;
pant->link=sweater;
sweater->link=kurta;
kurta->link=saree;
saree->link=NULL;
}


void main()
{
int ch,i,j,no;
setvalue();

clrscr();
for(j=0;j<11;j++)
{
printf("\n");
}
printf("\033[1;33m");
printf("\t\t\t    WELCOME TO CLOTH SHOP \n");
printf("\033[0m");
getch();
x:
clrscr();
for(j=0;j<8;j++)
{
printf("\n");
}
printf("\033[1;34m");
printf("\t\t\t\t     MAIN MENU\n\n");
printf("\033[0m");
printf("\t\t\t\t1.BUY STOCKS\n\t\t\t\t2.VIEW STOCKS\n\t\t\t\t3.TRANSACTION DETAILS\n\t\t\t\t4.DAILY SALES REPORT\n\t\t\t\t5.EXIT\n\n\t\t\t\tEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
clrscr();
buystock();
goto x;

case 2:
getch();
viewstock();
goto x;

case 3:
clrscr();
transdetails();
goto x;

case 4:
dailyreport();
goto x;

case 5:
exit(0);

default:
printf("Enter a valid choice");
getch();
goto x;
}
getch();
}