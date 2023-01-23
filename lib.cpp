#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
        //to store the no of book
        int bookno;
        //to show the name of book
        char bookname[40];
        //to show the name of author
        char authorname[40];
        //to show the cost of the book
        float cost;
        // to show the name of student
        char studentname[50];
        //to show the issued date
        char date[10];
};
int main()  
{
    // using the strut library again.'  
    // in order to perform operations  
    struct library lib[100];  
    char bookname[40],stu[40];  
    int i, j, count,ii,f=0,jj;  
    i = 0;  
    j = 0;  
    count = 0;  
  
  
    while(j!=5)  
    {  
        printf(" \n1. Add Book details\n ");  
        printf(" 2. Display the list of books and its details\n ");  
        printf(" 3. Display the total no. of books in the library\n ");  
        printf("4. search\n");
        printf("5. sorting\n");
        printf(" 6. Exit\n\n");  
        printf(" Enter the number: ");  
        scanf(" %d", &j);  
  
  
        switch(j)  
        {  
            // in order to add the book details  
            case 1:  
                printf(" \nadd the details of the book "); 
                printf("\nEnter the no of book: ");
                scanf("%d",&lib[i].bookno); 
                printf(" \nEnter the book name: ");  
                scanf(" %s", lib[i].bookname);  
                printf(" \nEnter the author name: ");  
                scanf(" %s", lib[i].authorname);  
                printf(" \nEnter the cost of the book: ");  
                scanf(" %f", &lib[i].cost);  
                printf(" \nEnter the name of the student: ");  
                scanf(" %s", lib[i].studentname); 
                printf("\nEnter the date: ");
                scanf("%s", lib[i].date); 
                count = count + 1;  
                i = i + 1;  
                break;  
            case 2:  
                // if there are no books registered previously  
                if (count==0)  
                {  
                    printf(" \nThere are no books stored!!\n ");  
                }  
                else  
                {  
                    // to view the list of the books  
                    printf(" \n---------------LIBRARY MANAGEMENT SYSTEM------------------");
                     printf("\nbookno \tbookname \tauthorname \tcost \t\tstudentname \tdate\n");
                    for(ii=0;ii<count;ii++)  
                    {  
                       printf(" %d \t %s \t\t %s \t\t %f \t %s \t\t %s",lib[ii].bookno,lib[ii].bookname, lib[ii].authorname,lib[ii].cost,lib[ii].studentname,lib[ii].date);                       
                       /* printf("\nThe no of the book is: %d ", lib[ii].bookno);
                        printf(" \nThe name of the book is: %s ", lib[ii].bookname);  
                        printf(" \nThe name of the author is: %s ", lib[ii].authorname);  
                        printf(" \nCost of the book: %f ", lib[ii].cost);  
                        printf(" \nThe name of the student is: %s ", lib[ii].studentname); 
                        printf(" \nDate of book issued: %s", lib[ii].date); */
                    }  
                }  
                break;  
  
             case 3:  
                // to view the total number of books  
                printf(" \nTotal number of books in the library are: %d\n ", count);  
                break;  
            case 4:
                printf ("enter the searching student name: ");    
              scanf("%s",stu);
              for(ii=0;ii<count;ii++)  
                    {  
                        if(strcmp(stu,lib[ii].studentname)==0){
                            f=ii;
                            break;
                        }
                    }
                    if(ii==count)
                    printf("details not found");
                    else{
                         printf("\nbookno \tbookname \tauthorname \tcost \t\tstudentname \tdate\n");
                          printf(" %d \t %s \t\t %s \t\t %f \t %s \t\t %s",lib[f].bookno,lib[f].bookname, lib[f].authorname,lib[f].cost,lib[f].studentname,lib[f].date);                       
                    }
                    break;
                    case 5:
                    for(ii=0;ii<count;ii++)  
                    {  
                       for(jj=ii+1;jj<count;jj++)  
                      {
                        if(strcmp(lib[ii].studentname,lib[jj].studentname)>0){
                            int bb=lib[ii].bookno;
                            lib[ii].bookno=lib[jj].bookno;
                            lib[jj].bookno=bb;
                            char dd[40];
                            strcpy(dd,lib[ii].bookname);
                            strcpy(lib[ii].bookname,lib[jj].bookname);
                            strcpy(lib[jj].bookname,dd);
                            char ee[40];
                            strcpy(ee,lib[ii].authorname);
                            strcpy(lib[ii].authorname,lib[jj].authorname);
                            strcpy(lib[jj].authorname,ee);
                            float ff=lib[ii].cost;
                            lib[ii].cost=lib[jj].cost;
                            lib[jj].cost=ff;
                            char cc[40];
                            strcpy(cc,lib[ii].studentname);
                            strcpy(lib[ii].studentname,lib[jj].studentname);
                            strcpy(lib[jj].studentname,cc);
                            char gg[40];
                            strcpy(gg,lib[ii].date);
                            strcpy(lib[ii].date,lib[jj].date);
                            strcpy(lib[jj].date,gg);
                        } 
                      } 
                    }
                    printf("after sorting\n");
                    for(ii=0;ii<count;ii++)  
                    {  
                       //printf(" %d \t %s \t\t %s \t\t %f \t %s \t\t %s",lib[ii].bookno,lib[ii].bookname, lib[ii].authorname,lib[ii].cost,lib[ii].studentname,lib[ii].date);
                       printf("%d\t%s\t%s\t%f\t%s\t%s\t\n",lib[ii].bookno,lib[ii].bookname,lib[ii].authorname,lib[ii].cost,lib[ii].studentname,lib[ii].date); 
                    }
                    break;                      
            case 6:  
                // to exit from the program  
                exit(0);  
                  
            default:  
                // if any number other than 1, 2, 3, 4 is entered   
                printf("wrong option");
           
        }
    }
}                

