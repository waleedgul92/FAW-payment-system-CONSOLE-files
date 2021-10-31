#include<iostream>
#include<string>
#include<fstream>// libarary for text filing
#include<sstream>// librarry to convert string to int//
#include<stdlib.h>// to clear screen//
using namespace std;
int amount_g;//ahmed
class Amount
{
	//ahmed
	protected:
		int amount1;
	public:
	Amount(int amount1)
	{
	if(amount1!=0)
		{
			this->amount1=amount1;
				cout<<"Your balance is Rs. "<<amount1<<endl;
		}	
		else
		{
			cout<<"Your balance is Rs. 0.00 "<<endl;
		}		
}
};
class Recharge:protected Amount
{
	protected:
	float recha;
	string name1,name;//name of user and its filename//
	string user,user1,balance,pin,userr;//name of receiver and its filename//
	int amount2;
	string pinn2,name_user,ammount3;
	string write,write1;//write in receiver and sender //
	public:
	Recharge(int ammount3,string name):Amount(ammount3)
	{
		this->name=name;
	}
	int Rem_balance()
	{
		fstream out1;
		cout<<"Enter name of user ";
		cin>>user;
		user1=user;
		user1+=".dat";       
		out1.open(user1.c_str(),std::ios_base::app);
		cout<<"Enter balance to recharge ";
		cin>>recha;
		if(recha<=amount1)
		{
		 amount1-=recha;
		 cout<<"	Recharged Successfully ! on user "<<user<<endl;
		 cout<<"	Remaining balance is Rs.: "<<amount1<<endl;
		 				//wtiting in file of receiver//
		string name_user,pinn2,ammount3;
		 if(out1.is_open())
		 {
		 	write=" recharge has been done of Rs. ";
		 	ostringstream ss;
		 	ss<<recha;
		 	write+=ss.str();
		 	write+=" by ";
		 	write+=name;
		 	out1<<write<<endl;
			out1.close();
		fstream in1(user1.c_str(),ios::in);
   		if(in1.is_open())
   		{
  				getline(in1,name_user);
   				{
					getline(in1,pinn2);	
					getline(in1,ammount3);
					stringstream s2(ammount3);
					s2>>amount2;   
				}
		}
		}
			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
			amount2+=recha;	
 			fs.open(user1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd << amount2 << "\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(user1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
		fst.close();
		fo.close();
	}		
		 				//writing in file of sender//
		 fstream out2;	
		 name1=name;	
		 name1+=".dat";
		 out2.open(name1.c_str(),std::ios_base::app);
		 if(out2.is_open())
		{
			write=" Recharged on ";
			write+=user;
			write+=" of Rs. ";
		 	ostringstream ss2;
		 	ss2<<recha;
		 	write+=ss2.str();
			out2.close();
			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
 			fs.open(name1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd<<amount1<<"\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(name1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
	}
		 }
		}
		else
		{
			cout<<"	Invalid amount1ount ! "<<endl;
			cout<<" Enter valid amount :" ; 
			cin>>recha;
			amount1-=recha;
		 	cout<<"	Recharged Successfully ! on user "<<user<<endl;
		 	cout<<"	Remaining Amount is Rs.: "<<amount1<<endl;
		 				//wtiting in file of receiver//
		 if(out1.is_open())
		 {
		 	write=" Recharge has been done of Rs. ";
		 	ostringstream ss;
		 	ss<<recha;
		 	write+=ss.str();
		 	write+=" by ";
		 	write+=name;
		 	out1<<write<<endl;
		 	out1.close();
		fstream in1(user1.c_str(),ios::in);
   		if(in1.is_open())
   		{
  				getline(in1,name_user);
   				{
					getline(in1,pinn2);	
					getline(in1,ammount3);
					stringstream s2(ammount3);
					s2>>amount2;   
				}
		}
		}
			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
			amount2+=recha;	
 			fs.open(user1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd << amount2 << "\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(user1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
	}		
		 				//writing in file of sender//
		 fstream out2;	
		 name1=name;	
		 name1+=".dat";
		 out2.open(name1.c_str(),std::ios_base::app);
		 if(out2.is_open())
		{
			write=" Recharged on ";
			write+=user;
			write+=" of Rs. ";
		 	ostringstream ss2;
		 	ss2<<recha;
		 	write+=ss2.str();
		 	out2<<write<<endl;
			out2.close();
			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
 			fs.open(name1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd<<amount1<<"\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(name1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
	}
		 }
		 }
		 				//writing in file of sender//
		 fstream out2;	
		 name1=name;	
		 name1+=".dat";
		 out2.open(name1.c_str(),std::ios_base::app);
		 if(out2.is_open())
		{
			write="Recharged on ";
			write+=user;
			write+=" of Rs. ";
		 	ostringstream ss2;
		 	ss2<<recha;
		 	write+=ss2.str();
		 	out2<<endl;
		 	out2<<write<<endl;
		 	out2.close();
				ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
 			fs.open(name1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd<<amount1<<"\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(name1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
	}
		 }
		 }
};
class Bill:protected Amount
{
	protected:
		float billl;
		string user,user1,write;
		unsigned int b_numb;
		int amount;
		
