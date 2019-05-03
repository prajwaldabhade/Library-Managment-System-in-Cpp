#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
void viewbook(string ,int );
void sear(string );
void issue();
int view(string );
void justv();
void retur();
void add();
void chgpass();
string pass;
string pa="Pat";
int main()
{
    int ch,c,yr,cho,coun;
    string br,bn,b;
    do
    {
       lab: cout<<"\n****************WELCOME*****************\n\n";
        cout<<"Enter your choice";
        cout<<"\n\n1.STUDENT";
        cout<<"\n\n2.LIBRARIAN";
        cout<<"\n\n3.EXIT\n\n";
        cin>>ch;
        switch(ch)
        {
            case 1:system("cls");
                   stu:cout<<"\n\nEnter your choice: ";
                   cout<<"\n\n1.View Books";
                   cout<<"\n\n2.Search Book";
                   cout<<"\n\n3.Go Back\n\n";
                   cin>>c;
                   switch(c)
                   {
                       case 1:system("cls");
                              cout<<"\nEnter your branch: ";
                              cin>>br;
                              cout<<"\n\nEnter your Year: ";
                              cin>>yr;
                              system("cls");
                              viewbook(br,yr);
                              goto stu;
                              break;
                   case 2:system("cls");
                        cout<<"\nEnter the Book name\n\n";
                        cin>>bn;
                        sear(bn);
                        goto stu;
                        break;
                        case 3:system("cls");
                        goto lab;
                        break;
                   }
                   case 2:system("cls");
                   coun=3;
                   reset:cout<<"Enter the password\n\n";
                   cin>>pass;
                   if(pass==pa)
                   {
                       system("cls");
                   libr:cout<<"\n\nEnter your choice: ";
                   cout<<"\n\n1.View Books";
                   cout<<"\n\n2.Search Book";
                   cout<<"\n\n3.Issue Book";
                   cout<<"\n\n4.Return Book";
                   cout<<"\n\n5.Add Book";
                   cout<<"\n\n6.Change Password";
                   cout<<"\n\n7.Go Back\n\n";
                   cin>>cho;
                   switch(cho)
                   {
                       case 1:system("cls");
                              justv();
                              goto libr;
                              break;
                        case 2:system("cls");
                            cout<<"\nEnter the Book name\n\n";
                           cin>>b;
                        sear(b);
                        goto libr;
                               break;
                        case 3:system("cls");
                               issue();
                                goto libr;
                               break;
                        case 4:system("cls");
                               retur();
                                goto libr;
                               break;
                        case 5:system("cls");
                               add();
                               goto libr;
                                break;
                        case 6:system("cls");
                               chgpass();
                               goto lab;
                               break;
                        case 7:system("cls");
                                   goto lab;
                               break;
                        default:system("cls");
                                cout<<"\nWrong Entry\n\n";
                                cout<<"\n\nPress any key to continue\n";
                                getch();
                                system("cls");
                                goto libr;
                                break;
                   }
                   }
                   else
                   {
                       if(coun>=2)
                       {
                       cout<<"\n\nWrong Password!!!!!!!!!!!\n\n\n";
                       coun--;
                       goto reset;
                       }
                       else

                       {
                           system("cls");
                           cout<<"\nxxxxxxxxxxxxxxxxxx Access Denied xxxxxxxxxxxxxxxxxxxx\n";
                           cout<<"\n\nPress any key to continue\n";
                           getch();
                           system("cls");
                       }
                   }
                   break;
                   case 3:system("cls");
                          cout<<"\n************THANKYOU******************\n\n";
                          exit(0);
                   }


        }while(1);
    return 0;
    }
