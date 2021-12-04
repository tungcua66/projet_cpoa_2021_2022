#ifndef CREATIONUTILISATEUR_H
#define CREATIONUTILISATEUR_H
#include <utilisateur.h>
#include <verificationdonnees.h>

class CreationUtilisateur
{
public:
    CreationUtilisateur();
    /*!
     * \brief crée un utlisateur à partir des données de connexion
     * \param  un pointeur vers les données de connexion
     * \return un utilisateur
     * \author Guillaume Roux
     */
    Utilisateur creationUtilisateur(DonneesInscription *inscription);

private:
    Utilisateur utilisateur;
};

#endif // CREATIONUTILISATEUR_H