	public:
		Bill(int amount,string user):Amount(amount)
		{
			this->user=user;
			this->amount=amount;
		}
	int bill_pay()
	{
			cout<<"Enter reference number : ";
			cin>>b_numb;
			cout<<"Enter amount to pay bill ";
			cin>>billl;
		if(billl<=amount1)
		{
		 	amount1-=billl;
		 	cout<<"	Bill payed Successfully ! on reference number "<<b_numb<<endl;
		 	cout<<"	Remaining balance is Rs.: "<<amount1<<endl;	
		 			//writing in file of user about billing
		 	user1=user;
		 	user1+=".dat";
		 	fstream out1;
			out1.open(user1.c_str(),std::ios_base::app);
		 if(out1.is_open())
		 {
		 	write="Bill has been paid of Rs. ";
		 	ostringstream ss,ss1;
		 	ss<<billl;
		 	write+=ss.str();
		 	write+=" on  reference number ";
		 	ss1<<b_numb;
		 	write+=ss1.str();
		 	out1<<write<<endl;

		}
			out1.close();
			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
 			fs.open(user1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd<<amount1<<"\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(user1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
	}
			return amount1;
		}
		else
		{
			cout<<"	Invalid amount1ount ! "<<endl;
			cout<<"Enter valid amount : "; 
			cin>>billl;
			amount1-=billl;
		 	cout<<"	Bill payed Successfully ! on number "<<b_numb<<endl;
			cout<<"	Remaining balance is Rs.: "<<amount1<<endl;
					//writing in file//
		 	user1=user;
		 	user1+=".dat";
		 	fstream out1;
			out1.open(user1.c_str(),std::ios_base::app);
		 if(out1.is_open())
		 {
		 	write="Bill has been paid of Rs. ";
		 	ostringstream ss,ss1;
		 	ss<<billl;
		 	write+=ss.str();
		 	write+=" on  reference number ";
		 	ss1<<b_numb;
		 	write+=ss1.str();
		 	cout<<write<<endl;
		 	out1<<write<<endl;
		}
		out1.close();
			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
 			fs.open(user1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd<<amount1<<"\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(user1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
	}
		 	return amount1;	
		}
	}
};		
class fill_account:protected Amount
{
	private:
		int x=0,z=0,amount;// for amount to recharge and for store data of addition and foramount for base class// 	
		string write,user,user1;//for writing in file	
	public:
		fill_account(int amount,string user):Amount(amount)
		{
			this->user=user;
			this->amount=amount;
			cout<<"Enter amount to add to your account ";
			cin>>x;
			cout<<" Recharge of Rs."<<x<<" taken successfully "<<endl;
		}
		
