#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phoneNumber;
    string email;
};

void addContact(const Contact& contact, const string& filename) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << contact.name << endl;
        file << contact.phoneNumber << endl;
        file << contact.email << endl;
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
        while (getline(file, contact.name) && getline(file, contact.phoneNumber) && getline(file, contact.email)) {
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
            cout << "Name: " << contact.name << endl;
            cout << "Phone Number: " << contact.phoneNumber << endl;
            cout << "Email: " << contact.email << endl;
            cout << "------------------------" << endl;
        }
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
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Contact newContact;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, newContact.name);
                cout << "Enter phone number: ";
                getline(cin, newContact.phoneNumber);
                cout << "Enter email: ";
                getline(cin, newContact.email);
                addContact(newContact, filename);
                break;
            }
            case 2:
                displayAllContacts(contacts);
                break;
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
