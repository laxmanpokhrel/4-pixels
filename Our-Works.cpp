#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<cctype>
void time();
using namespace std;
void gotoxy(short x,short y);
const int MAX_TRIES=5;

int letterFill (char, string, string&);
void fourpixel();
void loading();
void restarting();
void delay(int number_of_seconds) 
{ 
  int milli_seconds = 1000 * number_of_seconds; 
  clock_t start_time = clock(); 
   while (clock() < start_time + milli_seconds) 
        ; 
} 
void restarting(){
system("CLS");
     for(int i=1;i<=50;i++)
      { 
     system("CLS");
    cout<<"\n\n\n\n\t\t\t\t   Restarting.Please wait!!! "<<'\n'<<'\t'<<'\t';
    for(int j=1;j<=i;j++)
    cout<<"�";
    cout<<"\n\n\t "<<2*i<<"%";
    if( i > 1 && i < 20)
    cout<<"\n\n\tCreating Temporary files";
    else if( i > 20 && i<40)
    cout<<"\n\n\tAccessing Main Memory";
    else if(i >40 && i<50)
    cout<<"\n\n\tAccessing Cache";
    else {
	cout<<"\n\n\t                      Completed"<<endl;
	cout<<"                             Press Enter to Continue";
}
    delay(0.999999);
      }

 system("cls");	
}

