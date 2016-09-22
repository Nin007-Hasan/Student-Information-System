#include <iostream>
#include <fstream>

using namespace std;


int main()
{
     string name, dummy;
     int number, i, age;
     ofstream fout;

     cout<<"How many names do you want to add?";
     cin>>number;
     getline(cin,dummy);

     fout.open("name_age.dat",ios::app);    // open file for appending
     //assert (!fout.fail( ));

     for(i=1; i<=number; i++)
     {
         cout<<"Enter the name:  ";
         getline(cin,name);
         cout<<"Enter age:  ";
         cin>>age;
//         getline(cin,age);

         fout<<name<<endl;   //send to file
         fout<<age<<endl;
     }
     fout.close( );       //close file
//     assert(!fout.fail( ));
     return 0;
}
