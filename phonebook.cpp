#include "phonebook.h"
using namespace PhoneBook;

PhoneBook* mInstance = 0;

PhoneBook* instance()
{
    if(!mInstance)
        mInstance = new PhoneBook();
    return mInstance;
}

void init(List<contact> contacts)
{
    if(mContacts)
        delete mContacts;
    mContacts = contacts;
}
