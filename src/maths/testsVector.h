/*************************************************************************/
/* This file is part of FreeDance.                                       */
/*                                                                       */
/*  Tron is free software: you can redistribute it and/or modify         */
/*  it under the terms of the GNU General Public License as published by */
/*  the Free Software Foundation, either version 3 of the License, or    */
/*  (at your option) any later version.                                  */
/*                                                                       */
/*  Tron is distributed in the hope that it will be useful,              */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of       */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        */
/*  GNU General Public License for more details.                         */
/*                                                                       */
/*  You should have received a copy of the GNU General Public License    */
/*  along with Tron.  If not, see <http://www.gnu.org/licenses/>.        */
/*************************************************************************/

#ifndef TESTSVECTOR_H
#define TESTSVECTOR_H

#ifdef TESTS

#define FILE_DATA "../data/tests.data"

#include "testsuite.h"
#include "functions.h"

namespace maths {

class TestsVector: public QTestSuite
{
     Q_OBJECT
public:

    // charge les donnée à partir de FILE_DATA
    TestsVector();

private slots:

    // teste l'obtention des composantes
    void getComp();

    // teste l'obtention des bornes
    void getMax();

    // teste de changer la norme d'un vecteur à 1
    void norme_vers_1();

    // teste l'opérateur ==
    void comparaison_equivalence_de_deux_vecteurs();

    // teste l'opérateur !=
    void comparaison_difference_de_deux_vecteurs();

    /*** operator / ***/

    // teste la division du vecteur par un scalaire
    void division_du_vecteur_par_un_scalaire();

    /*** operator * ***/

    // teste le produit d'un vecteur par un scalaire dans les deux sens V*S et S*V
    void produit_d_un_vecteur_par_un_scalaire();

    // teste le produit scalaire entre deux vecteurs
    void produit_scalaire();

    /*** opérateur + ***/

    // teste la somme de deux vecteurs
    void somme_de_deux_vecteurs();

    /*** opérateur - ***/

    // teste la soustraction de deux vecteurs
    void soustraction_de_deux_vecteurs();

    /*** teste le produit vectoriel, opérateur ^ ***/
    void produit_vectoriel();

    /*** opérateur += ***/

    // teste la somme de deux vecteurs
    void somme_dudit_vecteur_avec_un_autre_vecteur();

    /*** opérateur -= ***/

    // teste la soustratcion de deux vecteurs
    void soustraction_dudit_vecteur_avec_un_autre_vecteur();

    /*** opérateur *= ***/

    // teste le produit du vecteur avec un scalaire
    void produit_dudit_vecteur_avec_un_scalaire();

    /*** operator /= ***/

    // teste la division du vecteur par un scalaire
    void division_dudit_vecteur_par_un_scalaire();

    /*** functions ***/

    // teste l'intersection de deux vecteurs
    void intersection_de_deux_vecteurs();

    // teste la normale d'un vecteur
    void normale_d_un_vecteur();

    // teste la distance entre deux vecteurs
    void distance_entre_deux_vecteurs();

    // teste le produit de deux matrices 3x3
    void produit_de_deux_matrices_3x3_3x1();

    // teste l'angle entre deux vecteurs
    void angle_entre_deux_vecteurs();

    // teste la projection sur le plan XY
    void projection_du_vecteur_sur_XY();

    // teste la rotation d'un vecteur tous les PI/2 sur le plan XY
    void quickRotation();

    // teste la rotation d'un vecteur par raport à un angle
    void angleRotation();

};

}

#endif // TESTS

#endif // TESTS_H
