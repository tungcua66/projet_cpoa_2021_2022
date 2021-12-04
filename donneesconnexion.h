#ifndef DONNEESCONNEXION_H
#define DONNEESCONNEXION_H
#include "verificationdonnees.h"

class DonneesConnexion : public VerificationDonnees
{
public:
    /*!
     * \brief récupère les informations lors de la connexion de l'utilisateur
     * \param email un pointeur vers une variable de type string qui correspond au mail de l'utilisateur
     * \param motDePasse un pointeur vers une variable de type string qui correspond au mot de passe de l'utilisateur
     */
    DonneesConnexion(std::string *mail, std::string *mot_de_passe);
};

#endif // DONNEESCONNEXION_H
