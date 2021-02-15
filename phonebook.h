#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "person.h"
#include <QVector>
#include <QFile>

class Phonebook
{
public:
    Phonebook();
    void Phonebook_import(QFile& _file_persons, QFile& _file_phones);
    void Set(Phonebook _phonebook);
    Phonebook Get();
private:
    QVector<Person> phonebook;
};

#endif // PHONEBOOK_H
