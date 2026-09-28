// This program is designed to calculate the value of a resistor based on its color bands, determine the total resistance value of a circuit, and calculate current, voltage, and resistance values based on Ohm's law.
#include <iostream>
#include <string>
using namespace std;
//nf = number for (choice for ohms low), nb = number of branches, s = select what user wants to calculate, cr = numbers of color bands
int nf, nb, s, cr;
//cc1=int for value of 1st color band, cc2=int for value of 2nd color band, cc3=int for value of 3rd color band, cc4=int for value of 4th color band, cc5=int for value of 5th color band, cc6=int for value of 6th color band, rrb =how many resistor in branch, rv = resistor value, REQb = equivalent resistor in branch, REQb1 = equivalent resistor in branch 1, REQ = total equivalent resistor, rv2 = resistor value 2, i = current, v = voltage, r = resistance
double cc1, cc2, cc3, cc4, cc5, cc6 , rrb, rv, REQb, REQb1, REQ, rv2, i, v, r;
//cc33, cc44, cc55, cc66 = color code for 3rd, 4th, 5th, and 6th bands(they are strings because they represent tolerance values)
string rbb, p, cc, j, y, c1, c2, c3, c4, c5, c6, cc33, cc44, cc55, cc66;
int main()
{
	string y = "yes";
	while (y == "yes" || y == "Yes" || y == "YES" || y == "Y" || y == "y") {
		cout << "what do you need?" << endl;
		cout << "1) find the value of resisstor from the colors \n" << "2) determine the total resisstor valuel\n" << "3) determine the current and voltge and resisstor " << endl;
		cin >> s;

		if (s == 1) {
			cc1 = 0; cc2 = 0; cc3 = 0; cc4 = 0;
			cout << "how many color resisstor has? (4/5/6)\n";
			cin >> cr;
			if (cr == 4) {
				cout << "Enter the colors of the resisstor : \n";
				cin >> c1 >> c2 >> c3 >> c4;
				if (c1 == "black") {
					cc1 = 0;
				}
				else if (c1 == "brown") {
					cc1 = 1;
				}
				else if (c1 == "red") {
					cc1 = 2;
				}
				else if (c1 == "orange") {
					cc1 = 3;
				}
				else if (c1 == "yellow") {
					cc1 = 4;
				}
				else if (c1 == "green") {
					cc1 = 5;
				}
				else if (c1 == "blue") {
					cc1 = 6;
				}
				else if (c1 == "violet") {
					cc1 = 7;
				}
				else if (c1 == "grey") {
					cc1 = 8;
				}
				else if (c1 == "white") {
					cc1 = 9;
				}
				if (c2 == "black") {
					cc2 = 0;
				}
				else if (c2 == "brown") {
					cc2 = 1;
				}
				else if (c2 == "red") {
					cc2 = 2;
				}
				else if (c2 == "orange") {
					cc2 = 3;
				}
				else if (c2 == "yellow") {
					cc2 = 4;
				}
				else if (c2 == "green") {
					cc2 = 5;
				}
				else if (c2 == "blue") {
					cc2 = 6;
				}
				else if (c2 == "violet") {
					cc2 = 7;
				}
				else if (c2 == "grey") {
					cc2 = 8;
				}
				else if (c2 == "white") {
					cc2 = 9;
				}
				else if (c3 == "brown") {
					cc3 = 10;
				}
				if (c3 == "red") {
					cc3 = 100;
				}
				else if (c3 == "orange") {
					cc3 = 1000;
				}
				else if (c3 == "yellow") {
					cc3 = 10000;
				}
				else if (c3 == "green") {
					cc3 = 100000;
				}
				else if (c3 == "blue") {
					cc3 = 1000000;
				}
				else if (c3 == "violet") {
					cc3 = 10000000;
				}
				else if (c3 == "grey") {
					cc3 = 100000000;
				}
				else if (c3 == "white") {
					cc3 = 1000000000;
				}
				if (c4 == "gold") {
					cc44 = "+-5%";
				}
				else if (c4 == "brown") {
					cc44 = "+-1%";
				}
				else if (c4 == "red") {
					cc44 = "+-2%";
				}
				else if (c4 == "silver") {
					cc44 = "+-10%";
				}
				else if (c4 == "green") {
					cc44 = "+-0.5%";
				}
				else if (c4 == "blue") {
					cc44 = "+-0.25%";
				}
				else if (c4 == "violet") {
					cc44 = "+-0.1%";
				}
				else if (c4 == "grey") {
					cc44 = "+-0.05%";
				}
				else if (c4 == "non") {
					cc44 = "+-20%";
				}
				cout << "Resistance Value: " << (cc1 * 10 + cc2) * cc3 << " Ohm" << "     " << cc44 << endl;
			}
			else if (cr == 5) {
				cout << "Enter the colors of the resisstor : \n";
				cin >> c1 >> c2 >> c3 >> c4 >> c5;
				if (c1 == "black") {
					cc1 = 0;
				}
				else if (c1 == "brown") {
					cc1 = 1;
				}
				else if (c1 == "red") {
					cc1 = 2;
				}
				else if (c1 == "orange") {
					cc1 = 3;
				}
				else if (c1 == "yellow") {
					cc1 = 4;
				}
				else if (c1 == "green") {
					cc1 = 5;
				}
				else if (c1 == "blue") {
					cc1 = 6;
				}
				else if (c1 == "violet") {
					cc1 = 7;
				}
				else if (c1 == "grey") {
					cc1 = 8;
				}
				else if (c1 == "white") {
					cc1 = 9;
				}
				if (c2 == "black") {
					cc2 = 0;
				}
				else if (c2 == "brown") {
					cc2 = 1;
				}
				else if (c2 == "red") {
					cc2 = 2;
				}
				else if (c2 == "orange") {
					cc2 = 3;
				}
				else if (c2 == "yellow") {
					cc2 = 4;
				}
				else if (c2 == "green") {
					cc2 = 5;
				}
				else if (c2 == "blue") {
					cc2 = 6;
				}
				else if (c2 == "violet") {
					cc2 = 7;
				}
				else if (c2 == "grey") {
					cc2 = 8;
				}
				else if (c2 == "white") {
					cc2 = 9;
				}
				if (c3 == "black") {
					cc3 = 0;
				}
				else if (c3 == "brown") {
					cc3 = 1;
				}
				else if (c3 == "red") {
					cc3 = 2;
				}
				else if (c3 == "orange") {
					cc3 = 3;
				}
				else if (c3 == "yellow") {
					cc3 = 4;
				}
				else if (c3 == "green") {
					cc3 = 5;
				}
				else if (c3 == "blue") {
					cc3 = 6;
				}
				else if (c3 == "violet") {
					cc3 = 7;
				}
				else if (c3 == "grey") {
					cc3 = 8;
				}
				else if (c3 == "white") {
					cc3 = 9;
				}
				if (c4 == "brown") {
					cc4 = 10;
				}
				else if (c4 == "red") {
					cc4 = 100;
				}
				else if (c4 == "orange") {
					cc4 = 1000;
				}
				else if (c4 == "yellow") {
					cc4 = 10000;
				}
				else if (c4 == "green") {
					cc4 = 100000;
				}
				else if (c4 == "blue") {
					cc4 = 1000000;
				}
				else if (c4 == "violet") {
					cc4 = 10000000;
				}
				else if (c4 == "grey") {
					cc4 = 100000000;
				}
				else if (c4 == "white") {
					cc4 = 1000000000;
				}
				if (c5 == "gold") {
					cc55 = "+-5%";
				}
				else if (c5 == "brown") {
					cc55 = "+-1%";
				}
				else if (c5 == "red") {
					cc55 = "+-2%";
				}
				else if (c5 == "silver") {
					cc55 = "+-10%";
				}
				else if (c5 == "green") {
					cc55 = "+-0.5%";
				}
				else if (c5 == "blue") {
					cc55 = "+-0.25%";
				}
				else if (c5 == "violet") {
					cc55 = "+-0.1%";
				}
				else if (c5 == "grey") {
					cc55 = "+-0.05%";
				}
				else if (c5 == "non") {
					cc55 = "+-20%";
				}
				cout << "Resistance Value: " << (cc1 * 100 + cc2 * 10 + cc3) * cc4 << " Ohm" << "     " << cc55 << endl;
			}

			else if (cr == 6) {
				cout << "Enter the colors of the resisstor : \n";
				cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
				if (c1 == "black") {
					cc1 = 0;
				}
				else if (c1 == "brown") {
					cc1 = 1;
				}
				else if (c1 == "red") {
					cc1 = 2;
				}
				else if (c1 == "orange") {
					cc1 = 3;
				}
				else if (c1 == "yellow") {
					cc1 = 4;
				}
				else if (c1 == "green") {
					cc1 = 5;
				}
				else if (c1 == "blue") {
					cc1 = 6;
				}
				else if (c1 == "violet") {
					cc1 = 7;
				}
				else if (c1 == "grey") {
					cc1 = 8;
				}
				else if (c1 == "white") {
					cc1 = 9;
				}
				if (c2 == "black") {
					cc2 = 0;
				}
				else if (c2 == "brown") {
					cc2 = 1;
				}
				else if (c2 == "red") {
					cc2 = 2;
				}
				else if (c2 == "orange") {
					cc2 = 3;
				}
				else if (c2 == "yellow") {
					cc2 = 4;
				}
				else if (c2 == "green") {
					cc2 = 5;
				}
				else if (c2 == "blue") {
					cc2 = 6;
				}
				else if (c2 == "violet") {
					cc2 = 7;
				}
				else if (c2 == "grey") {
					cc2 = 8;
				}
				else if (c2 == "white") {
					cc2 = 9;
				}
				if (c3 == "black") {
					cc3 = 0;
				}
				else if (c3 == "brown") {
					cc3 = 1;
				}
				else if (c3 == "red") {
					cc3 = 2;
				}
				else if (c3 == "orange") {
					cc3 = 3;
				}
				else if (c3 == "yellow") {
					cc3 = 4;
				}
				else if (c3 == "green") {
					cc3 = 5;
				}
				else if (c3 == "blue") {
					cc3 = 6;
				}
				else if (c3 == "violet") {
					cc3 = 7;
				}
				else if (c3 == "grey") {
					cc3 = 8;
				}
				else if (c3 == "white") {
					cc3 = 9;
				}
				if (c4 == "black") {
					cc4 = 0;
				}
				else if (c4 == "brown") {
					cc4 = 1;
				}
				else if (c4 == "red") {
					cc4 = 2;
				}
				else if (c4 == "orange") {
					cc4 = 3;
				}
				else if (c4 == "yellow") {
					cc4 = 4;
				}
				else if (c4 == "green") {
					cc4 = 5;
				}
				else if (c4 == "blue") {
					cc4 = 6;
				}
				else if (c4 == "violet") {
					cc4 = 7;
				}
				else if (c4 == "grey") {
					cc4 = 8;
				}
				else if (c4 == "white") {
					cc4 = 9;
				}
				if (c5 == "brown") {
					cc5 = 10;
				}
				else if (c5 == "red") {
					cc5 = 100;
				}
				else if (c5 == "orange") {
					cc5 = 1000;
				}
				else if (c5 == "yellow") {
					cc5 = 10000;
				}
				else if (c5 == "green") {
					cc5 = 100000;
				}
				else if (c5 == "blue") {
					cc5 = 1000000;
				}
				else if (c5 == "violet") {
					cc5 = 10000000;
				}
				else if (c5 == "grey") {
					cc5 = 100000000;
				}
				else if (c5 == "white") {
					cc5 = 1000000000;
				}
				if (c6 == "gold") {
					cc66 = "+-5%";
				}
				else if (c6 == "brown") {
					cc66 = "+-1%";
				}
				else if (c6 == "red") {
					cc66 = "+-2%";
				}
				else if (c6 == "silver") {
					cc66 = "+-10%";
				}
				else if (c6 == "green") {
					cc66 = "+-0.5%";
				}
				else if (c6 == "blue") {
					cc66 = "+-0.25%";
				}
				else if (c6 == "violet") {
					cc66 = "+-0.1%";
				}
				else if (c6 == "grey") {
					cc66 = "+-0.05%";
				}
				else if (c6 == "non") {
					cc66 = "+-20%";
				}
				cout << "Resistance Value: " << (cc1 * 1000 + cc2 * 100 + cc3 * 10 + cc4) * cc5 << " Ohm" << "     " << cc66 << endl;
			}
		}

		if (s == 2) {
			cout << "branches is evry part of circuit with different connection and resistorvalue \n" << endl;
			cout << "Entere the number of brunches you have in circuit: " << endl;
			cin >> nb;

			for (int i = 1; i <= nb; i++)
			{
				REQb = 0;
				cout << "Enter how many resisstors you have in brunch " << i << " : " << endl;
				cin >> rrb;
				if (rrb == 1)
				{
					cout << "Enter the resisstor value: " << endl;
					cin >> rv;
					REQb = rv;
					cout << "The resisstor value in this brunch is: " << REQb << endl;
				}
				else
				{
					for (int p = 1; p <= rrb; p++)
					{
						cout << "Enter the resisstor value: " << p << endl;
						cin >> rv2;
						cout << "Is the connection in this brunch parallel or series? (p/s) " << endl;
						cin >> rbb;
						if (rbb == "p")
						{
							REQb = (REQb * rv2) / (REQb + rv2);
						}
						else if (rbb == "s")
							REQb = REQb + rv2;
						cout << "The resisstor value in this brunch is: " << REQb << endl;
					}
					cout << "-------------------------------\n";
				}
				if (i == 1) {
					REQ = REQb;
				}
				else {
					cout << "Is the connection of this brunch parallel or series? (p/s) " << endl;
					cin >> j;
					if (j == "p")
					{
						REQ = (REQ * REQb) / (REQ + REQb);
					}
					else if (j == "s")
					{
						REQ = REQ + REQb;
					}
				}
				cout << "-------------------------------\n";
			}
			if (REQ >= 1000) {
				REQ = REQ / 1000;
				cout << "the total value of resisstor is (" << REQ << " k ohm )" << endl;
			}
			else
				cout << "the total value of resisstor is (" << REQ << " ohm )" << endl;
			cout << "------------------------------\n";
		}
		if (s == 3) {
			cout << "what do you need to find? \n" << "1) current \n" << "2) voltage \n" << "3) resisstor value " << endl;
			cin >> nf;
			if (nf == 1) {
				cout << "Enter the voltage value: " << endl;
				cin >> v;
				cout << "Enter the resisstor value: " << endl;
				cin >> r;
				i = v / r;
				cout << "The current is: " << i << endl;
				cout << "------------------------------\n";
			}
			else if (nf == 2) {
				cout << "Enter the current value: " << endl;

				cin >> i;
				cout << "Enter the resisstor value: " << endl;
				cin >> r;
				v = i * r;
				cout << "The voltage is: " << v << endl;
				cout << "------------------------------\n";
			}
			else if (nf == 3) {
				cout << "Enter the voltage value: " << endl;
				cin >> v;
				cout << "Enter the current value: " << endl;
				cin >> i;
				r = v / i;
				cout << "The resisstor value is: " << r << endl;
				cout << "------------------------------\n";
			}
		}
		cout << "Do you have another calculation? " << endl;
		cin >> y;
	}
	return 0;
}