void loading(){
  system("CLS");
     for(int i=1;i<=50;i++)
      { 
     system("CLS");
    cout<<"\n\n\n\n\t\t\t\t   Loading "<<'\n'<<'\t'<<'\t';
    for(int j=1;j<=i;j++)
    cout<<"�";
    cout<<"\n\n\t "<<2*i<<"%";
    if( i > 1 && i < 20)
    cout<<"\n\n\tCreating Temporary files";
    else if( i > 20 && i<40)
    cout<<"\n\n\tAccessing Main Memory";
    else if(i >40 && i<50)
    cout<<"\n\n\tAccessing Cache";
    else {
	cout<<"\n\n\t                      Completed"<<endl;
	cout<<"                             Press Enter to Continue";
}
    delay(0.6999);
      }
 getch();
 system("cls");
}
void fourpixel(){
int i;
 {
 
 gotoxy(17+10+5,10);
 printf("��");
 gotoxy(16+10+5,11);
 printf("��");
 gotoxy(15+10+5,12);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 
 }
  
 gotoxy(15+10+5,13);
 printf("��");
 gotoxy(15+10+5,14);
 printf("��");
 gotoxy(15+10+5,15);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 	
 }
  
 gotoxy(15+10+5,16);
 printf("��");
 gotoxy(15+10+5,17);
 printf("��");
 gotoxy(15+10+5,18);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 
 }
  
 gotoxy(15+10+5,19);
 printf("��");
 gotoxy(15+10+5,20);
 printf("��");
 gotoxy(15+10+5,21);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 
 }
  
 gotoxy(15+10+5,22);
 printf("��");
 gotoxy(14+10+5,13);
 printf("��");
 gotoxy(13+10+5,14);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 
 }
  
 gotoxy(12+10+5,15);
 printf("��");
 gotoxy(11+10+5,16);
 printf("��");
 gotoxy(10+10+5,17);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
 gotoxy(9+10+5,18);
 printf("��");
 gotoxy(10+10+5,18);
 printf("��");
 gotoxy(11+10+5,18);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 
 }
  
 gotoxy(12+10+5,18);
 printf("��");
 gotoxy(13+10+5,18);
 printf("��");
 gotoxy(14+10+5,18);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 
 }
  
 gotoxy(15+10+5,18);
 printf("��");
 gotoxy(16+10+5,18);
 printf("��");
 
 }
 {
 gotoxy(37,10);
 printf("��");
 gotoxy(36,10);
 printf("��");
  gotoxy(38,10);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
  gotoxy(39,10);
 printf("��");
  gotoxy(40,10);
 printf("��");
  gotoxy(41,10);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
  gotoxy(42,10);
 printf("��");
  gotoxy(43,10);
 printf("��");
  gotoxy(44,10);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
  gotoxy(45,10);
 printf("��");
 
  gotoxy(45,11);
 printf("��");
  gotoxy(45,12);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
  gotoxy(45,13);
 printf("��");
  gotoxy(45,14);
 printf("��");
  gotoxy(45,15);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
  gotoxy(44,15);
 printf("��");
  gotoxy(43,15);
 printf("��");
  gotoxy(42,15);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
  gotoxy(41,15);
 printf("��");
  gotoxy(40,15);
 printf("��");
  gotoxy(39,15);
 printf("��");
  for(double i=0;i<=6000;i++){
 	i++;
 	i--;

 }
  
 gotoxy(37,11);
 printf("��");
 gotoxy(37,12);
 printf("��");
  gotoxy(37,13);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f1");
  gotoxy(37,14);
 printf("��");
  gotoxy(32+5,15);
 printf("��");
  gotoxy(32+5,16);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fa");
  gotoxy(32+5,17);
 printf("��");
  gotoxy(32+5,18);
 printf("��");
  gotoxy(32+5,19);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f2");
  gotoxy(32+5,20);
 printf("��");
 gotoxy(32+5,21);
 printf("��");
  gotoxy(32+5,22);
 printf("��"); 	
 }
 {
 	  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f3");
 gotoxy(50,10);
 printf("��");
 gotoxy(51,10);
 printf("��");
  gotoxy(52,10);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f4");
  gotoxy(53,10);
 printf("��");
  gotoxy(54,10);
 printf("��");
  gotoxy(55,10);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f5");
  gotoxy(55,11);
 printf("��");
  gotoxy(55,12);
 printf("��");
  gotoxy(55,13);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f6");
  gotoxy(55,14);
 printf("��");
  gotoxy(55,15);
 printf("��");
  gotoxy(55,16);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f7");
  gotoxy(55,17);
 printf("��");
  gotoxy(55,18);
 printf("��");
  gotoxy(55,19);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f8");
  gotoxy(55,20);
 printf("��");
  gotoxy(55,21);
 printf("��");
  gotoxy(55,22);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f9");
  gotoxy(56,10);
 printf("��");
  gotoxy(57,10);
 printf("��");
  gotoxy(58,10);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fa");
  gotoxy(59,10);
 printf("��");
  gotoxy(60,10);
 printf("��");
  gotoxy(60,22);
 printf("��");	
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fb");
  gotoxy(59,22);
 printf("��");	
  gotoxy(58,22);
 printf("��");	
  gotoxy(57,22);
 printf("��");	
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fc");
  gotoxy(56,22);
 printf("��");	
  gotoxy(55,22);
 printf("��");	
  gotoxy(54,22);
 printf("��");	
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fd");
  gotoxy(53,22);
 printf("��");	
  gotoxy(52,22);
 printf("��");		
  gotoxy(51,22);
 printf("��");	
  gotoxy(50,22);
 printf("��");		
 }
 {
 	  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fe");
  gotoxy(65,10);
 printf("��");	
  gotoxy(66,11);
 printf("��");	
  gotoxy(67,12);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f1");	
  gotoxy(68,13);
 printf("��");	
  gotoxy(69,14);
 printf("��");	
  gotoxy(70,15);
 printf("��");	
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f2");
  gotoxy(71,16);
 printf("��");	
  gotoxy(72,17);
 printf("��");	
  gotoxy(73,18);
 printf("��");	
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f3");
  gotoxy(74,19);
 printf("��");	
  gotoxy(75,20);
 printf("��");	
  gotoxy(76,21);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f4");	
  gotoxy(78,22);
 printf("��");
  gotoxy(78,10);
 printf("��");
  gotoxy(77,11);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f5");
  gotoxy(76,12);
 printf("��");
  gotoxy(75,13);
 printf("��");
  gotoxy(74,14);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f6");
  gotoxy(73,15);
 printf("��");
  gotoxy(72,16);
 printf("��");
  gotoxy(71,17);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f7");
  gotoxy(70,18);
 printf("��");
  gotoxy(69,19);
 printf("��");
  gotoxy(68,20);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f8");
  gotoxy(67,21);
 printf("��");	
  gotoxy(66,22);
 printf("��");
 	
 }
 {
 gotoxy(83,10);
 printf("��");
 gotoxy(83,11);
 printf("��");
 gotoxy(83,12);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f9");
 gotoxy(83,13);
 printf("��");
 gotoxy(83,14);
 printf("��");
 gotoxy(83,15);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fa");
 gotoxy(83,16);
 printf("��");
 gotoxy(84,16);
 printf("��");
 gotoxy(85,16);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fb");
 gotoxy(86,16);
 printf("��");
 gotoxy(87,16);
 printf("��");
 gotoxy(88,16);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fc");
 gotoxy(89,16);
 printf("��");
 gotoxy(90,16);
 printf("��");
 gotoxy(91,16);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fd");
 gotoxy(92,16);
 printf("��");
 gotoxy(83,17);
 printf("��");
 gotoxy(83,18);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fe");
 gotoxy(83,19);
 printf("��");
 gotoxy(83,20);
 printf("��");
 gotoxy(83,21);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f1");
 gotoxy(83,22);
 printf("��");
 gotoxy(84,22);
 printf("��");
 gotoxy(85,22);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f2");
 gotoxy(86,22);
 printf("��");
 gotoxy(87,22);
 printf("��");
 gotoxy(88,22);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f3");
 gotoxy(89,22);
 printf("��");
 gotoxy(90,22);
 printf("��");
 gotoxy(91,22);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f4");
 gotoxy(92,22);
 printf("��");
 gotoxy(84,10);
 printf("��");
 gotoxy(85,10);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f5");
 gotoxy(86,10);
 printf("��"); 	
 gotoxy(87,10);
 printf("��");
 gotoxy(88,10);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f6");
 gotoxy(89,10);
 printf("��");
 gotoxy(90,10);
 printf("��");
 gotoxy(91,10);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f7");
 gotoxy(92,10);
 printf("��");
	
 }
 {  for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f8");
 gotoxy(97,10);
 printf("��");
 gotoxy(97,11);
 printf("��");
 gotoxy(97,12);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f9");
 gotoxy(97,13);
 printf("��");	
 gotoxy(97,14);
 printf("��");
 gotoxy(97,15);
 printf("��");
 gotoxy(97,16);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fa");
 gotoxy(97,17);
 printf("��");
 gotoxy(97,18);
 printf("��");
 gotoxy(97,19);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fb");
 gotoxy(97,20);
 printf("��");
 gotoxy(97,21);
 printf("��");
 gotoxy(97,22);
 printf("��");	
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fc");
 gotoxy(98,22);
 printf("��");
 gotoxy(99,22);
 printf("��");
 gotoxy(100,22);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fd");
 gotoxy(101,22);
 printf("��");
 gotoxy(102,22);
 printf("��");
 gotoxy(103,22);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color fe");
 gotoxy(104,22);
 printf("��");
 gotoxy(105,22);
 printf("��");
 gotoxy(106,22);
 printf("��");
   for(double i=0;i<=6000;i++){
 	i++;
 	i--;
 }
 system("color f1");
 gotoxy(107,22);
 printf("��");
 gotoxy(108,22);
 printf("��");
 gotoxy(109,22);
 printf("��");
 }
  gotoxy(109,38);
        printf("               Created By:\n"); 
	    delay(1.444444449);
	    gotoxy(109,39);
		printf("             Rabina Bhandari\n") ;  
        delay(1.444444449);
		gotoxy(109,40); 
		printf("             Parameswar Karki\n");
		delay(1.444444449);
		gotoxy(109,41);
		printf("             Laxman Pokhrel\n") ;
        delay(1.444444449);
        gotoxy(109,42);
		printf("             Jeewan Ghimire\n") ;
 getch();
}	
	

