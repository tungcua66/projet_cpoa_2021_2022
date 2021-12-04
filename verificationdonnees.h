#ifndef VERIFICATIONDONNEES_H
#define VERIFICATIONDONNEES_H
#include <string>

class VerificationDonnees
{
public:
    VerificationDonnees();
    /*!
     * \brief rÃƒÂ©cupÃƒÂ¨re les informations de l'utilisateur
     * \param mail pointeur vers une variable de type string qui correspond au mail de l'utilisateur
     * \param mot_de_passe pointeur vers une varibale de type string qui correspond au mot de passe de l'utilisateur
     */
    VerificationDonnees(std::string *mail,std::string *mot_de_passe);
    /*!
     * \brief renvoie un pointeur sur le mail indiquÃƒÂ© par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au mail de l'utilisateur
     */
    std::string getMail();
    /*!
     * \brief renvoie un pointeur sur le mot de passe indiquÃƒÂ© par l'utilisateur
     * \return un pointeur vers une variable de type string correspondant au mot de passe de l'utilisateur
     */
    std::string getMot_de_passe();
    /*!
     * \brief vÃƒÂ©rifie la bonne ÃƒÂ©criture des informations de l'utilisateur
     * \return true si les variables sont bien ÃƒÂ©crite
     * false sinon
     */
    bool verificationEcriture();

private:
    std::string *mail;
    std::string *mot_de_passe;
};

#endif // VERIFICATIONDONNEES_H
