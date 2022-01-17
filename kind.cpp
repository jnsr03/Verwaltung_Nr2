#include "kind.h"

Kind::Kind()
{

}

Kind::Kind(string p_Vorname, string p_Nachname, string p_Geburtsdatum, long p_ID)
{
    vorname = p_Vorname;
    nachname = p_Nachname;
    geburtsdatum = p_Geburtsdatum;
    id = p_ID;
}

long Kind::getId() const
{
    return id;
}

void Kind::setId(long newId)
{
    id = newId;
}

const string &Kind::getVorname() const
{
    return vorname;
}

void Kind::setVorname(const string &newVorname)
{
    vorname = newVorname;
}

const string &Kind::getNachname() const
{
    return nachname;
}

void Kind::setNachname(const string &newNachname)
{
    nachname = newNachname;
}

const string &Kind::getGeburtsdatum() const
{
    return geburtsdatum;
}

void Kind::setGeburtsdatum(const string &newGeburtsdatum)
{
    geburtsdatum = newGeburtsdatum;
}
