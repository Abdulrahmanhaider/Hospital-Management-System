#include <stdio.h>
// #include <stddef.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int num;
int sum = 0;
int j = 0;
int a = 0;
int i;
int n;
struct pateint
{
    char name[30];
    char disease[30];
    char doctor[30];
    char city[20];
    int age;
    int cabin;
    long long int phone;

} p[100];

void read()
{
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        fp = fopen("info.txt", "w");
        fclose(fp);
        printf("FIle does not exist, I JUST CREATED IT, exiting...\n\n\n ");
        return 0;
    }

    num = fread(p, sizeof(struct pateint), 100, fp);
    // printf("num =%d",num);

    fclose(fp);
}
void write()
{
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL)
    {
        printf("ERROR");
        exit(0);
    }
    fwrite(p, sizeof(struct pateint), num, fp);
    fclose(fp);
}

editPateint()
{
    fflush(stdin);
    int edit, choice;
    printf("Enter Serial Number for Edit Information ( 0 - %d) : ", num - 1);
    scanf("%d", &edit);
    printf("\n");
    printf("\t\t\t\t\tSerial Number : %d ", edit);
    printf("\n\t\t\t\t\tPateint Name : ");
    puts(p[edit].name);
    printf("\t\t\t\t\tAge = %d ", p[edit].age);
    printf("\n\t\t\t\t\tCity name = ");
    puts(p[edit].city);
    printf("\t\t\t\t\tPhone Number : %lld ", p[edit].phone);
    printf("\n\t\t\t\t\tDisease : ");
    puts(p[edit].disease);
    printf("\t\t\t\t\tDoctor Name : ");
    puts(p[edit].doctor);
    printf("\t\t\t\t\tCabin : %d ", p[edit].cabin);
    if (edit < num)
    {
        printf("\nWhat Do you Want To Edit \n");
        printf("\n1.Name\n2.Age\n3.City\n4.Phone\n5.Disease\n6.Doctor\n7.Cabin");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Current Pateint Name is : ");
            puts(p[edit].name);
            fflush(stdin);
            int x;
            printf("\nPress 1 for Edit \nPress 0 for back ");
            printf("\n=>  ");
            scanf("%d", &x);
            if (x == 1)
            {
                fflush(stdin);
                printf("Enter Pateint Name : ");
                gets(p[edit].name);
                printf("\nEdit Sucessfully \n");
                write();
            }
            else
            {
                return 0;
            }
            break;

        case 2:
            printf("Current Pateint's ");
            puts(p[edit].name);
            fflush(stdin);
            printf("Age : ( %d )", p[edit].age);
            fflush(stdin);

            printf("\nPress 1 for Edit \nPress 0 for back ");
            printf("\n=>  ");
            scanf("%d", &x);
            if (x == 1)
            {
                fflush(stdin);
                printf("Enter Pateint Age  : ");
                scanf("%d", &p[edit].age);
                printf("\nEdit Sucessfully \n");

                write();
                fflush(stdin);
            }
            else
            {
                return 0;
            }
            break;
        case 3:
            printf("Current Pateint's ");
            puts(p[edit].name);
            fflush(stdin);
            printf("City : ");
            puts(p[edit].city);
            fflush(stdin);

            printf("\nPress 1 for Edit \nPress 0 for back ");
            printf("\n=>  ");
            scanf("%d", &x);
            if (x == 1)
            {
                fflush(stdin);
                printf("Enter Pateint City Name  : ");
                gets(p[edit].city);
                printf("\nEdit Sucessfully \n");

                write();
                fflush(stdin);
            }
            else
            {
                return 0;
            }
            break;
        case 4:
            printf("Current Pateint's ");
            puts(p[edit].name);
            fflush(stdin);
            printf("Phone No : ( %lld )", p[edit].phone);
            fflush(stdin);

            printf("\nPress 1 for Edit \nPress 0 for back ");
            printf("\n=>  ");
            scanf("%d", &x);
            if (x == 1)
            {
                fflush(stdin);
                printf("Enter Pateint Phone no : ");
                scanf("%lld", &p[edit].phone);
                printf("\nEdit Sucessfully \n");

                write();
                fflush(stdin);
            }
            else
            {
                return 0;
            }
            break;

        case 5:
            printf("Current Pateint's ");
            puts(p[edit].name);
            fflush(stdin);
            printf("Disease : ");
            puts(p[edit].disease);
            fflush(stdin);

            printf("\nPress 1 for Edit \nPress 0 for back ");
            printf("\n=>  ");
            scanf("%d", &x);
            if (x == 1)
            {
                fflush(stdin);
                printf("Enter Pateint Disease : ");
                gets(p[edit].disease);
                printf("\nEdit Sucessfully \n");

                write();
                fflush(stdin);
            }
            else
            {
                return 0;
            }
            break;
        case 6:
            printf("Pateint Name : ");
            puts(p[edit].doctor);
            printf("Pateint Doctor Name : ");
            puts(p[edit].doctor);
            fflush(stdin);
            printf("\nPress 1 for Edit\n0 For Back ");
            printf("\n=> ");
            scanf("%d", &x);
            if (x == 1)
            {
                printf("\nEnter New Doctor Name For Pateint : ");
                fflush(stdin);
                gets(p[edit].doctor);
                printf("\nEdit Sucessfully \n");
                write();
                fflush(stdin);
            }
            else
            {

                return 0;
            }
            break;
        case 7:
            printf("Current Pateint's ");
            puts(p[edit].name);
            fflush(stdin);
            printf("Cabin no : ( %d )", p[edit].age);
            fflush(stdin);

            printf("\nPress 1 for Edit \nPress 0 for back ");
            printf("\n=>  ");
            scanf("%d", &x);
            if (x == 1)
            {
                fflush(stdin);
                printf("Enter Pateint New Cabin no : ");
                scanf("%d", &p[edit].cabin);
                printf("\nEdit Sucessfully \n");

                write();
                fflush(stdin);
            }
            else
            {
                return 0;
            }
            break;

        default:
            printf("\nEnter Valid Option\n");
            break;
        }
    }
}

