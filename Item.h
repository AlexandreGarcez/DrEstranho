#include <string>

using namespace std;

class Item
{
public:
    Item();
    Item(int, const string &);
    void encantar();
    void setNome(const string &);
    void setForca(int);
    string getNome();
    int getForca();
private:
    string nome;
    int forca;
    int durabilidade;
};
