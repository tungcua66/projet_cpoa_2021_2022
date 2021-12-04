#ifndef VERIFICATIONDONNEES_H
#define VERIFICATIONDONNEES_H
#include <string>

class VerificationDonnees
{
public:
    VerificationDonnees();
    /*!
     * \brief récupère les informations de l'utilisateur
     * \param mail pointeur vers une variable de type string qui correspond au mail de l'utilisateur
     * \param mot_de_passe pointeur vers une varibale de type string qui correspond au mot de passe de l'utilisateur
     * \author Guillaume Roux
     */
    VerificationDonnees(std::string *mail,std::string *mot_de_passe);
    /*!
     * \brief renvoie un pointeur sur le mail indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au mail de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getMail();
    /*!
     * \brief renvoie un pointeur sur le mot de passe indiqué par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au mot de passe de l'utilisateur
     * \author Guillaume Roux
     */
    std::string getMot_de_passe();
    /*!
     * \brief vérifie la bonne écriture des informations de l'utilisateur
     * \return true si les variables sont bien écrite
     * false sinon
     * \author Guillaume Roux
     */
    bool verificationEcriture();

private:
    std::string *mail;
    std::string *mot_de_passe;
};

#endif // VERIFICATIONDONNEES_H
