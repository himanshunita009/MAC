/*	  CALCULATOR    DOCUMENTATION				*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void trpmat(void);
void summat(void);
void modmat(void);
void adjmat(void);
void invmat(void);
int simat(void);
int mat(void);
int dumat(void);
void multiplymat(void);
void sum2mat(void);
void submat(void);
int ascii(void);
int armath(void);
void sub(void);
void multi(void);
void dive(void);
void add(void);
void sqt(void);
void nthpow(void);     int choose(void);
int area(void);
void square();
void rectangle();
void circle();
void triangle();
int vol(void);
void cone(void);
void sphare(void);
void cylinder(void);
void cube(void);
int srs(void);
void arsrs(void);
void gmsrs(void);
int numcv(void);
void b2d(void);
void b2h(void);
void b2o(void);
void d2b(void);
void d2o(void);
void d2h(void);
void o2h(void);
void o2b(void);
void o2d(void);
void h2d(void);void h2b(void);
void h2o(void);   int png(void);  void asciic(void);  void asciii(void);   void qeqs(void);
void intro1(void)          /*                   Introduction function 1              */
{
    int i;
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("%c",201);
    for (i=0;i<40;i++)
    printf("%c",205);
    printf("%c",187);
    printf("\n\t\t%c\t\t\t\t\t %c",186,186);
    printf("\n\t\t%c\t\tHi,Welcome!\t\t %c",186,186);
    printf("\n\t\t%c\tTo The World of Calculation\t %c",186,186);
    printf("\n\t\t%c\t\t\t\t\t %c",186,186);
    printf("\n\t\t%c",200);
     for (i=0;i<40;i++)
    printf("%c",205);
    printf("%c",188);
    Sleep(2500);


      system("cls");    /* 			    	installing    bar    				*/
    for (i=0;i<9;i++)
    printf("\n");
    printf("\t\t\t   Installing Calculator...\n");
    for(i=1;i<=80;i++)
    {
    printf("%c",219);
    if (i<=3)
    Sleep(700);
    else if (i>=4&&i<=25)
    Sleep(100);
    else if (i>=26&&i<=35)
    Sleep(300);
    else  if (i>=36&&i<=60)
    Sleep(80);
    else
    Sleep(30);
    }
Sleep(1200);
}


void intro2(void)                    //            Introduction Function 2
{
int i,j,k,l;
char f[4][30]={"[1].Instruction","[2].Start Calculator","[3].Features","[4].About Developer"},d;
system("cls");
do
{
j=0;
for (i=0;;i++)
{
system("cls");
printf("\n\n\n\n");
for (k=0;k<4;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,f[k]);
else
printf("\t\t\t    %s\n\n",f[k]);
}
d=getch();
if (d==80)
{
if (j==3)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=3;
else
j--;}
else if (d==13)
break;
}
switch(j+1)
{
case 1:
system("cls");
printf("\n\n\n\t%cInstruction to use Calculator\n\n\t[1].Press Down arrow key to move down\n\n\t[2].Press Up arrow key to move up\n\n\t[3].Press Enter to select");
getch();
break;
case 3:
system("cls");
printf("\n\n%c This is a advance Calculator Created by Mr. Himanshu Seth.\n\n%c The key Features of this Calculator are given below -",2,2);
printf("\n\n%c We can perform add,subtraction,multiply, divide, power etc. under Arithmetical",2);
printf("\n\n%c We can find area of various shapes",2);
printf("\n\n%c We can find volume of various shapes",2);
printf("\n\n%c We can find the ASCII Code of various integers & caracters",2);
printf("\n\n%c We can deal with most complex calculation of Matrix like inverse,mod etc.",2);
printf("\n\n%c We can convert various number systemms to another like binary to decimal & vice versa etc.",2);
printf("\n\n%c Hence we can say that this calculator is a complete package for vorius calculation and complete our need in a short efforts",2);
printf("\n\n Tanks for using Calculator ! Have a nice day.");
getch();
break;
case 4:
system("cls");
printf("\n\n\n\n\n\n\n\n\t    [1].Developer Name    :  Himanshu Seth");
    printf("\n\n\t    [2].Inspired By       :  Mr Ashish Sir & Mr Satyendra Sir ");
    printf("\n\n\t    [3].Course Name       :  O level 2nd Semester(Conduct by NIELET)");
    printf("\n\n\t    [4].Institute Name    :  AIESCEI,Varanasi");
    printf("\n\n\t    [5].Registration No.  :  1221729");
    getch();
break;
}
}while(j+1!=2);


    system("cls");
    for (i=0;i<9;i++)
    printf("\n");
    printf("\t\t\t   Ininitializing Calculator...\n");
    for(i=1;i<=80;i++)
    {
    printf("%c",219);
    if (i<=3)
    Sleep(400);
    else
    Sleep(20);
    }
    for (i=5;i>=1;i--)
    {
    system("cls");
    Sleep(500);
    printf("\n\n\n\n\n\n\n\n\t\t\t\t    [%d]\n\n\t\t\t\tDevoloped By\n\n\t\t\t    %c Mr.Himanshu Seth %c\n",i,174,175);
    Sleep(500);
    }
}


