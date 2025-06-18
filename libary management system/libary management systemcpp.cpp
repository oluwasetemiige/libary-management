#include<iostream>
#include <string>
using namespace std;
int main()
{
	//creating the book owmers ..student, libarian, teachers adding login with case file 
	int login;
	string name;
	int remove_book;
double book_name1, book_name2, book_name3;
	int price;
	int input_price;
	int hours;
	start1:
	std::cout << "Please select a login option" << std::endl;
	std::cout << "1. for Student Profile" << std::endl;
	std::cout << "2. for Libarian Profile" << std::endl;
	std::cout << "3. for Teacher profile" << std::endl;
	std::cin >> login;
	system("cls");
	start:
	if (login == 1)
	{
		std::cout << "Welcome to the student profile" << std::endl;
		std::cout << "Please Enter your name: ";
		std::cin >> name;
		system("cls");

	p1:
		std::cout << "WELCOME, " << name << std::endl;
		std::cout << "This are the books avaliable for Students" << std::endl;
		std::cout << "1. World war 2" << std::endl;
		std::cout << "2. C++ course hello programming" << std::endl;
		std::cout << "3. Further mathematics 2" << std::endl;
		std::cout << "4. History" << std::endl;
		std::cout << "5. Computer Education" << std::endl;
		std::cout << "6. Business Education" << std::endl;
		std::cout << "7. Chemistry Textbook" << std::endl;
		std::cout << "8. Inclusive Mathematics" << std::endl;
		std::cout << "9. Geographical wide" << std::endl;
		std::cout << "10. inclusive Physics" << std::endl;
		std::cin >> book_name1;
		if (book_name1 <= 10)
		{
			if (book_name1 == 1)
			{
				std::cout << "Thanks for selecting  WORLD WAR 2" << std::endl;
				std::cout << "Price is ($10) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 10 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;

				}
			}
			else if (book_name1 == 2)
			{
				std::cout << "Thanks for selecting  C++ COURSE HELLO PROGRAMMING" << std::endl;
				std::cout << "Price is ($40) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 40 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;

				}
			}
			else if (book_name1 == 3)
			{
				std::cout << "Thanks for selecting  FURTHER MATHEMATICS 2" << std::endl;
				std::cout << "Price is ($20) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 20 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;
				}
			}
			else if (book_name1 == 4)
			{
				std::cout << "Thanks for selecting  HISTORY" << std::endl;
				std::cout << "Price is ($70) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 70 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;


				}
			}
			else if (book_name1 == 5)
			{
				std::cout << "Thanks for selecting  COMPUTER EDUCATION" << std::endl;
				std::cout << "Price is ($50) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 50 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;


				}


			}
			else if (book_name1 == 6)
			{
				std::cout << "Thanks for selecting  BUSINESS EDUCATION" << std::endl;
				std::cout << "Price is ($100) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 100 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;


				}


			}
			else if (book_name1 == 7)
			{
				std::cout << "Thanks for selecting  CHEMISTRY TEXTBOOK" << std::endl;
				std::cout << "Price is ($179) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 179 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;


				}


			}
			else if (book_name1 == 8)
			{
				std::cout << "Thanks for selecting  INCLUSIVE MATHEMATICS" << std::endl;
				std::cout << "Price is ($890) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 890 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;


				}


			}
			else if (book_name1 == 9)
			{
				std::cout << "Thanks for selecting  GEOGRAPHICAL WIDE" << std::endl;
				std::cout << "Price is ($90) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 90 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;


				}


			}
			else if (book_name1 == 10)
			{
				std::cout << "Thanks for selecting  INCLUSIVE PHYSICS" << std::endl;
				std::cout << "Price is ($520) per hour" << std::endl;
				std::cout << "Would you like to continue" << std::endl;
				std::cout << "1. for yes" << std::endl;
				std::cout << "2. for No " << std::endl;
				std::cin >> input_price;
				if (input_price == 1) {
					std::cout << "How many hours would like to use: " << std::endl;
					std::cin >> hours;
					std::cout << "Your total is: $" << 520 * hours << std::endl;
					std::cout << "Have fun reading" << std::endl;
				}
				else {
					std::cout << "GoodBye" << std::endl;
					goto p1;


				}


			}
		}
		else {
			std::cout << "INvalid please re- enter" << std::endl;
			goto start;
		}
	}
	else if (login == 2) {
					std::cout << "Libarian profile" << std::endl;
					std::cout << "Please enter your name" << std::endl;
					std::cin >> name;
					std::cout << "WELCOME, " << name << std::endl;
					std::cout << "Please select a book" << std::endl;
					std::cout << "There are only 4 books Avaliable for libarian" << std::endl;
					std::cout << "1. The Beauty & Beast" << std::endl;
					std::cout << "2. The Three Muskeeteers" << std::endl;
					std::cout << "3. Hanna Mothana" << std::endl;
					std::cout << "4. The Miracle boy" << std::endl;
					std::cout << "Please select one" << std::endl;
					std::cin >> book_name2;
					if (book_name2 == 1) {
						std::cout << "Beacause of your access of a libarian you shall get 20% discount" << std::endl;
						std::cout << "the book is $20 per day" << std::endl;
						std::cout << "How many day/days would you use:";
						std::cin >> hours;
						std::cout << "Your total money is: $" << 20 / 4 * hours;
					}
					if (book_name2 == 2) {
						std::cout << "Beacause of your access of a libarian you shall get 20% discount" << std::endl;
						std::cout << "the book is $70 per day" << std::endl;
						std::cout << "How many day/days would you use:";
						std::cin >> hours;
						std::cout << "Your total money is: $" << 70 / 2 * hours;
					}
					if (book_name2 == 3) {
						std::cout << "Beacause of your access of a libarian you shall get 20% discount" << std::endl;
						std::cout << "the book is $170 per day" << std::endl;
						std::cout << "How many day/days would you use:";
						std::cin >> hours;
						std::cout << "Your total money is: $" << 170 / 2 * hours;
					}
					if (book_name2 == 4) {
						std::cout << "Beacause of your access of a libarian you shall get 20% discount" << std::endl;
						std::cout << "the book is $900 per day" << std::endl;
						std::cout << "How many day/days would you use:";
						std::cin >> hours;
						std::cout << "Your total money is: $" << 900 / 2 * hours;
					}
					
				}
	else  if (login ==3){
					std::cout << "Welcome to the Teacher Profile" << std::endl;
					std::cout << "Please Enter your Name:" << std::endl;
					std::cin >> name;
					std::cout << "WELCOME, mr/mrs " << name << std::endl;
					std::cout << "Thank you for educating the children on reading" << std::endl;
					std::cout << "This are the books menu please select one to continue" << std::endl;
					std::cout << "1. for Social studies" << std::endl;
					std::cout << "2. for business admin" << std::endl;
					std::cout << "3. for Government" << std::endl;
					std::cout << "4. for  Modern Chemistry" << std::endl;
					std::cout << "5. for inclusive Biology" << std::endl;
					std::cout << "6. for New age Physics" << std::endl;
					std::cin >> book_name3;
					if (book_name3 == 1) {
						std::cout << "Thank you for your effort toward the children" << std::endl;
						std::cout << "The books is all free of charge" << std::endl;
					}
					if (book_name3 == 2) {
						std::cout << "Thank you for your effort toward the children" << std::endl;
						std::cout << "The books is all free of charge" << std::endl;
					}
					if (book_name3 == 3) {
						std::cout << "Thank you for your effort toward the children" << std::endl;
						std::cout << "The books is all free of charge" << std::endl;
					}
					if (book_name3 == 4) {
						std::cout << "Thank you for your effort toward the children" << std::endl;
						std::cout << "The books is all free of charge" << std::endl;
					}
					if (book_name3 == 5) {
						std::cout << "Thank you for your effort toward the children" << std::endl;
						std::cout << "The books is all free of charge" << std::endl;
					}
					if (book_name3 == 6) {
						std::cout << "Thank you for your effort toward the children" << std::endl;
						std::cout << "The books is all free of charge" << std::endl;
					}
				}
	else {
		std::cout << "Invaid please select something valid" << std::endl;
		goto start1; ,
				}
				 
return 0;
}   
			
	