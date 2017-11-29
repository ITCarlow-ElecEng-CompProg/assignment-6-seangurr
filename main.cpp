/** Sean Gurr
 *  C00221886
 *  Ex. 6
 *  Decimal / Binary Numbering Systems Conversion
 *  27/09/2017
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <windows.h>

using namespace std;

/**< Funtion prototypes */
long int bin_2_dec(long int);
long int dec_2_bin(long int);


int main()
{
    /**< Purpose of code */
    cout<< "Decimal / Binary Numbering Systems Conversion" << endl;

    /**< variable declarations */
	char input;
	int n;

	/**< continue running program until q is pressed */
	do
	{
	    cout<<  "\n Choose an option from the following: "<<
                "\n 'b' binary number to decimal number"<<
                "\n 'd' decimal number to its unsigned binary value"<<
                "\n 'q' to quit programme \t";
		cin >> input;

		/**< switch case statement to implement user's decision */
		switch (input)
		{
			case 'b':
                        cout << "\nEnter binary value: "<<endl;
                        cin >>n;
                        cout << "\nThe binary number " << n << " is " << bin_2_dec(n) << " in decimal";
                        fflush(stdin);
						getchar();
                        break;

			case 'd':
                        cout<< "\nEnter decimal number: "<<endl;
                        cin>>n;
                        cout<< "\nThe decimal number "<< n <<" is "<< dec_2_bin(n) <<" in binary";
                        fflush(stdin);
						getchar();
                        break;

			case 'q':
                        cout << "\nGoodbye...\n" << endl;
						break;

			default:
                        cout << "\nInvalid input, try again...\n" << endl;
                        break;


		}
	}
	while (input != 'q');

	return 0;
}

/**< bin_2_dec function*/
long int bin_2_dec(long int n)
{
    long int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n % 10;
        n = n / 10;
        decimalNumber += remainder * pow(2, i);
        i++;
    }

    return decimalNumber;
}

/**< dec_2_bin function*/
long int dec_2_bin(long int n)
{
    long int binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n % 2;
        n /= 2;
        binaryNumber =  binaryNumber + remainder*i;
        i = i * 10;

    }

    return binaryNumber;
}
