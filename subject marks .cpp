#include <iostream>
using namespace std;
int main(){
	int phy, chem, bio, math, comp;
	float per;   /* input marks of five subjects from user */
	cout <<"enter five subjects marks: ";
	cin >> phy>> chem>> bio>> math >> comp;
	/* calculate percentage */
	per = (phy  + chem + bio + math + comp) / 5.0;
	cout<< "percentage = %5. 2f\n" << per;
	/* find grade according to the percentage */
	if(per >= 90)      {
	    cout  << " grade A";
}else if(per  >= 80){
     cout<<"Grade B";
}else if (per >=70){
  cout<<"grade c";
}else if(per >= 60){
  cout<<"grade D";
}else if(per  >=40){
  cout<<"grade e";
}else{
    cout<<"grade f" ;

} 
 return 0;  }
	