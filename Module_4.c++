#include <iostream>
using namespace std;

class order
{
    string name;
    int choice;
    int choice2;
    int quantity;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, n17;

public:
    void get_pname()
    {
        cout << "\n\n\t ....................Tops Tech. Fast Food........................";
        cout << "\n\n\t Please Enter Your Name :";
        cin >> name;
        cout << "\n\n\t Hello " << name << " ";
    }
    void print_order()
    {
        cout << "\n\n\t What would you like to order? ";

        cout << "\n\n\t ..........................Menu.........................";
    }

    void get_menu()
    {
        cout << "\n\n\t 1) Pizzas ";
        cout << "\n\n\t 2) Burgers ";
        cout << "\n\n\t 3) Sandwich ";
        cout << "\n\n\t 4) Rolls ";
        cout << "\n\n\t 5) Biryani ";
    }
    void get_choice()
    {
        cout << "\n\n\t Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n\n\t 1) Schezwan Margherita Rs.200 \n\n\t 2) Mazedar Makhni Paneer Rs.300 \n\n\t 3) Awesome American Cheesy Rs.400 ";
            break;
        case 2:
            cout << "\n\n\t 4) Aloo Tiki Rs.100 \n\n\t 5) Simply Veg Rs.50 \n\n\t 6) Maggi Masala Rs.200 \n\n\t 7) Mexican Twist Rs.250 ";
            break;
        case 3:
            cout << "\n\n\t 8) club Sandwitch Rs.240 \n\n\t 9) Veg. Crispy Sandwich Rs.160 \n\n\t 10) Extream Veg Sandwich Rs.100";
            break;
        case 4:
            cout << "\n\n\t 11) Paneer Roll Rs.500 \n\n\t 12) paneer Cheese Roll Rs.400 \n\n\t 13) Paneer Cheese Schz. Roll Rs.550 \n\n\t 14) Paneer Cheese Schz. Kosha Roll Rs.480";
            break;
        case 5:
            cout << "\n\n\t 15) Chicken65 Biryani Rs.339 \n\n\t 16) Mutton Biryani Rs.319 \n\n\t 17) Supreme Chicken Biryani Rs.969";
            break;
        default:
            cout << "\n\n\t your choice is invalide.";
            break;
        }
    }

    void get_select()
    {
        if (choice == 1)
        {
            cout << "\n\n\t Please Enter which Pizzas you would like to have?:";
            cin >> choice2;
        }
        else if (choice == 2)
        {
            cout << "\n\n\t Please Enter which Burgers you would like to have?:";
            cin >> choice2;
        }
        else if (choice == 3)
        {
            cout << "\n\n\t Please Enter which Sandwich you would like to have?:";
            cin >> choice2;
        }
        else if (choice == 4)
        {
            cout << "\n\n\t Please Enter which Rolls you would like to have?:";
            cin >> choice2;
        }
        else if (choice == 5)
        {
            cout << "\n\n\t Please Enter which Biryani you would like to have?:";
            cin >> choice2;
        }
        else
        {
            cout << "\n\n\t Please agane Select? :";
        }
    }

    void get_quantity()
    {
        cout << "\n\n\t Please Enter Quantity: ";
        cin >> quantity;
    }

    void get_order()
    {
        cout << "\n\n\t.........................Your Order...........................";

        if (choice2 == 1)
        {
            n1 = 200;
            cout << "\n\n\t " << quantity << " Schezwan Margherita \n\n\t Your Total Bill is: " << n1 * quantity;
        }
        else if (choice2 == 2)
        {
            n2 = 300;
            cout << "\n\n\t " << quantity << " Mazedar Makhni Paneer \n\n\t Your Total Bill is: " << n2 * quantity;
        }
        else if (choice2 == 3)
        {
            n3 = 400;
            cout << "\n\n\t " << quantity << " Awesome American Cheesy \n\n\t Your Total Bill is: " << n3 * quantity;
        }
        else if (choice2 == 4)
        {
            n4 = 100;
            cout << "\n\n\t " << quantity << " Aloo Tiki \n\n\t Your Total Bill is: " << n4 * quantity;
        }
        else if (choice2 == 5)
        {
            n5 = 50;
            cout << "\n\n\t " << quantity << " Simply Veg \n\n\t Your Total Bill is: " << n5 * quantity;
        }
        else if (choice2 == 6)
        {
            n6 = 200;
            cout << "\n\n\t " << quantity << " Maggi Masala \n\n\t Your Total Bill is: " << n6 * quantity;
        }
        else if (choice2 == 7)
        {
            n7 = 250;
            cout << "\n\n\t " << quantity << " Mexican Twist \n\n\t Your Total Bill is: " << n7 * quantity;
        }
        else if (choice2 == 8)
        {
            n8 = 240;
            cout << "\n\n\t " << quantity << " club Sandwitch \n\n\t Your Total Bill is: " << n8 * quantity;
        }
        else if (choice2 == 9)
        {
            n9 = 160;
            cout << "\n\n\t " << quantity << " Veg. Crispy Sandwich \n\n\t Your Total Bill is: " << n9 * quantity;
        }
        else if (choice2 == 10)
        {
            n10 = 100;
            cout << "\n\n\t " << quantity << "  Extream Veg Sandwich \n\n\t Your Total Bill is: " << n10 * quantity;
        }
        else if (choice2 == 11)
        {
            n11 = 500;
            cout << "\n\n\t " << quantity << " Paneer Roll \n\n\t Your Total Bill is: " << n11 * quantity;
        }
        else if (choice2 == 12)
        {
            n12 = 400;
            cout << "\n\n\t " << quantity << " paneer Cheese Roll \n\n\t Your Total Bill is: " << n12 * quantity;
        }
        else if (choice2 == 13)
        {
            n13 = 550;
            cout << "\n\n\t " << quantity << " Paneer Cheese Schz. Roll \n\n\t Your Total Bill is: " << n13 * quantity;
        }
        else if (choice2 == 14)
        {
            n14 = 480;
            cout << "\n\n\t " << quantity << " Paneer Cheese Schz. Kosha Roll \n\n\t Your Total Bill is: " << n14 * quantity;
        }
        else if (choice2 == 15)
        {
            n15 = 339;
            cout << "\n\n\t " << quantity << " Chicken65 Biryani \n\n\t Your Total Bill is: " << n15 * quantity;
        }
        else if (choice2 == 16)
        {
            n16 = 319;
            cout << "\n\n\t " << quantity << " Mutton Biryani \n\n\t Your Total Bill is: " << n16 * quantity;
        }
        else if (choice2 == 17)
        {
            n17 = 969;
            cout << "\n\n\t " << quantity << " Supreme Chicken Biryani \n\n\t Your Total Bill is: " << n17 * quantity;
        }
        else
        {
            cout << "\n\n\t plz select again";
        }
    }

    void print_time()
    {
        cout << "\n\n\t Your Order Will be delivered in 40 minutes";
        cout << "\n\n\t Thank You For Ordering From Tops Tech Fast Food";
    }
};

int main()
{

    order O;
    char op;
    do
    {
        O.get_pname();
        O.print_order();
        O.get_menu();
        O.get_choice();
        O.get_select();
        O.get_quantity();
        O.get_order();
        O.print_time();
        
        cout << "\n\n\t Would you like to order anythink else? Y/N:";
        cin >> op;
    } while (op == 'Y');
}