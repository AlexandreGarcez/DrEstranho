#include "Item.h"

Item::Item() {
    this->forca = 0;
    this->nome = "Sem nome";
}

Item::Item(int forca, const string &nome) {
    if (forca > 0)
        this->forca = forca;

    if (nome.length() > 0)
        this->nome = nome;
    else
        this->nome = "Sem nome";
}

void Item::setNome(const string &nome) {
    if (nome.length() > 0)
        this->nome = nome;
}

void Item::setForca(int forca) {
    if (forca > 0)
        this->forca = forca;
}

string Item::getNome() {
    return this->nome;
}

int Item::getForca() {
    return this->forca;
}