class game{
	int posA,posB,posC,posD;
    char horse,horsename,bethorse;
    double betcash;
    public:game()
    {
    	posA=0;
    	posB=0;
    	posC=0;
    	posD=0;
    	betcash=0;
	}
//void hangman();
void horserace();
};
class linout{
int hours1,minutes1,seconds1,day1,month1,year1,hours2,minutes2,seconds2,day2,month2,year2,luid;
public:
void writelogin(int);
void writelogout(int);
void showlogin(int);
void showlogout(int);	
};

class bank_app {
int acno,age,balance;
double tempan;
char atype,gender,pass[32],firstname[80],lastname[80],paddress[80],taddress[80],dob[15],nationality[20]; 

public:
 bank_app(){
 	
 	tempan=102030405060;
	age=0;
	balance=0;
	atype='X';
	gender='X';
	strcpy(firstname,"xxxxxxxxx"); 
	strcpy(lastname," xxxxxxxxx");
	strcpy(paddress," xxxxxxxxx");
	strcpy(taddress," xxxxxxxxx ");
	strcpy(dob,"x/x/x");
    strcpy(nationality,"xxxxxxxx");
}
public: 
void infobank();
int menu();
void get_record();
int write_record();
int checkaccountno(int);
int checkbalance(int,int);
void showbankdata();
void withdrawbalanceupdater(int ,int);
void depositebalanceupdater(int ,int);
void remove(int);
//int checkaccountnumber(int);

};



class clock{
	int i,j,k,l,day,hour,min,sec;
	long int m;
	public:
		void read(){
			cout<<"\n\nPlease Set Your Present Time And Day(1,2,3,4,5,6,7):\n";
			cin>>hour>>min>>sec>>day;
			system("CLS");
		}
		void calc();
};
class timer{
	int hour,min,sec,j,k,l;
	long int m;
	public:
		void read(){
			cout<<" Set  Time :\n";
			cin>>hour>>min>>sec;
			system("cls");
		}
		void calc();
};

class head{
public:
int hours,minutes,seconds,day,month,year;
int i,age,balance,userid,tempuid;
char fname[80],lname[80];
char catgry,dob[15],taddress[80],paddress,nationality[80],gender,atype;
char * pasw;
public: 		
head(){
pasw=new char(32);	
}
	
	public:
		int gamemenu();
        void infoemployee(int);
		int menu();
		void quit();
		char* characterreturn(char*);
		char* password(char *);
		int adminmenu();
		int checkadmin();
		int newuser();
		int olduser(int);
		int checkpassword(int ,char *);
		void showuserdata2(int);
		void showuserdata();
		int searchcatogry(int);
		int securityquestion();
		int menuA();
		int menuB();
		//int checkuserid(int);
	
};

void head::showuserdata2(int n){
	linout l;
	cout<<"UserID:"<<userid<<endl;
	cout<<"Name:"<<fname<<" "<<lname<<endl;
	cout<<"Category:"<<catgry<<endl;
	cout<<"Employee Login/Logout Information"<<endl;
	ifstream fin;
	//login time is displayed...
l.showlogin(n);
//log out time is dispalyed.................
l.showlogout(n);	
	
}
void linout::writelogin(int n){
	luid=n;
		time_t now;//time_t is arithmetic data type
	time(&now);
    struct tm *local=localtime(&now);
	hours1=local->tm_hour;
	minutes1=local->tm_min;
	seconds1=local->tm_sec;
ofstream fout;
fout.open("loginout.txt",ios::app|ios::binary);
fout.write((char*)this,sizeof(*this));
fout.close();
}

void linout::writelogout(int n){
	luid=n;
	time_t now;//time_t is arithmetic data type
	time(&now);
    struct tm *local=localtime(&now);
	hours2=local->tm_hour;
	minutes2=local->tm_min;
	seconds2=local->tm_sec;
ofstream fout;
fout.open("loginout.txt",ios::app|ios::binary);
fout.write((char*)this,sizeof(*this));
fout.close();
}
void linout::showlogin(int n){
	time_t now;//time_t is arithmetic data type
	time(&now);
    struct tm *local=localtime(&now);
	cout<<"\nLoggedin At:"<<endl;
	ifstream fin;
fin.open("logoinout.txt",ios::in|ios::binary|ios::app);
if(!fin){
cout<<"\n\nFile Cannot Open While reading login time\n\n";
getch();
}
else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
		if(n==luid){
		if (hours1 <12)
	printf("Time is:%02d:%02d:%02d am\n",hours1,minutes1,seconds1);
	else
	printf("Time is:%02d:%02d:%02d pm\n",hours1-12,minutes1,seconds1);
	day1=local->tm_mday;
	month1=local->tm_mon+1;
	year1=local->tm_year+1900;
	printf("Date is:%02d/%02d/%02d \n",day1,month1,year1);
				
		}
		fin.read((char*)this,sizeof(*this));
		
	}
	fin.close();

}
}

void linout::showlogout(int n){
	time_t now;//time_t is arithmetic data type
	time(&now);
    struct tm *local=localtime(&now);
cout<<"\nLoggedout At:"<<endl;
	ifstream fin;
fin.open("loginout.txt",ios::in|ios::binary|ios::app);
if(!fin){
cout<<"\n\nFile Cannot Open While reading log out time\n\n";
getch();
}
else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
		if(n==luid){
		if (hours2 <12)
	printf("Time is:%02d:%02d:%02d am\n",hours2,minutes2,seconds2);
	else
	printf("Time is:%02d:%02d:%02d pm\n",hours2-12,minutes2,seconds2);
	day2=local->tm_mday;
	month2=local->tm_mon+1;
	year2=local->tm_year+1900;
	printf("Date is:%02d/%02d/%02d \n",day2,month2,year2);
				
		}
		fin.read((char*)this,sizeof(*this));
		
	}
	fin.close();
}
}
    int head::securityquestion(){
	int a,b,c;
	char ans1[32],ans2[32],ans3[32];
	C:
	system("CLS");
	cout<<"           SECURITY QUESTIONS               "<<endl;
	cout<<"When Was This Company Established?"<<endl;
	fflush(stdin);
	cin.getline(ans1,32);
	a=strcmp("1998",ans1);
	cout<<"Where Is The Head Branch Of This Bank?"<<endl;
	fflush(stdin);
	cin.getline(ans2,32);
	b=strcmp("bharatpur",ans2);

	cout<<"Who Was The Founder Of The Bank?"<<endl;
    fflush(stdin);
	cin.getline(ans3,32);
	c=strcmp("kabir singh",ans3);
    if(a==0 && b==0 && c==0)
    return 1;
    else  
    goto C;	
}
   void head::quit(){
	char ans;
	cout<<"\n\nAre You Sure Want To Quit(Y/N)";
	cin>>ans;
	if(ans=='y'||ans=='Y')
	exit(EXIT_FAILURE); 
	else{
	system("CLS");
	cout<<"Menu chaine bho?????????????????????????????????????";
    }
	}
