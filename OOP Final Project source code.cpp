#include <iostream>
#include <ctime>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include<string>
//#include<stdlib.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////
void screenheader();           // welcome screen function declaration
void welcomenote();            // welcome note function declaration
void load();                  //loading function declaration
void nextline();             //couple of lines space function declaration
///////////////////////////////////////////////////////////////////////////////////////////////////

class Admin
{
	protected:
	string optn;
	string ReadData;
	private:
	string name,fname,program,education,room1,room2;
	int rollnum;
	char gender,day1[10],day2[10],timeIn1[5],timeOut1[5],timeIn2[5],timeOut2[5];
	string date,address,formNumber,corseName;
	ofstream stuData,TchrData,stuTime,TchrTime;
	
	
	public:
	Admin() { }
		void Student_data()     //student data function
    {
    	   stuData.open("StudentData.txt",ios::app);
            char cho;
			reproll:
			system("CLS");
			do
			{
			cout<<"Roll Number should be between 1 to 350."<<endl;
			
			cout<<"Roll Number:"<<setw(13)<<" ";
			cin>>rollnum;
			stuData<<"Roll Number:"<<setw(13)<<" "<<rollnum<<endl;
			if(rollnum<=350&&rollnum>=1)
			{
				cout<<"Name:"<<setw(20)<<" ";
				cin.ignore();
				getline(cin,name);
				stuData<<"Name:"<<setw(20)<<" "<<name<<endl; 
				
				cout<<"Father Name:"<<setw(13)<<" ";
				getline(cin,fname); 
				stuData<<"Father Name:"<<setw(13)<<" "<<fname<<endl; 
				
				cout<<"Program:"<<setw(17)<<" ";
				getline(cin,program);
				stuData<<"Program:"<<setw(17)<<" "<<program<<endl;
			
				cout<<"Joining Date:"<<setw(12)<<" ";
				getline(cin,date); 
				stuData<<"Joining Date:"<<setw(12)<<" "<<date<<endl;
				
				cout<<"Permanent Address:"<<setw(7)<<" ";
				getline(cin,address);
				stuData<<"Permanent Address:"<<setw(7)<<" "<<address<<endl;
				
			    cout<<"Gender:"<<setw(18)<<" ";
		    	cin.get(gender);
		    	stuData<<"Gender:"<<setw(18)<<" "<<gender<<endl;
				
				cout<<"Registration Number:"<<setw(5)<<" ";
				cin.ignore();
				getline(cin,formNumber);
				stuData<<"Registration Number:"<<setw(5)<<" "<<formNumber<<endl; 
	        }
	        else
	        {
	        	
		        cout<<"Roll Number should be between 1 to 350.\nPress any Key to Enter Agian..."<<endl;
		        getch();
		        goto reproll;
	        
	        }
	    	
			cout<<"\n------------------------------------------------------------------------------------------------\n\n";
			stuData<<"\n------------------------------------------------------------------------------------------------\n\n"; 
			
			cout<<"Want to Enter Again (Y/N):";
			cin>>cho;
			system("CLS");
	    	}while(cho=='y'||cho=='Y');
	    	Portal();
	    	stuData.close();
		}
		void Teacher_data()     //Techer data function
       {
    	   TchrData.open("TeacherData.txt",ios::app);
            char cho;
			reproll:
			system("CLS");
			do
			{
			cout<<"Please Filled all Feilds with Correct Information."<<endl;
			
				cout<<"Assign An ID:"<<setw(12)<<" ";
				cin>>rollnum;
				TchrData<<"Assign An ID:"<<setw(12)<<" "<<rollnum<<endl;
			
				cout<<"Name:"<<setw(20)<<" ";
				cin.ignore();
				getline(cin,name);
				TchrData<<"Name:"<<setw(20)<<" "<<name<<endl; 
				
				cout<<"Father Name:"<<setw(13)<<" ";
				getline(cin,fname); 
			    TchrData<<"Father Name:"<<setw(13)<<" "<<fname<<endl; 
				
				cout<<"Education:"<<setw(15)<<" ";
				getline(cin,education);
				TchrData<<"Education:"<<setw(15)<<" "<<education<<endl;
			
				cout<<"Joining Date:"<<setw(12)<<" ";
				getline(cin,date); 
				TchrData<<"Joining Date:"<<setw(12)<<" "<<date<<endl;
				
				cout<<"Permanent Address:"<<setw(7)<<" ";
				getline(cin,address);
				TchrData<<"Permanent Address:"<<setw(7)<<" "<<address<<endl;
				
			    cout<<"Gender:"<<setw(18)<<" ";
		    	cin.get(gender);
		    	TchrData<<"Gender:"<<setw(18)<<" "<<gender<<endl;
				
				cout<<"National ID Number:"<<setw(6)<<" ";
				cin.ignore();
				getline(cin,formNumber);
				TchrData<<"National ID Number:"<<setw(8)<<formNumber<<endl; 
			cout<<"\n------------------------------------------------------------------------------------------------\n\n";
			TchrData<<"\n------------------------------------------------------------------------------------------------\n\n"; 
			
			cout<<"Want to Enter Again (Y/N):";
			cin>>cho;
			system("CLS");
	    	}
			while(cho=='y'||cho=='Y');
	    	Portal();
	    	TchrData.close();
		}
		void Teacher_timetable()
			 {
			 	char cho;
			 	int x=0;
				system("cls");
				cout<<setw(110)<<"Enter Teacher Time For Class 2B:"<<endl;
				cout<<"If you want to Change Time you should have to enter again all Teacher Time Otherwise perivously Enter Overwrite.\n";
				TchrTime.open("TeacherTime.txt");	 	
			    TchrTime<<"____ ___ _____ __ ___ ____ ___ ___ ___ ____ _____ _____ ____ ____ _____ ___ _______ ______ ____ ____ ________ ________ _______ _____ _____"<<endl;
				do
				{
					cout<<setw(125)<<"\n\nPress any Key.....";
					getch();
				if(x==5)
				{
					cout<<setw(125)<<"\nMaximum Taecher In This is Class Covered.\n\nPress any Key.....";
					getch();
					TchrTime.close();
					Admin::Portal();
				}
				else
				{
				system("CLS");
				cout<<"\nEnter Teacher:";
				cin>>name;
				cout<<"\nEnter Subject:";
				cin>>corseName;
				cout<<"\nEnter Day 1:";
				cin>>day1;
				cout<<"\nEnter TimeIn for Day 1:";
				cin>>timeIn1;
				cout<<"\nEnter TimeOut for Day 1:";
				cin>>timeOut1;
				cout<<"\nEnter Location for Day 1:";
				cin.ignore();
				getline(cin,room1);
				cout<<"___________________________________________________________________________________________________________________"<<endl;
				cout<<"\nEnter Day 2:";
				cin>>day2;
				cout<<"\nEnter TimeIn for Day 2:";
				cin>>timeIn2;
				cout<<"\nEnter TimeOut for Day 2:";
				cin>>timeOut2;
				cout<<"\nEnter Location for Day 2:";
				cin.ignore();
				getline(cin,room2);
				cout<<"___________________________________________________________________________________________________________________"<<endl;
				TchrTime<<"\nTeacher:"<<name<<"\nSubject:"<<corseName<<endl<<"\nDay 1:"<<day1<<endl<<"TimeIn for Day 1:"<<timeIn1<<endl<<"TimeOut for Day 1:"<<timeOut1<<endl<<"Location for Day 1:"<<room1<<endl;
			    TchrTime<<"___________________________________________________________________________________________________________________"<<endl;
				TchrTime<<"\nSubject:"<<corseName<<endl<<"\nDay 2:"<<day2<<endl<<"TimeIn for Day 2:"<<timeIn2<<endl<<"TimeOut for Day 2:"<<timeOut2<<endl<<"Location for Day 2:"<<room2<<endl;
				TchrTime<<"____ ___ _____ __ ___ ____ ___ ___ ___ ____ _____ _____ ____ ____ _____ ___ _______ ______ ____ ____ ________ ________ _______ _____ _____"<<endl;
			    }
			    cout<<"\n\nDo You Want to Enter Again (Y/N):";
			    cin>>cho;
				x++;
		    	}while(cho=='Y'||cho=='y');
		    	TchrTime.close();
				cout<<"\nPress any Key to Return..."<<endl;
				getch();
				Portal();
				
		    }
	
