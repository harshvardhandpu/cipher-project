#include<iostream>
#include<cstring>

using namespace std;

struct user_Storage{
    string email;
    string password;
    string name;
    

};
struct employee_Storage{
    string name;
    string Empid;
    int rating;
};
struct bank_Storage{
    string ifc;
    string upi;
};
struct book_Storage{
    string location[100];
    string destination[100];

};


class Storage{
    protected:

   static  struct user_Storage *u1;
   static struct book_Storage *b1;
   static struct bank_Storage* bnk1; 
    static int bnkCount;
    static int userCount;
    static int bookCount;  


    public:
    Storage(){
        u1=new user_Storage[100];
        b1=new book_Storage[100];
        bnk1= new bank_Storage[100];

    }
    int get(){

    }

};
int Storage::bnkCount;
int Storage::userCount;
int Storage::bookCount;
book_Storage* Storage::b1;
bank_Storage* Storage::bnk1;
user_Storage* Storage::u1;

class User: protected Storage{
       public:

       void userEntry(){
           int c=0;
           
           do{
                cout<<"\n1.Sign up\n2.Login\n3.End\n";
              switch(c)
               {
                  case 1:
                     signUp();
                   break;
                  case 2:
                       login();
                  break;
                  case 3:
                       exit(0);
                  break;
                  default:
                   cout<<"\nEnter Valid Input!";
                   break;
               }
            }while(c>=0);
        }

        void signUp(){
            // userCount++;

                string temporaryPassword;
                cout<<"\n Name:";
                getline(cin,u1[userCount].name);
                cout<<"\n\n Email:";
                getline(cin,u1[userCount].email);
                cout<<"\n\n Password: ";
                getline(cin,u1[userCount].password);
                cout<<"\n\n Confirm Password: ";
                getline(cin,temporaryPassword);
                if(u1[userCount].password==temporaryPassword){
                        login();
                }
        }
        void login(){
            string temporary_Email;
            string temporary_password;
            cout<<"\n\nEmail: ";
            cin>>temporary_Email;
            if(u1[userCount].email==temporary_Email){
                cout<<"\nPassword: ";
                cin>>temporary_password;
                if(u1[userCount].password==temporary_password)
                {
                    cout<<"\nLogin Succesfull";
                    landingPage();
                }

            }
            else{
                cout<<"Invalid Email";
                login();
            }

        }
        void landingPage(){
          char e;
      
          cout<<"\n _____________________";
          cout<<"\n|1.menu               |";
          cout<<"\n|`````````````````````|";
          cout<<"\n|  PUNE  ----->  LA   |";
          cout<<"\n|  5:40       20:40   |";
          cout<<"\n|  PRICE: $655!!      |";
          cout<<"\n|  MUM  -----> QATAR  |";
          cout<<"\n|  7:40       23:40   |";
          cout<<"\n|  PRICE: $569 !!     |";
          cout<<"\n|  MUM  -----> MOSCOW |";
          cout<<"\n|  6:40        22:40  |";
          cout<<"\n|  PRICE: $739 !!     |";
          cout<<"\n|                     |";
          cout<<"\n ---------------------";
          cout<<"\n|        ....         |";
          cout<<"\n| /     |    |      \\ | ";
          cout<<"\n| \\     |    |      / | ";
          cout<<"\n|        ````         |";
          cout<<"\n ---------------------";
          cout<<"\n   MENU(Y/N): ";
          cin>>e;
          if (e == 'y' || e == 'Y')
              menu();
          else
              landingPage();            
        }
        void menu(){
            for (int i = 0; i >= 0; i++)
            {
                 int cho;
                 char e;
                 cout<<"\n _____________________";
                 cout<<"\n|        menu         |";
                 cout<<"\n|`````````````````````|";
                 cout<<"\n|  1.Home             |";
                 cout<<"\n|                     |";
                 cout<<"\n|  2.Booking          |";
                 cout<<"\n|                     |";
                 cout<<"\n|  3.Profile          |";
                 cout<<"\n|                     |";
                 cout<<"\n|  4.Logout           |";
                 cout<<"\n|                     |";
                 cout<<"\n ---------------------";
                 cout<<"\n|        ....         |";
                 cout<<"\n| /     |    |      \\ | ";
                 cout<<"\n| \\     |    |      / | ";
                 cout<<"\n|        ````         |";
                 cout<<"\n ---------------------";
                 cout<<"\nEnter Choice: ";
                     cin>>cho;
                     switch (cho)
                    {
                     case 1:
                         landingPage();
                         break;
            
                     case 2:
                         booking();
                         break;
            
                         // case 3:
                         // Profile();
                         // break;
            
                         // case 4:
                         
                         // exit(0);
                         // break;
            
                     default:
                         cout<<"\n joke mat kar thik se dal option";
                         break;
                    }
            }
        }
        void booking();
        void profile();
        
};

void User::booking(){
 
}

void User::profile(){

}




int main(){
    int c=0;
    

    return 0;
}