void timer::calc(){

		for(j=hour;j>=0;j--){
		for (k=min;k>=0;k--){
		for(l=sec;l>=1;l--){
		cout<<"\n\n\n\n\n";
		cout<<"\t\t\t     --TIMER--"<<endl;
		cout<<setw(50)<<"____________________________"<<endl;
		cout<<setw(30)<<""<<j<<" : "<<k<<" : "<<l<<"  ";
		for(double m=0;m<=68889999;m++){
						m++;
						m--;
					}
				
					system("CLS");
				}sec=0;
			}
		}cout<<"\t\t\t";
		cout<<setw(70)<<setw(30)<<"\n\n\n\n\n\n\n\t\t\t\t TIME UP!!!!!"<<endl;
		
	}
void clock::calc(){
	for(i=day;i<=7;i++){
	for(j=hour;j<24;j++){
			
			    for (k=min;k<60;k++){
			 	for(l=sec;l<60;l++){
					cout<<"\n\n\n\n\n";
					cout<<"\t\t\t     --DIGITAL CLOCK--"<<endl;
					cout<<setw(50)<<"____________________________"<<endl;
					cout<<setw(30)<<""<<j<<" : "<<k<<" : "<<l<<"  ";
					if(j<12)
		         	cout<<"AM"<<endl;
			        else
			        cout<<"PM"<<endl;
					if (i==1)
					cout<<setw(50)<<"          Sunday           "<<endl;
					else if (i==2)
					cout<<setw(50)<<"          Monday           "<<endl;
					else if (i==3)
					cout<<setw(50)<<"          Tuesday          "<<endl;
					else if (i==4)
					cout<<setw(50)<<"          Wednesday        "<<endl;
					else if (i==5)
					cout<<setw(50)<<"          Thursday         "<<endl;
					else if (i==6)
					cout<<setw(50)<<"          Friday           "<<endl;
					else if (i==7)
					cout<<setw(50)<<"          Saturday         "<<endl;
					cout<<setw(50)<<"____________________________"<<endl;
					for(double m=0;m<=68889999;m++){
						m++;
						m--;
					}
				
					system("CLS"); 
				}sec=0;
			}
		}
	}
}
int head::olduser(int id2 ){
char t[32],*pass;
pass=new char(32);
int i=0,j=0,k=0;
pass=password(pass);
int l=checkpassword(id2,pass);
if(l==1){
    i++;
if(searchcatogry(id2)==1)
 j++;
 if(searchcatogry(id2)==2)
 k++;}
 if(i+j==2){
 return 1;}
 else if(i+k==2){
 return 2;}
else if(i==0)
{
cout<<"\n\a\aError!!!Username Or Password Didnt Match"<<endl;
getch();
return 0;
}
getch();		
}
		
int head::checkpassword(int id,char *p){
int counter=0;
ifstream fin;
fin.open("userinfo.txt",ios::in|ios::binary|ios::app);
if(!fin)
cout<<"File Cannot Open While Checking Password";
else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
		if(id==userid) /* && strcmp(p,pasw)==0)*/ {
		counter++;
	    return 1;
		}
		fin.read((char*)this,sizeof(*this));
	}
	fin.close();
}
if (counter==0)
return 0;
}
int head::adminmenu(){
	int choice;
	system("ClS");
	system("color B4");
	system("ClS");
	time();
	cout<<"\n\n\n\n\n               Create An Account                                           [1]"<<endl
     	<<"               Show Information Of Bank App                                [2]"<<endl
	    <<"               Show Information Of Employee Record Management System       [3]"<<endl
	    <<"               Restart App                                                 [4]"<<endl
	    <<"               Quit                                                        [5]"<<endl;
	cout<<"\n\n\n\n\n\n                            Enter Your Choice  (1/2/3/4/5):";
	cin>>choice;
	return choice;
}
int head::checkadmin(){
	system("CLS");
	int i=0,j=0;
    char un[32];
   UN:
  cout<<"\n\n\n\n\n\n\n                                         UserName:";
fflush(stdin);
cin.getline(un,31); 
   START:
    cout<<"\n                                         Enter Password:";
    char pass[32];
    char a;
    for(i=0;;)
    {
        a=getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            {
            pass[i]=a;
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)
        {
            cout<<"\b \b";
            --i;
        }
        if(a=='\r')
        {
            pass[i]='\0';//null means end of string.
            break;//break the loop
        }
    }
    if(i<=5)
    {
        cout<<"\n\t\tMinimum 6 digits needed.\nEnter Again";
        getch();//It was not pausing :p
        goto START;
    }

if(strcmp(un,"admin")==0 && strcmp(pass,"admin12" )==0){
	
return 1;
}
else
return 0;
}