void main()     /*             		Main Menu				*/
{
int i,j,a,b,c,d,u,k;
char r[11][30]={"[1].Arithmetical","[2].Areas","[3].Volume","[4].Sum of series","[5].Number conversion","[6].Percentage & Grade","[7].ASCII Code","[8].Quadratic Eqs","[9].Matrix","[10].Back","[11].Exit"},z;
intro1();                      //Calling Introduction function 1
back :
fflush(stdin);
intro2();         		//Calling Introduction function 2
system("cls");
do
{
j=0;
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n");
for (k=0;k<11;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,r[k]);
else
printf("\t\t\t    %s\n\n",r[k]);
}
z=getch();
if (z==80)
{ if (j==10)
j=0;
else
j++; }
else if (z==72)
{ if (j==0)
j=10;
else
j--;}
else if (z==13)
break;
}
system("cls");
switch (j+1)
{
case 1:
u=armath();
break;
case 2:
u=area();
break ;
case 3:
u=vol();
break ;
case 4:
u=srs();
break ;
case 5:
u=numcv();
break ;
case 6:
u=png();
break ;
case 7:
u=ascii();
break ;
case 8:
qeqs();
break ;
case 9:
u=mat();
break ;
case 10:
goto back;
case 11:
u=1;
break;
}
}while(u==0);

/*     			At the end it will show the developer name    		*/
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("%c",201);
    for (i=0;i<40;i++)
    printf("%c",205);
    printf("%c",187);
    printf("\n\t\t%c\t\t\t\t\t %c",186,186);
    printf("\n\t\t%c\t  Created by Himanshu Seth\t %c",186,186);
    printf("\n\t\t%c\t\t O Level \t\t %c",186,186);
    printf("\n\t\t%c\t\t\t\t\t %c",186,186);
    printf("\n\t\t%c",200);
     for (i=0;i<40;i++)
    printf("%c",205);
    printf("%c",188);
getch();
}

int armath(void)           //Arithmetical Function for add,multiply e.t.c.
{
int a,b,r,i,j,k;
char n,c[8][30]={"[1].Addition","[2].Subtraction","[3].Division","[4].Multiplication","[5].Square Root","[6].nth Power","[7].Back","[8].Exit"},d;
do{
j=0;
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<8;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==7)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=7;
else
j--;}
else if (d==13)
{
j++;
break;
}
}
do
{
switch (j)
{
case 1:
add();
break;
case 2:
sub();
break;
case 3:
dive();
break;
case 4:
multi();
break;
case 5:
sqt();
break;
case 6:
nthpow();
break;
case 7:
return 0;     		         //it will jump to the end of main function
case 8:
return 1;		              //to terminate the program
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1; 		            	//this will termiante the program
}while(r==1);       	  	//   to execute reset
}while(r==2);         		//to execute armath function again
getch();
return 0;
}

/*At the end of every task 4 option Reset,Back,Main  and exit will appear */
int choose()           // Function for Reset,Back,Main function and Exit
{
int i,j=0,k;
char c,e[4][15]={"[1].Reset","[2].Back","[3].Main Menu","[4].Exit"},d;
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<4;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,e[k]);
else
printf("\t\t\t    %s\n\n",e[k]);
}
d=getch();
if (d==80)		 		  //to move the cursor up
{
if (j==3)
j=0;
else
j++;
}
else if (d==72)			  //to move the cursor down
{
if (j==0)
j=3;
else
j--;
}
else if (d==13) // to perform the selected option
break;
}
return (j+1);
}


void add()  				//Function to add numbers
{
int i;
float a,b[50];
system("cls");
printf("\n\n\tEnter the numbers : ");
scanf("%f",&a);
for(i=0;i<50;i++)  			//Loop for adding 50 numbers
{
scanf("%f",&b[i]);
a=a+b[i];
if (b[i]==0)    			  //Condition to Exit from add function
{break;}
system("cls");
printf("Enter 0 to stop calculation\n\n\n\t\tYour result is %.2f",a);
printf("\n\t\tEnter the number : ");
}
}


void sub()   				//Function to substract numbers
{
int i;
float a,b[50];
system("cls");
printf("\n\n\tEnter the numbers : ");
scanf("%f",&a);
for(i=0;i<50;i++)			    //Loop for substracting 50 numbers
{
scanf("%f",&b[i]);
a=a-b[i];
if (b[i]==0)      			//Condition to Exit from sub() function
{break;}
system("cls");
printf("Enter 0 to stop calculation\n\n\n\t\tYour result is %.2f",a);
printf("\n\t\tEnter the number : ");
}
}

void multi()		/* Function to multiply numbers */
{
int i;
float a,b[50];
system("cls");
printf("\n\n\tEnter the numbers : ");
scanf("%f",&a);
for(i=0;i<50;i++)		      //Loop for substracting 50 numbers
{
scanf("%f",&b[i]);
a=a*b[i];
if (b[i]==0)      		//Condition to Exit from multi() function
{break;}
system("cls");
printf("Enter 0 to stop calculation\n\n\n\t\tYour result is %.2f",a);
printf("\n\t\tEnter the number : ");
}
}

void dive()			/* 		 Function to divide numbers 		*/
{
int i;
float a,b[50];
system("cls");
printf("\n\n\tEnter the numbers : ");
scanf("%f",&a);
for(i=0;i<50;i++)
{
scanf("%f",&b[i]);
if (b[i]==0)     			 //to exit from divide function
{break;}
a=a/b[i];
system("cls");
printf("Enter 0 to stop calculation\n\n\n\t\tYour result is %.2f",a);
printf("\n\t\tEnter the number : ");
}
}

