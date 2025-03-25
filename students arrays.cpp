 #include<iostream>
using namespace std; 
 int main(){
 	 
 	 int size;
 	 cout<<"how many students toke the quiz"<< endl;
 	 cin>>size;
 	 string name[size],address[size];
 	 int age[size],gpa[size],phone[size];
 	 float percentage[size];
 	 bool inteligence[size];
 	  getline(cin,name[0]);
 	  
 	 for(int a=0;a<size;a++){
 	   cout<<"what is your name:"<<endl;
		 getline(cin,name[a]);
		 cout<<"what is your address:"<<endl;
		 cin>>address[a];
		 cout<<"are you inteligent(0,1)"<<endl;
		 cin>> inteligence[a];
		 cout<<"how old are you:"<<endl;
		 cin>>age[a];
		 cout<<"how much is your GPA:"<<endl;
		 cin>>gpa[a];
		 cout<<"what is your phone number:"<<endl;
		 cin>>phone[a];
		 cout<<"how much is your percentage"<<endl;
		 cin>>percentage[a];}
 	
 	  return 0;
 }
 
