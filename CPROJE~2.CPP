//Header files included
#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<fstream.h>


//global variables
 int tok=0,bill_no=0;
 float total=0;


class details
{private:
  char*pname,*unit,g;
  char A[11],age;
 public:int s_no;
  void getinfo()
   {              cout<<"Enter patient name \n";
		  gets(pname);
		  cout<<endl<<"Enter gender (M/F) \n";
		  cin>>g;
         	  cout<<endl<<"Enter age \n";
		  cin>>age;
		  cout<<endl<<"Enter D.O.B \n";
		  cin.getline(A,11);
		  cout<<"\nEnter Doctor/Unit\n";
		  gets(unit);
		  cout<<endl;
   }
}b1,b2;

class registert
{ public:
  char*pname,*unit,g;
 char  A[11],age,pno;

  void getinfo(void)
  {               cout<<"Enter patient name \n";
		  gets(pname);
		  cout<<endl<<"Enter gender (M/F) \n";
		  cin>>g;
		  cout<<endl<<"Enter age \n";
		  cin>>age;
		  cout<<endl<<"Enter D.O.B \n";
		  cin.getline(A,11);
		  cout<<"\nEnter Doctor/Unit\n";
		  gets(unit);
		  cout<<endl;
		  cprintf("Press Any Key");
  }
};

