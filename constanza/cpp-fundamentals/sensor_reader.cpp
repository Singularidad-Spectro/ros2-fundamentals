#include<iostream>
using namespace std;




int main(){

    int sensorReading[5] = {35,44,35,64,54};
    int sum = 0;    int average = 0;

for (int i = 0; i < 5; i++){
    sum += sensorReading[i];
}
cout << "Sensor Reading sum is " << sum << endl;

    average = sum / 5;
    cout << "Sensor Reading average is " << average << endl;

    if (average > 30){
        cout << "Sensor Reading is crossing threshold" << endl;
    }
    else{
        cout << "Sensor Reading is not crossing threshold" << endl;
    }

}