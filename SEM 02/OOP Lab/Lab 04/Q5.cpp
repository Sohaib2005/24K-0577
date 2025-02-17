#include <iostream>
#include <vector>
using namespace std;

class MenuItem {
    string name, category;
    double price;
public:
    MenuItem(string n, string c, double p) : name(n), category(c), price(p) {}
    string getName() const { return name; }
    string getCategory() const { return category; }
    double getPrice() const { return price; }
};

class CoffeeShop {
    string shopName;
    vector<MenuItem> menu;
    vector<string> orders;
public:
    CoffeeShop(string name) : shopName(name) {}

    void addMenuItem(const MenuItem& item) {
        menu.push_back(item);
    }

    string addOrder(string itemName) {
        for (const auto& item : menu) {
            if (item.getName() == itemName) {
                orders.push_back(itemName);
                return "Order added successfully.";
            }
        }
        return "This item is currently unavailable.";
    }

    string fulfillOrder() {
        if (!orders.empty()) {
            string completedOrder = orders.front();
            orders.erase(orders.begin());
            return "The " + completedOrder + " is ready.";
        }
        return "All orders have been fulfilled.";
    }

    vector<string> listOrders() {
        return orders;
    }

    double dueAmount() {
        double total = 0;
        for (const auto& order : orders) {
            for (const auto& item : menu) {
                if (item.getName() == order) {
                    total += item.getPrice();
                    break;
                }
            }
        }
        return total;
    }

    string cheapestItem() {
        if (menu.empty()) return "No items available.";
        const MenuItem* cheapest = &menu[0];
        for (const auto& item : menu) {
            if (item.getPrice() < cheapest->getPrice()) {
                cheapest = &item;
            }
        }
        return cheapest->getName();
    }

    vector<string> drinksOnly() {
        vector<string> drinks;
        for (const auto& item : menu) {
            if (item.getCategory() == "drink") {
                drinks.push_back(item.getName());
            }
        }
        return drinks;
    }

    vector<string> foodOnly() {
        vector<string> foods;
        for (const auto& item : menu) {
            if (item.getCategory() == "food") {
                foods.push_back(item.getName());
            }
        }
        return foods;
    }
};

int main() {
    CoffeeShop shop("Java Bliss");
    shop.addMenuItem(MenuItem("Espresso", "drink", 3.5));
    shop.addMenuItem(MenuItem("Latte", "drink", 4.0));
    shop.addMenuItem(MenuItem("Croissant", "food", 2.5));
    shop.addMenuItem(MenuItem("Sandwich", "food", 5.0));
    
    cout << shop.addOrder("Espresso") << endl;
    cout << shop.addOrder("Croissant") << endl;
    cout << shop.fulfillOrder() << endl;
    cout << "Total due: $" << shop.dueAmount() << endl;
    cout << "Cheapest item: " << shop.cheapestItem() << endl;
    
    return 0;
}