void nthpow()    	/*     Function to find the nth power of a given number   */
{
int a,b,c;
system("cls");
printf("\n\n\tEnter the number : ");
scanf("%d",&a);
printf("\n\n\tEnter the power : ");
scanf("%d",&b);
c=pow(a,b);
printf("\n\n\tYour result is %d",c);
getch();
}


void sqt()				    // function to calculate square root
{
int a;
system("cls");
printf("\n\n\tEnter the number : ");
scanf("%d",&a);
printf("\n\n\t Square Root of %d is %.2f",a,sqrt(a));
getch();
}

int area(void)				   //function to find area
{
int a,b,r,i,j,k;
char n,c[6][30]={"[1].Square","[2].Rectangle","[3].Circle","[4].Triangle","[5].Back","[6].Exit"},d;
do{
j=0;
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<6;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==5)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=5;
else
j--;}
else if (d==13)
break;
}
do
{
switch (j+1)
{
case 1:
square();
break;
case 2:
rectangle();
break;
case 3:
circle();
break;
case 4:
triangle();
break;
case 5:
return 0;	        		//to goto main menu
case 6:
return 1;       		 //exit it will jump to the end of main function
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1;
}while(r==1);  			//   to execute reset
}while(r==2);  			 //to execute area function again
getch();
return 0;
}


void square() 		   //function to find the area of square
{
float a;
system("cls");
printf("\n\n\n\tEnter the edge of square : ");
scanf("%f",&a);
printf("\n\n\tThe area of square is %.2f",a*a);
getch();
}

void circle()		   //function to find the area of circle
{
float a,b;
system("cls");
printf("\n\n\n\tEnter the radius of circle : ");
scanf("%f",&a);
b=3.14*a*a;
printf("\n\n\tThe area of circle is %.2f",b);
getch();
}

void rectangle()   	//function to find the area of rectangle
{
float a,b;
system("cls");
printf("\n\n\n\tEnter the length of rectangle : ");
scanf("%f",&a);
printf("\n\n\n\tEnter the width of rectangle : ");
scanf("%f",&b);
printf("\n\n\tThe area of rectangle is %.2f",a*b);
getch();
}

void triangle()			   //function to find the area of triangle
{
float a,b;
system("cls");
printf("\n\n\n\tEnter the height of triangle : ");
scanf("%f",&a);
printf("\n\n\n\tEnter the base of triangle : ");
scanf("%f",&b);
printf("\n\n\tThe area of triangle is %.2f",(a*b)/2);
getch();
}

int vol(void) 				  //function to find the volume
{
int r,i,j=0,k;
char n,c[6][30]={"[1].Cube","[2].Sphare","[3].Cone","[4].Cylinder","[5].Back","[6].Exit"},d;
do{
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<6;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==5)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=5;
else
j--;}
else if (d==13)
{
j++;
break;
}
}
do
{
switch (j)
{
case 1:
cube();
break;
case 2:
sphare();
break;
case 3:
cone();
break;
case 4:
cylinder();
break;
case 5:
return 0;			     // to goto main menu
case 6:
return 1;			    //exit it will jump to the end of main function
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1;
}while(r==1);		  //   to execute reset
}while(r==2);   		//to execute volume function again
getch();
return 0;
}

void cube()	/*		Function to calculate volume of cube 		*/
{
float a;
system("cls");
printf("\n\n\n\tEnter the edge of cube : ");
scanf("%f",&a);
printf("\n\n\tThe volume of cube is %2f",a*a*a);
getch();
}

void sphare()  	 /*		Function to calculate volume of sphere */
{
float a,b;
system("cls");
printf("\n\n\n\tEnter the radius of sphare : ");
scanf("%f",&a);
b=(4*3.14*a*a*a)/3;
printf("\n\n\tThe volume of sphare is %.2f",b);
getch();
}

void cone()      	/*		Function to calculate volume of cone 		*/
{
float a,r,v;
system("cls");
printf("\n\n\n\tEnter the hieght of cone : ");
scanf("%f",&a);
printf("\n\n\tEnter the radius of cone : ");
scanf("%f",&r);
v=(3.14*r*r*a)/3;
printf("\n\n\tThe volume of cone is %.2f",v);
getch();
}

void cylinder() 	     /*		Function to calculate volume of cylinder 	*/
{
float a,r,v;
system("cls");
printf("\n\n\n\tEnter the hieght of cylinder : ");
scanf("%f",&a);
printf("\n\n\tEnter the radius of cylinder : ");
scanf("%f",&r);
v=2*3.14*r*r*a;
printf("\n\n\tThe volume of cone is %.2f",v);
getch();
}

int srs(void) 	 /*	 	Function to find sum of series 	    */
{
int r,i,j=0,k;
char n,c[4][30]={"[1].Arithmetical Series","[2].Geometrical Series","[3].Back","[4].Exit"},  d;
do{
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<4;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==3)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=3;
else
j--;}
else if (d==13)
{
j++;
break;
}
}
do
{
switch (j)
{
case 1:
arsrs();
break;
case 2:
gmsrs();
break;
case 3:
return 0;  		   //it will take us in the main menu
case 4:
return 1;		    //exit it will jump to the end of main function
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1;
}while(r==1);  			//   to execute reset
}while(r==2);  			 //to execute sum of series function again
getch();
return 0;
}

