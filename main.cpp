#include <bits/stdc++.h>

using namespace std;

int main() {
    std::string palabra;
    std::multimap<std::string, std::string> anagramasDiccionario;

    while (std::cin >> palabra, palabra != "#") {
        std::string letrasOrdenadasEnCadaPalabra(palabra);

        std::transform(palabra.begin(), palabra.end(), letrasOrdenadasEnCadaPalabra.begin(), ::tolower);
        std::sort(letrasOrdenadasEnCadaPalabra.begin(), letrasOrdenadasEnCadaPalabra.end());

        anagramasDiccionario.insert(std::pair<std::string, std::string>(letrasOrdenadasEnCadaPalabra, palabra));
    }

    std::vector<string> ananagramas;

    for (auto && vocablo: anagramasDiccionario)
        if (anagramasDiccionario.count(vocablo.first) == 1)
            ananagramas.push_back(vocablo.second);

    std::sort(ananagramas.begin(), ananagramas.end());

    for (auto && ananagrama: ananagramas) { std::cout << ananagrama << std::endl; }

    return 0;
}