#include <bits/stdc++.h>
using namespace std;
int main()
{
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;

    double tip = meal_cost*tip_percent/100;
    double tax = meal_cost*tax_percent/100;

    double totalCost;
    totalCost = meal_cost + tip + tax;

    cout<<round(totalCost);
    return 0;
}
