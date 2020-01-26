/* Title average.cpp
 * Description: This program computes average of
 *       three exams.
 * Author: Eduardo Flores Aguirre
 * Date: 03/9/2016
 */
#include <iostream>
using namespace std;
int main ()
{
    int cents;
    cout << "Enter number of cents " << endl;
    cin >> cents ;
    
    int quarter = cents / 25;
    cents = cents % 25 ;
    
    int dimes = cents / 10;
    cents = cents % 10 ;
    
    int nickels = cents / 5;
    cents = cents % 5 ;
    
    int pennies = cents / 1;
    cents = cents % 5;
    
    
    
    


    cout << "quaters "<< quarter << endl;
    cout << "dimes "<< dimes << endl;
    cout << "nickles "<< nickels << endl;
    cout << "pennies "<< pennies << endl;
   
    
    

    return 0;
}