char* head::password(char *p){
 START:
    system("cls");
    cout<<"\nEnter Password:";
    char pass[32];
    int i = 0;
    char a;
    for(i=0;;)
    {
        a=getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            {
            pass[i]=a;
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)
        {
            cout<<"\b \b";
            --i;
        }
        if(a=='\r')
        {
            pass[i]='\0';
            break;
        }
    }
   
    if(i<=5)
    {
        cout<<"\nMinimum 6 digits needed.\nEnter Again";
        getch();        
		goto START;
		strcpy(p,pass);
        return p;
}
}
int head::newuser()
{
char uname[32];
system("CLS");
cout<<"\t\tEnter The First Name::";
fflush(stdin);
cin.getline(fname,80);
cout<<"\t\tEnter The Last Name::";
std::fflush(stdin);
std::cin.getline(lname,80);
std::fflush(stdin);
cout<<"\t\tPlease Enter Categories:"<<endl;
cout<<"                            [A]--Bankers"<<endl
    <<"                            [B]--Workers     "<<endl;
cin>>catgry;
//label1:
cout<<"\t\tEnter Any UserId('Only Numeric values'): ";
cin>>userid;
//if((userid%2)!=1||(userid%2)!=0){
//	cout<<"only nymeric values is permissible"<<endl;
//	system("pause");
//	goto label1;
//}

pasw=password(pasw);
ofstream fout;
fout.open("userinfo.txt",ios::app);
fout.write(reinterpret_cast<char*>(this),sizeof(*this));
fout.close();
system("CLS");
cout<<"\n\nSuccessfully Registered"<<endl;
return 1;	
getch();
system("CLS");
}

int position(int pos, char horse)
{
cout << horse << ": ";
pos = pos + rand() % 2 + 1; 
for(int b=0;b<=pos;b++)
cout << " ";
cout << "~n-n^";
cout << endl << endl;
return pos;
}

int main()
{ 
getch();  
loading();
fourpixel();
 linout l;
	int tempuid=20400,mainid;
	head h;
	game g;
	timer t;
	//clock c;
    bank_app ba;
	char ans;
	A:
	  system("CLS");
	   time();
	   Restart:
       cout<<"\n\n\n\n\n\n\n\n\n                                                                              Are You A New User?(Y/N):";
	  //	PlaySound(TEXT("areyoua newuser.wav"),NULL,SND_SYNC);
	   cin>>ans;
	   system("CLS");
    	if (ans=='y'||ans=='Y')
        {
		cout<<"\n\n\n\n\n\n                                                         Please Create Your Account Informing Your Admin!!!"<<endl;
		getch();
		system("CLS");
		goto A;
         }
	else if(ans=='n'||ans=='N')
    {
	    UP1:
	    	cout<<"UserID:";
            cin>>mainid;  
	    int m=h.olduser(mainid);
		if(m==1){
        if( (h.securityquestion()==1)){
        	system("CLS");
    	cout<<"\n\n\t\tYou Are Successfully Logged In to The System!"<<endl;
	    l.writelogin(mainid);
		getch();
		while(1)
         {
	Z:
	   int an=0,amt=0;
	   int i=0,j=0,an1,an2;
	   char ans;
	   switch(h.menuA())
       {
	   case 1://create account
	   system("CLS");
    	ba.get_record();
     	ba.write_record();
	    cout<<"\n\aInformation Stored!";
        break;
	case 2://deposite
		system("CLS");
		cout<<"Enter Your Account Number:";
		cin>>an;
       if(ba.checkaccountno(an)==1)
{ 
    	cout<<"\n\nEnter The Amount To Deposite:";
	   cin>>amt;
	   ba.depositebalanceupdater(an,amt);
	  cout<<"\n\n\aSuccessfully Deposited";
	   ba.showbankdata();
	   getch();
}
	 else
{
	cout<<"\n\aAccount Doesnot Exist!!"<<endl;
	cout<<"\n\n Press Any Key To Go To The Home Screen:";
	getch();
	goto Z;
}
    break;
	case 3://withdraw
		system("CLS");
		cout<<"Withdraw The Amount From Account:";
		system("CLS");
		cout<<"Enter Account Number:";
		cin>>an;
		if(ba.checkaccountno(an)==1){
	    		
		cout<<"\n\nEnter Amount To Withdraw:";
		cin>>amt;
			if (ba.checkbalance(an,amt)==1)
{
			 ba.withdrawbalanceupdater(an,amt);
			 ba.showbankdata();
			 getch();
}
		else
{cout<<"\n\n\aYou Don't Have Enough Balance In Your Account";
getch();
}
}	
	     else
{
			cout<<"\n\n\a This Account Doesnot Exist!";
			getch();
}		
		 break;
		
	    case 4://transfer
		system("CLS");
		cout<<"Enter The Senders Account Number:";
		if(ba.checkaccountno(an1)==1)
		i ++;
		else
		cout<<"\n\aThis Senders Account Doesnot Exist In The System!!!";
		cout<<"\n\n Enter The Receivers Account Number::";
		if(ba.checkaccountno(an2)==1)
		j++;
		else
		cout<<"\n\aThe Receiver's Account Doesnot Exist In The System";
		if((i+j)==2)
{
			cout<<"\nEnter The Amount To Transfer:";
			cin>>amt;
			if(ba.checkbalance(an1,amt)==1)
{
				ba.depositebalanceupdater(an2,amt);
				ba.withdrawbalanceupdater(an1,amt);
				cout<<"\n\n\aBalance Transfered Successfully!!";
				cout<<"The Transctions is Sucessfully Completed";
				getch();
}
			else
			cout<<"\n\aYou Don't Have Enough Balance In Your Account";
			getch();
}
		else
		cout<<"\n\aBalance Cannot Be Transferred";
		break;
		
		case 5://remove 
			
		system("CLS");
		cout<<"Enter Account Number::";
		cin>>an;
		ba.remove(an);
		cout<<"\nAccount Successfully Removed!!";
		cout<<"\nPress Any Key To Continue!!";
		getch();
		break;
		case 6:
		system("CLS");
		char choice;
		cout<<"Do You Want Some Refreshment Through System!!(Y/N)";
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
		PS:
	    switch(h.gamemenu()){
	    	
//	case 1:
		//system("CLS");
		//g.hangman();
		//break;
	case 1:
		system("CLS");
		g.horserace();
		cout<<"Do You Want Play Again?(Y/N):";
		cin>>choice;
		if(choice=='y'||choice=='Y')
		{
			goto PS;
		}
		else if(choice=='n'||choice=='N')
		{
			system("CLS");
			printf("The Program Is Closing!!!");
			getch();
			exit(0);
		}
		else
		cout<<"Invalid Options!!!";
		break;
	//case 3:
	//digital clock
	//system("CLS");	
	//system("color fc");
	//c.read();
//	c.calc();
    //break;
	//case 4:
	//system("CLS");
//	system("color fc");
//	t.read();
//	t.calc();
	//break;
	
	case 2:
		
	system("cls");
	cout<<"\n\n\aIT WAS GREAT WORKING WITH YOU  :) -----------SEE YOU NEXT TIME...."<<endl;
	for(double i=0;i<=6000;i++){
		++i;
		--i;
	}
	exit(0);	
}

		}
		else
		cout<<"Successfully Logged Out";
		l.writelogout(mainid);
        getch();
		exit (0);
		break;
		
	    default:
		cout<<"\n\n\aInvalid Options....";
		goto Z;
}
}}}
else if(m==2){
		char id,* pass;
	    pass=new char[32];
	    while(1)
		{
	    X:
        switch(h.menuB())
   {
	   
	    case 1:
		D:
		system("CLS");
		cout<<"Please Enter Your UserID:";
		cin>>id;
		pass=h.password(pass);
		cout<<"\n\n\n\n               You Are Successfully Logged In";
		getch();
		exit(0);
		/*if(h.checkpassword(id,pass)==1)
		{   cout<<"You Are Successfully Logged In";
			l.writelogin(mainid);
			getch();
			exit (0);
		}
		else
		{
		cout<<"Userame or Password Did Not Match"<<endl;
		cout<<"Please Try Again";
		getch();		
		goto D;
	    }
		break;
		*/
		case 2:
		E:
		system("CLS");
		cout<<"Enter Your UserID:";
		cin>>id;
		pass=h.password(pass);
		cout<<"\n\n\n\nYou Are Successfully Logged Out From The System";
		getch();
		exit(0);
		/*if(h.checkpassword(id,pass)==1)
		{
			cout<<"You Are Successfully Logged Out From The System";
		 l.writelogout(mainid);
			getch();
			exit (0);
	
		}
		else
		{
		cout<<"Username Or Password Did Not Match"<<endl;
		cout<<"Plese Enter The Correct Username Or Password";
		getch();		
		goto E;
	    }
				break;
				*/
				default:
					cout<<"\a\n\nInvalid Option!!!"<<endl;
					cout<<"Press Only One[1] And Two[2]";
					getch();
					goto X;
	}
				
			
  } 
  }
  
  
  
  
 
  }
  else if (ans=='a'||ans=='A'){
	UP2:
		int l=h.checkadmin();
		if(l==1){
			system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tSucessfully Logged In Into The System"<<endl;
		cout<<" \n                                  WELCOME ADMIN"<<endl;
		getch();
		while(1){
        switch(h.adminmenu()){
		case 1:
				if(h.newuser()==1){
				h.showuserdata();
		 	  
		   	  getch();
			  system("CLS");
	    	   break ;
			
				
		case 2:
			system("CLS");
			ba.infobank();
			system("CLS");
			break;
	    case 3:
	    	    system("CLS");
				h.infoemployee(mainid);
				system("CLS");
				break;
		case 4:
		system("cls");
		restarting();
		goto Restart;
		break;
		case 5:
		exit (0);
		break;
					
		default:
		 system("CLS"); 
		cout<<"\a\n\n \t\t\t\t\t  Invalid Choice:"<<endl;
		getch();	
		}
	}
	}
 	    }
		 else{
		cout<<"\a \n\n ACCESS DENIED:";
		getch();
		goto UP2;
	}
	
}
else{
cout<<"\n\aInvalid Choice!!!";
getch();
goto A;
}}


	
 void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void head::infoemployee(int n){
	ifstream fin;
	fin.open("userinfo.txt",ios::in|ios::binary|ios::app);
	if(!fin)
	cout<<"\a Unable To Load File!!";
	else{
    //int count = fin.tellg()/sizeof(*this);
    //cout<<"  There are "<<count<<" record in the file"<<endl;
    cout<<"                  The Informations Are Given Below:"<<endl;
		int i=0;
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			++i;;
			cout<<i<<endl;
			cout<<"------------------------"<<endl;
			showuserdata2(n);
			fin.read((char*)this,sizeof(*this));
		}
		getch();
		system("CLS");
		int counter;
		if(i==0)
		cout<<"\a\a User Not Found!!!";	
		getch();
	}
}

