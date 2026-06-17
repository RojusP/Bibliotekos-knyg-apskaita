#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    int year;
};

vector<Book> books;

void load() {
    ifstream f("books.txt");
    string line;

    while (getline(f, line)) {
        stringstream ss(line);
        Book b;
        string temp;

        getline(ss, temp, ';');
        b.id = stoi(temp);
        getline(ss, b.title, ';');
        getline(ss, b.author, ';');
        getline(ss, temp, ';');
        b.year = stoi(temp);

        books.push_back(b);
    }
}

void save() {
    ofstream f("books.txt");

    for (int i = 0; i < books.size(); i++) {
        f << books[i].id << ";"
          << books[i].title << ";"
          << books[i].author << ";"
          << books[i].year << endl;
    }
}

void show() {
    for (int i = 0; i < books.size(); i++) {
        cout << books[i].id << " | "
             << books[i].title << " | "
             << books[i].author << " | "
             << books[i].year << endl;
    }
}

void add() {
    Book b;

    cout << "ID: ";
    cin >> b.id;

    cout << "Pavadinimas: ";
    cin.ignore();
    getline(cin, b.title);

    cout << "Autorius: ";
    getline(cin, b.author);

    cout << "Metai: ";
    cin >> b.year;

    books.push_back(b);
    save();
}

void update() {
    int id;
    cout << "Ivesk ID: ";
    cin >> id;

    for (int i = 0; i < books.size(); i++) {
        if (books[i].id == id) {
            cout << "Naujas pavadinimas: ";
            cin.ignore();
            getline(cin, books[i].title);

            cout << "Naujas autorius: ";
            getline(cin, books[i].author);

            cout << "Metai: ";
            cin >> books[i].year;

            save();
            return;
        }
    }
    cout << "Nerasta\n";
}

void removeBook() {
    int id;
    cout << "Ivesk ID: ";
    cin >> id;

    for (int i = 0; i < books.size(); i++) {
        if (books[i].id == id) {
            books.erase(books.begin() + i);
            save();
            return;
        }
    }
}

void search() {
    string name;
    cout << "Pavadinimas: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < books.size(); i++) {
        if (books[i].title == name) {
            cout << "Rasta: " << books[i].title << endl;
        }
    }
}

void sortByYear() {
    for (int i = 0; i < books.size() - 1; i++) {
        for (int j = i + 1; j < books.size(); j++) {
            if (books[i].year > books[j].year) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    cout << "Surikiuota\n";
}

int main() {
    load();

    int c;

    do {
        cout << "\n1 Rodyti\n2 Prideti\n3 Redaguoti\n4 Trinti\n5 Paieska\n6 Rikiuoti\n0 Iseiti\n";
        cin >> c;

        if (c == 1) show();
        else if (c == 2) add();
        else if (c == 3) update();
        else if (c == 4) removeBook();
        else if (c == 5) search();
        else if (c == 6) sortByYear();

    } while (c != 0);

    save();
}