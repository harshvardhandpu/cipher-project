#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sign
{
    int no;
    char username[16];
    char password[16];
    char phone[10];
} s;
s s1;
//harsh

// storage
typedef struct storage
{
    int sin; // no of user
    char username[16];
    char password[16];
    char phone[10];
    int tick; // no of tickets
    int tickets[100];
    char* status[100];

} st;
st sw;
void login(s *);
void signing(s *);
typedef struct Bank{
    int no;
    char* acc[100];
    char* ifc[100];

}bk;
typedef struct bok
{
    char destination[12];
    char location[12];
} b;
b b1;

void booking();
void book();
void booked();
void cancel();

typedef struct flight
{
    s;
    char location[12];
    char destination[12];
    char price;
    char time1, time2;
    int tick;
} fl;

 fl f1;
void print(fl *, int i);
char logo(char);
void landing();
void fli(b *);
void search(b *, fl *);

// booked

void decision(char, int);
// ticket
void payment();

void menu();
void account();
int main()
{
    char f;
    char e;
    e = logo(e);
    if (e == ' ')
    {
        account();
    }
    landing();

    return 0;
}
void account()
{
    int b = 0;
    for (int i = 0; b != 2; i++)
    {
        s *ptr = &s1;
        int n;
        int a = 1;

        printf("\n1.sign in.");
        printf("\n2.Login.");

        printf("\nENter the choice: ");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            signing(ptr);
            break;

        case 2:
            login(ptr);
            if (ptr->no == 1)
            {

                printf("\n\n!!!Login Failed!!!\n");
                printf("\n\n!!Password to yad rakh kya Gunda Banega re Tu!!\n");
                ptr = NULL;
            }
            else
            {
                a++;
                st str[a];
                str[a].username == ptr->username;
                str[a].password == ptr->password;
                str[a].phone == ptr->phone;
                str->tick = 0;
                printf("\n\n!!!Sucessfully loged in!!!\n");
                printf("\n\n!! Amdar damdar chanakya!!\n");
            }
            break;
        }
    }
}
char logo(char e)
{

    printf("\n _______________");
    printf("\n|               |");
    printf("\n|   _________   |");
    printf("\n|  |    *    |  |");
    printf("\n|  |    *    |  |");
    printf("\n|  |   * *   |  |");
    printf("\n|  | *  *  * |  |");
    printf("\n|  |    *    |  |");
    printf("\n|  |  *   *  |  |");
    printf("\n|  |_________|  |");
    printf("\n|    INDIGO     |");
    printf("\n`````````````````");

    printf("\nENTER: SPACE ");
    scanf("%c", &e);
    return e;
}
void landing()
{
    char e;

    printf("\n _____________________");
    printf("\n|1.menu               |");
    printf("\n|`````````````````````|");
    printf("\n|  PUNE  ----->  LA   |");
    printf("\n|  5:40       20:40   |");
    printf("\n|  PRICE: $655!!      |");
    printf("\n|  MUM  -----> QATAR  |");
    printf("\n|  7:40       23:40   |");
    printf("\n|  PRICE: $569 !!     |");
    printf("\n|  MUM  -----> MOSCOW |");
    printf("\n|  6:40        22:40  |");
    printf("\n|  PRICE: $739 !!     |");
    printf("\n|                     |");
    printf("\n ---------------------");
    printf("\n|        ....         |");
    printf("\n| /     |    |      \\ | ");
    printf("\n| \\     |    |      / | ");
    printf("\n|        ````         |");
    printf("\n ---------------------");
    printf("\n   MENU(Y/N): ");
    scanf(" %c", &e);
    if (e == 'y' || e == 'Y')
        menu();
    else
        landing();
}
void menu()
{
    for (int i = 0; i >= 0; i++)
    {
        int cho;
        char e;
    printf("\n _____________________");
    printf("\n|        menu         |");
    printf("\n|`````````````````````|");
    printf("\n|  1.Home             |");
    printf("\n|                     |");
    printf("\n|  2.Booking          |");
    printf("\n|                     |");
    printf("\n|  3.Profile          |");
    printf("\n|                     |");
    printf("\n|  4.Logout           |");
    printf("\n|                     |");
    printf("\n ---------------------");
    printf("\n|        ....         |");
    printf("\n| /     |    |      \\ | ");
    printf("\n| \\     |    |      / | ");
    printf("\n|        ````         |");
    printf("\n ---------------------");
    printf("\nEnter Choice: ");
        scanf("%d", &cho);
        switch (cho)
        {
        case 1:
            landing();
            break;

        case 2:
            booking();
            break;

            // case 3:
            // Profile();
            // break;

            // case 4:
            // logout();
            // break;

        default:
            printf("\n joke mat kar thik se dal option");
            break;
        }
    }
}
// void profile()
// {

