#include <bits/stdc++.h>

int main() {
    std::string palabra; std::multimap<std::string, std::string> diccionarioDeAnagramas;

    while (std::cin >> palabra, palabra != "#") {
        std::string letrasEnUnaPalabra(palabra);

        std::transform(palabra.begin(), palabra.end(), letrasEnUnaPalabra.begin(), ::tolower);
        std::sort(letrasEnUnaPalabra.begin(), letrasEnUnaPalabra.end());

        diccionarioDeAnagramas.insert(std::pair<std::string, std::string>(letrasEnUnaPalabra, palabra));
    }
    std::vector<std::string> ananagramas;

    for (auto && vocablo: diccionarioDeAnagramas)
        if (diccionarioDeAnagramas.count(vocablo.first) == 1)
            ananagramas.push_back(vocablo.second);

    std::sort(ananagramas.begin(), ananagramas.end());

    for (auto && ananagrama: ananagramas) { std::cout << ananagrama << std::endl; }

    return 0;
}