void arsrs() 	   /*	function to find sum of Arithmetical series     */
{
float a,b,f;
int c;
system("cls");
printf("\n\n\n\tEnter some starting terms :");
scanf("%f%f",&a,&b);
printf("\n\n\tEnter the no. of term in series :");
scanf("%d",&c);
f=(c*(2*a+(c-1)*(b-a)))/2;
printf("\n\n\t The sum of series %.2f %.2f... is =%.2f",a,b,f);
getch();
}

void gmsrs()  /*		 function to find sum of geometrical series   */
{
float a,b,f;
int c;
system("cls");
printf("\n\n\n\tEnter some starting terms : ");
scanf("%f%f",&a,&b);
printf("\n\n\tEnter the no. of term :");
scanf("%d",&c);
if (a==0)
printf("\n\n\tThe given series is invalid");
else
{
f=a*pow(b/a,c-1);
printf("\n\n\t The sum of series %.2f %.2f.... is =%.2f",a,b,f);
}
getch();
}

int numcv(void)  	/* 	Function for the number conversion  		*/
{
int a,b,r,i,j=0,k;
char n,c[13][30]={"[1].Decimal to Binary","[2].Decimal to Hexa","[3].Decimal to Octal","[4].Binary to Decimal","[5].Binary to Hexa","[6].Binary to Octal","[7].Ocal to Hexa","[8].Ocal to Decimal","[9].Ocal to Binary","[10].Hexa to Decimal","[11].Hexa to Binary","[12].Back","[13].Exit"},d;
do{
system("cls");
for (i=0;;i++)
{
system("cls");
for (k=0;k<13;k++)
{
if (j==k)
printf("\n\n\t\t\t%c %s",26,c[k]);
else
printf("\n\n\t\t\t    %s",c[k]);
}
fflush(stdin);
d=getch();
if (d==80)
{
if (j==12)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=12;
else
j--;}
else if (d==13)
{printf("\a");
break;}
}
do
{
switch (j+1)
{
case 1:
d2b();
break;
case 2:
d2h();
break;
case 3:
d2o();
break;
case 4:
b2d();
break;
case 5:
b2h();
break;
case 6:
b2o();
break;
case 7:
o2h();
break;
case 8:
o2d();
break;
case 9:
o2b();
break;
case 10:
h2d();
break;
case 11:
h2b();
break;
case 12: 		    // to go back to main menu
return 0;
case 13:
return 1;		    //exit it will jump to the end of main function
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1;
}while(r==1);  		//   to execute reset
}while(r==2);  		 //to execute number conversion function again
getch();
return 0;
}


void d2b()   		//Function to convert decimal to binary
{
int a,b[16],i=0,j;
system("cls");
printf("\n\n\n\tEnter the decimal number here : ");
fflush(stdin);
scanf("%d",&a);
while(a>0)
{
b[i]=a%2;
a=a/2;
i++;
}
printf("\n\n\tYour binary number is:");
for (j=i-1;j>=0;j--)
printf("%d",b[j]);
getch();
}

void d2o() 			 //Function to convert decimal to octal
{
int a;
system("cls");
printf("\n\n\n\tEnter the decimal number:");
scanf("%d",&a);
printf("\n\n\tYour Octal number is = %o",a);
getch();
}
void d2h()			  //Function to convert decimal to hexa decimal
{
int a;
system("cls");
printf("\n\n\n\tEnter the decimal number : ");
scanf("%d",&a);
printf("\n\n\tYour Hexadecimal number is = %x",a);
getch();
}


void b2d()  		//Function to convert binary to decimal
{
int a,i,e=0;
system("cls");
printf("\n\n\t\tEnter the binary number here:");
scanf("%d",&a);
for(i=1;a>0;i=i*2)
{
e+=(a%10)*i;
a=a/10;
}
printf("\n\n\tYour Decimal number is %u",e);
getch();
}

void b2h()  	  //Function to convert binary to hexadecimal
{
int a,i,e=0;
system("cls");
printf("\n\n\t\tEnter the binary number here:");
scanf("%d",&a);
for(i=1;a>0;i=i*2)
{
e+=(a%10)*i;
a=a/10;
}
printf("\n\n\tYour hexadecimal number is %x",e);
getch();
}

void b2o()   		//Function to convert binary to octal
{
int a,i,e=0;
system("cls");
printf("\n\n\t\tEnter the binary number here:");
scanf("%d",&a);
for(i=1;a>0;i=i*2)
{e+=(a%10)*i;
a=a/10;}
printf("\n\n\tYour Octal number is %o",e);
getch();
}

void o2h()			   //function to convert octal to hexadecimal
{
int a;
system("cls");
printf("\n\n\tEnter the Octal Number : ");
scanf("%o",&a);
printf("\n\n\tYour Hexadecimal Number is %x",a);
getch();
}

void o2d()  		//function to convert octal to decimal
{
int a;
system("cls");
printf("\n\n\tEnter the Octal Number : ");
scanf("%o",&a);
printf("\n\n\tYour Decimal Number is %d",a);
getch();
}



void o2b() 			  //function to convert octal to binary
{
int a,s=0,j=0,i,b;
system("cls");
printf("\n\n\tEnter the Octal Number : ");
scanf("%o",&a);
for (i=1;a>0;i=i*8)
{
b=a%10;
s=s+b*i;
a=a/10;
}
for (i=1;s>0;i=i*10)
{
b=s%2;
j=j+b*i;
s=s/2;
}
printf("\n\n\tYour Binary Number is %d",s);
getch();
}

void h2d() 			  //function to convert hexadecimal to decimal
{
int a;
system("cls");
printf("\n\n\tEnter the Hexadecimal Number : ");
scanf("%o",&a);
printf("\n\n\tYour Decimal Number is %d",a);
getch();
}

void h2b() 			 //function to convert hexadecimal to binary
{
int a,s=0,j=0,i,b;
system("cls");
printf("\n\n\tEnter the Hexadecimal Number : ");
scanf("%x",&a);
for (i=1;a>0;i=i*16)
{
b=a%10;
s=s+b*i;
a=a/10;
}
for (i=1;s>0;i=i*10)
{
b=s%2;
j=j+b*i;
s=s/2;
}
printf("\n\n\tYour Binary Number is %d",s);
getch();
}

int png(void)   	/*		function to make result            */
{
struct stu{       			   //student details
char n[20];       			   //student name
int r;              			 //roll no
int cl;              			//class
char sn[10][15];     		//subject name
char fn[16];	     		//final result pass or fail
int c[10];           			//each subject marks
int obm; 		     		//total obtained marks
float pct;           			//percent
char g;     	   			  //grade
}p[20];
int i,j,stu,sub,t;
system("cls");
printf("\n\n\tEnter the number of students(maxi. 20 ) : ");
scanf("%d",&stu);
printf("\n\n\tEnter the number of subjects(maixi. 10)= [  ]\b\b\b");
scanf("%d",&sub);
printf("\n\n\tEnter the total marks of one subject [   ]\b\b\b\b");
scanf("%d",&t);
t=sub*t;
for (i=0;i<stu;i++)
{
system("cls");
fflush(stdin);
printf("\n\n\tEnter the Name of the student : ");
gets(p[i].n);
printf("\n\tEnter the Class of %s : ",p[i].n);
scanf("%d",&p[i].cl);
printf("\n\tEnter the roll number of %s : ",p[i].n);
scanf("%d",&p[i].r);
p[i].obm=0;
for (j=0;j<sub;j++)
{
fflush(stdin);
printf("\n\tEnter the name of %d subject of %s  = ",j+1,p[i].n);
gets(p[i].sn[j]);
printf("\n\tEnter the marks of %s of %s = [   ]\b\b\b\b",p[i].sn[j],p[i].n);
scanf("%d",&p[i].c[j]);
p[i].obm=p[i].obm+p[i].c[j];
}
p[i].pct=(float)p[i].obm/t;
p[i].pct=p[i].pct*100;
printf("\n\tPress any key to submit details...");
if (p[i].pct<33)
p[i].g='F';
else if ((p[i].pct>=33)&&(p[i].pct<=50))
p[i].g='E';
else if ((p[i].pct>=50)&&(p[i].pct<=60))
p[i].g='D';
else if ((p[i].pct>=60)&&(p[i].pct<=70))
p[i].g='C';
else if ((p[i].pct>=70)&&(p[i].pct<=80))
p[i].g='B';
else if ((p[i].pct>=80)&&(p[i].pct<=90))
p[i].g='A';
else if ((p[i].pct>=90)&&(p[i].pct<=100))
p[i].g='S';
if (p[i].g=='F')
strcpy(p[i].fn,"Fail");
else if (p[i].g=='S')
strcpy(p[i].fn,"Pass with Grace");
else
strcpy(p[i].fn,"Pass");
getch();
}
for (i=0;i<stu;i++)
{
system("cls");
printf("\n\n\t\t\t        %c Progress Report %c \n\n\t  ",174,175);
for (j=0;j<=57;j++)
printf("%c",205);
printf("\n");
printf("\t\tStudent Name : %s\t\tClass : %d\n\t\tRoll No. : %d",p[i].n,p[i].cl,p[i].r);
printf("\n\t  ");
for (j=0;j<=57;j++)
printf("%c",205);
printf("\n");
printf("\t\tS.No. Subject Name \t\t =\tMarks");
printf("\n\t  ");
for (j=0;j<=57;j++)
printf("_");
for (j=0;j<sub;j++)
{
printf("\n\t\t[%d]. %s\t\t\t =\t%d",j+1,p[i].sn[j],p[i].c[j]);
}
printf("\n\t  ");
for (j=0;j<=57;j++)
printf("%c",205);
printf("\n\t\tGrand Total\t\t\t =\t%d",p[i].obm);
printf("\n\t\tPercentage = %.2f\t   Grade =\t%c",p[i].pct,p[i].g);
printf("\n\t\tFinal Result : %s",p[i].fn);
getch();
}
return 0;
}

int ascii(void)   		/*	Function to find the ascii value      */
{
int r,i,j,k;
char n,c[4][30]={"[1].Caracter","[2].Integer","[3].Back","[4].Exit"},d;
do{
j=0;
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<4;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==3)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=3;
else
j--;}
else if (d==13)
{
j++;
break;
}
}
do
{
switch (j)
{
case 1:
asciic();
break;
case 2:
asciii();
break;
case 3:
return 0;         			 // to goto main menu by back
case 4:
return 1;			          //exit it will jump to the end of main function
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1;
}while(r==1);    			  //   to execute reset
}while(r==2);    			  //to execute ascii() function again
getch();
return 0;
}

