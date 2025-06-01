#include <iostream>
using namespace std;

namespace DIgital{
    namespace d01{
        void caliberateSensor(){
            cout <<"Caliberating using db File" << endl;
        }
    
        void readSensor(){
            cout << "Reading Sensor Data from usb port" << endl;
        }
    
        void processData(){
    
            cout << "Robot Taking Action on Sensor 1 Data" << endl;
        }
    }
    
}


namespace digitala{
    void caliberateSensor(){
        cout <<"Caliberating using db File" << endl;
    }

    void readSensor(){
        cout << "Reading Sensor Data from usb port" << endl;
    }

    void processData(){

        cout << "Robot Taking Action on Sensor 1 Data" << endl;
    }
}


namespace analog{
    void caliberateSensor(){
        cout <<"Caliberating using db File" << endl;
    }

    void readSensor(){
        cout << "Reading Sensor Data from usb port" << endl;
    }

    void processData(){

        cout << "Robot Taking Action on Sensor 1 Data" << endl;
    }
}




int main(){
    digitala::caliberateSensor();
    analog::caliberateSensor();
    digitala::readSensor();
    digitala::processData();
    DIgital::d01::caliberateSensor();

    cout << "Sensor Processing Completed" << endl;

    return 0;
}