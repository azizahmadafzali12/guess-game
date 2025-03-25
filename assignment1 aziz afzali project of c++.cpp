#include<iostream>
using namespace std;
int main(){
  cout << " welcome to guess game ,here you need to find";
  cout << "A number between  a Range"<<  endl;
  	char level;
  	cout << "enter level of the game (E,M,H)";
  	cin >> level;
  	if (level == 'H'|| level == 'h') {
    }
  	else if (level == 'M'||  level == 'm'){
	  }
	else{
		int secret = 7;
		int guess;
		cout << "you have 9 tries to win this game \n";
		for (int i = 9; i>=1; i--){
		cout<< "enter a number between 0 & 10 to win :";
		cin>> guess;
		if (guess== secret){
		   cout <<"you won the game\n";
		   cout <<"your score is" << i * 10 + 10 << endl;
		   break; 	
	    	}
	    if (guess!=secret && i ==1){
	    	cout << "you lost the game,try again\n";
	    	continue;	
		}
		cout << i-1 <<"tries left \n";
    	}
    	
}   

#include<iostream>
using namespace std;
   int main()     
	cout << "welcome to guess game,here you need to find";
	cout <<"A number between a range"<< endl;
	  char level;
	  cout <<"enter level of the game (M,H)";
	  cin >> level;
	  if (level == 'H'|| level == 'h') {
	  }
	  else if (level  == 'M' ||  level == 'm' ){
	  }
	 else{
	     int secret = 7;
		 int guess;
		 cout << "you have 12 tries to win this game \n";
		 for (int i = 12; i>=1; i--){
		 cout<< "enter a number between 0 & 20 to win  :";
		 cin>> guess;
		 if  (guess== secret){
		    cout << "you won the game\n";
		    cout << "your score is" << i *20 + 20 << endl;
		    break; 	
	        }
	    if  (guess!=secret && i ==1) {
	    	cout << "you lost the game,try again\n";
	    	continue;
		}
		cout << i-1 <<"tries lesft \n";
    	}
	 

}




#include<iostream>
using namespace std;
int main(){
	cout << "welcome to guess game,here you need to find";
	cout <<"A number between a range"<< endl;
	  char level;
	  cout <<"enter level of the game (,H)";
	  cin >> level;
	  if (level == 'H'|| level == 'h') {
	  }
	  else if (level  == 'M' ||  level == 'm' ){
	  }
	 else{
	     int secret = 7;
		 int guess;
		 cout << "you have 10 tries to win this game \n";
		 for (int i = 50; i>=1; i--){
		 cout<< "enter a number between 0 & 50 to win  :";
		 cin>> guess;
		 if  (guess== secret){
		    cout << "you won the game\n";
		    cout << "your score is" << i * 50 +  50  << endl;
		    break; 	
	        }
	    if  (guess!=secret && i ==1) {
	    	cout << "you lost the game,try again\n";
	    	continue;
		}
		cout << i-1 <<"tries lesft \n";
    	}


























	
	
	
