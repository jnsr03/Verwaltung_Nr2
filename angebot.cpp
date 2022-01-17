#include "angebot.h"

Angebot::Angebot()
{

}

Angebot::Angebot(string p_Titel, int p_Plaetze, int p_ID)
{
    titel = p_Titel;
    plaetze = p_Plaetze;
    id = p_ID;
}

int Angebot::freiePlaetze()
{
    return plaetze-teilnehmer.size();
}

bool Angebot::istVoll() const
{
    return plaetze-teilnehmer.size() <= 0;
}

int Angebot::getId() const
{
    return id;
}

int Angebot::getPlaetze() const
{
    return plaetze;
}

const string &Angebot::getTitel() const
{
    return titel;
}
