#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    double Sm=0,Xba,Sd,Num[100];
    int j=0;
    string text;
    ifstream source ("score.txt");
    while (getline(source,text)) {
        Num[j++] = stod(text);
        Sm += stod(text.c_str());
    }
    Xba = Sm/j;
    Sm = 0;
    for (int i=0;i<j;i++) {
        Sm += pow(Num[i],2)/j;
    }
    Sd = sqrt(Sm - pow(Xba,2));
    cout << "Number of data = " << j << endl;
    cout << setprecision(3);
    cout << "Mean = " << Xba << endl;
    cout << "Standard deviation = " << Sd << endl;
}