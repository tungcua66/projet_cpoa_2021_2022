#ifndef RECHERCHEUTILISATEUR_H
#define RECHERCHEUTILISATEUR_H
#include <utilisateur.h>
#include <verificationdonnees.h>

class RechercheUtilisateur
{
public:
    RechercheUtilisateur();
    /*!
     * \brief crée un utlisateur à partir des données de connexion
     * \param  un pointeur vers les données de connexion
     * \return un utilisateur
     */
    Utilisateur rechercheUtilisateur(DonneesConnexion *connexion);

private:
    Utilisateur utilisateur;
};

#endif // RECHERCHEUTILISATEUR_H
