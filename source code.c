#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
1

int check_time();           //functions declaration
int utc_ist();
int time_facts();
void submission();
void display();
int main()
{
    int ch;
    printf("\t\t\tC PROGRAMMING PROJECT BY Arjun.S.Pramod [MY.SC.I5MCA19058]\n");
    printf("_____________________________________________________________________________________________________________*\n");
    printf("\t\t\tWelcome to this mini-project\n");
    printf("\n\n\n____________________________________________________________________________________________________\n\n");
    do{
        printf("MENU\n1:  Enter 1 to view the time and date at your place! \n2:  Enter 2 to see the timings at your place(IST) and UTC standard time\n3:  Enter 3 to test your knowledge about the abbreviations used related to timings\n4:  Enter 4 to view the submission info\n5:  Enter 5 to know about the details of project\n6:  Enter 6 to exit\n");
        scanf("%d",&ch);
        switch(ch) //I'm using switch control strcture
        {
            case 1: check_time();
            break;
            case 2: utc_ist();
            break;
            case 3: time_facts();
            break;
            case 4: submission();
            break;
            case 5: display();
            break;
            case 6: exit(0);
        default: printf("Sorry! Choose numbers between 1 to 6");
        break;
    }
    }while (ch<=6);
    getch();
}

int check_time()
{
    time_t t;  
    time(&t);

    printf("\nThe current time and date is : %s", ctime(&t));
    printf("\n\n");
    return 0;
}

int utc_ist()
{
    time_t rawtime = time(NULL);
    if (rawtime == -1) 
    {   puts("The time() function failed");
        return 1;
    }
    
    struct tm *ptm = localtime(&rawtime);
    if (ptm == NULL) 
    {    
        puts("The localtime() function failed");
        return 1;
    }
    
    printf("The time is: %02d:%02d:%02d\n", ptm->tm_hour, 
           ptm->tm_min, ptm->tm_sec);

    time_t now = time(&now);
    if (now == -1) 
    {
        puts("The time() function failed");
    }
        
    struct tm *utm = gmtime(&now);
    if (utm == NULL) 
    {    
        puts("The gmtime() function failed");
    }    
    
    printf("UTC time: %s", asctime(utm));
    printf("\n\n");
    return 0;
}

int time_facts()
{
    char ans1[20],ans2[20],ans3[20],ans4[20],ans5[20],ans6[20],ans7[20];
    int count=0;
    printf("Let's test your knowledge of abbreviations related to timings\n\n\n I hope you're excited for the questions, and here we go............!!!!\n");
    printf("enter your answers in aaaabbbb fashion, do not your uppercase letters nor give any spaces");
    printf("\n UTC refers to: _______\n"); //1st question
    scanf("%s",ans1);
    if(strcmp(ans1,"universaltimecoordinated")==0)
    {
        printf("Correct Answer\nGood start with 1st point\n");
        count++;
    }
    else
    {
        printf("Sorry,Wrong Answer\n");
        printf("Correct Answer is: Universal Time Coordinated\n");
        printf("That's fine, let's try with next one!\n");
    }
    printf("\nTherefore your total score is: %d\n",count);
    printf("\nWhat if the full form of 'AD'?\n"); //2nd question
    scanf("%s",ans2);
    if(strcmp(ans2,"annodomini")==0)
    {
        printf("Correct Answer\n Hurray! 1 more point\n");
        count++;
    }
    else
    {
        printf("Sorry,Wrong Answer\n");
        printf("Correct Answer is: Anno Domini\n");
        printf("That's fine, fingers crossed for next one!\n");
    }
    printf("\nTherefore your total score is: %d\n",count);
    printf("\nBC:________?\n");//3rd question
    scanf("%s",ans3);
    if(strcmp(ans3,"beforechrist")==0)
    {
        printf("Correct Answer\n You're acing it, 1 more point added\n");
         count++;
    }
    else
    {
        printf("Sorry,Wrong Answer\n");
        printf("Correct Answer is: Before Christ\n");
        printf("No worries, try next one\n");
    }
    printf("\nTherefore your total score is: %d\n",count);
    printf("\nAM:________?\n");//4th question
    scanf("%s",ans4);
    if(strcmp(ans4,"antemeridiem")==0)
    {
        printf("Correct Answer\nCongrats on one more point\n");
         count++;
    }
    else
    {
        printf("Sorry,Wrong Answer\n");
        printf("Correct Answer is: Ante Meridien\n");
        printf("No worries, try next one\n");
    }
    printf("\nTherefore your total score is: %d\n",count);
    printf("\nPM: ______\n");//5th question
    scanf("%s",ans5);
    if(strcmp(ans5,"postmeridiem")==0)
    {
        printf("Correct Answer\nAwesome!!\n");
         count++;
    }
    else
    {
        printf("Sorry,Wrong Answer\n");
        printf("Correct Answer is: Post meridiem\n");
        printf("No worries, try next one\n");
    }
    printf("\nTherefore your total score is: %d\n",count);
    if(count==5)
    {
        printf("Result: Excellent");
    }
    else if(count>=3)
    {
        printf("Result: Very Good");
    }
    else
    {
       printf("Result: You could have tried Better. But all that matters is you came to know about all these terminologies now!! "); 
    }
    printf("\n\n");
    return 0;

}

void submission()
{
    union submit
    {
        char name[40];
        char dept[20];
        char subject[500];
    };
    union submit s;
    printf("\nThis Project is submitted to:\n");
    strcpy(s.name,"Manisankar sir");
    printf("Name: %s\n",s.name);
    strcpy(s.dept,"Computer Science");
    printf("Department: %s\n",s.dept);
    strcpy(s.subject,"C language");
    printf("Subject Handled: %s\n",s.subject);
    printf("\n\n");
}

void display()
{
    printf("This project took me 2 days totally!\nAround 8 hours to create framework of the project, \nalong with searching necessary codes for like algorithm to obtain cpu time, \nconversion of UTC and IST time and etc!!\n ");
    printf("\nApproximately, 5 hours to code the programs, run it and making sure of no errors!");
    printf("\nI've put in lot many hours into this!");
    printf("\nThanks for assigning this project Manishankar sir! \nIt really helped me to revise the basic concepts, \nand helped to improve debugging skills quite when errors were encountered in the program!!\n\n\n\n ");
}