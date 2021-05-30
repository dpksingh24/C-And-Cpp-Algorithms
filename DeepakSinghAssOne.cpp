#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include<iomanip>
using namespace std;
void input();
void searchname();
void searchage();
void searchsalary();
void quit();
void displayall();
void search();
void deleteFile();
void editFile();
void searchiddelete();

int main(){   
    system ("cls");
    system ("color B");
    int choice;
   cout<<endl;
   cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;
       cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;  
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"\t \t \t \t \t \t \t \t FOLLOW MY YOUTUBE CHANNEL :- ITSTUDIES "<<endl;
   cout<<"\t \t \t \t \t \t \t \t DEVELOPED BY VIKAS (SHAYAAZ) ";
   cout<<endl;
   cout<<endl;    
   cout << "\t \t \t \t \t \t \t \t 1.ENTER THE DETAILS " << endl;
       cout << "\t \t \t \t \t \t \t \t 2.SEARCH THE DETAILS" << endl;
       cout << "\t \t \t \t \t \t \t \t 3.CLEAR LOG" << endl;
       cout << "\t \t \t \t \t \t \t \t 4.EDIT FILE" << endl;
       cout << "\t \t \t \t \t \t \t \t 5.EXIT" << endl;
       cout<<endl;
       cout<<endl;
       cout<<endl;
       cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;
       cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;
       cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;
   cout<<endl;
       cout<<"\t \t \t \t \t \t \t \t Enter your choice : ";
       cin >> choice;
 
switch (choice)
{
       case 1:
            input();
            break;
       case 2:
            search();
            break;
       case 3:
            deleteFile();
            break;
       case 4:
            editFile();
            break;
       case 5:
            quit();
            break;
            
cin.get();
    }
}

 
void editFile()
{
 string name, input, newName, decision;
 int age,id;
 double salary;
 ifstream employee("newemployee.txt");
 if (!employee.eof())
   employee >> name >> age >> salary >> id;
 system("cls");
 cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;
     cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;  
 cout<<endl;
 cout<<"\t \t \t \t \t \t \t \t FOLLOW MY YOUTUBE CHANNEL :- ITSTUDIES "<<endl;
     cout<<"\t \t \t \t \t \t \t \t DEVELOPED BY VIKAS (SHAYAAZ) ";
 cout<<endl;
 cout << "\t \t \t \t \t \t \t \t ENTER THE NAME OF THE EMPOLYEE :";
 cin >> input;
 cout<<endl;
 
 if (input == name)
 {
      
     cout << name << ' ' << age << ' ' << salary << id <<endl;
     cout << "\t \t \t \t \t \t \t \t Is this the correct employee[y][n]:";
     cin >> decision;
     if (decision == "y")
 {
     cout << "\t \t \t \t \t \t \t \t ENTER THE NEW NAME :";
     cin >> newName;
     name = newName;      
     } 
     employee.close();
 }
     
     ofstream employee2("newemployee.txt", ios::app);
     employee2 << name << ' ' << age << ' ' << salary << id <<endl;
     employee2.close();
     system("pause");
     main();
}

void input()
{       
 string name;
 int age,id; 
 long int salary;
 ofstream newemployee("newemployee.txt", ios::app);
 system("cls");
 cout<<endl;
 cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;
     cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;  
 cout<<endl;
 cout<<"\t \t \t \t \t \t \t \t FOLLOW MY YOUTUBE CHANNEL :- ITSTUDIES "<<endl;
     cout<<"\t \t \t \t \t \t \t \t DEVELOPED BY VIKAS (SHAYAAZ) ";
 cout<<endl;
 cout<<endl;
 
 cout << "\t \t \t \t \t \t \t \t Enter the new employee's name : ";
 cin >> name;
 cin.sync();
 
 cout << "\t \t \t \t \t \t \t \t Enter the employee's age : ";
 cin >> age;
 
 cout << "\t \t \t \t \t \t \t \t Enter the employee's yearly salary : ";
 cin >> salary;
 
 cout << "\t \t \t \t \t \t \t \t Enter the employee's  ID : ";
 cin >> id;
         
 newemployee << name << ' ' << age << ' ' << salary <<' '<< id <<endl;     
 newemployee.close(); 
 main();
}

