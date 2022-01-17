#ifndef FERIENPROGRAMM_H
#define FERIENPROGRAMM_H
#include<angebot.h>

class Ferienprogramm
{
public:
    Ferienprogramm();

private:
    void mainDialog();
    void kindAnmelden();
    void kindAbmelden();
    void angebotEintragen();
    void angebotLoeschen();
    void angeboteAnzeigen();
    void angebotBuchen();
    void angebotStornieren();
    void buchungenAnzeigen();

    vector<Angebot*> angebotsListe;
    vector<Kind*> kinderListe;
    long highestChildID;
    int highestOfferID;
};

#endif // FERIENPROGRAMM_H
