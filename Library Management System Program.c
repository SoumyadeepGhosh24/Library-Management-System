#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
char bk_name[30];
char author[30];
char isbn_no[30];
int pages;
float price;
};

int main()
{
    struct library l[100];
    char ar_nm[30],bk_nm[30],isbn_no[30];
    int i,j, keepcount;
    i=j=keepcount = 0;
    printf("\n\t\t\t---------------------------------------------------------------------------");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t||##########                                                   ##########||");
    printf("\n\t\t\t||##########                                                   ##########||");
    printf("\n\t\t\t||##########      Library management System Project in C       ##########||");
    printf("\n\t\t\t||##########                                                   ##########||");
    printf("\n\t\t\t||##########                                                   ##########||");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    
    printf("\n\n\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =-=                 WELCOME                   =-=");
    printf("\n\t\t\t        =-=                   TO                      =-=");
    printf("\n\t\t\t        =-=                 LIBRARY                   =-=");
    printf("\n\t\t\t        =-=               MANAGEMENT                  =-=");
    printf("\n\t\t\t        =-=                 SYSTEM                    =-=");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    
    while(j!=6)
    {
        printf("\n\n\tMain Menu : ");
        printf("\n\n\t\t1. Add book information\n");
        printf("\t\t2. Display book information\n");
        printf("\t\t3. Search books by Author's name\n");
        printf("\t\t4. Search books by Book's name\n");
        printf("\t\t5. Search books by ISBN-No.\n");
        printf("\t\t6. Show total no of books present in library.\n");
        printf("\t\t7. Exit");
        
        printf ("\n\nEnter one of the above choice: ");
        scanf("%d",&j);
        
        switch (j)
        {
        /* Add book */
            case 1:  
                printf ("\tEnter book name =  ");
                scanf ("%s",&l[i].bk_name);
                
                printf ("\tEnter author name =  ");
                scanf ("%s",&l[i].author);
                
                printf ("\tEnter pages =  ");
                scanf ("%d",&l[i].pages);
                
                printf ("\tEnter price =  Rs. ");
                scanf ("%f",&l[i].price);
                
                printf ("\tEnter ISBN no. =  ");
                scanf ("%s",&l[i].isbn_no);
                keepcount++;
                i++;
                break;
                
        /*total display of books in the library */
            case 2:
                if(keepcount == 0)
                    printf("\n\tThere are no books in the library.");
                else
                {
                    printf("\n\tyou have entered the following information\n");
                    for(i=0; i<keepcount; i++)
                    {
                    printf ("\t\tBook name =\t%s\n",l[i].bk_name);
                    
                    printf ("\t\t author name =\t%s\n",l[i].author);
                    
                    printf ("\t\t  pages =\t%d\n",l[i].pages);
                    
                    printf ("\t\t  price =\tRs. %f\n",l[i].price);
                    
                    printf("\t\t ISBN no. =\t%s\n\n", l[i].isbn_no);
                    }
                }
                break;
                
        //Search books by author's name/        
            case 3:
                if(keepcount == 0)
                {
                    printf("\n\tNo books in library is present right now.");
                    printf("\n\tPlease enter the books first and then search it. ");
                }
                else
                {
                    printf ("\tEnter author name : ");
                    scanf ("%s",ar_nm);
                    for (i=0; i<keepcount; i++)
                    {
                    if (strcmp(ar_nm, l[i].author) == 0)
                    printf ("\n\n\t\tBook Name =\t%s \n\t\tISBN No. =\t%s \n\t\tPages =\t%d \n\t\tPrice =\tRs. %f",l[i].bk_name,l[i].isbn_no,l[i].pages,l[i].price);
                    }
                }
                break;
                
        //Search books by book's name/    
            case 4:
                if(keepcount == 0)
                {
                    printf("\n\tNo books in library is present right now.");
                    printf("\n\tPlease enter the books first and then search it. ");
                }
                else
                {
                    printf ("\tEnter book name : ");
                    scanf ("%s",bk_nm);
                    for (i=0; i<keepcount; i++)
                    {
                    if (strcmp(bk_nm, l[i].bk_name) == 0)
                    printf ("\n\n\t\tAuthor's name =\t%s \n\t\tISBN No. =\t%s \n\t\tPages =\t%d \n\t\tPrice =\tRs. %f",l[i].author,l[i].isbn_no,l[i].pages,l[i].price);
                    }
                }
                break;
                
        //search by ISBN number
            case 5:
                if(keepcount == 0)
                {
                    printf("\n\tNo books in library is present right now.");
                    printf("\n\tPlease enter the books first and then search it. ");
                }
                else
                {
                    printf ("\tEnter ISBN no. : ");
                    scanf ("%s",isbn_no);
                    for (i=0; i<keepcount; i++)
                    {
                    if (strcmp(isbn_no, l[i].isbn_no) == 0)
                    printf ("\n\n\t\tBook Name =\t%s \n\t\tAuthor's name =\t%s \n\t\tPages =\t%d \n\t\tPrice =\tRs. %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
                    }
                }
                break;
                
        //Counting the number of books
            case 6: printf("\n\tNo of books in library : %d", keepcount);
                    break;
                
        //Exit from the program        
            case 7:
                printf("\n\t\t\t\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/");
                printf("\n\t\t\t/\\##########                                                   #########/\\");
                printf("\n\t\t\t\\/##########                                                   #########\\/");
                printf("\n\t\t\t/\\##########     Thanks for Using Library Management System    #########/\\");
                printf("\n\t\t\t\\/##########                   VISIT AGAIN                     #########\\/");
                printf("\n\t\t\t/\\##########                                                   #########/\\");
                printf("\n\t\t\t\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/");
                printf("\n\t\tDeveloped By:   Soumyadeep Ghosh\n\t\t\t\tJishnu Nanth Paul\n\t\t\t\tPranav Kumar\n\t\t\t\tAman Verma");
                exit (0); 
        }
    }
    return 0;
}
