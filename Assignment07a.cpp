#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
    int id;
    string title;
    float price;

public:
    virtual void input() = 0;
    virtual float getDiscountPrice() = 0;
    virtual ~Product() {}
};

class Book : public Product
{
    string author;

public:
    void input() override
    {
        cout << "Enter The Book Id: ";
        cin >> id;
        cout << "Enter The Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Book Author: ";
        getline(cin, author);
        cout << "Enter Book Price: ";
        cin >> price;
    }

    float getDiscountPrice() override
    {
        return price * 0.90;
    }
};

class Tape : public Product
{
    string artist;

public:
    void input() override
    {
        cout << "Enter Tape ID: ";
        cin >> id;
        cout << "Enter Tape Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Tape Artist: ";
        getline(cin, artist);
        cout << "Enter Tape Price: ";
        cin >> price;
    }

    float getDiscountPrice() override
    {
        return price * 0.95;
    }
};

int main()
{
    Product* arr[3];
    int choice;
    float totalbill = 0.0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Select Product Type (1 for Book, 2 for Tape): ";
        cin >> choice;
        if (choice == 1)
        {
            arr[i] = new Book();
        }
        else if (choice == 2)
        {
            arr[i] = new Tape();
        }
        else
        {
            cout << "Invalid Choice. Try Again." << endl;
            --i;
            continue;
        }
        arr[i]->input();
        totalbill += arr[i]->getDiscountPrice();
    }

    cout << "Total Bill After Discount: " << totalbill << endl;

    for (int i = 0; i < 3; ++i)
    {
        delete arr[i];
    }

    return 0;
}
