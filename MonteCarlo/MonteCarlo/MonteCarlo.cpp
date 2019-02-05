// MonteCarlo.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include "Dealer.h"
#include "Games.h"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	Dealer deal;

	std::cout << "Calculs en cours, veuillez patienter...\n" << std::endl;

	int won1 = 0;
	int won2 = 0;
	int won3 = 0;
	int won4 = 0;
	int won5 = 0;
	for (int i = 0; i < 1000000; i++)
	{
		if (Games::Get()->Game1() > 0)
			won1++;
		if (Games::Get()->Game2() > 0)
			won2++;
		if (Games::Get()->Game3() > 0)
			won3++;
		if (Games::Get()->Game4() > 0)
			won4++;
		if (Games::Get()->Game5() > 0)
			won5++;

		if (i % 50000 == 0)
			std::cout << "\rExecution terminee a " << i / 10000 << "%";
	}
	std::cout << "\r\n" << std::endl;
	std::cout << "Jeu 1 : " << won1 << " victoires." << std::endl << "  Probabilite de victoire : " << won1 * 1.0/ 1000000 << "%" << std::endl << "---------------------" << std::endl << std::endl;
	std::cout << "Jeu 2 : " << won2 << " victoires." << std::endl << "  Probabilite de victoire : " << won2 * 1.0 / 1000000 << "%" << std::endl << "---------------------" << std::endl << std::endl;
	std::cout << "Jeu 3 : " << won3 << " victoires." << std::endl << "  Probabilite de victoire : " << won3 * 1.0 / 1000000 << "%" << std::endl << "---------------------" << std::endl << std::endl;
	std::cout << "Jeu 4 : " << won4 << " victoires." << std::endl << "  Probabilite de victoire : " << won4 * 1.0 / 1000000 << "%" << std::endl << "---------------------" << std::endl << std::endl;
	std::cout << "Jeu 5 : " << won5 << " victoires." << std::endl << "  Probabilite de victoire : " << won5 * 1.0 / 1000000 << "%" << std::endl << "---------------------" << std::endl << std::endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