// }
// void logout()
// {

// }
void booking()
{

    for (int i = 0; i >= 0; i++)
    {
        int b;
        printf("\n1.BOOK Flight");
        printf("\n2.BOOKed Flight");
        printf("\n3.Cancel Flight\n");

        printf("\nChoice: ");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            book();
            break;

        case 2:
            booked();
            break;

        case 3:
            cancel();
            break;
        }
    }
}
void book()
{
    getchar();
    b *bk = &b1;
    printf("Location: ");
    scanf("%[^\n]s", bk->location);
    printf("\n");
    printf("Destination: ");
    scanf(" %[^\n]s", bk->destination);
    fli(bk);
}
void booked()
{
    st sb;

    for(int i=0;i<sb.tick;i++)
    {
        printf("\n      Username: %s        Phone no: %s\n",sb.username,sb.phone);
        printf("\n %s  ----->  %s ", flights[i].location, flights[i].destination);
        printf("\nStatus: %s",sb.status);
        printf("\nPayment status:%s",sb.status);

    }
}
void cancel()
{
}

void signing(s *ptr)
{

    getchar();
    printf("\n");
    printf("Username: ");
    scanf(" %s", ptr->username);
    printf("\nPassword: ");
    scanf(" %s", ptr->password);
}
void login(s *ptr)
{
    s user;
    int flag = 0;
    printf("\nUsername: ");
    scanf(" %s", user.username);

    for (int i = 0; i < 16; i++)
    {
        if (strcmp(user.username, ptr->username) == 1)
        {
            // printf("\nhi");
            flag = 1;
        }
    }

    // printf(" %s", user.username);
    // printf(" %s", ptr->username);

    if (flag != 1)
    {
        printf("\nPassword: ");
        scanf(" %s", user.password);
        for (int i = 0; i < 16; i++)
        {
            if (strcmp(user.password, ptr->password) == 1)
            {
                flag = 1;
            }
        }
    }
    ptr->no = flag;
}
static fl flights[16];
void fli(b *bk)
{

    // flights=&f1;

    strcpy(flights[0].location, "mumbai");
    strcpy(flights[0].destination, "new york");
    strcpy(flights[1].location, "delhi");
    strcpy(flights[1].destination, "london");
    strcpy(flights[2].location, "bangalore");
    strcpy(flights[2].destination, "dubai");
    strcpy(flights[3].location, "chennai");
    strcpy(flights[3].destination, "singapore");
    strcpy(flights[4].location, "kolkata");
    strcpy(flights[4].destination, "tokyo");
    strcpy(flights[5].location, "hyderabad");
    strcpy(flights[5].destination, "paris");

    strcpy(flights[6].location, "pune");
    strcpy(flights[6].destination, "san francisco");
    strcpy(flights[7].location, "ahmedabad");
    strcpy(flights[7].destination, "zurich");
    strcpy(flights[8].location, "lucknow");
    strcpy(flights[8].destination, "berlin");
    strcpy(flights[9].location, "jaipur");
    strcpy(flights[9].destination, "sydney");

    

    strcpy(flights[10].location, "mumbai");
    strcpy(flights[10].destination, "amsterdam");
    strcpy(flights[11].location, "delhi");
    strcpy(flights[11].destination, "rome");
    strcpy(flights[12].location, "bangalore");
    strcpy(flights[12].destination, "bangkok");
    strcpy(flights[13].location, "chennai");
    strcpy(flights[13].destination, "toronto");
    strcpy(flights[14].location, "kolkata");
    strcpy(flights[14].destination, "beijing");
    strcpy(flights[15].location, "hyderabad");
    strcpy(flights[15].destination, "istanbul");
    search(bk, flights);
}