  void Student_timetable()
			 {
			    
			 	char cho;
			 	int x=0;
				system("cls");
				cout<<setw(110)<<"Enter Time For Class 2B:"<<endl;
				cout<<"If you want to Change Time you should have to enter again all classes Time Otherwise perivously Enter Overwrite.\n";
				stuTime.open("StudentTime.txt");	 	
			    stuTime<<"____ ___ _____ __ ___ ____ ___ ___ ___ ____ _____ _____ ____ ____ _____ ___ _______ ______ ____ ____ ________ ________ _______ _____ _____"<<endl;
				do
				{
					cout<<setw(125)<<"\n\nPress any Key.....";
					getch();
				if(x==5)
				{
					cout<<setw(125)<<"\nMaximum Subject In This is Class Covered.\n\nPress any Key.....";
					getch();
					stuTime.close();
					Admin::Portal();
				}
				else
				{
				system("CLS");
				cout<<"\nEnter Subject:";
				cin>>corseName;
				cout<<"\nEnter Day 1:";
				cin>>day1;
				cout<<"\nEnter TimeIn for Day 1:";
				cin>>timeIn1;
				cout<<"\nEnter TimeOut for Day 1:";
				cin>>timeOut1;
				cout<<"\nEnter Location for Day 1:";
				cin.ignore();
				getline(cin,room1);
				cout<<"___________________________________________________________________________________________________________________"<<endl;
				cout<<"\nEnter Day 2:";
				cin>>day2;
				cout<<"\nEnter TimeIn for Day 2:";
				cin>>timeIn2;
				cout<<"\nEnter TimeOut for Day 2:";
				cin>>timeOut2;
				cout<<"\nEnter Location for Day 2:";
				cin.ignore();
				getline(cin,room2);
				cout<<"___________________________________________________________________________________________________________________"<<endl;
				stuTime<<"\nSubject:"<<corseName<<endl<<"\nDay 1:"<<day1<<endl<<"TimeIn for Day 1:"<<timeIn1<<endl<<"TimeOut for Day 1:"<<timeOut1<<endl<<"Location for Day 1:"<<room1<<endl;
			    stuTime<<"___________________________________________________________________________________________________________________"<<endl;
				stuTime<<"\nSubject:"<<corseName<<endl<<"\nDay 2:"<<day2<<endl<<"TimeIn for Day 2:"<<timeIn2<<endl<<"TimeOut for Day 2:"<<timeOut2<<endl<<"Location for Day 2:"<<room2<<endl;
				stuTime<<"____ ___ _____ __ ___ ____ ___ ___ ___ ____ _____ _____ ____ ____ _____ ___ _______ ______ ____ ____ ________ ________ _______ _____ _____"<<endl;
			    }
			    cout<<"\n\nDo You Want to Enter Again (Y/N):";
			    cin>>cho;
				x++;
		    	}while(cho=='Y'||cho=='y');
		    	stuTime.close();
				cout<<"\nPress any Key to Return..."<<endl;
				getch();
				Portal();
				
		    }
	  
