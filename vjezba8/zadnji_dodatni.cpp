#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<char> vec;
	vector<char> revVec;
	
    char val;

	cout << "Unos proizvoljnog niza brojeva u vektor (unos zavrsava kada se unese znak '0')." << endl;
    while (cin >> val)
	{
		if(val != '0')
			vec.push_back(val);	
		else
			break;
	}

	vector<char>::reverse_iterator j;
	for (auto j = vec.rbegin(); j!=vec.rend(); j++)
		revVec.push_back(*j);
	
	vector<char>::iterator z;

	cout << "Originalna rijec: ";
	for (auto z = vec.begin(); z!=vec.end(); ++z)
		cout<<*z;

	cout << endl;

	cout << "Inverzna rijec: ";
	for (auto z = begin(revVec); z!=end(revVec); ++z)
		cout<<*z;
	
	if(revVec == vec)
		cout << endl << "String je palindrom" << endl;
	else
		cout << endl << "String nije palindrom" << endl;

	return 0;
}
