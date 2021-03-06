#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declare Variables
    double quarterSales = 0.0;
    double commissionAmt = 0.0;

    //Receive Input
    cout << "Quarterly Sales: ";
    cin >> quarterSales;

    //Calculate Commission
    if (quarterSales <= 0)
    commissionAmt = 0;
    cout << "Error: The Quarterly Sales must be Greater than 0.";
    else
        if (quarterSales > 0 and quarterSales <= 20000)
        commissionAmt = quarterSales * .05;
        else
        if (quarterSales >=20001 and quarterSales <= 50000)
        commissionAmt = quarterSales * .07 + 1000;
        else
        if (quarterSales <=50001)
        commissionAmt = quarterSales * .1 + 3100;
        end if
        end if
    //end if 

    //Display Results
    cout << fixed << setprecision(2);
    cout << "Commission Owed: " << commissionAmt << endl;

    //End of main funtion
}