	void Seeing_Student_Record()
	{
		system("CLS");
		ifstream stuDataR("StudentData.txt");
	    if(stuDataR.is_open())
		{
			while(getline(stuDataR,ReadData))
			{
				cout<<ReadData<<"\n";
			}
			stuDataR.close();
			cout<<"End of File.\nPress any Key to Return..."<<endl;
		    getch();
		    Portal();
			
		}
		else 
		{
			cout<<"Unable to Open File OR File Removed.\nPress any Key to Return..."<<endl;
		    getch();
		    Portal();
		}	
	}
		void Seeing_Teacher_Record()
	{
		system("CLS");
		ifstream TchrDataR("TeacherData.txt");
	    if(TchrDataR.is_open())
		{
			while(getline(TchrDataR,ReadData))
			{
				cout<<ReadData<<"\n";
			}
			TchrDataR.close();
			cout<<"End of File.\nPress any Key to Return..."<<endl;
		    getch();
		    Portal();
			
		}
		else 
		{
			cout<<"Unable to Open File OR File Removed.\nPress any Key to Return..."<<endl;
		    getch();
		    Portal();
		}	
	}	
	virtual void Exit()
	{
		system("CLS");
		cout<<" "<<setw(98)<<"Thank you..........";
		cout<<"\n"<<setw(102)<<"Press any key to Exit.";
		getch();
		exit(0);	
			
	}
    void Portal()
		{
			load();
			cout<<"\a";
			choice:
			system("cls");
			nextline();
			cout<<"\n"<<setw(123)<<"1-Enter '1' for Entering Students Record."<<endl;
			cout<<"\n"<<setw(123)<<"2-Enter '2' for Entering Teachers Record."<<endl;
			cout<<"\n"<<setw(131)<<"3-Enter '3' for Entering Teachers Class Schedule."<<endl;
			cout<<"\n"<<setw(131)<<"4-Enter '4' for Entering Students Class Schedule."<<endl;
			cout<<"\n"<<setw(121)<<"5-Enter '5' for Seeing Students Record."<<endl;
			cout<<"\n"<<setw(121)<<"6-Enter '6' for Seeing Teachers Record."<<endl;
			cout<<"\n"<<setw(103)<<"7-Enter '7' for Exit."<<endl;
			cout<<"\n"<<setw(93)<<"You Select:";
			cin>>optn;
			if (optn=="1")
		   	{
		    	Student_data();
			}
			else if (optn=="2")
			{
				Teacher_data();
			}
			else if (optn=="3")
	    	{
			 Teacher_timetable();
			}
			else if (optn=="4")
			{
				Student_timetable();	
			}
			else if (optn=="5")
			{
				Seeing_Student_Record();
			}
			else if (optn=="6")
			{
			  Seeing_Teacher_Record();
			}
			else if (optn=="7")
			{
				Exit();
			}
			else
			{
				cout<<"\n"<<setw(113)<<"You Enter Wrong Choice.\n";
				cout<<"\n"<<setw(105)<<"Press any key to Select Again....";
	            getch();
				goto choice;		
			}
		} 	
			 