		int fill()
		{	
			z=amount+x;//ahmed
			amount_g=z;//ahmed
			cout<<"Your new balance is Rs. "<<z<<endl;
					//writing in file//
		 	user1=user;
		 	user1+=".dat";
		 	fstream out1;
			out1.open(user1.c_str(),std::ios_base::app);
		 if(out1.is_open())
		 {
		 	write=" Rcharge of Rs. ";
		 	ostringstream ss,ss1;
		 	ss<<x;
		 	write+=ss.str();
		 	write+=" on your account has been took place ";
		 	//cout<<write<<endl;
		 	out1<<write<<endl;
			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
 			fs.open(user1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd<<z<<"\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(user1.c_str(),ios::in);
	if (fst && fo)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
	}
			return z;
		}
		out1.close();

		}
};
class Transport:protected Amount
{
	protected:
		int n_b,bi=0,seats,amount;
		string date,user,user1,write;
		int a_place;
		int b_place;
		string a[7]={"karachi","Sukkur","bahawalpur","Lahore","Quetta","Islamabad","Peshawar"};
		string b[7]={"karachi","Sukkur","bahawalpur","Lahore","Quetta","Islamabad","Peshawar"};
	public:
		Transport(int amount,string user):Amount(amount)
		{	
			this->amount=amount;
			this->user=user;		
		}
	int bill_transport()
	{
		fflush(stdin);
		cout<<"enter date ";
		cin>>date;
		cout<<"	\tWe have two buses available "<<endl;
		cout<<"1)Fasial movers   2)Daewoo "<<endl;
		cin>>n_b;
		cout<<"\tWe have following destinations "<<endl;
		cout<<"1)karachi\n2)Sukkur\n3)Bahawalpur\n4)Lahore\n5)Quetta\n6)Islamabad\n7)Peshawar\n";
		cout<<"enter departure place ";
		cin>>a_place;
		cout<<"enter arrival place ";
		cin>>b_place;
		cout<<"enter number of seats ";
		cin>>seats;
		bi=b_place*a_place*200*seats;
		fflush(stdin);
		amount-=bi;
		if(amount>0)
		cout<<"Your Bill is Rs."<<bi<<" of "<<seats<<" seats  on date "<<date<<endl;
		cout<<"Remaning balance is Rs. "<<amount<<endl;
		 			//writing in file of user about billing
		 	user1=user;
		 	user1+=".dat";
		 	fstream out1;
			out1.open(user1.c_str(),std::ios_base::app);
		 if(out1.is_open()&&amount1>0)
		 {
		 	ostringstream ss,ss1,ss2;
		 	ss<<seats;
		 	write+=ss.str();
		 	write+=" ticket(s) has been books ";
		 	write+="Rs. ";
		 	ss1<<bi;
		 	write+=ss1.str();
		 	write+=" on  date  ";
		 	write+=date;
		 	if(amount>0)
		 	out1<<write<<endl;
		}
		if(amount<bi)
		{
		cout<<"your booking amount is greater than amount in your wallet !"<<endl;
		cout<<"Recharge your account and try again later "<<endl;			
		}

			ifstream fs;
			ofstream fd;
			string str;
			static int lno=0;
 			fs.open(user1.c_str(),ios::in);
 			fd.open("New Text Document.dat");
		if (fs && fd&&amount>0)
		{
		while (getline(fs, str))
		{
			if(lno!=2)
			{
				lno++;
				fd << str << "\n";
			}
			else 
			{
				fd<<amount<<"\n";
				lno++;
			}
		}
		}
		fs.close();
		fd.close();
	ifstream fst;
	ofstream fo;
	fst.open("New Text Document.dat");
	fo.open(user1.c_str(),ios::in);
	if (fst && fo&&amount>0)
	{
		while (getline(fst,str))
		{
			fo << str << "\n";
		}
		fst.close();
		fo.close();
	}
			out1.close();			
		}
};
class History
{
	private:
		string name1,name,data_user;//name of user , file name of user and dataretreaval variables;
	public:
		History(string name)//constructor for username
		{
			this->name=name;
			
		}
		void get_History()
		{
			name1=name;
			name1+=".dat";
			cout<<"				History "<<endl;
			ifstream in1(name1.c_str(),ios::in);
   		if(in1.is_open())
   			{
   			//checking for data from line number 3
    	for (int lineno = 0; getline (in1,data_user) && lineno < 1000; lineno++)
      	if (lineno>2)
          cout <<data_user<< endl;
		}
		cout<<"			 	End of History "<<endl;
		in1.close();		
		}
};
int main()
{
	int n_user;/*1 for new user and any other for existing one*/
	static int amount=0;//amount for later use
	int n=1,/*for running it until user want*/n1;/*for letting user choose from menu of features*/
	string name,name1,name_user;//name of user and name 1 for creating file with name of user,
	string usser1,pinn2,ammount3;//to retreive data from file
	string pin;//for sking pin from user
	cout<<"		Welcome to FAW payment system "<<endl;
	cout<<"If you want to register press 1 else press any key "<<endl;
	cin>>n_user;
	if(n_user==1)
	{
		ofstream out1;
		cout<<"Enter username ";
		cin>>name;
		name1=name;
		name1+=".dat";
		out1.open(name1.c_str());
		cout<<"Enter 4 digit PIN ";
		cin>>pin;
		cout<<"Enter amount you want to deposit ";
		cin>>amount;
		out1<<name<<"\n"<<pin<<"\n"<<amount<<"\n";
		out1.close();
	}
	fflush(stdin);
		ifstream in2;
		cout<<"Enter username ";
		cin>>name;
		name1=name;
		name1+=".dat";
		in2.open(name1.c_str());
		//welcoming user //
  		fstream in1(name1.c_str(),ios::in);
   		if(in1.is_open())
   		{
  				getline(in1,name_user);
   				{
   					cout<<"Welcome ";
   					cout<<name_user<<endl;	
					getline(in1,pinn2);	
					getline(in1,ammount3);
				   }
		}
						//changing amount (ammount3) 		stores in file to int		
		stringstream ss(ammount3);
		ss>>amount;
		//user to enter pin//
		cout<<"Enter 4 digit pin ";
		cin>>pin;
		if(pin!=pinn2)
		cout<<"OH !	wrong pin "<<endl;
			//checking user entered pin with pin stores//
		for(int i=0;i<5;i++)
		if(pin!=pinn2)
		{
		cout<<"Enter 4 digit pin to continue ";
		cin>>pin;
		cout<<"OH !	wrong pin "<<endl;
		if(i==4)
		{
			cout<<"Sorry try again later !"<<endl;
			exit(1);	
		}
		}
		static int in=0;
					// letting user to chose feature as long as he wants//
		cout<<"		Here are some available features "<<endl;
		while(n==1)
		{
		cout<<"1)Billing\n2)Recharging Balance\n3)Transport\n4)Recharge account\n5)History\n6)Check balance\n";
		cin>>n1;
		amount_g=amount;
		switch (n1)
		{
			case 1:
				{
					Bill b1(amount_g,name);
					b1.bill_pay();	
					break;		
				}
			case 2:
				{
					Recharge r1(amount,name);
					r1.Rem_balance();
					break;	
				}
			case 3:
				{
					Transport t1(amount,name);
					t1.bill_transport();
					break;
				}
			case 4:
				{
					fill_account f1(amount,name);
					f1.fill();
					break;
				}
			case 5:
			{
					History h1(name);
					h1.get_History();
					break;	
			}	
			case 6:
				{
					//ahmed
					Amount am(amount_g);
					break;					
				}
			default:
				{
					cout<<"			Sorry for invconvenience !";
					cout<<" More features coming soon "<<endl;
					break;
				}
		}
		cout<<"To continue press 1 ";		
		cin>>n;
		}
		cout<<"			Allah Hafiz "<<endl;
		in1.close();
}