void asciic() 	     //function to find the ascii value of a character
{
char c;
system("cls");
printf("\n\n\n\t\tEnter your character here : [  ]\b\b\b");
fflush(stdin);
scanf("%c",&c);
printf("\n\n\t\tThe ascii code corresponding to '%c' is %d",c,c);
getch();
}

void asciii()	       //function to find the ascii value of integer
{
int c;
system("cls");
printf("\n\n\n\t\tEnter your intrger here : [  ]\b\b\b");
fflush(stdin);
scanf("%d",&c);
printf("\n\n\t\tThe ascii code corresponding to %d is %d",c,c+48);
getch();
}

void qeqs(void)     /*	function to find the roots of quadratic equation       */
{
int a,b,c,d,e,n;
float f,r1,r2;
char s;
system("cls");
printf("\n\n\t\tEhter the quadratic equation in the form of ax%c+bx+c=0",253);
printf("\n\t\tThe value of a =  \b\b");
scanf("%d",&a);
printf("\n\t\tThe value of b =  \b\b");
scanf("%d",&b);
printf("\n\t\tThe value of c =  \b\b");
scanf("%d",&c);
system("cls");
printf("\n\n\t\tYour equation is %dx%c+%dx+%d=0",a,253,b,c);
d=b*b-4*a*c;
if (d<0)
{
printf("\n\n\t\tRoots are imaginary");
getch();
}
if (d==0)
{
printf("\n\n\t\tRoots are equal");
e=b/(2*a);
printf ("\n\n\t\tRoots are %d,%d",-e,-e);
getch();
}
if (d>0)
{
f=(float)(sqrt(d));
//printf("\nf=%f",f);
getch();
r1=(float)((-b)-f)/(2*a);
r2=(float)((-b)+f)/(2*a);
//fflush(stdin);
printf("\n\n\t\tRoots are %.2f,%.2f",r1,r2);
getch();
}
}

