#include<bits/stdc++.h>
using namespace std;
struct node
{
  int room_no;
  char name[50];
  long long int cell_no;
  long long int ad_no;
  int age;
  struct node *prev,*next;

};
class Monument
{
	private:
		int counter,num,b;
		int from,vrom,orom;
		struct node *r, *start;
		int choise,rom,day;
		int rup;
		int bill;
		int allot;
		int y;

    public:
	    Monument()
	   {
	     counter=100;
           start = NULL;
		 from=20;
		 vrom=30;
		 orom=50;
		 rup=bill=0;
		 allot=day=b=rom=num=choise=0;
           y=0;

	   }
	   void family_room()
	   {
        cout<<"\n\t***WELCOME TO 1st floor for family Rooms...!***\t"<<endl;
        cout << "\n\tRent of the room is 1500 Rs/day\t"<<endl;


		cout<<"\n\n\thow many rooms do you want for rent\t";
        cin>>rom;
        cout<<"\n\thow many days do you want to stay.\t";
        cin>>day;
        if(rom<=20&& from>=rom)
        {
            cout << "\n\tFamily Rooms ranges from 1 - 20\t"<<endl;

        }
        else{
            cout<< "\n\tSORRY ROOM ARE CURRENTLY UNAVAILABLE"<<endl;
            cout<<"\tAvailable Family Rooms are\t"<<from<<endl;

            family_room();
        }

       if(rom<=20) {
        	a:
        	day=day*1500;
        	bill=day*rom;
			cout<<"\n\tyour bill is\t"<<bill<<endl;
        	cout<<"\n\tROOM CAN BE ALLOTED"<<endl;
        	cout<<"\n\tpress 1 for first allot"<<endl;
        	cout<<"\n\tpress 2 for after allot"<<endl;
        	cout<<"\n\tpress 3 for before allot"<<endl;
        	cout<<"\n\tpress 4 for last allot"<<endl;
        	cout<<"\nENTER THE CHOICE! :\t";
        	cin>>allot;
        	if(allot==1)
           {
        		while(rom!=0)
        	{
        		 y=first_allot();
        		 if(y==1){
        		from--;
        		counter--;
        		rom--;}
			}

			cout<<"available Family Rooms are\t"<<from<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
		    working();

          }

          else if(allot==2)
               {
                 while(rom!=0)
              	{
        	    y=after_allot();
        		 if(y==1){
        		from--;
        		counter--;
        		rom--;}
			}
			cout<<"available Family Rooms are\t"<<from<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			   working();

	    	}
	    else if(allot==3)
	    {
	    	 while(rom!=0)
              	{
        	   y= before_allot();
        		 if(y==1){
        		from--;
        		counter--;
        		rom--;}
			}
			cout<<"available Family Rooms are\t"<<from<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
		}
		else if(allot==4)
		{
			 while(rom!=0)
              	{
        	   y= last_allot();
        		 if(y==1){
        		from--;
        		counter--;
        		rom--;}
			}
			cout<<"available Family Rooms are\t"<<from<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
		}
		else
		{
			cout<<"\n\tinvalid option"<<endl;
			goto a;
		}



 }
	 	else
		   {
			cout<<"\n\tFAMILY ROOMS AVALIABLE ARE -" << from <<endl;
		   }



	}



