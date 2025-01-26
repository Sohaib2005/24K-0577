#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {
    int c_id, u_c;
    float charge_u = 0.0, net_amount = 0.0, bill = 0.0, sur_amount = 0.0;   
        string c_name;

    cout << "Enter consumer ID: "<<endl;
    cin >> c_id;
    cout << "Enter consumer name: "<<endl;
    cin >> c_name;
    cout << "Enter units Consumed: "<<endl;
    cin >> u_c;

    if (u_c < 200) {
        charge_u = 16.20;
    } 
    else if (u_c >= 200 && u_c < 300) {
        charge_u = 20.10;
    } 
    else if (u_c >= 300 && u_c < 500) {
        charge_u = 27.10;
    } 
    else if (u_c >= 500) {
        charge_u = 35.90;
    } 
    else {
        cout << "Invalid Entry" << endl;
        return 1;
    }

    bill = u_c * charge_u;
    if (bill > 18000) {
        sur_amount = bill * 0.15;
    }
    net_amount = bill + sur_amount;

    cout << "Consumer ID : " << c_id <<"\n"
         << "Units Consumed : " << u_c <<"\n"
         << "Consumer Name : " << c_name <<"\n"
         << "\nAmount Charges @Rs." << fixed << setprecision(2) << charge_u << " per unit: " << bill <<"\n"
         << "\nSurcharge Amount: " << sur_amount <<"\n"
         << "\nNet Amount Paid By Customer: " << net_amount << endl;

    return 0;
}