		~Admin() { /*cout<<"distructor"; getch(); */ }	
};
class Teacher: public Admin
{
	private:
		 int absent,present;
		 string optn;
		 char section[8];
		 string name,date;
         int roll,Q1,A1,MID,Q2,A2,FINAL;
         float percentage;
		 ofstream stuMark,stuAtten;
		 
	public:
		Teacher() {}
		
		void studentsMarks()
        {
        	stuMark.open("StudentMark.txt",ios::app);
			int cho,ob=0;             // change value of numStu
			char ch;
			string nameT;
			repeat:
			//load();
			nextline();
			system("CLS");
			cout<<"\n"<<setw(107)<<"Please Provide Your Name:";
			cin.ignore();
			getline(cin,nameT);
			stuMark<<"\n\n-------------------------------------------------------------------------------------------"<<endl;
			stuMark<<"Teacher:"<<nameT<<endl;
			stuMark<<"-------------------------------------------------------------------------------------------"<<endl;
			
			cout<<"\n"<<setw(107)<<"Select Your Subject code:"<<endl;
			cout<<"\n"<<setw(101)<<"Select '1' for OOP."<<endl;
			
			cout<<"\n"<<setw(118)<<"Select '2' for COMMUNICATION SKILLS."<<endl;
			cout<<"\n"<<setw(120)<<"Select '3' for MULTIVARIABLE CALCULUS."<<endl;
			
			cout<<"\n"<<setw(118)<<"Select '4' for DIGITAL LOGIC DESIGN."<<endl;
			cout<<"\n"<<setw(117)<<"Select '5' for DISCREATE STRUCTURE."<<endl;
			cout<<"\n"<<setw(93)<<"You Select:";
			
			cin>>cho; cout<<endl;
			system("CLS");
			
				
				if(cho==1)
				cout<<"\n"<<setw(107)<<"Hi! Mam Amna Khan."<<endl;
				else
				if(cho==2)
				cout<<"\n"<<setw(107)<<"Hi! Sir Zahid Asraf."<<endl;
				else
				if(cho==3)
				cout<<"\n"<<setw(107)<<"Hi! Mam Sidra Siddiqi."<<endl;
				else
				if(cho==4)
				cout<<"\n"<<setw(107)<<"Hi! Sir Umair Khan."<<endl;
				else
				if(cho==5)
				cout<<"\n"<<setw(107)<<"Hi! Sir Mozzam."<<endl;
				cout<<"Press any Key to continue...";
				getch();
		   	    do
		   	    {
		   	    system("CLS");
		   	    roll1again:
			    cout<<"\n\nEnter Student Roll Number."<<endl;
			    cout<<"You Enter:";
			    cin>>roll;
			    if(roll>=1&&roll<=350)
			    {
			    	stuMark<<"Roll Number:"<<roll<<endl;
			    q11again:
			    cout<<"\n\nEnter Student Quiz 1 Marks Out of 5."<<endl;
			    cout<<"You Enter:";
			    cin>>Q1;
			    if(Q1>5)
			    {
			    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
			    	goto q11again;
				}
				stuMark<<"Quiz 1:"<<Q1<<endl;
			    
			    q21again:
			    cout<<"\n\nEnter Student Quiz 2 Marks Out of 5."<<endl;
			    cout<<"You Enter:";
			    cin>>Q2;
			    if(Q2>5)
			    {
			    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
			    	goto q21again;
				}
				stuMark<<"Quiz 2:"<<Q2<<endl;
			    
			    a11again:
			    cout<<"\n\nEnter Student Assignment 1 Marks Out of 5."<<endl;
			    cout<<"You Enter:";
			    cin>>A1;
			    if(A1>5)
			    {
			    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
			    	goto a11again;
				}
			    
			    a21again:
			    cout<<"\n\nEnter Student Assignment 2 Marks Out of 5."<<endl;
			    cout<<"You Enter:";
			    cin>>A2;
			    if(A2>5)
			    {
			    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
			    	goto a21again;
				}
				stuMark<<"Assignment 2:"<<A2<<endl;
			    
			    mid1again:
			    cout<<"\n\nEnter Student MID Marks Out of 40."<<endl;
			    cout<<"You Enter:";
			    cin>>MID;
			    if(MID>40)
			    {
			    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
			    	goto mid1again;
				}
				stuMark<<"MID:"<<MID<<endl;
			    
			    final1again:	    
			    cout<<"\n\nEnter Student FINAL Marks Out of 40."<<endl;
			    cout<<"You Enter:";
			    cin>>FINAL;
			    if(FINAL>40)
			    {
			    	cout<<"\n"<<setw(107)<<"You Enter Incorrect marks.";
			    	goto final1again;
				}
				stuMark<<"FINAL:"<<FINAL<<endl;
			    
			     ob=Q1+Q2+A1+A2+MID+FINAL;
			     percentage=100*ob/100;
			    
			    cout<<"\n"<<setw(107)<<"Total Subject Marks=100"<<endl;
			    stuMark<<"Total Marks:100"<<endl;
			    cout<<"\n"<<setw(96)<<"Roll Number "<<roll<<" Obtained Marks:"<<ob<<endl;
			    stuMark<<"Obtained Marks:"<<ob<<endl;
			    cout<<"\n"<<setw(96)<<"Roll Number "<<roll<<" Percentage:"<<percentage<<"%"<<endl;
			    stuMark<<"Percentage:"<<percentage<<"%"<<endl;
			    if(percentage<50)
			    {
			    cout<<"\n"<<setw(98)<<"Roll Number "<<roll<<" Status:Fail"<<endl;
			    stuMark<<"Status:Fail"<<endl;
		    	}
			    else
			    {	
			    cout<<"\n"<<setw(96)<<"Roll Number "<<roll<<" Status:pass"<<endl;
			    stuMark<<"Status:Pass"<<endl;
			    }
			    stuMark<<"-------------------------------------------------------------------------------------------"<<endl;
				}
		    	else
				{
					cout<<"\n"<<setw(107)<<"Incorrect Roll Number"<<endl;
					goto roll1again;
				}
				
			    cout<<"\n\n"<<setw(120)<<"Press 'Y' to Enter Next Roll Number:";
				cin>>ch;
		   	     	
			    }while(ch=='y'||ch=='Y');
			    stuMark.close();
		    	cout<<"\n\npress any key to return..";
		    	getch();
			    system("CLS");
			    Portal();
	}
		
