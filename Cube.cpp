#include <iostream>
#include <cmath>

using namespace std;


string get_Color(int ask)
{
	string send;
	switch (ask)
	{	
	case 1: send = "W";
		break;
	case 2: send = "Y";
		break;
	case 3: send = "R";
		break;
	case 4: send = "O";
		break;
	case 5: send = "B";
		break;
	case 6: send = "G";
		break;
	}
}


int main()
{

	int cubo[6][3][3] = {0}; //the cube[face][rows][columns] top right start
	
	enum cubeFaceColor {W=1, Y, R, O, B, G};

	enum CubeFaceOrient { top=1, bottom, left, right, front, back };


	cout << "1 = white, 2 = yellow, 3 = red, 4 = orange, 5 = blue, 6 = green"<< endl;
	cout << "1 = white face(top), 2 = yellow face(bottom), 3 = red(left), 4 = orange(right), 5 = blue(front), 6 = green(back)" << endl;
	
	for (int pp = 0; pp < 6; pp++) // getting input of the cube
	{
		cout << "enter face " << pp + 1 << ":"<< endl;
		for (int zz = 0; zz < 3; zz++)
		{
			cout << "enter row from the right: ";
			for (int z = 0; z < 3; z++) {
				cout << endl<< "here:"; 
				cin >> cubo[pp][zz][z];
			}
		}
	}

	
		for (int pp = 0; pp < 6; pp++) // outputting the layout cube
		{
			cout << "face "<< pp+1 << endl; 
			for (int zz = 0; zz < 3; zz++)
			{
				for (int z = 0; z < 3; z++) 
				
				{
					cout << cubeFaceColor(cubo[pp][zz][z]) << " ";
				}
				cout << endl;
			}
		}
}