void searchPateint()
{
    int s, h, f;
    char u[100];
    printf("t1.Serial no.\n2.Name\n3.Cabin\nOption = ");
    scanf("%d", &h);
    if (h == 1)
    {
        printf("\t\t\t\t\tEnter Serial number of the pateint :");
        scanf("%d", &s);
        if (s < num)
        {
            printf("\n");
            printf("\t\t\t\t\tSerial Number : %d ", s);
            printf("\n\t\t\t\t\tPateint Name : ");
            puts(p[s].name);
            printf("\t\t\t\t\tAge = %d ", p[s].age);
            printf("\n\t\t\t\t\tCity name = ");
            puts(p[s].city);
            printf("\t\t\t\t\tPhone Number : %d ll", p[s].phone);
            printf("\n\t\t\t\t\tDisease : ");
            puts(p[s].disease);
            printf("\t\t\t\t\tDoctor Name : ");
            puts(p[s].doctor);
            printf("\t\t\t\t\tCabin : %d ", p[s].cabin);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if (h == 2)
    {
        int f = 1;
        fflush(stdin);
        printf("\t\t\t\t\tEnter Your Name : ");
        gets(u);
        fflush(stdin);
        for (int g = 0; g < num; g++)
        {
            if (strcmp(u, p[g].name) == 0)
            {
                printf("\n");
                printf("\t\t\t\t\tSerial Number =%d ", g);
                printf("\nname=");
                puts(p[g].name);
                printf("\t\t\t\t\tAge = %d ", p[g].age);
                printf("\n\t\t\t\t\tCity name = ");
                puts(p[g].city);
                printf("\t\t\t\t\tPhone Number %d: ", p[g].phone);
                printf("\nDisease = ");
                puts(p[g].disease);
                printf("\t\t\t\t\tDoctor Name : ");
                puts(p[g].doctor);
                printf("\t\t\t\t\tCabin :%d ", p[g].cabin);
                printf("\n\n");
                f = 0;
                fflush(stdin);
            }
        }
        if (f == 1)
        {
            printf("\nNot found\n");
            fflush(stdin);
        }
    }
    else if (h == 3)
    {
        f = 0;
        int ca;
        printf("\t\t\t\t\tEnter Cabin Number :");
        scanf("%d", &ca);
        for (int g = 0; g < num; g++)
        {
            if (ca == p[g].cabin)
            {
                printf("\n");
                printf("\t\t\t\t\tSerial Number =%d ", g);
                printf("\nname=");
                puts(p[g].name);
                printf("\t\t\t\t\tAge = %d ", p[g].age);
                printf("\n\t\t\t\t\tCity name = ");
                puts(p[g].city);
                printf("\t\t\t\t\tPhone Number %d: ", p[g].phone);
                printf("\n\t\t\t\t\tDisease = ");
                puts(p[g].disease);
                printf("\t\t\t\t\tDocton Name : ");
                puts(p[g].doctor);
                printf("\t\t\t\t\tCabin :%d ", p[g].cabin);
                printf("\n\n");
                f = 0;
            }
        }
        if (f == 1)
        {
            printf("\nNot found\n");
        }
    }
    else
    {
        printf("\nInvalid Input\n");
    }
}

void viewPateint()
{
    for (i = 0; i < num; i++)
    {
        printf("\n");
        printf("\t\t\t\t\tSerial Number=%d\n", i);
        printf("\t\t\t\t\tName : ");
        puts(p[i].name);
        printf("\t\t\t\t\tAge = %d ", p[i].age);
        printf("\n\t\t\t\t\tCity name = ");
        puts(p[i].city);
        printf("\t\t\t\t\tPhone Number %d: ", p[i].phone);
        printf("\n\t\t\t\t\tDisease = ");
        puts(p[i].disease);
        printf("\t\t\t\t\tDocton Name : ");
        puts(p[i].doctor);
        printf("\t\t\t\t\tCabin :%d ", p[i].cabin);
        printf("\n\n\t\t\t********************************************************\n");
    }
}

void addPateint()
{
    printf("\n\n");
    printf("Already data inputed on the database = %d\n\n", num);
    printf("\n\n\t\t\t\t\tHow many Pateint You Want To Enter : ");
    scanf("%d", &n);
    sum = n + num;
    for (i = num, j = 0; i < sum; i++)
    {
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter Pateint's Name : ");
        gets(p[i].name);
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter The Age : ");
        scanf("%d", &p[i].age);
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter City Name : ");
        gets(p[i].city);
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter Phone Number : ");
        scanf("%d", &p[i].phone);
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter Disease : ");
        gets(p[i].disease);
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter Doctor Name : ");
        gets(p[i].doctor);
        fflush(stdin);
        printf("\n\t\t\t\t\tEnter Cabin Number : ");
        scanf("%d", &p[i].cabin);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}

dischargePateint(){
    int f,h;
    printf("Enter The Serial Number of that patient that you want to Delete : ");
    scanf("%d",&h);
    if(h<num){
         printf("\n");
            printf("\t\t\t\t\tSerial Number : %d ", h);
            printf("\n\t\t\t\t\tPateint Name : ");
            puts(p[h].name);
            printf("\t\t\t\t\tAge = %d ", p[h].age);
            printf("\n\t\t\t\t\tCity name = ");
            puts(p[h].city);
            printf("\t\t\t\t\tPhone Number : %d ll", p[h].phone);
            printf("\n\t\t\t\t\tDisease : ");
            puts(p[h].disease);
            printf("\t\t\t\t\tDoctor Name : ");
            puts(p[h].doctor);
            printf("\t\t\t\t\tCabin : %d ", p[h].cabin);
            printf("\n \n ");
            printf("Press 1 for Delete\nPress 0 for Back\n");
            printf("\n=> ");
            scanf("%d",&f);
            if(f==1){
                while (f<num)
                {
                    strcpy(p[h].name,p[h+1].name);
                    p[h].age=p[h+1].age;
                    strcpy(p[h].city,p[h+1].city);
                    p[h].phone=p[h+1].phone;
                    strcpy(p[h].disease,p[h+1].disease);
                    strcpy(p[h].doctor,p[h+1].doctor);
                    p[h].cabin=p[h+1].cabin;
                    f++;
                    
                    
                }
                 printf("\n\nDelete SucessFully!");
                num--;
                
            }
        
      
    }

    
}

void menu()
{
    int select;
    while (TRUE)
    {
        printf("\n\n\t\t\t\t\t1. Add Pateint");
        printf("\n\t\t\t\t\t2. View Pateint");
        printf("\n\t\t\t\t\t3. Search Pateint");
        printf("\n\t\t\t\t\t4. Edit Pateint");
        printf("\n\t\t\t\t\t5. Discharge Pateint");
        printf("\n\t\t\t\t\t6. Exit");

        printf("\n\n\t\t\t\t\t Select Option : ");
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            system("cls");
            addPateint();
            break;

        case 2:
            system("cls");
            viewPateint();
            break;

        case 3:
            system("cls");
            searchPateint();
            break;

        case 4:
            system("cls");
            editPateint();
            break;

        case 5:
           dischargePateint();
            break;
        case 6:
            write();
            exit(0);
        default:
            printf("\n\n\t\t\t\t\tEnter valid option");
            break;
        }
    }
    read();
}

void bar()
{

    for (int i = 0; i < 20; i++)
    {
        printf("\xDB");
        Sleep(60);
    }
}

void askpassword()
{
    printf("\n\n\n\t\t\t\t\tEnter User Name : ");
    char user[20] = {"abdul"};
    char checkUser[20];
    int i = 0;
    char ch;
    while (ch != 13)
    {
        ch = getch();
        if (ch != 13 && ch != 8)
        {
            printf("%c", ch);
            checkUser[i] = ch;
            i++;
        }
        else if ((ch == 8) && (i > 0))
        {

            printf("%c", '\b');

            i--;
        }
    }
    checkUser[i] = '\0';
    // printf("%s", checkUser);
    char pass[20] = {"rahman"};
    char checkPass[20];

    printf("\n\t\t\t\t\tEnter a password : ");
    char c;

    i = 0;
    while (c != 13)
    {
        c = getch();
        //    printf("%d\n",i);

        if (c != 13 && c != 8)
        {
            printf("%c", '*');
            checkPass[i] = c;
            i++;
        }

        else if ((c == 8) && (i > 0))
        {

            printf("%c", '\b');
            // c='\0';
            // printf("%c",c);
            i--;
        }
    }
    pass[i] = '\0';
    // printf("%s",checkPass);
    if ((strcmp(pass, checkPass) == 0) && (strcmp(checkUser, user) == 0))
    {
        printf("\n\n\t\t\t\t\tLogin Sucessfull!\n");
        Sleep(1500);
        system("cls");
        menu();
    }
    else
    {
        printf("\n\n\t\t\tInvalid User Name or Password is Incorrect ! TrY Again\n");
        Sleep(1000);
        system("cls");
        askpassword();
    }
}

int main()
{
    read();
    char hospitalName[40] = {"Rahman Multi - Speciality Hospital"};
    int length;
    length = strlen(hospitalName);
    // print Bar
    printf("\n\n\n");
    bar();
    printf(" ");
    for (int i = 0; i < length; i++)
    {
        printf("%c ", hospitalName[i]);
        Sleep(60);
    }
    bar();
    
    askpassword();
    return 0;
}