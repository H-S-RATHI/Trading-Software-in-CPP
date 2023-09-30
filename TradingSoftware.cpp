#include <iostream>
#include <ctime>

#ifdef _WIN32
#include <conio.h>
#define CLEAR_SCREEN "cls"
#define getch _getch
#else
#include <stdio_ext.h> // For __fpurge on some non-Windows systems
#define CLEAR_SCREEN "clear"
#define getch getchar
#endif

using namespace std;

float shop();

int main()
{
    char start;
    char choice;

startL:
    system(CLEAR_SCREEN);
    cout << "\t\t\tPlease press H to start Shopping for Home Appliances ";
start:
    cin >> start;

    if (start == 'h' || start == 'H')
    {
        float total = shop();
        time_t t = time(NULL);
        tm *tPtr = localtime(&t);

        cout << "\t\t\tBill Date : ";
        cout << tPtr->tm_mday << "/";
        cout << 1 + tPtr->tm_mon << "/";
        cout << 1900 + tPtr->tm_year << endl;
        cout << "\t\t\tBill time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;
        cout << "\t\t\tTotal Bill Amount : " << total << endl;

        if (total > 5000 && total <= 100000)
        {
            total = total - (0.05 * total);
            cout << "Total Discount : 5%" << endl;
        }
        else if (total > 100000 && total <= 125000)
        {
            total = total - (0.1 * total);
            cout << "\t\t\tTotal Discount : 10%" << endl;
        }
        else if (total > 125000 && total <= 150000)
        {
            total = total - (0.25 * total);
            cout << "\t\t\tTotal Discount : 25%" << endl;
        }
        else if (total > 150000)
        {
            total = total - (0.5 * total);
            cout << "\t\t\tTotal Discount : 50%" << endl;
        }

        cout << "\t\t\tTotal bill amount is : " << total << endl;

    Again:
        cout << "\t\t\tDo you want shopping again y or n" << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            goto startL;
        }
        else if (choice == 'n' || choice == 'N')
        {
            cout << "\t\t\tThanks for shopping" << endl;
        }
        else
        {
            cout << "\t\t\tYou have entered the wrong value, Please press H to shop again ";
            goto Again;
        }
    }
    else
    {
        cout << "\t\t\tYou have entered the wrong value, please press H to start again ";
        goto start;
    }
}