	    void vip_room()
	   {
        cout<<"\n\t***WELCOM TO 2nd floor for VIP Rooms...!***"<<endl;
        cout<<"\n\tRent Of The Room Is 3000 Rs / day\t"<<endl;

		cout<<"\n\n\thow many rooms do you want for rent\t";
        cin>>rom;

        cout<<"\n\tHow many days do you want to stay...\t";
	    cin>>day;
	      if(rom<=30&& vrom>=rom)
        {
            cout << "\n\tVip Rooms ranges  from  21 - 50\t"<<endl;

        }
        else{
            cout<< "\n\tSORRY ROOM ARE CURRENTLY UNAVAILABLE"<<endl;
            cout<<"\tAvailable VIP Rooms are\t"<<vrom<<endl;

            vip_room();
        }

        if(rom<=30)
        {
        	c:
        		day=day*3000;
        		bill=day*rom;
				cout<<"\n\tyour bill is\t"<<bill<<endl;
        	cout<<"\n\tROOM CAN BE ALLOTED"<<endl;
        	cout<<"\n\tpress 1 for first allot"<<endl;
        	cout<<"\n\tpress 2 for after allot"<<endl;
        	cout<<"\n\tpress 3 for before allot"<<endl;
        	cout<<"\n\tpress 4 for last allot"<<endl;
        	cout<<"\nENTER THE CHOICE! :\t";
        	cin>>allot;
        	if(allot==1)
             {
        		while(rom!=0)
        	 {
        		y=first_allot();
        		if(y==1){
        		vrom--;
        		counter--;
        		rom--;}
			}
			cout<<"available vip Rooms are\t"<<vrom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
          }

          else if(allot==2)
               {
                 while(rom!=0)
              	{
        	   y= after_allot();
        		if(y==1){
        		vrom--;
        		counter--;
        		rom--;}
			}
			cout<<"available vip Rooms are\t"<<vrom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();

	    	}
	    else if(allot==3)
	    {
	    	 while(rom!=0)
              	{
        	   y= before_allot();
        		if(y==1){
        		vrom--;
        		counter--;
        		rom--;}
			}
			cout<<"available vip Rooms are\t"<<vrom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
		}
		else if(allot==4)
		{
			 while(rom!=0)
              	{
        	    y=last_allot();
        		if(y==1){
        		vrom--;
        		counter--;
        		rom--;}
			}
			cout<<"available vip Rooms are\t"<<vrom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
		}
		else
		{
			cout<<"\n\tinvalid option"<<endl;
			goto c;
		}
	}
	else
		   {
			cout<<"\n\tVIP ROOMS AVALIABLE ARE -" << vrom <<endl;
		   }

}
  void other_room()
	   {
        cout<<"\n\t*********WELCOME!********\t"<<endl;
        cout<<"\n\tRent of the room is 1000 Rs/day\t";

		cout<<"\n\n\thow many rooms do you want for rent\t";
        cin>>rom;
        cout<<"\n\thow many days do you want to stay\t";
        cin>>day;
          if(rom<=50&& orom>=rom)
        {
            cout << "\n\t Room ranges from 51 - 80\t"<<endl;

        }
        else{
            cout<< "\n\tSORRY ROOM ARE CURRENTLY UNAVAILABLE"<<endl;
            cout<<"\tAvailable Rooms are\t"<<orom<<endl;

            other_room();
        }
        cout<<"\n\ttotal other rooms are (50)\t"<<endl;
        if(rom<=50)
        {
        	d:
       		day=day*1000;
        	bill=day*rom;
			cout<<"\n\tyour bill is\t"<<bill<<endl;
        	cout<<"\n\tROOM CAN BE Alloted"<<endl;
        	cout<<"\n\tpress 1 for first allot"<<endl;
        	cout<<"\n\tpress 2 for after allot"<<endl;
        	cout<<"\n\tpress 3 for before allot"<<endl;
        	cout<<"\n\tpress 4 for last allot"<<endl;
        	cout<<"\nENTER YOUR CHOICE!: \t";
        	cin>>allot;
        		if(allot==1)
             {
        		while(rom!=0)
        	 {
        		y =first_allot();
        		if(y==1){
        		orom--;
        		counter--;
        		rom--;}
			}
			cout<<"available other Rooms are\t"<<orom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
           }

               else if(allot==2)
               {
                 while(rom!=0)
              	{
        	    y=after_allot();
        		if(y==1){
        		orom--;
        		counter--;
        		rom--;}
			}
			cout<<"available other Rooms are\t"<<orom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
	    	}
	    else if(allot==3)
	    {
	    	 while(rom!=0)
              	{
        	   y= before_allot();
                if(y==1){
        		orom--;
        		counter--;
        		rom--;} 			}
			cout<<"available other Rooms are\t"<<orom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
		}
		else if(allot==4)
		{
			 while(rom!=0)
              	{
        	  y=  last_allot();
                if(y==1){
        		orom--;
        		counter--;
        		rom--;}
			}
			cout<<"available other Rooms are\t"<<orom<<endl;
			cout<<"Total available Rooms are\t"<<counter<<endl;
			 working();
		}
		else
		{
			cout<<"\n\t invalid option"<<endl;
			goto d;
		}




	}
		else
		{
			cout<<"\n\t OTHER ROOMS AVAILABLE ARE - " << orom <<endl;
		}

}