int mat(void) 		/*		function for matrix manipulation    */
{
int i,j,k,r;
char c[4][30]={"[1].Single Maxrix","[2].Double Matrix","[3].Back","[4].Exit"},d;
system("cls");
do
{
j=0;
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n\n");
for (k=0;k<4;k++)
{
if (k==j)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==3)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=3;
else
j--;}
else if (d==13)
break;
}
switch(j+1)
{
case 1:
r=simat();
break;
case 2:
r=dumat();
break;
case 3:
return 0;
case 4:
return 1;
}
}while(r==2);
if (r==0)
return 0;
else if (r==1)
return 1;
getch();
return 0;
}

int simat(void)      	/*	function to operate with single matrix        */
{
int r,i,j,k;
char n,c[7][40]={"[1].Mod of Matrix","[2].Inverse of matrix","[3].Sum of all the elements of matrix","[4].Adjoint of a matrix","[5].Transepose of a matrix","[6].Back","[7].Exit"},d;
do{
j=0;
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<7;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==6)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=6;
else
j--;}
else if (d==13)
{
j++;
break;
}
}
do
{
switch (j)
{
case 1:
modmat();
break;
case 2:
invmat();
break;
case 3:
summat();
break;
case 4:
adjmat();
break;
case 5:
trpmat();
break;
case 6:
return 2;  			      //     BACK
case 7:
return 1; 			       //       END
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1;
}while(r==1);   		   //   to execute reset
}while(r==2);      		//to execute mat() function again
getch();
return 0;
}

void adjmat(void)     /* 	Function to find the adjoin matrix    	*/
{
int i,j,k,a[4][4],b[4][4],c,d,p,q,e[4][4],n=1,x,y;
    system("cls");
    puts("\n\n\t\t\tEnter the matrix of 3x3");
    for(i=1;i<=3;i++)
    {
       for (j=1;j<=3;j++)
	{
	scanf("%d",&a[i][j]);
	}
    }
    system("cls");
    puts("Your matrix is Here :\n");
     for(i=1;i<=3;i++)
    {
       for (j=1;j<=3;j++)
	{
	printf("%d\t",a[i][j]);
	}
	printf("\n");
    }
  for (c=1;c<=3;c++)
    {
   for (d=1;d<=3;d++)
    {
    for(i=1,p=1;i<=3,p<=2;i++)
    {
	for (j=1,q=1;j<=3,q<=2;j++)
	{
	 if ((i==c)||(j==d))
	  { if  (j==3)
	  break ;
	  else
	  continue ;}
	else
	{
	    b[p][q]=a[i][j];
	    q++;
	    if (q==3)
	    p++;
	}
     }
   }
    x=b[1][1]*b[2][2]-b[1][2]*b[2][1];
    if ((n==2)|(n==4)|(n==6)|(n==8))
    x=-x;
    e[c][d]=a[c][d]*x;
    n++;
    }
    }

printf("\n\tYour Adjoint matrix is here :\n");
    for (i=0;i<3;i++)
    {
     for (j=0;j<3;j++)
     {
     printf("%d\t",e[i][j]);
     }
     printf("\n");
    }
    getch();
}
void summat(void)
{
int i,j,sum=0,a,b,e[5][5];
system("cls");
printf("\n\n\n\t\tenter the row and column of matrix:");
scanf("%d%d",&a,&b);
printf("\n\t\tEnter the matrix");
fflush(stdin);
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&e[i][j]);
sum=sum+e[i][j];
}
}
printf("Your Matrix is\n");
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("%d\t",e[i][j]);
}
printf("\n");
}
printf("\n\t\tYour sum = %d",sum);
getch();
}

