#include <iostream>
#include <string>

using namespace std;

int main() {
    string mov_name;
    double ad_tic_price, ch_tic_price;
    int ad_tic_sold, ch_tic_sold;
    double percent_to_donate;ad_tic_sold;

    cout << "Enter the movie name: ";
    getline(cin, mov_name);

    cout << "Enter the price of an adult ticket: ";
    cin >> ad_tic_price;

    cout << "Enter the price of a child ticket: ";
    cin >> ch_tic_price;

    cout << "Enter the number of adult tickets sold: ";
    cin >> ad_tic_sold;

    cout << "Enter the number of child tickets sold: ";
    cin >> ch_tic_sold;

    cout << "Enter the percentage of the gross amount to be donated to charity: ";
    cin >> percent_to_donate;

    double gross_amount = (ad_tic_price *  ad_tic_sold) + (ch_tic_price * ch_tic_sold);
    double amount_donated = gross_amount * (percent_to_donate / 100);
    double net_sale = gross_amount - amount_donated;
    
    cout << "\nMovie Name:" << mov_name << endl;
    cout << "Number of Tickets Sold:" << ad_tic_sold + ch_tic_sold << endl;
    cout << "Gross Amount:" << "$ " << gross_amount << endl;
    cout << "Percentage of Gross Amount Donated:" << percent_to_donate << "%" << endl;
    cout << "Amount Donated:" << "$ " << amount_donated << endl;
    cout << "Net Sale:" << "$ "<< net_sale << endl;

    return 0;
}
