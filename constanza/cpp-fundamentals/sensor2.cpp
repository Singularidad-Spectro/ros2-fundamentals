#include<iostream>
using namespace std;

int  calcaverage(int reading[5]){
    int sum = 0; 
    for (int i = 0; i < 5; i++){
        sum += reading[i];
    }

    cout << "Sensor Reading sum is " << sum << endl;

  return   sum / 5;
}

void checkthreshold(int average){
    
    if (average > 30){
        cout << "Sensor Reading is crossing threshold" << endl;
    }
    else{
        cout << "Sensor Reading is not crossing threshold" << endl;
    }
}

int main(){

    int sensorReading[5] = {35,44,35,64,54};
    cout << "Sensor Reading average is "
            << calcaverage(sensorReading) << endl;
    checkthreshold(calcaverage(sensorReading));    

    int sensorReading1[5] = {5,4,5,4,4};
    cout << "Sensor2Reading average is "
            << calcaverage(sensorReading1) << endl;
    checkthreshold(calcaverage(sensorReading1));   
}