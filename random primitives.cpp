#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h>
using namespace std; 



	int main() {

al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY  *display = NULL;//
	display = al_create_display(500, 500);
	al_clear_to_color(al_map_rgb(0, 0, 0));

		while (1) {
			int y = rand() % 500;
			int x = rand() % 500;
			int z = 10;
	
	
		al_draw_filled_rectangle(x, y, x+z, y+z, al_map_rgb(rand()%128, rand()%10, rand()%10));

		al_flip_display();
		
	}
}