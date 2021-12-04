#ifndef DONNEESINSCRIPTION_H
#define DONNEESINSCRIPTION_H
#include "verificationdonnees.h"

class DonneesInscription : public VerificationDonnees
{
public:
    DonneesInscription();
    /*!
     * \brief récupère les informations lors de l'inscription de l'utilisateur
     * \param mail un pointeur vers une variable de type string qui correspond à l'email de l'utilisateur
     * \param mot_de_passe un pointeur vers un string qui correspond au mot de passe de l'utilisateur
     * \param nom un pointeur vers un string qui correspond au nom de l'utilisateur
     * \param prenom un pointeur vers un string qui correspond au prénom de l'utilisateur
     * \param telephone un pointeur vers un string qui correspond au numéro de téléphone de l'utilisateur
     * \param adresse un pointeur vers un string qui correspond à l'adresse de l'utilisateur
     * \author Guillaume Roux
     */
    DonneesInscription(std::string *mail,std::string *mot_de_passe,std::string *nom,std::string *prenom,std::string *telephone,std::string *adresse);
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
    std::string *nom;
    std::string *prenom;
    std::string *telephone;
    std::string *adresse;
    std::string *type;
};

#endif // DONNEESINSCRIPTION_H