void bank_app::infobank(){
	ifstream fin;
	fin.open("bankappfile.txt",ios::in|ios::binary|ios::app);
	if(!fin)
	cout<<"Unable To Load File!!";
	else{
	//	int count = fin.tellg()/sizeof(*this);
		//cout<<"\n                                    There Are "<<count<<" Account Holders In Our Bank"<<endl;
		cout<<"                  The Informations Are Given Below:"<<endl;
		int i=1;
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			cout<<i<<"."<<endl;
			showbankdata();
			i++;
			
			fin.read((char*)this,sizeof(*this));
		}
		int counter;
		if (counter==0)
		cout<<"\a\aUser Not Found!!!";	
		getch();
	}
}
int head::searchcatogry(int id){
	char cat;
	int i=0,j=0;
	ifstream fin;
	fin.open("userinfo.txt",ios::in|ios::binary|ios::app);
	if(!fin)
	{
	cout<<"File Cannot Open While Searching Category!!!"<<endl;
	getch(); 
	}
	
	else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			if(id==userid){
			if(catgry=='a'||catgry=='A'){
		          i++;
		        }
		if(catgry=='b'||catgry=='B'){
		j++;
		       }}
			fin.read((char*)this,sizeof(*this));
		}
		if(i==1)
		return 1;
		if (j==1)
		return 2;
	}
	fin.close();
}



