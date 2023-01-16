#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record()
    {
	system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
	}



void help()
	{
	system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	}

void edit_score(float score, char plnm[20])
	{
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	   {
	    sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
		}
	}
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     FILE *f;
     char q[200];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();
	getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		f=fopen("q1.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
			}
		else
		    {
		    printf("\n\nWrong!!! The correct answer is C.23232");
		    getch();
		    break;
		    }
			fclose(f);
        case 2:
		f=fopen("q2.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!"); 
			count++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is C.Switzerland");
		    getch();
		    break;
			}

        case 3:
        f=fopen("q3.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");count++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is B.Hyena");
		    getch();
		    break;
			}

        case 4:
        f=fopen("q4.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			count++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		    getch();
		    break;
			}

        case 5:
        	f=fopen("q5.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
            {
			printf("\n\nCorrect!!!");
			count++;
            getch();
            break;
			}
        else
		    {
			printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		    getch();
		    break;
			}

        case 6:
        	f=fopen("q6.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{
	goto test;
	}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{
		goto game;
		}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {
	 system("cls");
     r=i;

     switch(r)
		{
		case 1:
			f=fopen("q7.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.Cricket");
			   getch();
		       goto score;
		       break;
			   }

		case 2:
			f=fopen("q8.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		    {
			printf("\n\nWrong!!! The correct answer is A.Seismology");
			getch();
		    goto score;
		    break;
		    }

        case 3:
        	f=fopen("q9.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.8");
			   getch();
		       goto score;
		       break;
			   }

        case 4:
        f=fopen("q10.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			 break;
			 }
		else
		    {
            printf("\n\nWrong!!! The correct answer is A.Faraday");
			getch();
		    goto score;
		    break;
		    }

        case 5:
        	f=fopen("q11.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			 break;
			 }
		else
		       {
		        printf("\n\nWrong!!! The correct answer is B.Power");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		f=fopen("q12.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Cobalt");
			   goto score;
		       getch();
		       break;
			   }

        case 7:
        	f=fopen("q13.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is D.Nippon");
			   getch();
		       goto score;
		       break;
			   }

        case 8:
        f=fopen("q14.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			countr++;
			getch(); 
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.7");
			   getch();
		       goto score;
		       break;
			   }

        case 9:
        f=fopen("q15.txt","r");
		fgets(q, 200, (FILE*)f);
   		printf("%s",q);
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			countr++; 
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Copenhagen");
			   break;
			   }
		}
	}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<100000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==700000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
	{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;
		}
	}
}
