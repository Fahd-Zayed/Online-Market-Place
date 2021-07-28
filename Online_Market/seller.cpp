#include "seller.h"
#include"product.h"
#include"Start_page.h"
void seller::signupseller(seller s)
{
	product p;
	Start_page S;
	cout << "  \n                                           " << "<<<< PLEASE SIGN UP >>>>" << '\n' << '\n' << '\n';
	cout << "Enter your name : " <<"* required  string words...."<<endl;
	cin >> s.name; 
	cout << "Enter your id : " << "* required  integer numbers ...."<< endl;
	cin >> s.id;
	cout << "Enter your email : " << "* required  string words and number and characters like (@,#,-_)...."<< endl;
	cin >> s.email;
	cout << "----------------------------------------" << '\n'<<'\n';
	cout << "Do you want to add product??" << endl;											    
	cout << "1-) yes?" << endl;
	cout << "2-) no?" << endl;
	int ch;
	cin >> ch;
	if (ch==1)
	{
		system("CLS");
		p.Add_products(p);
	}
	else if(ch==2)
	{
		system("CLS");
		S.startpage();
	}
}