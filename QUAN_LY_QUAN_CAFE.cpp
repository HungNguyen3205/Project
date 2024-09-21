#include <bits/stdc++.h>
using namespace std;

class Menu {
protected:
    int price;
public:
    virtual void set() {}
    virtual void get() {}
    virtual int getPrice() { return price; }
    virtual string getName() { return ""; }
    virtual ~Menu() {}
};

class Cafe : public Menu {
    int n1;
    string name;
public:
    void set() {
        Menu::set();
        do {
            cout << "\nWhat kind of coffee do you want to drink? ";
            cout << "\n 1.Black coffee";
            cout << "\n 2.Milk coffee";
            cout << "\n 3.Silver faint stone";
            cout << "\n 4.Cacao(hot)";
            cout << "\n 5.Cacao(cold)";
            cout << "\n Input here: ";
            cin >> n1; cin.ignore();
            if (n1 < 1 || n1 > 5) {
                cout << "Invalid choice. Please try again.\n";
            }
        } while (n1 < 1 || n1 > 5);
    }
    
    void get() {
        Menu::get();
        switch (n1) {
            case 1:
                name = "Black coffee";
                break;
            case 2:
                name = "Milk coffee";
                break;
            case 3:
                name = "Silver faint stone";
                break;
            case 4:
                name = "Cacao(hot)";
                break;
            case 5:
                name = "Cacao(cold)";
                break;
        }
        calculatePrice_coffee();
        cout << name << " - " << price << "k\n";
    }
    
    void calculatePrice_coffee() {
        switch (n1) {
            case 1:
                price = 12;
                break;
            case 2:
                price = 15;
                break;
            case 3:
                price = 15;
                break;
            case 4:
                price = 20;
                break;
            case 5:
                price = 20;
                break;
        }
    }
    
    string getName() {
        return name;
    }
};

class Juice : public Menu {
    int n2;
    string name;
public:
    void set() {
        Menu::set();
        do {
            cout << "\nWhat kind of juice do you want to drink? ";
            cout << "\n 1.Juice guava";
            cout << "\n 2.Juice orange";
            cout << "\n 3.Juice mango";
            cout << "\n 4.Juice apple";
            cout << "\n 5.Juice watermelon";
            cout << "\nInput here: ";
            cin >> n2; cin.ignore();
            if (n2 < 1 || n2 > 5) {
                cout << "Invalid choice. Please try again.\n";
            }
        } while (n2 < 1 || n2 > 5);
    }
    
    void get() {
        Menu::get();
        switch (n2) {
            case 1:
                name = "Juice guava";
                break;
            case 2:
                name = "Juice orange";
                break;
            case 3:
                name = "Juice mango";
                break;
            case 4:
                name = "Juice apple";
                break;
            case 5:
                name = "Juice watermelon";
                break;
        }
        calculatePrice_Juice();
        cout << name << " - " << price << "k\n";
    }
    
    void calculatePrice_Juice() {
        price = 22;
    }
    
    string getName() {
        return name;
    }
};

class Milktea : public Menu {
    int n3;
    string size;
    string name;
public:
    void set() {
        Menu::set();
        do {
            cout << "\nWhat kind of milk tea do you want to drink? ";
            cout << "\n 1.Traditional milk tea";
            cout << "\n 2.Mint milk tea";
            cout << "\n 3.Matcha milk tea";
            cout << "\n 4.Socola milk tea";
            cout << "\n 5.Black Sugar Bubble Fresh Milk";
            cout << "\nInput here: ";
            cin >> n3; 
			cin.ignore();
            if (n3 < 1 || n3 > 5) {
                cout << "Invalid choice. Please try again.\n";
            }
        } while (n3 < 1 || n3 > 5);
        do {
            cout << "\nChoose size: <M> <L> <XL> ";
            getline(cin, size);
            for (int i = 0; i < size.length(); ++i) {
                size[i] = tolower(size[i]);
            }
            if (size != "m" && size != "l" && size != "xl") {
                cout << "Invalid size. Please try again.\n";
            }
        } while (size != "m" && size != "l" && size != "xl");
    }
    
    void get() {
        Menu::get();
        switch (n3) {
            case 1:
                name = "Traditional milk tea";
                break;
            case 2:
                name = "Mint milk tea";
                break;
            case 3:
                name = "Matcha milk tea";
                break;
            case 4:
                name = "Socola milk tea";
                break;
            case 5:
                name = "Black Sugar Bubble Fresh Milk";
                break;
        }
        calculatePrice_milktea();
        cout << name << " (" << size << ") - " << price << "k\n";
    }
    
    void calculatePrice_milktea() {
        switch (n3) {
            case 1:
                price = (size == "m") ? 20 : (size == "l") ? 25 : 30;
                break;
            case 2:
                price = (size == "m") ? 22 : (size == "l") ? 26 : 32;
                break;
            case 3:
                price = (size == "m") ? 22 : (size == "l") ? 26 : 32;
                break;
            case 4:
                price = (size == "m") ? 22 : (size == "l") ? 26 : 32;
                break;
            case 5:
                price = (size == "m") ? 25 : (size == "l") ? 30 : 35;
                break;
        }
    }
    
    string getName() {
        return name + " (" + size + ")";
    }
};

