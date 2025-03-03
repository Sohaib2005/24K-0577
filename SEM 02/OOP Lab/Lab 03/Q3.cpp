#include <iostream>
#include <string>  
using namespace std;

class Glass {
public:
    int Level;

    Glass() {
        Level = 200;
    }

    void Drink(int ml) {
        if (ml > Level) {
            cout << "Not enough liquid to drink that much!\n";
        } else {
            Level -= ml;
            if (Level < 100) {
                Refill();
            }
        }
    }

    void Refill() {
        cout << "Refilling glass...\n";
       Level = 200;
    }
};

int main(int argc, char* argv[]) {
    Glass cup;

    for (int i = 1; i < argc; i++) {
        int drinkAmount = stoi(argv[i]);
        cout << "Drinking " << drinkAmount << "ml...\n";
        cup.Drink(drinkAmount);
        cout << "Current Liquid Level: " << cup.Level << "ml\n";
    }

    cout << "Final Liquid Level: " << cup.Level << "ml\n";
    return 0;
}
