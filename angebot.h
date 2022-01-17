#ifndef ANGEBOT_H
#define ANGEBOT_H
#include <kind.h>
#include <vector>

class Angebot
{
public:
    Angebot();
    Angebot(string p_Titel, int p_Plaetze, int p_ID);

    void kindAufnehmen(Kind* kind);
    void kindAbmelden(long id);
    int freiePlaetze();
    bool istVoll() const;
    int getId() const;
    int getPlaetze() const;
    const string &getTitel() const;

private:
    int plaetze;
    string titel;
    int id;
    vector<Kind*> teilnehmer;
    bool voll;
};

#endif // ANGEBOT_H
