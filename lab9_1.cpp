#include<iostream>
#include <string>
using namespace std;

int main(){
	int count[5] = {0};
	cout << "Please input grade of each student (A-F) or input 0 to exit."<< "\n";
	int j=1;
	string grade;
	do{
		cout << "Student [" << j << "]: ";
		cin >> grade;
		if(grade =="A") count[0]++,j++;
		else if(grade =="B") count[1]++,j++;
		else if(grade =="C") count[2]++,j++;
		else if(grade =="D") count[3]++,j++;
		else if(grade =="F") count[4]++,j++;
		else if(grade =="0") break;
		else cout << "Wrong input. Please input again."<<"\n";
	
		
	}while(true);
	
	
	cout << "In total "<< j-1 << " students."<<"\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	
	return 0;
}
