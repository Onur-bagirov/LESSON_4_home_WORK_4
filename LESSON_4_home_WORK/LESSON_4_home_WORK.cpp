#include <iostream>

using namespace std;

int main()
{
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";
    float kilogram;
    const double gallon = 0.26;
    cout << "\tEnter kilogram :";
    cin >> kilogram;
    float answer_1 = kilogram / gallon;
    cout << "\tAnswer: " << answer_1;
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";
    unsigned int children;
    unsigned int adult;
    cout << "\tEnter the number of children :";
    cin >> children;
    cout << "\tEnter the number of adult : ";
    cin >> adult;
    const double for_children = (2 * children) * 40 / 100;
    const double for_adult = (5 * adult);
    unsigned int answer_2 = for_children + for_adult;
    cout << "\tAnswer: " << answer_2;
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";
    float amount;
    float percentage;
    cout << "\tEnter amount :";
    cin >> amount;
    cout << "\tEnter percentage :";
    cin >> percentage;
    float answer_3 = amount * percentage / 100 / 12;
    cout << "\tAnswer: " << answer_3;
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";
    unsigned int _distance_;
    unsigned int consumption;
    unsigned int a_92;
    unsigned int a_95;
    unsigned int premium;
    cout << "\tEnter distance :";
    cin >> _distance_;
    cout << "\tEnter consumption :";
    cin >> consumption;
    cout << "\tEnter the price of A-92 :";
    cin >> a_92;
    cout << "\tEnter the price of A-95 :";
    cin >> a_95;
    cout << "\tEnter the price of premium :";
    cin >> premium;
    unsigned int answer_4 = (_distance_ / 100) * consumption;
    unsigned int price_1 = answer_4 * a_92;
    unsigned int price_2 = answer_4 * a_95;
    unsigned int price_3 = answer_4 * premium;
    cout << "\n\n\n";
    cout << "\tResult";
    cout << "\n\n";
    cout << "\tA_92: " << price_1 << "azn\n";
    cout << "\tA-95: " << price_2 << "azn\n";
    cout << "\tPremium: " << price_3 << "azn\n";
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";
    float wide;
    float pride;
    float length;
    const double boya = 0.5;
    cout << "\tEnter wide :";
    cin >> wide;
    cout << "\tEnter pride :";
    cin >> pride;
    cout << "\tEnter length :";
    cin >> length;
    float answer_5 = (wide * pride * length) * 80 / 100 * boya;
    cout << "\tAnswer: " << answer_5;
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";
    unsigned int num_0;
    cout << "\tEnter num :";
    cin >> num_0;
    unsigned int num_1 = num_0 / 100;
    unsigned int num_2 = num_0 / 10 % 10;
    unsigned int num_3 = num_0 % 10;
    cout << "\tAnswer: " << num_1 <<"," << num_2 << "," << num_3;
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";
    unsigned int num_0_;
    cout << "\tEnter num :";
    cin >> num_0_;
    unsigned int num_1_ = num_0_ / 100;
    unsigned int num_2_ = num_0_ / 10 % 10;
    unsigned int num_3_ = num_0_ % 10;
    cout << "\tAnswer: " << num_3_ << num_2_ <<  num_1_;
    cout << "\n\n\n";
    cout << "=======================================================";
}