#include <iostream>
using namespace std;

class Currency {
protected:
    double amount;
    string currencyCode;
    string currencySymbol;
    double exchangeRate; 

public:
    Currency(double a, string code, string symbol, double rate = 1.0) 
        : amount(a), currencyCode(code), currencySymbol(symbol), exchangeRate(rate) {}

    virtual double convertToBase() {
        return amount * exchangeRate;
    }

    virtual double convertTo(Currency& targetCurrency) {
        double baseAmount = convertToBase(); 
        return baseAmount / targetCurrency.exchangeRate;
    }

    virtual void displayCurrency() {
        cout << currencySymbol << amount << " (" << currencyCode << ")" << endl;
    }
    
    virtual ~Currency() {}
};

class Dollar : public Currency {
public:
    Dollar(double a) : Currency(a, "USD", "$", 1.0) {}

    void displayCurrency() override {
        cout << currencySymbol << amount << " (USD)" << endl;
    }
};

class Euro : public Currency {
public:
    Euro(double a) : Currency(a, "EUR", "€", 1.1) {} 

    void displayCurrency() override {
        cout << currencySymbol << amount << " (EUR)" << endl;
    }
};

class Rupee : public Currency {
public:
    Rupee(double a) : Currency(a, "PKR", "Rs", 0.0035) {} 

    void displayCurrency() override {
        cout << currencySymbol << amount << " (PKR)" << endl;
    }
};

int main() {
    
    Dollar usd(50);
    Euro eur(30);
    Rupee pkr(5000);

    cout << "Initial Currency Values:\n";
    usd.displayCurrency();
    eur.displayCurrency();
    pkr.displayCurrency();
    cout << endl;

    cout << "EUR to PKR.\n";
    double convertedPKR = eur.convertTo(pkr);
    cout << "30 Euro = Rs" << convertedPKR << " PKR" << endl << endl;

    cout << "PKR to USD.\n";
    double convertedUSD = pkr.convertTo(usd);
    cout << "5,000 PKR = $" << convertedUSD << " USD" << endl;
    return 0;
}
