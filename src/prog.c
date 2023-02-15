// ---------------- IMPORTATIONS ----------------

//standard
#include <stdlib.h>
#include <stdio.h>




//graphics
#include "../lib/PNG.h"








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
	printf("Getting examples/extImage.png...\n");
	PNG* extImage = png_read("examples/extImage.png");

	//write a copy
	printf("Copying into \"examples/copy.png\".\n");
	if( png_write(extImage, "examples/copy.png") ){
		printf("Successfully created \"examples/copy.png\" from \"examples/extImage.png\".\n");
	}else{
		printf("Failed to create \"examples/copy.png\" from \"examples/extImage.png\".\n");
	}

	//free image
	free(extImage->data);
	free(extImage);

	return EXIT_SUCCESS;
}
