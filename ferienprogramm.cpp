#include "ferienprogramm.h"
#include <iostream>

Ferienprogramm::Ferienprogramm()
{
    highestChildID = 0;
    highestOfferID = 0;
    mainDialog();
}

void Ferienprogramm::mainDialog()
{   
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    bool beenden = false;

    cout << "Willkommen zum Kinderferienprogramm der Stadt Darmstadt.\nIhnen stehen folgende Funktionen zur Verfuegung:" << endl;
    cout << "1: Neues Angebot eintragen" << endl;
    cout << "2: Angebot entfernen" << endl;
    cout << "3: Alle Angebote anzeigen" << endl;
    cout << "4: Kind zum Ferienprogramm anmelden" << endl;
    cout << "5: Kind vom Ferienprogramm abmelden" << endl;
    cout << "6: Kind zu einem Angebot anmelden" << endl;
    cout << "7: Kind von einem Angebot abmelden" << endl;
    cout << "8: Buchungsliste fuer ein Angebot anzeigen" << endl;
    cout << "0: Beenden" << endl;

    cout << "Eingabe: ";
    char input = '9';
    do
    {
        cin >> input;
    }while( !(0 <= input-48 && input-48 < 9) );

    switch(input-48)
    {
    case 0:
        beenden = true;
        break;
    case 1:
        angebotEintragen();
        break;
    case 2:
        angebotLoeschen();
        break;
    case 3:
        angeboteAnzeigen();
        break;
    case 4:
        kindAnmelden();
        break;
    case 5:
        kindAbmelden();
        break;
    case 6:
        angebotBuchen();
        break;
    case 7:
        angebotStornieren();
        break;
    case 8:
        buchungenAnzeigen();
        break;
    default:
        cout << "Ein Fehler ist aufgetreten!" << endl;
        break;
    }

    if(beenden)
        return;
    else
        mainDialog();
}

void Ferienprogramm::kindAnmelden()
{
    cout << "Kind Anmelden\n" << endl;

    string inputVorname = "";
    string inputNachname = "";
    string inputGeburtsdatum = "";

    cout << "Vorname: ";
    cin >> inputVorname;
    cout << "Nachname: ";
    cin >> inputNachname;
    cout << "Geburtsdatum: ";
    cin >> inputGeburtsdatum;

    kinderListe.push_back(new Kind(inputVorname,inputNachname,inputGeburtsdatum,highestChildID++));
}

void Ferienprogramm::kindAbmelden()
{
    cout << "Kind abmelden" << endl;
}

void Ferienprogramm::angebotEintragen()
{
    cout << "Angebot Eintragen\n" << endl;

    string inputTitel = "";
    string inputPlaetze = "";

    cout << "Titel des Angebots? ";
    cin >> inputTitel;
    cout << "Anzahl der Plaetze? ";
    cin >> inputPlaetze;

    angebotsListe.push_back(new Angebot(inputTitel,stoi(inputPlaetze),highestOfferID++));
}

void Ferienprogramm::angebotLoeschen()
{
    cout << "Angebot Entfernen\n" << endl;

    string inputID = "";
    cout << "Bitte ID des zu loeschenden Angebots eingeben: ";
    cin >> inputID;

    if(angebotsListe.size() > 0){
        int requestedID = stoi(inputID);
        long i = 0;
        Angebot *current = new Angebot("test",1,-1);
        while(current->getId() != requestedID && i < angebotsListe.size())
        {
            if(angebotsListe.at(i)->getId() == requestedID)
                current = angebotsListe.at(i);
            i++;
        }

        if(current->getId() == requestedID)
        {
            angebotsListe.erase(angebotsListe.begin() + i);
        }
        else
            cout << "Das gesuchte Angebot wurde nicht gefunden!" << endl;

        current->~Angebot();
    }
    else
        cout << "Es gibt noch keine Angebote." << endl;
}

void Ferienprogramm::angeboteAnzeigen()
{
    for(const auto& angebot: angebotsListe) {
        cout << angebot->getId() << "   " << angebot->getTitel() << "   " << angebot->getPlaetze() << " Plaetze" << "   " << "Noch " << angebot->freiePlaetze() << " freie Plaetze" << endl;
    }
}

void Ferienprogramm::angebotBuchen()
{
    cout << "Kind zu Angebot anmelden" << endl;
}

void Ferienprogramm::angebotStornieren()
{
    cout << "Kind von Angebot abmelden" << endl;
}

void Ferienprogramm::buchungenAnzeigen()
{
    cout << "Buchungsliste anzeigen" << endl;
}