		void Seeing_Teacher_Time()
    	{
			system("CLS");
			ifstream TchrTimeR("TeacherTime.txt");
		    if(TchrTimeR.is_open())
			{
				while(getline(TchrTimeR,ReadData))
				{
					cout<<ReadData<<"\n";
				}
				TchrTimeR.close();
				cout<<"\n\nEnd of File.\nPress any Key to Return..."<<endl;
			    getch();
			    Portal();
				
			}
			else 
			{
				cout<<"Unable to Open File OR File Removed.\nPress any Key to Return..."<<endl;
			    getch();
			    Portal();
			}	
   	    }
		
        void Portal()
		{
			load();
			cout<<"\a";
			choice:
	    	system("CLS");
			nextline();		
			cout<<"\n"<<setw(123)<<"1-Enter '1' for Entering student's Attendence."<<endl;
			cout<<"\n"<<setw(118)<<"2-Enter '2' for Entering student's Marks."<<endl;
			cout<<"\n"<<setw(110)<<"3-Enter '3' for Class Time Table."<<endl;
			cout<<"\n"<<setw(98)<<"4-Enter '4' for exit."<<endl<<endl;
			cout<<" "<<setw(87)<<"You Select:";
			cin>>optn;
			if (optn=="1")
			{
				Student_Attendence();
			}
			else if (optn=="2")
			{
			   studentsMarks();
			}
			else if (optn=="3")
			{
			   Seeing_Teacher_Time();
			}
			else if (optn=="4")
			{
				Exit();
			}
			else
			{
				cout<<"\n"<<setw(113)<<"You Enter Wrong Choice.\n";
				cout<<"\n"<<setw(105)<<"Press any key to Return...";
	            getch();
				goto choice;		
		    }
	   } 		
			 void Student_Attendence()
			 {
			 	int x=0;
			 	char cho;
			 	system("cls");
			 	if(x>60)
			 	{
			 	    cout<<"The Maximum Limit of Student For this class Exceed.\nPress any Key to Return...";
				    getch();
					Portal();	
				}
			    stuAtten.open("StudentAtten.txt",ios::app);
			    stuAtten<<"___________________________________________________________________________________________________________________"<<endl;
			    cout<<" "<<setw(95)<<"Enter the Date:";
			    cin.ignore();
			    cin>>date;
			    stuAtten<<"Date:"<<date<<endl;
				cout<<"\n"<<setw(110)<<"Enter the Class and Section: ";
				cin>>section;
				stuAtten<<"Section:"<<section<<endl;
				cout<<"\n"<<setw(123)<<"Enter 'P' for Present and 'A' for Absent.\n";
			 	do
				{
					cout<<"\n\nPress Any Key to Enter.......";
				    getch();
				    system("CLS");
				    stuAtten<<"___________________________________________________________________________________________________________________"<<endl;
				   	cout<<"\n"<<setw(93)<<"Roll Number:";
					cin>>roll;
					stuAtten<<"Roll Number:"<<roll<<endl;
					cout<<"\n"<<setw(88)<<"Status:";
					cin>>cho;
					stuAtten<<"Status:"<<cho<<endl;
					if(cho=='P'||cho=='p')
					present++;
					else
					if(cho=='A'||cho=='a')
					absent++;
				    stuAtten<<"___________________________________________________________________________________________________________________"<<endl;
					cout<<" "<<setw(98)<<"Enter Again (Y/N):";
					cin>>cho;
					x++;
				}   while(cho=='Y'||cho=='y');
				    stuAtten.close();
				    cout<<"\n\nPress Any Key to Return.......";
				    getch();
				    Portal();
			 	} 
			void Exit()
			{
				system("CLS");
				cout<<" "<<setw(98)<<"Thank you..........";
				cout<<"\n"<<setw(102)<<"Press any key to Exit.";
				getch();
				exit(0);				
			}
			~Teacher() { /*cout<<"distructor"; getch(); */} 
};
class Student: public Admin
{
	private:
		
