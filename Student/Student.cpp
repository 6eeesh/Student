#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string last_name;
    string first_name;
    string middle_name;
    string birth_date;
    string home_address;
    string phone_number;

public:
    Student(string last, string first, string middle, string birth, string address, string phone) {
        SetLastName(last);
        SetFirstName(first);
        SetMiddleName(middle);
        SetBirthDate(birth);
        SetHomeAddress(address);
        SetPhoneNumber(phone);
    }
    string GetLastName() const {
        return last_name;
    }

    string GetFirstName() const {
        return first_name;
    }

    string GetMiddleName() const {
        return middle_name;
    }

    string GetBirthDate() const {
        return birth_date;
    }

    string GetHomeAddress() const {
        return home_address;
    }

    string GetPhoneNumber() const {
        return phone_number;
    }

    void SetLastName(const string& last) {
        last_name = last;
    }

    void SetFirstName(const string& first) {
        first_name = first;
    }

    void SetMiddleName(const string& middle) {
        middle_name = middle;
    }

    void SetBirthDate(const string& birth) {
        birth_date = birth;
    }

    void SetHomeAddress(const string& address) {
        home_address = address;
    }

    void SetPhoneNumber(const string& phone) {
        phone_number = phone;
    }
    void ShowStudentInfo() const {
        cout << "Фамилия: " << GetLastName() << endl;
        cout << "Имя: " << GetFirstName() << endl;
        cout << "Отчество: " << GetMiddleName() << endl;
        cout << "Дата рождения: " << GetBirthDate() << endl;
        cout << "Домашний адрес: " << GetHomeAddress() << endl;
        cout << "Телефонный номер: " << GetPhoneNumber() << endl;
    }
};

int main() {
    setlocale(LC_ALL, "");
    Student student("Антон", "Иванов", "Игоревич", "01.01.2000", "ул. Добровольского, 123", "+38(097)264-18-54");

    student.ShowStudentInfo();

    student.SetLastName("Петров");
    student.SetPhoneNumber("+38(097)234-13-24");

    cout << "Измененная фамилия: " << student.GetLastName() << endl;
    cout << "Измененный телефонный номер: " << student.GetPhoneNumber() << endl;

    return 0;
}
