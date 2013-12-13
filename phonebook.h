#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "List.cpp"
#include "main.h"

class PhoneBook
{
public:
    static Phonebook* instance();
    void init(List<contact>);
private:
    static Phonebook* mInstance;
    List<contact> mContacts;
    PhoneBook();
};

#endif // PHONEBOOK_H