	public:
		Student() {}
		void Seeing_Student_Time()
    	{
			system("CLS");
			ifstream stuTimeR("StudentTime.txt");
		    if(stuTimeR.is_open())
			{
				while(getline(stuTimeR,ReadData))
				{
					cout<<ReadData<<"\n";
				}
				stuTimeR.close();
				cout<<"\n\nEnd of File.\nPress any Key to Return..."<<endl;
			    getch();
			    Portal();
				
			}
			else 
			{
				cout<<"Unable to Open File OR File Removed.\nPress any Key to Return..."<<endl;
			    getch();
			    Portal();
			}	
   	    }
   	    void Seeing_Student_Result()
    	{
			system("CLS");
			ifstream stuResultR("StudentMark.txt");
		    if(stuResultR.is_open())
			{
				while(getline(stuResultR,ReadData))
				{
					cout<<ReadData<<"\n";
				}
				stuResultR.close();
				cout<<"\n\nEnd of File.\nPress any Key to Return..."<<endl;
			    getch();
			    Portal();
				
			}
			else 
			{
				cout<<"Unable to Open File OR File Removed.\nPress any Key to Return..."<<endl;
			    getch();
			    Portal();
			}	
   	    }
   	    void Seeing_Student_Attendence()
	{
		system("CLS");
		ifstream stuAttenR("StudentAtten.txt");
	    if(stuAttenR.is_open())
		{
			while(getline(stuAttenR,ReadData))
			{
				cout<<ReadData<<"\n";
			}
			stuAttenR.close();
			cout<<"End of File.\nPress any Key to Return..."<<endl;
		    getch();
		    Portal();
			
		}
		else 
		{
			cout<<"Unable to Open File OR File Removed.\nPress any Key to Return..."<<endl;
		    getch();
		    Portal();
		}	
	}
		   void Portal()
	    	{
	    		load();
	    		cout<<"\a";
	    		choice:
				system("cls");
				nextline();
			    cout<<"\n"<<setw(111)<<"1-Enter '1' for Your Attendence."<<endl;
	            cout<<"\n"<<setw(107)<<"2-Enter '2' for Your Result."<<endl;
	            cout<<"\n"<<setw(121)<<"3-Enter '3' for Time Table for Your Class."<<endl;
            	cout<<"\n"<<setw(100)<<"4-Enter '4' for exit."<<endl;
             	cout<<"\n"<<setw(91)<<"Your Select:";
				cin>>optn;
					if (optn=="1")
					{
					
						Seeing_Student_Attendence();
					}
				    else if (optn=="2")
					{
					  Seeing_Student_Result();
					}
					else if (optn=="3")
					{
					   Seeing_Student_Time(); 
					}
					else if (optn=="4")
					{
						Exit();
					}
					else
					{
						cout<<"\n"<<setw(113)<<"You Enter Wrong Choice.\n";
			        	cout<<"\n"<<setw(105)<<"Press any key to Return...";
	                    getch();
			        	goto choice;	
					}
			 } 		
			
