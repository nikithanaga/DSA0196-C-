#include <iostream>
using namespace std;

class Item {
public:
    int code;
    float price;
};

class ShoppingList {
private:
    Item items[100]; // Array to store up to 100 items
    int itemCount;   // Number of items in the list

public:
    ShoppingList() {
        itemCount = 0; // Initialize the item count to zero
    }

    // Function to add an item to the list
    void addItem(int code, float price) {
        items[itemCount].code = code;
        items[itemCount].price = price;
        itemCount++;
        cout << "Item added: Code=" << code << ", Price=" << price << endl;
    }

    // Function to delete an item from the list by its code
    void deleteItem(int code) {
        for (int i = 0; i < itemCount; i++) {
            if (items[i].code == code) {
                // Shift items to remove the item
                for (int j = i; j < itemCount - 1; j++) {
                    items[j] = items[j + 1];
                }
                itemCount--;
                cout << "Item deleted: Code=" << code << endl;
                return;
            }
        }
        cout << "Item with code " << code << " not found." << endl;
    }

    // Function to calculate and print the total value of the order
    void printTotalValue() {
        float total = 0;
        for (int i = 0; i < itemCount; i++) {
            total += items[i].price;
        }
        cout << "Total order value: $" << total << endl;
    }

    // Function to display all items in the list
    void displayItems() {
        cout << "Shopping List:" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << "Code: " << items[i].code << ", Price: $" << items[i].price << endl;
        }
    }
};

int main() {
    ShoppingList list;
    int choice, code;
    float price;

    do {
        cout << "\nShopping List Menu:\n";
        cout << "1. Add Item\n";
        cout << "2. Delete Item\n";
        cout << "3. Display Total Value\n";
        cout << "4. Display All Items\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter item code: ";
            cin >> code;
            cout << "Enter item price: ";
            cin >> price;
            list.addItem(code, price);
            break;

        case 2:
            cout << "Enter item code to delete: ";
            cin >> code;
            list.deleteItem(code);
            break;

        case 3:
            list.printTotalValue();
            break;

        case 4:
            list.displayItems();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

