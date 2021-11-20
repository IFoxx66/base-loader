#include <iostream>
#include <Windows.h>

int main () {
	int kk2;
	std::string passw;
	std::string user;
	system("color 2");
	std::cout << "  FC";
	Sleep(5000);
	system("cls");
	inic:
	system("color 0");
	std::cout << "  User: ";
	std::cin >> user;
	std::cout << "\n  Password: ";
	std::cin >> passw;
	if (passw == "1234", user == "Foxx") {
	ts2:
	system("cls");
	std::cout << "[1] Fivem Cheat! \n";
	std::cout << "[2] Csgo Cheat!  \n";
	std::cout << "[3] Foxx ? \n";
	std::cout << "[4] Sair \n";
	std::cout << user << ": ";
	std::cin >> kk2;
	if (kk2 == 1) {
		system("cls");
		std::cout << "Futuramente !";
		Sleep(3000);
		goto ts2;
	}
	else if (kk2 == 2) {
		system("cls");
		std::cout << "Futuramente !";
		Sleep(3000);
		goto ts2;
	}
	else if (kk2 == 3) {
		system("cls");
		std::cout << "Futuramente !";
		Sleep(3000);
		goto ts2;
	}
	else if (kk2 == 4) {
		goto kk23;
	}
	else {
		system("cls");
		std::cout << "Opc Errada! ";
		Sleep(1500);
		goto ts2;
	}

	}
	else {
	system("cls");
	std::cout << "Senha Errada!!!";
	Sleep(4000);
	system("cls");
	goto inic;
	}
	kk23:
	return 0;
}