class List_Menu {
    string choose, size;
    int n4, price;
    vector<Menu*> list_Menu;
public:
    void menu() {
        cout << "=======================================================================================================================\n";
        cout << "=======================================================================================================================\n";
        cout << "==                                                                                                                   ==\n";
        cout << "==     ******    **        **  **  **          **                  ******        ******      **********  **********  ==\n";
        cout << "==   **********  **        **  **  **          **                **********     **    **     **********  **********  ==\n";
        cout << "==   **      **  **        **  **  **          **                **      **    **      **    **          **          ==\n";
        cout << "==   **          ************  **  **          **                **           ************   **********  **********  ==\n";
        cout << "==   **          ************  **  **          **                **          **************  **********  **********  ==\n";
        cout << "==   **          **        **  **  **          **                **          **          **  **          **          ==\n";
        cout << "==   **      **  **        **  **  **          **                **      **  **          **  **          **          ==\n";
        cout << "==   **********  **        **  **  **********  **********        **********  **          **  **          **********  ==\n";
        cout << "==     ******    **        **  **  **********  **********          ******    **          **  **          **********  ==\n";
        cout << "==                                                                                                                   ==\n";
        cout << "==                                                                                                                   ==\n";
        cout << "==                                                                                                                   ==\n";
        cout << "==                COFFEE                  PRICE                              JUICE                  PRICE            ==\n";
        cout << "==             1. Black coffee             12k                            1. Juice guava             22k             ==\n";
        cout << "==             2. Milk coffee              15k                            2. Juice oranges           22k             ==\n";
        cout << "==             3. Silver faint stone       15k                            3. Juice mango             22k             ==\n";
        cout << "==             4. Cacao(hot)               20k                            4. Juice apple             22k             ==\n";
        cout << "==             5. Cadao(cold)              20k                            5. Juice watermelon        22k             ==\n";
        cout << "==                                                                                                                   ==\n";
        cout << "==                                                                                                                   ==\n";
        cout << "==                MILK TEA                                                               SIZE/PRICE                  ==\n";
        cout << "==                                                                                    M       L      XL              ==\n";
        cout << "==             1. Traditional milk tea                                               20k  |  25k  |  30k             ==\n";
        cout << "==             2. Mint milk tea                                                      22k  |  26k  |  32k             ==\n";
        cout << "==             3. Matcha milk tea                                                    22k  |  26k  |  32k             ==\n";
        cout << "==             4. Socola milk tea                                                    22k  |  26k  |  32k             ==\n";
        cout << "==             5. Black Sugar Bubble Fresh Milk(best seller)                         25k  |  30k  |  25k             ==\n";
        cout << "==                                                                                                                   ==\n";
        cout << "==                                                                                                                   ==\n";
        cout << "=======================================================================================================================\n";
        cout << "=======================================================================================================================\n";
    }
    
    void danh_sach() {
        do {
            cout << "What kind of drink do you want to choose? <1.Cafe> <2.Juice> <3.Milk tea> ";
            cin >> n4; cin.ignore();
            if (n4 == 1) {
                Cafe *cafe = new Cafe;
                cafe->set();
                list_Menu.push_back(cafe);
            }
            else if (n4 == 2) {
                Juice *juice = new Juice;
                juice->set();
                list_Menu.push_back(juice);
            }
            else if (n4 == 3) {
                Milktea *milktea = new Milktea;
                milktea->set();
                list_Menu.push_back(milktea);
            }
            else {
                cout << "Your options are not available.\n";
            }
            cout << "\nDo you want to continue choosing? <y> or <n> "; 
			getline(cin, choose);
			cout<<endl;
        } while (choose == "y" || choose == "Y");
    }
    
    void bill() {
        cout << "===========================================\n";
        cout << "               Your Order                  \n";
        cout << "===========================================\n";
        for (int i = 0; i < list_Menu.size(); ++i) {
            cout << i + 1 << ". ";
            list_Menu[i]->get();
        }
        cout << "===========================================\n";
    }
    
    void sum() {
        int total_price = 0;
        for (int i = 0; i < list_Menu.size(); ++i) {
            total_price += list_Menu[i]->getPrice();
        }
        cout << "Total Bill: " << total_price << "k\n";
        cout << "PASS WIFI: chuquandeptrai.\n";
        cout << "\n";
        cout << "             THANK FOR COMING              \n";
        cout << "===========================================\n";
    }
    
    void removeItem() {
        int index;
        cout << "Enter the index of the item you want to remove: ";
        cin >> index; cin.ignore();
        if (index > 0 && index <= list_Menu.size()) {
            delete list_Menu[index - 1];
            list_Menu.erase(list_Menu.begin() + index - 1);
            cout << "Item removed successfully.\n";
        } else {
            cout << "Invalid index.\n";
        }
    }
    
    void modifyItem() {
        int index;
        cout << "Enter the index of the item you want to modify: ";
        cin >> index; cin.ignore();
        if (index > 0 && index <= list_Menu.size()) {
            delete list_Menu[index - 1];
            int choice;
            cout << "Choose new item type: <1.Cafe> <2.Juice> <3.Milk tea> ";
            cin >> choice; cin.ignore();
            if (choice == 1) {
                Cafe *cafe = new Cafe;
                cafe->set();
                list_Menu[index - 1] = cafe;
            }
            else if (choice == 2) {
                Juice *juice = new Juice;
                juice->set();
                list_Menu[index - 1] = juice;
            }
            else if (choice == 3) {
                Milktea *milktea = new Milktea;
                milktea->set();
                list_Menu[index - 1] = milktea;
            }
            else {
                cout << "Invalid choice.\n";
            }
        } else {
            cout << "Invalid index.\n";
        }
    }
};

int main() {
    List_Menu p;
    p.menu();
    p.danh_sach();
    char choice;
    do {
        cout << "Do you want to (R)emove an item, (M)odify an item, or (P)roceed to checkout? ";
        cin >> choice; cin.ignore();
        choice = tolower(choice);
        if (choice == 'r') {
            p.removeItem();
        } else if (choice == 'm') {
            p.modifyItem();
        } else if (choice == 'p') {
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (true);
    p.bill();
    p.sum();
    return 0;
}