float shop()
{
    char choice;
    char product;
    int quantity;
    float bill = 0;

    system(CLEAR_SCREEN);
    Again:
    cout << "\n\n\t\t\t************ WELCOME ************" << endl;
    cout << "\t\t\t Please follow the instructions__" << endl;
    cout << "\t\t\t|1) Please enter R to order Refrigerator" << endl;
    cout << "\t\t\t|2) Please enter W to order Washing machine" << endl;
    cout << "\t\t\t|3) Please enter T to order Television" << endl;
    cout << "\t\t\t|4) Please enter M to order Microwave" << endl;
    cout << "\t\t\t|5) Please enter A to order Air Conditioner" << endl;

    cout << "\t\t\tEnter Your Choice ";
    cin >> choice;

    if (choice == 'R' || choice == 'r')
    {
        system(CLEAR_SCREEN);
    // Refrigerator
    refrigerator:
        cout << "\t\t\t____Refrigerator Details____" << endl;
        cout << "\t\t\t|1) Whirlpool => Price: 40000" << endl;
        cout << "\t\t\t|2) Panasonic => Price: 45000" << endl;
        cout << "\t\t\t|3) Samsung   => Price: 30000" << endl;
        cout << "\t\t\t|4) Voltas    => Price: 25000" << endl;
        cout << "\t\t\t|5) Godrej    => Price: 27000" << endl;
        cout << "\t\t\t|6) Haier     => Price: 34000" << endl;

        cout << "\t\t\tPlease enter your choice (1-6) ";
        cin >> product;

        switch (product)
        {
        case '1':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 40000;
            break;
        case '2':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 45000;
            break;
        case '3':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 30000;
            break;
        case '4':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 25000;
            break;
        case '5':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 27000;
            break;
        case '6':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 34000;
            break;
        default:
            cout << "\t\t\tYou have entered the wrong value, please try again ";
            goto refrigerator;
        }
    }
    else if (choice == 'W' || choice == 'w')
    {
        system(CLEAR_SCREEN);
    WashingMachine:
        cout << "\t\t\t____Washing Machine Details____" << endl;
        cout << "\t\t\t|1) Whirlpool => Price: 40000" << endl;
        cout << "\t\t\t|2) Panasonic => Price: 45000" << endl;
        cout << "\t\t\t|3) Samsung   => Price: 30000" << endl;
        cout << "\t\t\t|4) Voltas    => Price: 25000" << endl;
        cout << "\t\t\t|5) Godrej    => Price: 27000" << endl;
        cout << "\t\t\t|6) Haier     => Price: 34000" << endl;

        cout << "\t\t\tPlease enter your choice (1-6) ";
        cin >> product;
        cin >> product;
        switch (product)
        {
        case '1':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 40000;
            break;
        case '2':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 45000;
            break;
        case '3':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 30000;
            break;
        case '4':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 25000;
            break;
        case '5':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 27000;
            break;
        case '6':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 34000;
            break;
        default:
            cout << "\t\t\tYou have entered the wrong value, please try again ";
            goto WashingMachine;
        }
    }
    else if (choice == 'T' || choice == 't')
    {
        system(CLEAR_SCREEN);
    Television:
        cout << "\t\t\t____Television Details____" << endl;
        cout << "\t\t\t|1) Whirlpool => Price: 40000" << endl;
        cout << "\t\t\t|2) Panasonic => Price: 45000" << endl;
        cout << "\t\t\t|3) Samsung   => Price: 30000" << endl;
        cout << "\t\t\t|4) Voltas    => Price: 25000" << endl;
        cout << "\t\t\t|5) Godrej    => Price: 27000" << endl;
        cout << "\t\t\t|6) Haier     => Price: 34000" << endl;

        cout << "\t\t\tPlease enter your choice (1-6) ";
        cin >> product;
        cin >> product;
        switch (product)
        {
        case '1':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 40000;
            break;
        case '2':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 45000;
            break;
        case '3':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 30000;
            break;
        case '4':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 25000;
            break;
        case '5':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 27000;
            break;
        case '6':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 34000;
            break;
        default:
            cout << "\t\t\tYou have entered the wrong value, please try again ";
            goto Television;
        }
    }
    else if (choice == 'M' || choice == 'm')
    {
        system(CLEAR_SCREEN);
    Microvave:
        cout << "\t\t\t____Microvave Details____" << endl;
        cout << "\t\t\t|1) Whirlpool => Price: 40000" << endl;
        cout << "\t\t\t|2) Panasonic => Price: 45000" << endl;
        cout << "\t\t\t|3) Samsung   => Price: 30000" << endl;
        cout << "\t\t\t|4) Voltas    => Price: 25000" << endl;
        cout << "\t\t\t|5) Godrej    => Price: 27000" << endl;
        cout << "\t\t\t|6) Haier     => Price: 34000" << endl;

        cout << "\t\t\tPlease enter your choice (1-6) ";
        cin >> product;
        cin >> product;
        switch (product)
        {
        case '1':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 40000;
            break;
        case '2':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 45000;
            break;
        case '3':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 30000;
            break;
        case '4':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 25000;
            break;
        case '5':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 27000;
            break;
        case '6':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 34000;
            break;
        default:
            cout << "\t\t\tYou have entered the wrong value, please try again ";
            goto Microvave;
        }
    }
    else if (choice == 'A' || choice == 'a')
    {
        system(CLEAR_SCREEN);
    AirConditioner:
        cout << "\t\t\t____Air Conditioner Details____" << endl;
        cout << "\t\t\t|1) Whirlpool => Price: 40000" << endl;
        cout << "\t\t\t|2) Panasonic => Price: 45000" << endl;
        cout << "\t\t\t|3) Samsung   => Price: 30000" << endl;
        cout << "\t\t\t|4) Voltas    => Price: 25000" << endl;
        cout << "\t\t\t|5) Godrej    => Price: 27000" << endl;
        cout << "\t\t\t|6) Haier     => Price: 34000" << endl;

        cout << "\t\t\tPlease enter your choice (1-6) ";
        cin >> product;
        cin >> product;
        switch (product)
        {
        case '1':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 40000;
            break;
        case '2':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 45000;
            break;
        case '3':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 30000;
            break;
        case '4':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 25000;
            break;
        case '5':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 27000;
            break;
        case '6':
            cout << "\t\t\tPlease enter the quantity of the product ";
            cin >> quantity;
            bill = quantity * 34000;
            break;
        default:
            cout << "\t\t\tYou have entered the wrong value, please try again ";
            goto AirConditioner;
        }
    }
    else
    {
        cout << "\t\t\tInvalid choice! Please try again." << endl;
        goto Again;
        // Handle invalid choice here (maybe loop back to product selection).
    }

    // Calculate the total bill and return it.
    return bill;
}