void searchname()
 {
     ifstream employee("newemployee.txt");
     string name,strname;
     int age,id ;
     int fage;
     long int salary;
     system ("CLS");
     cout<<endl;
     cout<<"\t \t \t \t \t \t \t \t FOLLOW MY YOUTUBE CHANNEL :- ITSTUDIES "<<endl;
         cout<<"\t \t \t \t \t \t \t \t DEVELOPED BY VIKAS (SHAYAAZ) ";
     cout<<endl;
     cout<<endl;
 cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;
 cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;  
 cout<<endl;
     cout << "\t \t \t \t \t \t \t \t Enter the age of an employee : ";
     cin >> strname;
     cout<<endl;
 while (employee >> name >> age >> salary >> id)
 {
            if(strname==name)
            {
            cout << "\t \t \t \t \t \t \t \t Employee(s) found" << endl;
            cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;  
        cout<<"ID:"<<id<<setw(45)<<" Name:"<<name<<setw(45)<<"Age:" <<age<<setw(45)<<"Salary:"<< salary<<setw(45)<<endl;
cout<<endl;	            
        cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;  
            cout<<endl;
cout<<endl;
    }
     }
            if(strname!=name)
    {
    	        cout << "\t \t \t \t \t \t \t \t No employee(s) found";
    	        cout<<endl;
}
     system ("pause");
     cin.get();
     main();
  }


void searchage()
 {
     ifstream employee("newemployee.txt");
     string name,strname;
     int age,id ;
     int fage;
     long int salary;
     system ("CLS");
     cout<<"\t \t \t \t \t \t \t \t FOLLOW MY YOUTUBE CHANNEL :- ITSTUDIES "<<endl;
         cout<<"\t \t \t \t \t \t \t \t DEVELOPED BY VIKAS (SHAYAAZ) ";
     cout<<endl;
     cout<<endl;
     cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;
 cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;  
 cout<<endl;
     cout << "\t \t \t \t \t \t \t \t Enter the age of an employee : ";
     cin >>fage;
     cout<<endl;
 while (employee >> name >> age >> salary >> id)
 {
            if(fage==age)
            {
            cout << "\t \t \t \t \t \t \t \t Employee(s) found" << endl;
            cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;  
        cout<<"ID:"<<id<<setw(45)<<" Name:"<<name<<setw(45)<<"Age:" <<age<<setw(45)<<"Salary:"<< salary<<setw(45)<<endl;
cout<<endl;	            
        cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;  
            cout<<endl;
cout<<endl;
    }
     }
            if(fage!=age)
    {
    	        cout << "\t \t \t \t \t \t \t \t No employee(s) found";
    	        cout<<endl;
}
     system ("pause");
     cin.get();
     main();
  }

 	void searchid()
 {
     ifstream employee("newemployee.txt");
     string name;
     int age,id ;
     int fid;
     long int salary;
     system ("CLS");
     cout<<"\t \t \t \t \t \t \t \t FOLLOW MY YOUTUBE CHANNEL :- TECHGURU TECHNOLIC "<<endl;
         cout<<"\t \t \t \t \t \t \t \t DEVELOPED BY VIKAS (SHAYAAZ) ";
     cout<<endl;
     cout<<endl;
     cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;
 cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;  
     cout << "\t \t \t \t \t \t \t \t Enter the ID of an employee : ";
     cin >> fid;
     cout<<endl;
     while (employee >> name >> age >> salary >> id)
 {        
            if(fid==id)
            {
            cout << "\t \t \t \t \t \t \t \t Employee(s) found" << endl;
cout<<"======================= ============================== ============================== ============================== ============================== ========================="<< endl;  
        cout<<"ID:"<<id<<setw(45)<<" Name:"<<name<<setw(45)<<"Age:" <<age<<setw(45)<<"Salary:"<< salary<<setw(45)<<endl;
cout<<endl;	            
        cout<<"====================== ============================== ============================== ============================== ============================== =========================="<< endl;  
            cout<<endl;
    }	 
     }
           if (fid != id)
   {
                    cout << "\t \t \t \t \t \t \t \t No employee(s) found"<< endl;
                    cout<<endl;       
                     
           }  
     system ("pause");
     cin.get();
     main();
  }

void searchsalary()
 {
     ifstream employee("newemployee.txt");
     string name;
     int age,id ;
     int fid;
     long int salary;
     long int fsalary;
     system ("CLS");
     cout<<"\t \t \t \t \t \t \t \t FOLLOW MY YOUTUBE CHANNEL :- TECHGURU TECHNOLIC "<<endl;
...
