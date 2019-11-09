#include "domino.hpp"
#include <vector>

vector<domino> Fichas(){

    vector<domino> todasFichas;

    for(int i = 0; i <= 6; i++){

        for(int j = 0; j <= 6; j++){
            domino Ficha(i,j);
            todasFichas.push_back(Ficha);

        }

    }

    for(int i = 0; i < todasFichas.size(); i++){
        for(int j = 0; j < todasFichas.size(); j++){

            //cout << "ficha i" << todasFichas[i]<< ' ';

            //cout << "ficha j" << todasFichas[j] << endl;

            if(todasFichas[i].get_right_dots() == todasFichas[j].get_left_dots() && todasFichas[i].get_left_dots() == todasFichas[j].get_right_dots()){

                //cout << "si" << endl;

                if(todasFichas[i].get_right_dots() != todasFichas[i].get_left_dots()){

                    todasFichas.erase(todasFichas.begin()+j);

                }

            }

        }

    }

    cout << endl << endl << endl;

    for(int i = 0; i < todasFichas.size(); i++){

        cout << todasFichas[i] << endl;

    }

    cout << todasFichas.size() << endl;

    return todasFichas;

}



int main(){

    Fichas();

    return 0;

}
