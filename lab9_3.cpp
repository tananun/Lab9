//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    double count = 0;
    double sq;
    string textline;
    ifstream source("score.txt");
    double sum = 0;
    while (getline(source,textline)){
        sum += atof(textline.c_str());
        sq += pow(atof(textline.c_str()),2.0);
        count++;
    }
    double mean = sum/count;
    double SD = pow((sq/count-mean*mean),0.5);
    cout << "Number of data = " << count;
    cout << setprecision(3);
    cout << "\nMean = " << mean;
    cout << "\nStandard deviation = " << SD;
    source.close();
return 0;
}