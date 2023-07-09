// Matt Brundage II
// 9/27/21
// temperatures.cpp
// Displays average high and low temps

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   
   int temperatures[7][2];
   double highTemp = 0;
   double lowTemp = 0;
   
   // Accept user input
   cout << "Please enter the daily high, and low temperatures, for the last 7 days: ";
   for(int i=0;i<7;i++){
       cout << "Day # " << i+1 << ": ";
       cin >> temperatures[i][0] >> temperatures[i][1];      
   }
   // Calculate Average
   for(int i=0;i<7;i++){
       highTemp += temperatures[i][0];
       lowTemp += temperatures[i][1];
   }

   highTemp /= 7;
   lowTemp /= 7;

   // Display Results
   cout << "Last week's averages were " << fixed << setprecision(1) << highTemp << " and " << lowTemp;
} // End Function