void bank_app::get_record(){
//	int an;
cout<<"\n\n                                 Please Enter The Following Details Carefully!! "<<endl;
cout<<"\n\t\tAccount Holder's First Name:";
fflush(stdin);
std::cin.getline(firstname,80);

cout<<"\n\t\tAccount Holder's Last Name:";
fflush(stdin);
std::cin.getline(lastname,80);


cout<<"\n\t\tNationality:";
fflush(stdin);
std::cin.getline(nationality,20);

cout<<"\n\t\tPermanent Address:";
fflush(stdin);
std::cin.getline(paddress,80);

cout<<"\n\t\tTemprorary Address:";
 fflush(stdin);
std::cin.getline(taddress,80);

cout<<"\n\t\tDate Of Birth (dd/mm/yy):";
 fflush(stdin);
 std::cin.getline(dob,15);

cout<<"\n\t\tAge:";
cin>>age;

cout<<"\n\t\tGender(M/F):";
cin>>gender;

cout<<"\n\t\tAccount Balance(In Rs:)";
cin>>balance;

cout<<"\n\t\tAccount Type [Saving(S)|Current(C)|Fixed(F)]:";
cin>>atype;
R:
cout<<"\n\t\tEnter Account Number:";
cin>>acno;
////int l=checkaccountnumber(an);
//if (l==1){
	//cout<<"account number already exist.please try again!!!"<<endl;
	//goto R;
//}
system("CLS");
cout<<"\n\a\t\tThis Is The Info You Entered:\n";
showbankdata();
}
int bank_app::write_record(){
if(age==0 &&balance==0)
	return 0;
ofstream fout;
fout.open("bankappfile.txt",ios::app|ios::binary);
fout.write((char*)this,sizeof(*this));
fout.close();
return 1;	
}
int bank_app::checkaccountno(int n){
    int counter=0;
	ifstream fin;
fin.open("bankappfile.txt",ios::in|ios::binary|ios::app);
if(!fin){
cout<<"\n\nFile Cannot Open While Checking account number\n\n";
getch();
}else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
		if(n==acno){
	    counter++;
		showbankdata();
		getch();
		return 1;		
		}
		fin.read((char*)this,sizeof(*this));
		
	}
	fin.close();
	if (counter==0)
    return 0;

}
}/*
int bank_app::checkaccountnumber(int n){
int counter=0;
ifstream fin;
fin.open("bankappfile.txt",ios::in|ios::binary|ios::app);
if(!fin){
cout<<"\n\nFile Cannot Open While Checking account number\n\n";
getch();
}else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
	
		if(n==acno){
		counter++;
		return 1;		
		}
		fin.read((char*)this,sizeof(*this));
		
	}
	fin.close();
	if (counter==0)
    return 0;

}	
}*/
void bank_app::showbankdata(){
cout<<"\nName:"<<firstname<<" "<<lastname<<endl
    <<"Nationality:"<<nationality<<endl
	<<"Permanent Address:"<<paddress<<endl
	<<"Temporary Address:"<<taddress<<endl
	<<"Date Of Birth:"<<dob<<endl
	<<"Age:"<<age<<endl
	<<"Gender:"<<gender<<endl
	<<"Balance:"<<balance<<endl
	<<"Account Type:"<<atype<<endl
	<<"Account Number:"<<acno<<endl	;
cout<<"\n\n\n\n\n                 Press Any Key To Continue";
getch();
}
void bank_app::depositebalanceupdater(int n ,int a){
	fstream file;
	file.open("bankappfile.txt",ios::in|ios::out|ios::ate|ios::binary);
	file.seekg(0);
	file.read((char *)this, sizeof (*this));
	while(!file.eof()){
		if(n==acno){
	    	balance=balance+a;
			file.seekp(file.tellp() -sizeof(*this));
			file.write((char *)this,sizeof(*this));
		}
		file.read((char *)this, sizeof(*this));	
	}
	file.close();
}



void bank_app::withdrawbalanceupdater(int n,int a){

	
	fstream file;
	file.open("bankappfile.txt",ios::in|ios::out|ios::ate|ios::binary);
	file.seekg(0);
	file.read((char *)this, sizeof (*this));
	while(!file.eof()){
		if(n==acno){
	    	balance-=a;
			file.seekp(file.tellp()- sizeof(*this));
			file.write((char *)this,sizeof(*this));
		}
		file.read((char *)this, sizeof(*this));	
	}
	file.close();
	}
int bank_app::menu(){
	system("CLS");
	time();
	int choice;
	cout<<"*****This Is Your Bank Account Handler******"<<endl;
	cout<<"*********MENU****************"<<endl;
	cout<<"          Add Record                     [1]"<<endl;
	cout<<"          Deposite Cash                  [2]"<<endl;
	cout<<"          Withdraw Cash                  [3]"<<endl;
	cout<<"          Balance Transfer               [4]"<<endl;
	cout<<"          Remove Account                 [5]"<<endl;
	cout<<"          View Account Details           [6]"<<endl;
	cout<<"          Quit                           [7]"<<endl<<"\n\a\a";
	cout<<"\n\n\n\n\n\n\n\n\nPlease Enter Your Choice:";
     cin>>choice;
     return choice;
}


int bank_app::checkbalance(int n, int a){
    fstream file;
	file.open("bankappfile.txt",ios::in|ios::out|ios::ate|ios::binary);
	file.seekg(0);
	file.read((char *)this, sizeof (*this));
	while(!file.eof()){
		if(n==acno){
	    	if(balance>a)
	    	return 1;
	    	else 
	    	return 0;
		}
		file.read((char *)this, sizeof(*this));	
	}
	file.close();
    }
void bank_app::remove(int a){
    
    ifstream infile;
    infile.open("bankappfile.txt", ios::binary);
    if(!infile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }
    infile.seekg(0,ios::end);
    int count = infile.tellg()/sizeof(*this);
    //cout<<"\n There are "<<count<<" record in the file";
    fstream tmpfile;
    tmpfile.open("tmpfile.bank", ios::out|ios::binary);
    infile.seekg(0);
    for(int i=0; i<count; i++)
    {
        infile.read(reinterpret_cast<char*>(this),sizeof(*this));
        if(i==(a-1))
            continue;
        tmpfile.write(reinterpret_cast<char*>(this), sizeof(*this));
    }
    infile.close();
    tmpfile.close();
    std::remove("bankappfile.txt");
    rename("tmpfile.bank", "bankappfile.txt");
}
void head::showuserdata(){
	linout l;
	cout<<"UserID:"<<userid<<endl;
	cout<<"Name:"<<fname<<" "<<lname<<endl;
	cout<<"Category:"<<catgry<<endl;
	ifstream fin;
	}