			 ~Student() { /*cout<<"distructor"; getch(); */}
};
class Login//: public Admin, public Teacher, public Student  //for login into portal
{
    private:
		Admin A1;
		Teacher T1;
		Student S1; 
		string role;
		string password;
    	string phn;
		int lastpass;
		//time_t now;
       //char* dt;
	public:
		Login() {}
		void verification()
		{
			LogAgain:
			system("CLS");
			nextline();
			cout<<" "<<setw(95)<<"Enter your Role: ";
			cin>>role;
			cout<<"\n"<<setw(100)<<"Enter your Password: ";
			cin>>password;
			if((role=="Admin"||role=="admin")&& password=="111")
			{
				
				A1.Portal();
			}
			else
			if((role=="Teacher"||role=="teacher")&&password=="222")
			{
				
				T1.Portal();
			}
			else
			if((role=="Student"||role=="student")&&password=="333")
			{
				
				S1.Portal();
			}
			else
			{
				char cho,cho1;
				cout<<"\n"<<setw(113)<<"You Enter Wrong Role or Password.\n";
				cout<<"\n"<<setw(102)<<"Forget Password? (Y/N):";
				cin>>cho;
				if(cho=='Y'||cho=='y')
				{
				system("CLS");
				nextline();
			 	cout<<"\n "<<setw(95)<<"Enter your Role: ";
		    	cin>>role;
				cout<<"\n"<<setw(103)<<"Enter your phone number:";
				cin>>phn;
				cout<<"\n"<<setw(103)<<"Last Password you Enter:";
				cin>>lastpass;
				if(role=="Admin"||role=="admin")
				{
				cout<<"\n"<<setw(102)<<"Your Password is '111'.";
				}
				else
				if(role=="Teacher"||role=="teacher")
				cout<<"\n"<<setw(102)<<"Your Password is '222'.";
				else
				if(role=="Student"||role=="student")
					cout<<"\n"<<setw(102)<<"Your Password is '333'.";
					cout<<"\n\n"<<setw(98)<<"Login Again? (Y/N):";
					cin>>cho1;
				if(cho1=='Y'||cho1=='y')
				{
						goto LogAgain;
				}
				else
				if(cho1=='N'||cho1=='n')
				{
					system("CLS");
		        	cout<<" "<<setw(98)<<"Thank you..........";
					cout<<"\n"<<setw(102)<<"Press any key to Exit.......";
					getch();
					exit(0);	
				}
				}
				else
				{
					system("CLS");
		        	cout<<" "<<setw(98)<<"Thank you..........";
					cout<<"\n"<<setw(102)<<"Press any key to Exit.......";
					getch();
					exit(0);	
				}
				
			}
			
		}
		~Login() {/* cout<<" distructor"; getch(); */ }	
};