void search(b *bk, fl *flights)
{
    int flag = 1;

    int i;
    for (int i = 0; i < 16; i++)
    {
        if (strcmp(bk->location, flights[i].location) == 0 && strcmp(bk->destination, flights[i].destination) == 0)
        {
            flag = 1;
            print(flights, i);
            break;
        }
        else
            flag = 0;
    }
    if (flag == 0)
    {
        printf("\nNo matching flight found.");
        getchar();
        book();
    }
}

void print(fl *flights, int i)
{
    char ed;
    printf("\n%s  ----->  %s ", flights[i].location, flights[i].destination);

    switch (i)
    {
    case 0:
        printf("\n  05:40    (8.3 hrs)   20:40");
        printf("\n  PRICE: $655!!");
        break;
    case 1:
        printf("\n  08:00    (7 hrs)   12:30");
        printf("\n  PRICE: $541!!");
        break;
    case 2:
        printf("\n  10:00    (4 hrs)   11:30");
        printf("\n  PRICE: $400!!");
        break;
    case 3:
        printf("\n  08:00    (4.5 hrs)   14:00");
        printf("\n  PRICE: $460!!");
        break;
    case 4:
        printf("\n  09:00    (8 hrs)   19:00");
        printf("\n  PRICE: $1100!!");
        break;
    case 5:
        printf("\n  07:00    (10 hrs)   12:30");
        printf("\n  PRICE: $1400!!");
        break;
    case 6:
        printf("\n  10:00    (18 hrs)   08:30");
        printf("\n  PRICE: $2200!!");
        break;
    case 7:
        printf("\n  08:00    (9 hrs)   11:30");
        printf("\n  PRICE: $1300!!");
        break;
    case 8:
        printf("\n  09:00    (10 hrs)   12:30");
        printf("\n  PRICE: $1400!!");
        break;
    case 9:
        printf("\n  08:00    (13 hrs)   20:30");
        printf("\n  PRICE: $2000!!");
        break;
    case 10:
        printf("\n  08:00    (9 hrs)   10:30");
        printf("\n  PRICE: $1300!!");
        break;
    case 11:
        printf("\n  09:00    (8 hrs)   11:30");
        printf("\n  PRICE: $1300!!");
        break;
    case 12:
        printf("\n  10:00    (4 hrs)   15:30");
        printf("\n  PRICE: $400!!");
        break;
    case 13:
        printf("\n  08:00    (20 hrs)   11:30");
        printf("\n  PRICE: $2400!!");
        break;
    case 14:
        printf("\n  10:00    (5 hrs)   16:30");
        printf("\n  PRICE: $900!!");
        break;
    case 15:
        printf("\n  09:00    (7 hrs)   11:30");
        printf("\n  PRICE: $1100!!");
        break;
    default:
        printf("\n  Flight details not available.");
        break;
    }

    printf("\nBook (Y/N): ");
    getchar();
    scanf("%c", &ed);
    decision(ed, i);
}

void decision(char ed, int i)
{
    st ticke;

    if (ed == 'y' || ed == 'Y')
    {
        ticke.tickets[ticke.tick] = i;
        ticke.tick++;
        ticke.status[ticke.tick]="Booked";
        // payment();
    }
    else
        book();
}
void payment()
{
    int p;
    printf("\n1.Bank method");
    printf("\n2.UPi method");
    scanf("%d",&p);
    switch(p)
    {
        case 1:
            bank();
            break;
        case 2:
            upi();
            break;
    }

}
void bank()
{
    bk bnk;
    if(bnk.no==0)
    {
      printf("\nAccount number:");
      scanf("%s",bnk.acc[bnk.no]);
      printf("\nIFC: ");
      scanf("%s",bnk.ifc[bnk.no]);
    }
}
