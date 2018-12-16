#include "copiaExterna.h"

void crearCopiaExterna(string nombre) {
	string script = "bash crearCopiaExterna.sh " + nombre;
	system(script.c_str());
}

bool cargarCopiaExterna(string nombre) {
	string script = "bash cargarCopiaExterna.sh " + nombre;
	string cat = "cat " + nombre + ".txt > /dev/null 2>&1";

	system(script.c_str());
	if (system(cat.c_str()) == 0) return true;
	else return false;
}
