#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;

class contact
{
	char phone[12];
	char name[20], address[20], email[30];

public:
	// ======create contact function====

	void create_contact()
	{
		cout << "\t\t\tEnter Phone: ";
		cin >> phone;
		cout << "\t\t\tEnter Name: ";
		cin.ignore();
		cin >> name;
		cout << "\t\t\tEnter Address: ";
		cin.ignore();
		cin >> address;
		cout << "\t\t\tEnter Email: ";
		cin.ignore();
		cin >> email;

		cout << "\n";
	}

	// ====returning function====
	char *getPhone()
	{
		return phone;
	}

	char *getName()
	{
		return name;
	}

	char *getAddress()
	{
		return address;
	}

	char *getEmail()
	{
		return email;
	}

	// ======show contact function====
	void show_contact()
	{
		cout << endl
			 << "\t\t\tPhone: " << phone << endl;
		cout << endl
			 << "\t\t\tName: " << name << endl;
		cout << endl
			 << "\t\t\tAddress: " << address << endl;
		cout << endl
			 << "\t\t\tEmail Address : " << email << endl;
	}
};

fstream myFile;
contact obj1;

// =====for case 1 ==
void save_contact()
{
	myFile.open("contactBook.txt", ios::out | ios::app);
	obj1.create_contact();
	myFile.write((char *)&obj1, sizeof(contact));
	myFile.close();
	cout << endl
		 << endl
		 << "\t\t\tContact Has Been Sucessfully Created...";
	getchar();
}
// =====for case 2====
void show_all_contacts()
{
	cout << "\n\t\t\tLIST OF CONTACTS";
	myFile.open("contactBook.txt", ios::in);
	while (myFile.read((char *)&obj1, sizeof(contact)))
	{
		obj1.show_contact();
		cout << endl
			 << "\t\t\t=================================================\n"
			 << endl;
	}
	myFile.close();
}

// =====for case 3=====
void display_contact()
{
	string num;
	cout << "\n\n\tPhone: ";
	cin >> num;
	bool found;
	int ch;

	found = false;
	myFile.open("contactBook.txt", ios::in);
	while (myFile.read((char *)&obj1, sizeof(contact)))
	{
		if (obj1.getPhone() == num)
		{
			obj1.show_contact();
			found = true;
		}
	}
	myFile.close();
	if (found == false)
	{
		cout << "\n\t\t\tNo record found...";
	}
	getchar();
}

// ====for case 4====
void edit_contact()
{
	string num;
	bool found = false;

	cout << "\n\t\t\tEnter the number of contact to edit:";
	cin >> num;
	myFile.open("contactBook.txt", ios::in | ios::out);
	while (myFile.read((char *)&obj1, sizeof(contact)) && found == false)
	{
		if (obj1.getPhone() == num)
		{
			obj1.show_contact();
			cout << "\n\t\t\tPlease Enter The New Details of Contact: " << endl;
			obj1.create_contact();
			int pos = -1 * sizeof(obj1);
			myFile.seekp(pos, ios::cur);
			myFile.write((char *)&obj1, sizeof(obj1));
			cout << endl
				 << endl
				 << "\t\t\t Contact Successfully Updated...";
			found = true;
		}
	}
	myFile.close();
	if (found == false)
		cout << endl
			 << endl
			 << "\t\t\tContact Not Found...";
}
// ======for case 5====
void delete_contact()
{
	string num;
	cout << endl
		 << endl
		 << "\t\t\tPlease Enter Your Contact to Delete: ";
	cin >> num;
	myFile.open("contactBook.txt", ios::in | ios::out);
	fstream myFile2;
	myFile2.open("Temp.txt", ios::out);
	myFile.seekg(0, ios::beg);
	while (myFile.read((char *)&obj1, sizeof(contact)))
	{
		if (obj1.getPhone() != num)
		{
			myFile2.write((char *)&obj1, sizeof(contact));
		}
	}
	myFile2.close();
	myFile.close();
	remove("contactBook.txt");
	rename("Temp.txt", "contactBook.txt");
	cout << endl
		 << endl
		 << "\t\t\tContact Deleted...";
}

int main()
{
	for (;;)
	{
		int ch;
		cout << "\n\t\t\tWelcome to Contact Management System";
		cout << "\n\n\t\t\t1. Add a new Contact\n\t\t\t2. List all Contacts\n\t\t\t3. Search for contact\n\t\t\t4. Edit a Contact\n\t\t\t5. Delete a Contact\n\t\t\t0. Exit\n\t\t\t=================\n\t\t\t";
		cout << "Enter the choice:";
		cin >> ch;

		switch (ch)
		{
		case 0:
			cout << "\n\n\t\tThank you for using.";
			break;

		case 1:
			save_contact();
			break;

		case 2:
			show_all_contacts();
			break;
		case 3:
			display_contact();
			break;
		case 4:
			edit_contact();
			break;
		case 5:
			delete_contact();
			break;
		default:
			break;
		}

		int opt;
		cout << "\n\n\n\t\t\t\tEnter the Choice:\n\n\t\t\t1. Main Menu\t\t0. Exit\n";
		cin >> opt;

		switch (opt)
		{
		case 1:
			continue;

		case 0:
			break;
		}
	}
	return 0;
}