void trpmat(void)	/*      	Function to find the transpose of matrix 	*/
{
int i,j,a,b,e[5][5];
system("cls");
printf("\n\n\n\t\tenter the row and column of matrix:");
scanf("%d%d",&a,&b);
printf("\n\t\tEnter the matrix");
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&e[i][j]);
}
}
printf("Your Original Matrix is\n");
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("%d\t",e[i][j]);
}
printf("\n");
}
printf("Your Transpose Matrix is\n");
for (i=0;i<b;i++)
{
for(j=0;j<a;j++)
{
printf("%d\t",e[j][i]);
}
printf("\n");
}
getch();
}


void modmat(void)		/*  Function to find mod of matrix 	*/
{
int i,j,k,a[4][4],b[4][4],c,d,p,q,e[4][4],n=1,sum=0,x,y;
    system("cls");
    puts("\n\n\t\t\tEnter the matrix of 3x3");
    for(i=1;i<=3;i++)
    {
       for (j=1;j<=3;j++)
	{
	scanf("%d",&a[i][j]);
	}
    }
    system("cls");
    puts("Your matrix is Here :\n");
     for(i=1;i<=3;i++)
    {
       for (j=1;j<=3;j++)
	{
	printf("%d\t",a[i][j]);
	}
	printf("\n");
    }
  for (c=1;c<=3;c++)
    {
   for (d=1;d<=3;d++)
    {
    for(i=1,p=1;i<=3,p<=2;i++)
    {
	for (j=1,q=1;j<=3,q<=2;j++)
	{
	 if ((i==c)||(j==d))
	  { if  (j==3)
	  break ;
	  else
	  continue ;}
	else
	{
	    b[p][q]=a[i][j];
	    q++;
	    if (q==3)
	    p++;
	}
	}

    }
    x=b[1][1]*b[2][2]-b[1][2]*b[2][1];
    if ((n==2)|(n==4)|(n==6)|(n==8))
    x=-x;
    e[c][d]=a[c][d]*x;
    n++;
    }
    }
    for (i=1;i<=1;i++)
    {
    for (j=1;j<=3;j++)
    {
    sum=sum+e[i][j];
    }
    }
    printf("\nYour mod is = %d",sum);
    getch();
}

void invmat(void)		/*  Function to find inverse of matrix 	*/
{
int i,j,k,a[4][4],b[4][4],c,d,p,q,e[4][4],n=1,sum=0,x,y;
    system("cls");
    puts("\n\n\t\t\tEnter the matrix of 3x3");
    for(i=1;i<=3;i++)
    {
       for (j=1;j<=3;j++)
	{
	scanf("%d",&a[i][j]);
	}
    }
    system("cls");
    puts("Your matrix is Here :\n");
     for(i=1;i<=3;i++)
    {
       for (j=1;j<=3;j++)
	{
	printf("%d\t",a[i][j]);
	}
	printf("\n");
    }
  for (c=1;c<=3;c++)
    {
   for (d=1;d<=3;d++)
    {
    for(i=1,p=1;i<=3,p<=2;i++)
    {
	for (j=1,q=1;j<=3,q<=2;j++)
	{
	 if ((i==c)||(j==d))
	  { if  (j==3)
	  break ;
	  else
	  continue ;}
	else
	{
	    b[p][q]=a[i][j];
	    q++;
	    if (q==3)
	    p++;
	}
	}

    }
    x=b[1][1]*b[2][2]-b[1][2]*b[2][1];
    if ((n==2)|(n==4)|(n==6)|(n==8))
    x=-x;
    e[c][d]=a[c][d]*x;
    n++;
    }
    }
    for (i=1;i<=1;i++)
    {
    for (j=1;j<=3;j++)
    {
    sum=sum+e[i][j];
    }
    }
    printf("\nYour mod is = %d\n press any key to see result....",sum);
    getch();
    if (sum==0)
    {
    printf("\n\n\t\tInverse is not possible because mod is = 0");
    getch();
    }
    else
    {
    printf("\nYour inverse maxrix is :\n");
    for (i=1;i<=3;i++)
    {
    for (j=1;j<=3;j++)
    printf("%d\t",e[i][j]/sum);
    printf("\n");
    }
    }
}

