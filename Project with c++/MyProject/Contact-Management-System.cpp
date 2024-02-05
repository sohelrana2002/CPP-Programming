#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Contact {
    string fname;
    string lname;
    string phoneNumber;
    string email;
    string address;
};

void addContact(const Contact& contact, const string& filename) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << contact.fname << endl;
        file << contact.lname << endl;
        file << contact.phoneNumber << endl;
        file << contact.email << endl;
        file << contact.address << endl;
        file.close();
        cout << "Contact added successfully!" << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
}

vector<Contact> getAllContacts(const string& filename) {
    vector<Contact> contacts;
    ifstream file(filename);
    if (file.is_open()) {
        Contact contact;
        while (getline(file, contact.fname) && getline(file, contact.lname) && getline(file, contact.phoneNumber) && getline(file, contact.email) && getline(file, contact.address)) {
            contacts.push_back(contact);
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    return contacts;
}

void displayAllContacts(const vector<Contact>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts found." << endl;
    } else {
        cout << "All contacts:" << endl;
        for (const auto& contact : contacts) {
            cout << "First Name: " << contact.fname << endl;
            cout << "Last Name: " << contact.lname << endl;
            cout << "Phone Number: " << contact.phoneNumber << endl;
            cout << "Email: " << contact.email << endl;
            cout << "Address: " << contact.address << endl;
            cout << "------------------------" << endl;
        }
    }
}

void searchContact(const string& name) {
        vector<Contact> contacts;
        bool found = false;
        cout << "---- Search Results ----" << endl;
        for (const auto& contact : contacts) {
            ifstream file("contacts.txt", ios::out);
            if (file.is_open()){
                 if (contact.fname == name) {
                cout << "Frist Name: " << contact.fname << endl;
                cout << "Last Name: " << contact.lname << endl;
                cout << "Phone Number: " << contact.phoneNumber << endl;
                cout << "Email Address: " << contact.email << endl;
                cout << "Address: " << contact.address << endl;
                cout << "-----------------------" << endl;
                found = true;
            }
            }
           
        }
        if (!found) {
            cout << "No contacts found with the name: " << name << endl;
        }
    }

int main() {
    string filename = "contacts.txt";
    vector<Contact> contacts = getAllContacts(filename);

    int choice;
    do {
        cout << "Contact Management System" << endl;
        cout << "1. Add a new contact" << endl;
        cout << "2. Display all contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Contact newContact;
                cout << "Enter your first name: ";
                cin.ignore();
                getline(cin, newContact.fname);
                cout << "Enter your last name: ";
                getline(cin, newContact.lname);
                cout << "Enter phone number: ";
                getline(cin, newContact.phoneNumber);
                cout << "Enter email: ";
                getline(cin, newContact.email);
                cout << "Enter Address: ";
                getline(cin, newContact.address);
                addContact(newContact, filename);
                break;
            }
            case 2:
                displayAllContacts(contacts);
                break;
            case 3: {
                string name;
                cout << "Enter the name to search: ";
                cin.ignore();
                getline(cin, name);
                searchContact(name);
                break;
            }
            case 0:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
