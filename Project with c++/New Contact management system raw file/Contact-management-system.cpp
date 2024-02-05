#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contact {
    string name;
    string phoneNumber;
    string emailAddress;
};

class ContactManagementSystem {
private:
    vector<Contact> contacts;

public:
    void addContact(const Contact& contact) {
        contacts.push_back(contact);
        cout << "Contact added successfully." << endl;
    }

    void displayAllContacts() {
        if (contacts.empty()) {
            cout << "No contacts found." << endl;
        } else {
            cout << "---- All Contacts ----" << endl;
            for (const auto& contact : contacts) {
                cout << "Name: " << contact.name << endl;
                cout << "Phone Number: " << contact.phoneNumber << endl;
                cout << "Email Address: " << contact.emailAddress << endl;
                cout << "-----------------------" << endl;
            }
        }
    }

    void searchContact(const string& name) {
        bool found = false;
        cout << "---- Search Results ----" << endl;
        for (const auto& contact : contacts) {
            if (contact.name == name) {
                cout << "Name: " << contact.name << endl;
                cout << "Phone Number: " << contact.phoneNumber << endl;
                cout << "Email Address: " << contact.emailAddress << endl;
                cout << "-----------------------" << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No contacts found with the name: " << name << endl;
        }
    }
};

int main() {
    ContactManagementSystem cms;

    int choice;
    do {
        cout << "---- Contact Management System Menu ----" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Display All Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Contact newContact;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, newContact.name);
                cout << "Enter Phone Number: ";
                getline(cin, newContact.phoneNumber);
                cout << "Enter Email Address: ";
                getline(cin, newContact.emailAddress);
                cms.addContact(newContact);
                break;
            }
            case 2: {
                cms.displayAllContacts();
                break;
            }
            case 3: {
                string name;
                cout << "Enter the name to search: ";
                cin.ignore();
                getline(cin, name);
                cms.searchContact(name);
                break;
            }
            case 4: {
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