int dumat(void)      /*  Function to double matrix manipulation 	*/
{
int r,i,j,k;
char n,c[5][40]={"[1].Multiplication of Matrix","[2].Sum of matrix","[3].Subtraction of matrix","[4].Back","[5].Exit"},d;
do{
j=0;
system("cls");
for (i=0;;i++)
{
system("cls");
printf("\n\n\n");
for (k=0;k<5;k++)
{
if (j==k)
printf("\t\t\t%c %s\n\n",26,c[k]);
else
printf("\t\t\t    %s\n\n",c[k]);
}
d=getch();
if (d==80)
{
if (j==4)
j=0;
else
j++;
}
else if (d==72)
{
if (j==0)
j=4;
else
j--;}
else if (d==13)
{
j++;
break;
}
}
do
{
switch (j)
{
case 1:
multiplymat();
break;
case 2:
sum2mat();
break;
case 3:
submat();
break;
case 4:
return 2;   				//     BACK
case 5:
return 1;				 //       END
}
r=choose();
if (r==3)
return 0;
else if (r==4)
return 1;
}while(r==1);  			//   to execute reset
}while(r==2);   			//to execute dumat function again
getch();
return 0;
}

void multiplymat()   		/*  Function to multiply two matrixes   */
{
int i,j,a,b,e[3][5][5],p,q,f;
system("cls");
printf("\n\n\n\t\tEnter row & column of 1st matrix:");
scanf("%d%d",&a,&b);
printf("\n\n\t\tEnter row & column of 2nd matrix:");
scanf("%d%d",&p,&q);
if (b!=p)
{
printf("\n\n\tMultiplication of %dx%d & %dx%d matrises is not possible",a,b,p,q);
getch();
}
else
{
system("cls");
printf("\n\t\tEnter the elements of 1st matrix(%dx%d) : ",a,b);
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&e[0][i][j]);
}
}
system("cls");
printf("\n\t\tEnter the elements of 2nd matrix(%dx%d) : ",p,q);
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&e[1][i][j]);
}
}
system("cls");
printf("\n\n\tYour 1st matrix is : \n\n");
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("\t%d",e[0][i][j]);
}
printf("\n");
}
printf("\n\tYour 2nd matrix is : \n\n");
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("\t%d",e[1][i][j]);
}
printf("\n");
}
for (i=0;i<a;i++)
{
for(j=0;j<q;j++)
{
e[2][i][j]=0;
for (f=0;f<b;f++)
{
e[2][i][j]=e[2][i][j]+(e[0][i][f])*(e[1][f][j]);
}
}
}
printf("\n\tMultiplication of Matrises is\n\n");
for (i=0;i<a;i++)
{
for(j=0;j<q;j++)
{
printf("\t%d",e[2][i][j]);
}
printf("\n");
}
getch();
}
}
void sum2mat(void)		/*  Function for sum of two matrix */
{
int i,j,a,b,e[3][5][5],p,q,f;
system("cls");
printf("\n\n\n\t\tEnter row & column of 1st matrix:");
scanf("%d%d",&a,&b);
printf("\n\n\t\tEnter row & column of 2nd matrix:");
scanf("%d%d",&p,&q);
if (a==p&&b==q)
{
system("cls");
printf("\n\t\tEnter the elements of 1st matrix(%dx%d) : ",a,b);
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&e[0][i][j]);
}
}
system("cls");
printf("\n\t\tEnter the elements of 2nd matrix(%dx%d) : ",p,q);
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&e[1][i][j]);
}
}
system("cls");
printf("\n\n\tYour 1st matrix is : \n\n");
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("\t%d",e[0][i][j]);
}
printf("\n");
}
printf("\n\tYour 2nd matrix is : \n\n");
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("\t%d",e[1][i][j]);
}
printf("\n");
}
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
e[2][i][j]=e[0][i][j]+e[1][i][j];
}
}
printf("\n\tSum of Matrises is\n\n");
for (i=0;i<a;i++)
{
for(j=0;j<q;j++)
{
printf("\t%d",e[2][i][j]);
}
printf("\n");
}
getch();
}
else
{
printf("\n\n\tSum of %dx%d & %dx%d matrises is not possible",a,b,p,q);
getch();
}
}

void submat(void)	/*    Function for subtraction of two matrix  	*/
{
int i,j,a,b,e[3][5][5],p,q,f;
system("cls");
printf("\n\n\n\t\tEnter row & column of 1st matrix:");
scanf("%d%d",&a,&b);
printf("\n\n\t\tEnter row & column of 2nd matrix:");
scanf("%d%d",&p,&q);
if (a==p&&b==q)
{
system("cls");
printf("\n\t\tEnter the elements of 1st matrix(%dx%d) : ",a,b);
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&e[0][i][j]);
}
}
system("cls");
printf("\n\t\tEnter the elements of 2nd matrix(%dx%d) : ",p,q);
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&e[1][i][j]);
}
}
system("cls");
printf("\n\n\tYour 1st matrix is : \n\n");
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("\t%d",e[0][i][j]);
}
printf("\n");
}
printf("\n\tYour 2nd matrix is : \n\n");
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("\t%d",e[1][i][j]);
}
printf("\n");
}
for (i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
e[2][i][j]=e[0][i][j]-e[1][i][j];
}
}
printf("\n\tSubtraction of Matrises is\n\n");
for (i=0;i<a;i++)
{
for(j=0;j<q;j++)
{
printf("\t%d",e[2][i][j]);
}
printf("\n");
}
getch();
}
else
{
printf("\n\n\tSubtraction of %dx%d & %dx%d matrises is not possible",a,b,p,q);
getch();
}
}
