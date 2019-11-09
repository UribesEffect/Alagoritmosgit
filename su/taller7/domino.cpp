#include "domino.hpp"

#include <iostream>

using namespace std;



/* domino::domino(){

    ldots = 0;

    rdots = 0;

} */

/* domino::~domino(){

    delete[] *ldots;



}//destructor */



domino::domino(int left, int right){

    ldots = left;

    rdots = right;

}//constructor parametrizado





void domino::set_left_dots(int left){

    ldots = left;

}//cambia los puntos del lado izquierdo

void domino::set_right_dots(int right){

    rdots = right;

}//cambia los puntos del lado derecho





int domino::get_left_dots(){

    return ldots;

}//retorna los puntos del lado izquierdo

int domino::get_right_dots(){

    return rdots;

}//retorna los puntos del lado derecho





string domino::to_string(){

    string left = ::to_string(ldots);

    string right = ::to_string(rdots);

    string final = "[" + left + "|" + right + "]";

    return final;

}//representa el domino como un string



ostream& operator<<(ostream& os, domino& Ficha){

    os << "[";

    os << Ficha.get_left_dots();

    os << "|";

    os << Ficha.get_right_dots();

    os << "]";

    return os;

}//operador que imprime la representacion del domino



bool domino::operator==(const domino SecondDomino){

    if(ldots == SecondDomino.rdots){

        return true;

    }

    else{

        return false;

    }

}// evalua la igualdad

bool domino::operator!=(const domino SecondDomino){

    if(ldots != SecondDomino.ldots || rdots != SecondDomino.rdots){

        return true;

    }

    else{

        return false;

    }

}//evalua difrencia

bool domino::operator<(const domino SecondDomino){

    if(rdots < SecondDomino.ldots){

        return true;

    }else{

        return false;

    }

}//evalua si es menor

bool domino::operator<=(const domino SecondDomino){

    if(rdots <= SecondDomino.ldots){

        return true;

    }else{

        return false;

    }

}// si es menor o igual

bool domino::operator>(const domino SecondDomino){

    if(rdots > SecondDomino.ldots){

        return true;

    }else{

        return false;

    }

}//si es mayor

bool domino::operator>=(const domino SecondDomino){

    if(rdots >= SecondDomino.ldots){

        return true;

    }else{

        return false;

    }

}//si es mayor o igual



domino domino::flip_them(){

    domino newDomino;

    newDomino.ldots = rdots;

    newDomino.rdots = ldots;

    return newDomino;

}//invierte los valores de ldots y rdots