int head::menuA(){
	int choice;
	system("CLS");
	time();
	cout<<"    Create New Account               [1]"<<endl
	    <<"    Deposite Money                   [2]"<<endl
	    <<"    Withdraw Money                   [3]"<<endl
	    <<"    Balance Transfer                 [4]"<<endl
	    <<"    Remove an Account                [5]"<<endl
	    <<"    Quit                             [6]"<<endl;
	cout<<"\n\n\n\n\n\n            Please Enter Your Choice:";
	cin>>choice;
	return choice;
}

int head::menuB(){
	
	int choice;
	system("CLS");
	time();
	cout<<"      Employee Log In              [1]"<<endl
	    <<"      Employee Log Out             [2]"<<endl;
cout<<"\n\n                          Please Enter Your Choice:";
	    cin>>choice;
	    return choice;

}

int head::gamemenu(){
	int choice;
	system("cls");
	time();
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"-                       REFRESHMENT TIME                                    -"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"                                 "<<endl;
	cout<<"HORSE RACE                    [1]"<<endl;
	//cout<<"RUN DIGITAL CLOCK             [3]"<<endl;
	//cout<<"RUN TIME  KEEPER              [4]"<<endl;
	cout<<"EXIT                          [2]"<<endl;
	cout<<"\n\n\n                          Enter Your Choice:";
	cin>>choice;
	return choice;
}
/*
void game::hangman(){
string name;
char letter;
int num_of_wrong_guesses=0;
string word;
string words[] =
{
"nepal",
"pakistan",
"india",
"afghanistan",
"srilanka",
"bhutan",
"maldives",
"bangladesh"

};

//choose and copy a word from array of words randomly
srand(time(NULL));
int n = 1+(rand()% 10);
word=words[n];

// Initialize the secret word with the * character.
string unknown(word.length(),'* *');

// welcome the user
cout << "\n\nWelcome to hangman...Guess a SAARC country Name";
cout << "\n\nEach letter will be represented by a star.";
cout << "\n\nYou have to type only one letter at a time!";
cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.";
cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

// Loop until the guesses are used up
while (num_of_wrong_guesses < MAX_TRIES)
{
cout << "\n\n" << unknown;
cout << "\n\nGuess a letter: ";
cin >> letter;
// Fill secret word with letter if the guess is correct,
// otherwise increment the number of wrong guesses.
if (letterFill(letter, word, unknown)==0)
{
cout << endl << "Whoops! That letter isn't in there!" << endl;
num_of_wrong_guesses++;
}
else
{
cout << endl << "You found a letter! Isn't that exciting!" << endl;
}
// Tell user how many guesses has left.
cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
cout << " guesses left." << endl;
// Check if user guessed the word.
if (word==unknown)
{
cout << word << endl;
cout << "Yeah! You got it!";
break;
}

}
if(num_of_wrong_guesses == MAX_TRIES)
{
cout << "\nSorry, you lose...you've been hanged." << endl;
cout << "The word was : " << word << endl;
}
cin.ignore();
cin.get();
getch();
}*/
void game::horserace(){
cout<<"Who do you think is going to win?\nPlace your Bet and find out!\n> $";
cin>>betcash;
cout<<"On what horse? A, B, C, or D?\n> ";
cin>>bethorse;
if(bethorse=='a'){bethorse='A';}
if(bethorse=='b'){bethorse='B';}
if(bethorse=='c'){bethorse='C';}
if(bethorse=='d'){bethorse='D';}

srand(time(NULL));

for(int a=0;a<=25;a++)
{
system("cls");

horse='A';
posA=position(posA,horse);
horse='B';
posB=position(posB,horse);
horse='C';
posC=position(posC,horse);
horse='D';
posD=position(posD,horse);
for(int timer=0;timer<=100000000;timer++);
}

int highest=0;
int winner[] = {posA, posB, posC, posD};


for(int p=0;p<=3;p++)
{
cout<<winner[p] << endl;
if(winner[p]>winner[highest]) ///Your Problem is here all answers are 2.
highest=p;
}
switch(highest){
case 0:
horsename='A';
break;
case 1:
horsename='B';
break;
case 2:
horsename='C';
break;
case 3:
horsename='D';
break;
}
cout<<"Winning Horse: Horse "<<horsename<<endl;
if(horsename==bethorse){cout<<"You Won! You Get triple times the money you paid."<<endl;}
else cout<<"You Lost! Now your $"<<betcash<<" that you just bet is now mine!"<<endl;

system("pause");
}
int letterFill (char guess, string secretword, string &guessword)
{
int i;
int matches=0;
int len=secretword.length();
for (i = 0; i< len; i++)
{
// Did we already match this letter in a previous guess?
if (guess == guessword[i])
return 0;

// Is the guess in the secret word?
if (guess == secretword[i])
{
guessword[i] = guess;
matches++;
}
}
return matches;
}
void time()
{
	    int hours, minutes, seconds, day, month, year;

		time_t now;
	
		time(&now);

	struct tm *local = localtime(&now);
    hours = local->tm_hour;	
	minutes = local->tm_min;		
	seconds = local->tm_sec;		
	day = local->tm_mday;		
	month = local->tm_mon + 1;		
	year = local->tm_year + 1900;
	if (hours < 12){
     		
	   printf("                                                                                                                                                                              Current Time: %02d:%02d:%02d am\n", hours, minutes, seconds);}
	else
		{
		printf("                                                                                                                                                                              Current Time: %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);}
        printf("                                                                                                                                                                              Today: %02d/%02d/%d\n", day, month, year);

}


