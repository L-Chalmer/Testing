#include <iostream>
#include <string>

using namespace std;

class Publication
{
	protected:
		string title, author;
		int year;
	public:
		//Coonstructor using an initialisation list to fill in values
		Publication(string title, string author, int year):
		author(author), title(title), year(year){}

		//Default constructor calls one above and fill in blank values
		Publication(): Publication("No Title", "No Author", 0){}

		void print()
		{
			cout << "Title: " << this->title << endl;
			cout << "Author: " << this->author << endl;
			cout << "Year: " << this->year << endl;
		}
};

class Book : public Publication
{
	//If we are deriving further, these would be protected not private
	private:
		string publisher;
		int num_pages;
		int ISBN;
	public:
		Book(string title, string author, int year, string publisher, int num_pages, int ISBN):
		Publication(title,author, year), num_pages(num_pages), ISBN(ISBN),publisher(publisher){}

		Book() : Book("No Title", "No Author", 0, "", 0, 0) {}

		void print()
		{
			Publication::print();
			cout << "Publisher: " << this->publisher << endl;
			cout << "Pages: " << this->num_pages << endl;
			cout << "ISBN: " << this->ISBN << endl;
		}

};

int main()
{
	Book b;
	b.print();
	return 0;
}