//function for making top and bottom design
 void design()
 { for(int i=0;i<=79;i++)
   {
     textcolor(YELLOW);
     cprintf("");delay(20);
   }
 }
   void cont()
	  { void design();
	    int i;
	    clrscr();design();
	    cout<<"		You are an authorised user" ;
	    cprintf("\nPress Any Key\n");  cout<<endl;
	    design();getch();
	    clrscr();design();
	    cout<<"		WELCOME TO C++ PROGRAMME \n";
	    cout<<"			EASE TASK  \n Fully Integrated Hospital Management Software";
	    cout<<endl;
	    cprintf("\nPress Any Key\n");cout<<endl;
	    design();getch();
	    int c;
	    char cd;
	    void sp();
	    void pmgm();
	    void cser();
	    void sser();
	    cd: clrscr();   design();
	    textcolor(GREEN);
	    cprintf("\t\t\tCLARITY MULTISPECIALITY HOSPITAL");cout<<endl;cprintf("\t\t\thelping you care better");
	    cout<<endl<<endl<<"\tRECEPTION  DESK"<<endl;
	    cout<<"1. Patient management (OPD, IPD)"<<endl;
	    cout<<"2. Stores and Pharmacy "<<endl;
	    cout<<"3. Clinical Management ( LAB)"<<endl;
	    cout<<"4. Supportive Services (Transportation,Room Mgmt., Mortuary Mgmt.)"<<endl;
	    cout<<"0. Exit"<<endl;
	    textcolor(YELLOW+BLINK);         cout<<endl;
	    cprintf("\nEnter your choice\n");
	    cin>>c;      design();
	    getch();
	    switch(c)
	    {
	       case 1:pmgm();
		      break;
	       case 2:cser();
		      break;
	       case 3:sser();
		      break;
	       case 0:exit(0);break;
	       default :cout<<"wrong choice";goto cd;
	    }
	    design();getch();goto cd;
	    }
	     void pmgm()
	     { void design();
	       int i;
	       clrscr();design();
	       int ch;
	       char ef;
	       void opd();
	       void ipd();
	       void lab();
	       void rm();
	       textcolor(GREEN);
	       cprintf("\t\t\tPATIENT MANAGEMENT\n\n");
	       cout<<endl<<"1. OPD (Doctors Specialization, Schedule & Prescription)"<<endl;
	       cout<<"2. IPD  (Patient Details, Record & treatment charges)"<<endl;
	       cout<<"0. Exit\n"<<endl;
	       ef:textcolor(YELLOW+BLINK);
	       cprintf("Enter your choice\n");
	       cin>>ch;     design();
	       getch();
	       switch(ch)
	    {
	       case 1: opd();break;
	       case 2: ipd();break;
	       case 0: exit(0);break;
	       default :cprintf("You entered a wrong choice");cout<<endl;goto ef;
	    }
	       design();getch();
	 }
  void opd()
	       { void design();
		 int i;
		 clrscr();design();
		 void regi();
		 void doc_ro();
		 void repo();
		 void bill();
		 void sp();
		 int ch;
		 char gh;
		 gh:   textcolor(YELLOW);
		 cprintf("OPD (Outdoor Patient Department)");cout<<endl<<endl;
		 cout<<"1. OPD Registeration Card"<<endl;
		 cout<<"2. Doctor's Rooster"<<endl;
		 cout<<"3. Reports, Medical Certificate, Prescription generation"<<endl;
		 cout<<"4. Billing & Other releted Details"<<endl;
		 cout<<"0. Exit"<<endl;
		 cout<<"Enter your choice "<<endl;
		 cin>>ch; design();
		 getch();
		 switch(ch)
		 {
		  case 1: regi();break;
		  case 2: doc_ro();break;
		  case 3: repo();break;
		  case 4: bill();break;
		  case 0: exit(0);break;
		  default :cout<<"You entered a wrong choice"<<endl;goto gh;
		 }
		 design();getch();
		}

   void regi()
		{ void design();   registert reg,reg2, reg1;
		  int pno1,i,op,age;
		  clrscr(); design();
		  ++::tok;
		  char *name;
		 clrscr();design();
		 cout<<"For new patient entry( \n press 1 \t else 0)"<<endl;
		 cin>>op;
		  if(op==0)
		     { fstream fin;
		       if( "rdetails.dat")
		     { fin.open("rdetails.dat",ios::in|ios::binary);
		       cout<<"enter d no of patient"<<endl;
			 cin>>pno1;
			while(!fin.eof())
			{ fin.read((char*)&reg,sizeof(reg));
                                reg2=reg;
                                if(reg.pno==pno1)
			       {   reg1=reg2;
				   break;
				   }
			  }
		  if(op==0){
		  cout<<"record doesn't exist";cout<<endl;
				   op=1;
			    }
		   fin.close();
		 }  }
		if(op==1)
		    {
		      reg1.getinfo();
		      design();  cout<<endl;
		      getch();
		     }
		  clrscr();design();
		  cout<<"		CLARITY MULTISPECIALITY HOSPITAL\n";
		  cout<<" 2, Institutional Area, Vikas Marg, Delhi-110092"<<endl;
		  cout<<" TEL.: 22371928 to 34\n\n\n\n"<<endl;
		  cout<<"			 General OPD Card"<<endl;
		  cout<<"Token no. :"<<::tok;
		  cout<<"\n";
		  cout<<"Name :";
		  puts(reg1.pname);
		  cout<<"\nDoctor/Unit :";
		  puts(reg1.unit);
		  cout<<"\nAge :";cout<<reg1.age;
		  cout<<"\nGender :"<<reg1.g<<endl; design();
		  cout<<"\n D.O.B: ";cout.write(reg1.A,11);
		  cout<<"\n ";
		  getch();return;
		}
   void rm()
		{ void design();
		  int i;clrscr();design();
		  cprintf("\t\tROOM MANEGEMENT");cout<<endl;
		  cout<<"TOTAL ROOM AVAILABLE - 400"<<endl;
		  cout<<"TOTAL DELUXE ROOMS-50"<<endl;
		  cout<<"TOTAL SUB DELUXE ROOMS-150"<<endl;
		  cout<<"TOTAL GENERAL WARDS-200"<<endl;
		  cout<<"TOTAL VACANT ROOMS-150"<<endl;
		  cout<<"TOTAL VACANT DELUXE ROOMS-30"<<endl;
		  cout<<"TOTAL VACANT SUB DELUXE ROOMS-50"<<endl;
		  cout<<"TOTAL VACANT GENERAL WARDS -70"<<endl;
		  design();getch();return;
		}
 void doc_ro()
		{ void design();
		  clrscr();design();
		  cout<<"Doctor Rooster"<<endl;
		  cout<<" Doctor's name   -   Specialisation   -  Days      -  Time"<<endl;
		  cout<<"Dr.S.K.Sharma    -    Heart Surgen    -  Mon-Thu   -  4:00-6:00 p.m."<<endl;
		  cout<<"Dr.K.V.Mehta     -    Ortho Surgen    -  Tue-Fri   -  1:00-4:00 p.m."<<endl;
		  cout<<"Dr.R.K.Jain      -    Skin  Surgen    -  Wed-Sat   -  2:00-6:00 p.m."<<endl;
		  cout<<"Dr.K.C.Gupta     -    Ortho Surgen    -  Mon-Thu   -  4:00-8:00 p.m."<<endl;
		  cout<<"Dr.Shilpi Jain   -    Dentist         -  Mon-Tue   -  4:00-9:00 p.m."<<endl;
		  cout<<"Dr.Rajesh        -    E.N.T           -  Thu-Sat   -  2:00-6:00 p.m."<<endl;
		  cout<<"Dr.R.K.Rathore   -    Psychiatrist    -  Tue-Fri   -  2:00-4:00 p.m."<<endl;
		  design();getch();return;
		}
  class bill_details
		 { public:
		   int s_no;
		   char *particulars;
		   int quantity;
		   float price;
		   float disc_amt;
		   float net_amt;
		   void calculate()
		  {::total+=(net_amt-net_amt);
		  }
		 }b[5];
	       class repo_details
		 {public:
		  char dateA[11],*name,*dis,*doc,dateB[11];
		  int da,pno,i;
		 }r,r1;
   void repo()
	       { void design();int pno, op;
		 char *name;
		 clrscr();design();
		 cout<<"For outdoor patient \n press 1 \n else 0)"<<endl;
		 cin>>op;
	  if(op==0)
	     {fstream fin;
	      fin.open("pdetails.dat",ios::in|ios::binary);
		cout<<"enter d no of patient"<<endl;
	      cin>>pno;
	      while(!fin)
	      {fin.read((char*)&r,sizeof(repo_details));

		if(r.pno==pno)
	      { r1=r;break;}   }
	     if(op==0) {cout<<"record doesn't exist"<<endl;
	     op=1; }
	      fin.close();
	     }
	  if(op==1)
	     {   cout<<"Enter patient name \n";
		 gets(r1.name);
		 cout<<"\n Enter disease\n";
		 gets(r1.dis);
		 cout<<"\nEnter date (from)\n";
		 cin.getlline(r1.dateA,11);
		 cout<<"\nEnter date (to)\n";
		 cin.getline(r1.dateB,11);
		 cout<<"\nEnter no. of days\n";
		 cin>>r1.da;
		 cout<<"\nEnter Doctors name\n";
		 gets(r1.doc);design();
		 getch();
	      }   clrscr();design();
		 cout<<"		CLARITY MULTISPECIALITY HOSPITAL\n";
		 cout<<" 2, Institutional Area, Vikas Marg, Delhi-110092"<<endl;
		 cout<<" TEL.: 22371928 to 34\n\n\n\n"<<endl;
		 cout<<"\t\tMedical Certificate";
		 cout<<endl<<"This is to certify that...";puts(r1.name);cout<<"... is suffering from ...";puts(r1.dis);
		 cout<<"... disease and is under my treatment."<<endl<<"He needs rest for ..."<<r1.da<<"...days from date...";cout.write(r1.dateA,11);
		 cout<<"... to ...";cout.write(r1.dateB,11);cout<<"...";
		 cout<<"\n\n\t\t\t\t";puts(r1.doc);
		design();getch();return;
		}
  void bill()
	     {    void design();
		  int i,op,no,age,a;char *name,*unit,c='y',g;
		  ++::bill_no;::total=0;
		 cout<<"For outdoor patient \n press 1 \n else 0)"<<endl;
		 cin>>op;
	  if(op==0)
	     {fstream fon;                b
	      fon.open("bdetails.dat",ios::in|ios::binary);
		cout<<"enter d no of patient"<<endl;
	      cin>>no;

	      while(!fon)
	     {fon.read((char*)&b2,sizeof(details));
		if(no==b2.s_no)
	      { b1=b2;break;}}
	     if(op==0) {cout<<"record doesn't exist"<<endl;
	     op=1; }
	      fon.close();
	     }
	  if(op==1)
	     {
		  char *pname,*unit,g,A[11];
		  int a,age[3],d;
		  clrscr();
		  design();
		  cout<<"Enter patient name \n";
		  gets(pname);
		  cout<<endl<<"Enter gender (M/F) \n";
		  cin>>g;
		  cout<<endl<<"Enter age \n";
		  cin>>age[3];
		  cout<<endl<<"Enter D.O.B \n";
		  cin>>A[11];
		  cout<<"\nEnter Doctor/Unit\n";
		  gets(unit);
	      }
	      while(c=='y'||c=='Y')
		  { int a=0;
		    cout<<"\nEnter S.No"<<endl;
		    cin>>b[a].s_no;
		    cout<<"\nEnter Particulars\n";
		    gets(b[a].particulars);
		    cout<<"\nEnter Quantity\n";
		    cin>>b[a].quantity;
		    cout<<"\nEnter Price\n";
		    cin>>b[a].price;
		    cout<<"\nEnter Discount\n";
		    cin>>b[a].disc_amt;
		    cout<<"\nEnter Net amt\n";
		    cin>>b[a].net_amt;
		    cout<<"\nWant to enter more particulars(Y/N)"<<endl;
		    cin>>c;
		    cout<<endl;
		    b[a].calculate();
		  }
		    cprintf("Press Any Key");cout<<endl;
		    design();getch();
		    clrscr();design();
		    cout<<"		CLARITY MULTISPECIALITY HOSPITAL\n";
		    cout<<" 2, Institutional Area, Vikas Marg, Delhi-110092"<<endl;
		    cout<<" TEL.: 22371928 to 34\n\n\n\n"<<endl;
		    cout<<"\t\tBILL DETAILS"<<endl;
		    cout<<"Bill No. ::"<<::bill_no;
		    cout<<"\n";
		    cout<<"Name :";puts(name);
		    cout<<"\nDoctor/Unit :";puts(unit);
		    cout<<"\nAge :";cout<<age;
		    cout<<"\nGender :"<<g;
		    design();
		    cout<<"S.no - Particulars - Quantity - Price- Disc amt - Net amt"<<endl;
		    for (int d=0;d<a;a++)
		    {
		      cout<<b[d].s_no<<"-";
		      puts(b[d].particulars);
		      cout<<"-"<<b[d].quantity<<"-"<<b[d].price<<"-"<<b[d].disc_amt<<"-"<<b[d].net_amt;
		      cout<<endl;

		    }
		    cout<<endl<<"\t\t\t TOTAL ::"<<::total;
		    design();
		    getch(); return;
	       }
    void sp()       { void design();
		      int i;
		      clrscr();design();
		      cout<<"Stores and Pharmacy"<<endl;
		      cout<<"Drug Name                 -    Price    -    Type  "<<endl;
		      cout<<"Magnesium Phosph. 12X     -    120/-    -  Homoeopathic "<<endl;
		      cout<<"Silver Axe                -    225/-    -  Alopathic    "<<endl;
		      cout<<"Ultracet                  -    137/-    -  Alopathic    "<<endl;
		      cout<<"Neosporine                -     85/-    -  Alopathic    "<<endl;
		      cout<<"Volini                    -    109/-    -  Alopathic    "<<endl;
		      cout<<"Ocupol-D                  -    662/-    -  Ointment     "<<endl;
		      cout<<"Grilinctus-BM             -     46/-    -  Alopathic    "<<endl;
		      cout<<"Betadine                  -    135/-    -  Alopathic    "<<endl;
		      cout<<"Colocynthis               -     95/-    -  Homoeopathic "<<endl;
		      cout<<"Wax Off                   -     50/-    -  Alopathic    "<<endl;
		      cout<<"Betadine Mint             -    113/-    -  Alopathic    "<<endl;
		      cout<<"Ambrolite D               -     75/-    -  Alopathic    "<<endl;
		      cout<<"Nasivion                  -     52/-    -  Alopathic    "<<endl;
		      cout<<"THYROX-75                 -    152/-    -  Alopathic    "<<endl;
		      cout<<"Ace-Proxyvon              -     50/-    -  Alopathic    "<<endl;
		      cout<<"AT-TABS                   -     85/-    -  Homoeopathic "<<endl;
		      cout<<"BIO-COMBINATION           -     60/-    -  Homoeopathic "<<endl;
		      cout<<"Zylopred                  -    143/-    -  Homoeopathic "<<endl;
		      cout<<"Glucose Bottle            -    50/-(per)-       -       "<<endl;
		      design();getch();return ;
		   }
   void cser()
		   { void design();
		     int i;
		     clrscr();design();
		     cout<<"CLINICAL SERVICES\n"<<endl;
		     cout<<" LAB MANAGEMENT "<<endl;
		     cout<<"Lab Tests             -   Price  -  Days     -    Time            "<<endl;
		     cout<<"Blood Test            -   250/-  - Mon-Sat   -  9:00a.m.-5:00p.m. "<<endl;
		     cout<<"Sugar Test            -   500/-  - Mon-Sat   -  9:00a.m.-5:00p.m. "<<endl;
		     cout<<"Thyroid Profile Test  -   500/-  - Mon-Sat   -  9:00a.m.-5:00p.m. "<<endl;
		     cout<<"Urine Culture         -   150/-  - Mon-Sat   -  9:00a.m.-5:00p.m. "<<endl;
		     cout<<"M.R.I Test            -   7000/- - Mon-Sat   -  9:00a.m.-5:00p.m. "<<endl;
		     cout<<"C.T.Scan              -   3000/- - Mon-Sat   -  9:00a.m.-5:00p.m. "<<endl;
		     cout<<"X-Ray                 -   500/-  - Mon-Sat   -  9:00a.m.-5:00p.m. "<<endl;
		     design();getch();   return;
		   }
   void sser()
		   { void design();
		     int i;
		     clrscr();design();
		     void rm(),trans(),mort();int ch;
		     cout<<"		SUPPORT SERVICES\n"<<endl;
		     cout<<"1. Room/Ward Management "<<endl;
		     cout<<"2. Transportation\n";
		     cout<<"3. Mortuary Management\n";
		     cout<<"Enter Your Choice ";
		     cin>>ch;
		     design();getch();
		     switch(ch)
		     {
		       case 1: rm();break;
		       case 2: trans();break;
		       case 3: mort();break;
		     }
		   }
   void mort()
		   {
		    clrscr();design();
		    cout<<"Mortuary Service  - Available"<<endl;
		    cout<<"Days              - Mon-Sat"<<endl;
		    cout<<"Timing            - 8:00a.m.-5:00p.m."<<endl;
		    cout<<"Location          - Entering the hosp. grounds from Nutley Lane,take the first right turn."<<endl;
		    cout<<"Contact(Tel.)     - 01-221-4328 "<<endl;
		    design();getch();return;
		   }

   void trans()
		   {
		    clrscr();design();
		    cout<<"Transportation Facility -  Available"<<endl;
		    cout<<"Nunmber of Ambulances   -  7 "<<endl;
		    cout<<"Availability(Time&Day)  - 24*7"<<endl;
		    cout<<"Telephone Number        - 102,22-45-432145,22768924"<<endl;
		    design();getch();return ;
		   }

   void ipd()
		   { void design();
		     int i,ch;char lt;
		     clrscr();design();
		     cout<<"INDOOR PATIENT DEPARTMENT"<<endl;
		     cout<<"1. Doctor's Rooster"<<endl;
		     cout<<"2. Reports, Medical Certificate, Prescription generation"<<endl;
		     cout<<"3. Billing & Other releted Details"<<endl;
		     cout<<"0. Exit"<<endl;
		     lt:
		     cout<<"Enter your choice "<<endl;
		     cin>>ch; design();
		     getch();
		     switch(ch)
		     {
		       case 1: doc_ro();break;
		       case 2: repo();break;
		       case 3: bill();break;
		       case 0: exit(0);break;
		       default :cout<<"You entered a wrong choice"<<endl;goto lt;
		     }
		     design();getch();
		   }
