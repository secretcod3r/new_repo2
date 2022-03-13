#include <iostream>
#include <stdexcept>
using namespace std;

#include "mat.hpp"
using namespace ariel;

int main() {
	
	int row, col;
	char a, b;
	while(true) {
			    cout << "\nWelcome to \"Alons Mat Manufacturing Company\"!\n\nTo create a mat just follow the steps below:";
			    cout << "\nPlease enter the number of rows for your mat (number must be odd): ";
			    cin >> row;
			    if (row%2 == 0) {
			    	cout << "Row for mat must be odd!\n";
			    	exit(1);
			    }
			    cout << "\nPlease enter the number of column for your mat (number must be odd): ";
			    cin >> col;
			    if (col%2 == 0) {
			    	cout << "Column for mat must be odd!\n";
			    	exit(1);
			    }
			    cout << "\nPlease enter the first symbol for your mat: ";
			    cin >> a;
			    if (a < 33 || a > 126) {
			    	cout << "Symbols should be proper ascii symbol and not whitespace!\n";
			    	exit(1);
			    }
			    cout << "\nPlease enter the second symbol for your mat: ";
			    cin >> b;
			    if (b < 33 || b > 126) {
			    	cout << "Symbols should be proper ascii symbol and not whitespace!\n";
			    	exit(1);
			    }
			    try {
					cout << "Your newly created mat will look like this:\n\n" << ariel::mat(col, row, a, b) << endl;
				} catch (exception& ex) {
	 				cout << "   caught exception: " << ex.what() << endl;
				}

			    cout << "\nThat looks great! Shall we make another?\nTo exit the program press ctrl+c";
			    cout << "\n\nThank you for choosing \"Alons Mat Manufacturing Company\", have a great day!";
			 
	}
			    return 0;


}

