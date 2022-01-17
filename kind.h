#ifndef KIND_H
#define KIND_H
#include <string>
using namespace std;

class Kind
{
public:
    Kind();
    Kind(string p_Vorname, string p_Nachname, string p_Geburtsdatum, long p_ID);

    //Getter / Setter
    long getId() const;
    void setId(long newId);
    const string &getVorname() const;
    void setVorname(const string &newVorname);
    const string &getNachname() const;
    void setNachname(const string &newNachname);
    const string &getGeburtsdatum() const;
    void setGeburtsdatum(const string &newGeburtsdatum);

private:
    long id;
    string vorname, nachname, geburtsdatum;
};

#endif // KIND_H