int main()
{
Login l1;
//system("COLOR 70");
for(int w=1;w<=10;w++)
	cout<<endl;
screenheader();
cout<<"\n\n\n"<<setw(110)<<"Press any key to continue..... ";
getche();
load(); 
l1.verification();

}

///////////////////////////////////////////////////////////////////////////////////////////////////
// functions bodies start

void screenheader() // welcome screen function body                
{
 	
   cout<<"\n"<<setw(122)<<"::::::::::::::::::::::::::::::::::::::::::::::::::::";
   cout<<"\n"<<setw(122)<<"::                                                ::";
   cout<<"\n"<<setw(122)<<"::      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @              WELCOME              @     ::";
   cout<<"\n"<<setw(122)<<"::      @                TO                 @     ::";
   cout<<"\n"<<setw(122)<<"::      @         SUPERIOR UNIVERSITY       @     ::";
   cout<<"\n"<<setw(122)<<"::      @          MANAGEMENT SYSTEM        @     ::";
   cout<<"\n"<<setw(122)<<"::      @                FOR                @     ::";
   cout<<"\n"<<setw(122)<<"::      @            CLASS BSCS-2B          @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @                                   @     ::";
   cout<<"\n"<<setw(122)<<"::      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n"<<setw(122)<<"::                                                ::";
   cout<<"\n"<<setw(128)<<"::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n\n\n";  
   
}

void load()         //loading function
{
	for(int x=1;x<=100;x++)
	{
		cout<<" "<<setw(118)<<"LOADING............."<<x<<"%";
		system("cls");
	}
	
}
void nextline()    //couple lines space
{
	for(int w=1;w<=20;w++)
	cout<<endl;	
}



