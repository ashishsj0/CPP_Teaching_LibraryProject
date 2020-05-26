/*
 * LibrarySystem.cpp
 *
 *  Created on: 19-May-2020
 *      Author: ashishsharma
 *
 *
 * Library : Books ([Book]), In charge (Person), Customers([Person])
 *
 * + Book: Author, name, pages, price, Serial number
 *
 * + Person: Name, age, gender, mobile number, address
 *
 * + Mobile: Code, mobile number
 *
 * + Address: Person, House number, street, zip code, city, country
 *
 */


#include <Person.cpp>
#include<iostream>
#include<string>

using namespace std;

void add_book()
{
	cout<<"Here you can create a new account!"<<endl;
}

void create_customer()
{
	cout<<"Here you can enter the amount you would like to deposit!"<<endl;
}

void rent_book()
{
	cout<<"Here you can rent a book!"<<endl;
}

void search_book()
{
	cout<<"Here you can see your balance enquiry!"<<endl;
}

void delete_customer()
{
	cout<<"Here you can close an account!"<<endl;
}

void exit_system()
{
	cout<<"Here you will exit the system!"<<endl;
}

int main()
{

	char num;

	do {
	cout<<"Please select one of these Options available (1-6): \n\n";
	cout<<"01. NEW ACCOUNT \n\n";
	cout<<"02. DEPOSIT AMOUNT \n\n";
	cout<<"03. WITHDRAW AMOUNT \n\n";
	cout<<"04. BALANCE ENQUIRY \n\n";
	cout<<"05. CLOSE AN ACCOUNT \n\n";
	cout<<"06. EXIT \n\n";

	cin>>num;

	switch(num)
	{
	case '1':
		add_book();
		break;

	case '2':
		create_customer();
		break;

	case '3':
		rent_book();
		break;

	case '4':
		delete_customer();
		break;

	case '5':
		search_book();
		break;

	case '6':
		exit_system();
		break;
    default:
            break;
	}

	} while (num != '6');

	return 0;
}
