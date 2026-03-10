#include<iostream>
using namespace std;

class tollbooth{
   int totalvehicles;
   double totalrevenue;

   public:

   tollbooth(){
    totalvehicles = 0;
    totalrevenue = 0;
   }
   void reset(){
    totalvehicles =0;
    totalrevenue =0;
    cout<<"Booth reset successfully...";
   }
    void vehiclepayingtoll(int vehicletype, double tollamount){
        totalvehicles++;
        totalrevenue = totalrevenue+tollamount;
        cout<<"Toll of rs "<<tollamount<<"collected\n";
    }

    int gettotalvehicles(){
        return totalvehicles;
    }
   
    double gettotalrevenue(){
        return totalrevenue;
    }
};

int main(){
    tollbooth booth;
    int choice;
    
    do{
          cout << "\n===== TOLL BOOTH MENU =====\n";
        cout << "1. Add a Standard Car (Rs.180)\n";
        cout << "2. Add a Truck (Rs.300)\n";
        cout << "3. Add a Bus (Rs.350)\n";
        cout << "4. Display Total Vehicles Passed\n";
        cout << "5. Display Total Revenue Collected\n";
        cout << "6. Reset Booth \n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                booth.vehiclepayingtoll(1, 180);
                break;

            case 2:
                booth.vehiclepayingtoll(2, 300);
                break;

            case 3:
                booth.vehiclepayingtoll(3, 350);
                break;

            case 4:
                cout << "Total Vehicles Passed: "
                     << booth.gettotalvehicles() << endl;
                break;

            case 5:
                cout << "Total Revenue Collected: Rs."
                     << booth.gettotalrevenue() << endl;
                break;

            case 6:
                booth.reset();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 7);

    return 0;
}

    

