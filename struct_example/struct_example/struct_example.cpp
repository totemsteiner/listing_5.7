

#include "pch.h"
#include <iostream>

int main()
{


	struct S_Spieler {

		int Team;
		char Name[30];
	};

	S_Spieler SpielerListe[4];
	int Auswahl = 0;

	for (int i = 0; i < 4; i++) {

		SpielerListe[i].Team = 0;
		std::cout << "Spieler " << i + 1 << std::endl;
		std::cout << "Name: " << std::endl;
		std::cin.get(SpielerListe[i].Name, 29);

		do {
			std::cout << "Welches Team?" << std::endl;
			std::cin >> SpielerListe[i].Team;
		} while (SpielerListe[i].Team != 1 && SpielerListe[i].Team != 2);

		std::cout << std::endl;
		std::cin.ignore();
	}

	do {
		std::cout << " Welches Team soll angezeigt werden?" << std::endl;
		std::cin >> Auswahl;

		if (Auswahl == 1 || Auswahl == 2) {
			std::cout << "Team " << Auswahl << "besteht aus: " << std::endl;
			for (int j = 0; j < 4; j++) {
				if (SpielerListe[j].Team == Auswahl) {
					std::cout << "Spielername: " << SpielerListe[j].Name;
					std::cout << std::endl;
				}
			}
			std::cout << std::endl;
		}
	} while (Auswahl != 0);
	return 0;
}




