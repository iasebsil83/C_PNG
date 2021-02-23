// ---------------- IMPORTATIONS ----------------

//standard
#include <stdlib.h>
#include <stdio.h>



//graphics
#include "PNG.h"












/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~ Prog [V.V.V] ~~~~~~~~~~~~~~~~~~~~~~~~~~~
    Demonstration program for PNG.c/.h.

    Blablabla about the project.

    DD/MM/YYYY > [V.V.V] :
    - Added something.
    - Added something else.

    DD/MM/YYYY > [V.V.V] :
    - Added something that wasn't before.
    - Fixed a bug.
    - Added something else.
    - Added something else again.

    BUGS : Active bugs in last version
    NOTES : Notes

    Contact : ...
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */












// ---------------- EXECUTION ----------------

//main
int main(){

	//read image
	PNG* extImage = png_read("extImage.png");

	//free image
	free(extImage->data);
	free(extImage);

	return EXIT_SUCCESS;
}