void viewbook(string bran,int yea)
{
    int co;
    if(bran=="Computer" && yea==2)
    {
        fir:cout<<"\nEnter your choice";
        cout<<"\n\n1.M3";
        cout<<"\n\n2.DSF";
        cout<<"\n\n3.CG";
        cout<<"\n\n4.FDC";
        cout<<"\n\n5.SSEE\n\n";
        cin>>co;
        switch(co)
        {
            case 1:system("cls");
                cout<<"Engineering Mathematics 3";
                cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
            break;
            case 2:system("cls");
                cout<<"Advanced Data Structures";
                cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
            break;
            case 3:system("cls");
                cout<<"Computer Graphics for Engineers";
            cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
            break;
            case 4:system("cls");
                cout<<"Networking Frouzan";
            cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
            break;
            case 5:system("cls");
                cout<<"Social Science and Economics for Engineers";
            cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
            break;
            default: system("cls");
                cout<<"Wrong Entry";
            cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
                goto fir;
            break;
        }

    }
}
void sear(string bookn)
{
    if(bookn=="ADS"||bookn=="advanced data structures")
    {
        cout<<"\n\nBook found";
        cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
    }
    else if(bookn=="CGFE"||bookn=="Computer Graphics for Engineers")
    {
       cout<<"\n\nBook found";
       cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
    }
       else if(bookn=="EM3"||bookn=="Engineering Mathematics 3")

      {
    cout<<"\n\nBook found";
     cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
      }
       else if(bookn=="NET"||bookn=="Networking")
        {
         cout<<"\n\nBook found";
         cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
        }
        else if(bookn=="SSEE"||bookn=="Social Science and Economics for Engineers")
          {
              cout<<"\n\nBook found";
          cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
          }
       else
       {
          cout<<"Book not found";
          cout<<"\n\nPress any key to continue";
                 getch();
                system("cls");
}
}
void issue()
{
    string book;
    int id;
    cout<<"\nEnter Book name\n\n";
    cin>>book;
    cout<<"\n\nEnter Book ID\n\n";
    cin>>id;
    if(view(book))
        cout<<"\n\nBook issued successfully\n";
        else
          cout<<"\n\nBook not available\n";
          cout<<"\n\nPress any key to continue\n";
          getch();
          system("cls");
}
int view(string bookn)
{
if(bookn=="ADS"||bookn=="advanced data structures")
    {
        return 1;
    }
    else if(bookn=="CGFE"||bookn=="Computer Graphics for Engineers")
    {
      return 1;
    }
       else if(bookn=="EM3"||bookn=="Engineering Mathematics 3")

      {
   return 1;
      }
       else if(bookn=="NET"||bookn=="Networking")
        {
         return 1;
        }
        else if(bookn=="SSEE"||bookn=="Social Science and Economics for Engineers")
          {
              return 1;
          }
       else
       {
          return 0;
}
}
void justv()
{
    system("cls");
    cout<<"\n1.Social Science and Economics for Engineers\n\n";
    cout<<"\n2.Networking\n\n";
    cout<<"\n3.Engineering Mathematics 3\n\n";
    cout<<"\n4.Computer Graphics for Engineers\n\n";
    cout<<"\n5.advanced data structures\n\n";
    cout<<"\nPress any key to continue\n\n";
    getch();
    system("cls");
}
void retur()
{
    string boo;
    int ids;
    cout<<"\nEnter Book name\n\n";
    cin>>boo;
    cout<<"\n\nEnter Book ID\n\n";
    cin>>ids;
    cout<<"\n\nBook returned successfully\n";
     cout<<"\n\nPress any key to continue\n";
          getch();
          system("cls");
}
void add()
{
  char bo[100];
    int i;
    fflush(stdin);
    cout<<"\nEnter Book name\n\n";
    cin.getline(bo,100);
   cout<<"\n\nEnter Book ID\n\n";
cin>>i;
    cout<<"\n\nBook added successfully\n";
     cout<<"\n\nPress any key to continue\n";
          getch();
          system("cls");
}
void chgpass()
{
    string p;
    cout<<"\nEnter the new password\n\n";
    cin>>pa;
    cout<<"\n\nConfirm the new password\n\n";
    cin>>p;
    if(pa==p)
        cout<<"\n\nPassword reset successfully\n";
    pass=pa;
    cout<<"\n\nPress any key to continue\n";
          getch();
          system("cls");

}