//main functon
 void main()
 {  clrscr();
    void design();
    int i;
    void cont();
    char lb,ch,ab;
    char *us,*ps;
    design();
    cout<<"WELCOME TO CLARITY"<<endl;
    cout<<"\n\n press any key to continue :)"<<endl;
    design();
    getch();clrscr();
    design();
    cout<<"\nL - for LOGIN\n";
    cin>>ch;design();
    getch();
    switch(ch)
    {  case 'l':
    {lb:
       clrscr();design();
       cout<<"\nUSER NAME\n";
       int ctr=0;
       gets(us);
       cout<<"\nPASSWORD\n";
       gets(ps);design();
       getch();
       if( ctr==3)
	 {  exit(0);}
       if(strcmp(us,"vidit")==strcmp(ps,"password"))
	 { cont();  }
	else{cout<<"\nwrong password\n";
	 ctr++;
	 goto lb;}}
	 break;
       case 'L':
       {
	 clrscr();design();
	 cout<<"\nUSER NAME\n";
	 int ctr=0;
	 gets(us);
	 cout<<"\nPASSWORD\n";
	 gets(ps);design();
	 if( ctr==3)
	   { exit(0);}
	 if(strcmp(us,"vidit")==strcmp(ps,"password"))
	   {cont();  }
	 else{
	 cprintf("\nwrong password\n");
	 ctr++;
	 goto lb;}}break;
       }          }