	   int first_allot()
	   { y=0;
	   	bool flag=false;
struct node *x =start;


		 	 while(x!=NULL){
                    cout<<"\tROOM ALREADY BOOKED";
                    cout<<"\nROOM NO: "<< x->room_no<<endl;
              x=x->next;
		 	 }

        cout<<"\n\tEnter the Room number\t";
	   	cin >> num;

	   	struct node *newer=new node;
	   	newer->room_no=num;
	   	cout<<"\n\tEnter name\t";
	   	cin>>newer->name;
        cout<<"\n\tEnter age\t";
	   	cin>>newer->age;
	    cout<<"\n\tEnter AADHAR number\t";
	   	cin>>newer->ad_no;
        cout<<"\n\tEnter contact no\t";
	   	cin>>newer->cell_no;

	   	newer->prev=NULL;
	   	newer->next=start;
	   	start = newer;
	   	flag=true;
	   	if(start!=NULL)
	   	{
		   start->prev=newer;
	    }

	    if(flag!=false)
	    {
	    	cout<<"\n\tRoom is allotted successfully!"<<endl;
	    	return 1;
		}
		else
		{
			cout<<"\n\tRoom is not allotted!"<<endl;
			return 0;
		}
	   }
	   int last_allot()
	   {y=0;
	   	bool flag=false;
	   	if(start==NULL)
	   	{
	   	  cout<<"\n\tHotel is empty"<<endl;
		  cout<<"\n\tdo you want to allot first?(1 for yes 2 for No)";
		  cin>>b;
		  if(b==1)
		  {
	          first_allot();

		   }
		   else
		   {

		   	visit_Monument();
			}
	  }
        	else
	    	{
			struct node *temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			struct node *newer=new node;
			struct node *x =start;


		 	 while(x!=NULL){
                    cout<<"\tROOM ALREADY BOOKED";
                    cout<<"\nROOM NO: "<< x->room_no<<endl;
              x=x->next;
		 	 }
			cout<<"\n\t enter the Room number!\t";
           cin  >> num;

	   	    newer->room_no=num;
			cout<<"\n\tEnter name\t";
			cin>>newer->name;
			cout<<"\n\tEnter contact no\t";
	   	     cin>>newer->cell_no;
	   	    cout<<"\n\tEnter AADHAR number\t";
	   	    cin>>newer->ad_no;
	   	    newer->next=NULL;
	   	    temp->next=newer;
	   	    newer->prev=temp;
		    flag=true;
		   }

	   	if(flag!=false)
	   	{
	   		cout<<"\n\tRoom is allotted successfully!"<<endl;
	   		return 1;
	   }
	   else
	   {
	   	cout<<"\n\tRoom is not alloted!"<<endl;
	   	return 0;
	   }

}
	   int after_allot()
	   {y=0;
	   	if(start==NULL)
	   	{
	   		cout<<"\n\tHotel is empty!";
	   		cout<<"\n\tdo you want to allot first?(1 for yes 2 for No)";
		    cin>>b;
		  if(b==1)
		  {
	      first_allot();
		   }
		   else
		   {

		   	visit_Monument();
		   }
	   }
	   else
	   {
	   	bool flag=false;
	   struct node *temp=start;
       struct node *p;
	   struct node *newer=new node;
struct node *x =start;


		 	 while(x!=NULL){
                    cout<<"\tROOM ALREADY BOOKED";
                    cout<<"\nROOM NO: "<< x->room_no<<endl;
              x=x->next;
		 	 }
	   	cout<<"\n\tEnter the Room# after which you want to allot the room! : ";
	   	cin>>num;

	   	newer->room_no=num+1;
	   	while(temp!=NULL)
	   	{
	   	  if(temp->room_no==num)
	   	  {
	   	    cout<<"\n\tEnter name\t";
			cin>>newer->name;
	   	    cout<<"\n\tEnter contact no\t";
	   	     cin>>newer->cell_no;
	   	    cout<<"\n\tEnter AADHAR number\t";
	   	    cin>>newer->ad_no;
	   	    if(temp->next!=NULL)
	   	    {
	   	      newer->next=temp->next;
			  newer->prev=temp;
			  temp->next=newer;
			  p=temp->next;
			  p->prev=newer;
			  flag=true;
			}
			else
			{
				newer->next=temp->next;
				newer->prev=temp;
				temp->next=newer;
				flag=true;
			}

		 }
		 temp=temp->next;

		}
	   	if(flag!=false)
	   	{
	     cout<<"\n\tRoom is allotted successfully!"<<endl;
	     return 1;
	   }
	   else
	   {
	   	cout<<"\n\tRoom is not allotted"<<endl;
	   	return 0;
	   }
	   }
}
	 int before_allot()
	 {y=0;
	 	bool flag=false;
	 	if(start==NULL)
	 	{
	 		cout<<"\n\tHotel is empty!"<<endl;
	   		cout<<"\n\tdo you want to allot first?(1 for yes 2 for No): ";
		    cin>>b;
		    if(b==1)
		     {
	          first_allot();

		     }
		  else
		    {
		   	  //goto START;
		   	  visit_Monument();
		    }

		 }
		 else
		 {
struct node *x =start;


		 	 while(x!=NULL){
                    cout<<"\tROOM ALREADY BOOKED";
                    cout<<"\nROOM NO: "<< x->room_no<<endl;
              x=x->next;
		 	 }
		 	cout<<"\n\tEnter the Room# before which you want to allot the room!";
	     	cin>>num;


	     	struct node *newer=new node;

	     	newer->room_no=num-1;
	     	if(start->room_no==num)
	     	{
	     	cout<<"\n\tEnter name\t";
			cin>>newer->name;
			cout<<"\n\tEnter contact no\t";
	   	     cin>>newer->cell_no;
			cout<<"\n\tEnter AADHAR number\t";
	   	    cin>>newer->ad_no;
            newer->next=start;
	   	    newer->prev=start->prev;
	   	    start=newer;
	   	    flag=true;
		   }
		   else
		   {
		   	struct node *temp=start;
		   	struct node *p;
		   	cout<<"\n\tEnter name\t";
			cin>>newer->name;
			cout<<"\n\tEnter contact no\t";
	   	     cin>>newer->cell_no;
	   	    cout<<"\n\tEnter AADHAR number\t";
	   	    cin>>newer->ad_no;
	   	    while(temp!=NULL)
	   	    {
	   	    	if(temp->room_no==num)
	   	    	{
	   	    		newer->next=temp;
	   	    		temp->prev=newer;
	   	    		newer->prev=temp->prev;
	   	    		p=temp->prev;
	   	    		p->next=newer;

	   	    		flag=true;
				   }
				   temp=temp->next;
			   }

		   }


		 }
		 if(flag!=false)
		 {
		 	cout<<"\n\tRoom is allotted successfully!"<<endl;
		 	return 1;
		 }
		 else
		 {
		 	cout<<"\n\tRoom is not alloted!"<<endl;
		 	return 0;
		 }
	 }
	 void del()
	 {
	 	cout<<"\n\tenter the Room# which you want to deallocate!\t";
	 	cin>>num;
	 	if (num > 100)
	 	{
	 	    cout <<"\n\t enter  valid room no !\t";
	 	    void del();
	 	}

	 	if(start==NULL)
	 	{
	 	   cout<<"\n\tHotel is empty!"<<endl;
	 	   cout<<"\n\tpress 1 for main manu\n"<<endl;
	 	   cout<<"\tpress 2 for exit\n"<<endl;
	 	   cout<<"\nENTER YOUR CHOICE\t";
	 	   cin>>choise;
	 	   if(choise==1)
	 	    {
	 	  	 working();
		    }
		    else
		    {
		   	exit(0);
		    }
		 }
		struct node *temp=start;
		struct node *p,*q;
		 if(temp->room_no==num && temp->next !=NULL)
		 {
            p = temp;
            start = temp->next;
            start->prev=NULL;
            free(p);
        cout<<"\tROOM DEALLOCATED"<<endl;
        working();
		 }
		else if(temp->room_no==num && temp->next ==NULL)
		 {
            free(temp);
            cout<<"\tROOM DEALLOCATED"<<endl;
            working();
		 }
		 else
		 {  temp = temp->next;

		 	while(temp!=NULL)
		 	{ if(temp->room_no==num)
		 	{


		 		if(temp->next==NULL)
		 		{   q=temp;
		 			p=temp->prev;
		 			p->next=NULL;
		 			free(q);
		 			cout<<"\tROOM DEALLOCATED"<<endl;
		 			working();
				 }
				 else
				 {
				 	p=temp->prev;
				 	q=temp->next;
				 	p->next=q;
				 	q->prev=p;
				 	free(temp);
				 	cout<<"\tROOM DEALLOCATED"<<endl;
				 	working();
				 }


		 	}
				 temp=temp->next;
			 }

		 }
	 	cout<<"\tROOM NOT BOOKED YET"<<endl;
	 	working();
	 }
	 void display()
	 {
	 	if(start==NULL)
	 	{
	 	  cout<<"\n\tHotel is empty!"<<endl;
	 	  cout<<"\n\tpress 1 for main manu\n"<<endl;
	 	  cout<<"\tpress 2 for exit\n"<<endl;
	 	  cout<<"\nENTER YOUR CHOICE\t";
	 	  cin>>choise;
	 	  if(choise==1)
	 	  {
	 	  	working();
		   }
		   else
		   {
		   	exit(0);
		   }
		 }
		 else
		 {
		 struct node *temp=start;


		 	 while(temp!=NULL){
                cout<<"\n\tBooked room with details\t";
                if(temp->room_no <=20)
                cout<<"\nFLOOR NO:" <<" 1st floor" <<endl;
                if(temp->room_no >20 && temp->room_no <=50 )
                {cout <<  "****VIP***"<< endl;
                 cout<<"\nFLOOR NO:" <<" 2nd floor"<<endl;}
                if(temp->room_no >50 &&temp->room_no <=70)
                cout<<"\nFLOOR NO:" <<" 3rd floor" <<endl;
                if(temp->room_no >70 &&temp->room_no <=85)
               cout<<"\nFLOOR NO:" <<" 4th floor" <<endl;
                if(temp->room_no >85 &&temp->room_no <=100)
              cout<<"\nFLOOR NO:" <<" 5th floor" <<endl;


		 		cout<<"\nROOM NO: "<< temp->room_no<<endl;
		 		cout<<"\nROOM BOOKED UNDER NAME: "<< temp->name<<endl;
		 		cout<<"\nCONTACT: "<< temp->cell_no <<endl;

		 		temp=temp->next;

		 	 }
		 }
		 working();

	 }
	   void visit_Monument()
	   {
	   	START:
	   	cout<<"\t*****WELCOM TO M0NUMENT HOTEL*****\n\t"<<endl;
	   	cout<<"\t***1st floor for family Rooms...!***\n"<<endl;
	   	cout<<"\t***2nd floor for VIP Rooms...!***\n"<<endl;
	    cout<<"\t***For others 3rd,4th and 5th floors are available...!***\n\t"<<endl;
		cout<<"\t press 1 for Family room\n"<<endl;
		cout<<"\t press 2 for VIP room\n"<<endl;
		cout<<"\t press 3 for others...\n"<<endl;
		cout<<"\nENTER YOUR CHOISE! :\t ";
	    cin>>choise;
	    if(choise==1)
	    {
	    	family_room();


		}
		else if(choise==2)
		{
			vip_room();

		}
		else if(choise==3)
		{
			other_room();
		}
		else
		{
			cout<<"\n\tinvalid opetion"<<endl;

			visit_Monument();
		}
	   }
	  void working()
	  {
	  	cout<<"\n\t***********Main Manu************\n\t"<<endl;
	  	cout<<"\n\tpress 1 to visit the Monument hotel!\t"<<endl;
	  	cout<<"\n\tpress 2 to delete the record of the room\t"<<endl;
	  	cout<<"\n\tpress 3 to display the record of Monument...\t"<<endl;
	  	cout<<"\n\tpress 4 for exit...\n\t"<<endl;
	  	cout<<"\nENTER YOUR CHOISE! :\t ";
	  	cin>>choise;
	  	if(choise==1)
	  	{
	  		visit_Monument();
		  }
		  else if(choise==2)
		  {
		  	del();
		  }
		  else if(choise==3)
		  {
		  	display();
		  }
		  else
		  {
		  	exit(0);


		  }

	  }

};
int main()
{
	Monument obj;
	obj.working();
}