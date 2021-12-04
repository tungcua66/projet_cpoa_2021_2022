#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include "string.h"
#include "donneesconnexion.h"
#include "donneesinscription.h"

class Utilisateur
{
public:
    Utilisateur();
    /*!
     * \brief crée un utilisateur dans la base de donnée à partir des données de connexion
     * \param connexion un pointeur vers les données de connexion de l'utilisateur
     * \author Guillaume Roux
     */
    Utilisateur(DonneesConnexion *connexion);
    /*!
     * \brief crée un utilisateur dans la base de donnée à partir des données d'inscription
     * \param formulaire un pointeur vers les données d'inscription de l'utilisateur
     * \author Guillaume Roux
     */
    Utilisateur(DonneesInscription *inscription);
    /*!
     * \brief retourne un pointeur sur le mail indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au mail de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getMail();
    /*!
     * \brief retourne un pointeur sur le mot de passe indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au mot de passe de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getMot_de_passe();
    /*!
     * \brief retourne un pointeur sur le nom indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au nom de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getNom();
    /*!
     * \brief retourne un pointeur sur le prenom indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au prenom de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getPrenom();
    /*!
     * \brief retourne un pointeur sur le telephone indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au telephone de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getTelepone();
    /*!
     * \brief retourne un pointeur sur l'adresse indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant à l'adresse de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getAdresse();

private:
    std::string mail;
    std::string mot_de_passe;
    std::string nom;
    std::string prenom;
    std::string telephone;
    std::string adresse;
};

#endif // UTILISATEUR_H
