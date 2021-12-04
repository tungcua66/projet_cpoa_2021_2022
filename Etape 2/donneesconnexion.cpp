#include "donneesconnexion.h"

DonneesConnexion::DonneesConnexion(std::string *mail, std::string *mot_de_passe)
{
    VerificationDonnees(mail, mot_de_passe);
}
