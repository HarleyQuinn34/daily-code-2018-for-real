#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h>
#include <iostream>
using namespace std;
const float FPS = 60;
const int SCREEN_W = 640;
const int SCREEN_H = 480;

int main(int argc, char **argv)
{
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	float bees_x = 0;
	float bees_y = 0;
	bool redraw = true;

	al_init();
	al_init_primitives_addon();
	cout << "Flag 1" << endl;
	timer = al_create_timer(1.0 / FPS);

	display = al_create_display(SCREEN_W, SCREEN_H);

	al_set_target_bitmap(al_get_backbuffer(display));

	event_queue = al_create_event_queue();

	al_install_mouse();

	al_register_event_source(event_queue, al_get_display_event_source(display));
	cout << "flag 2.5" << endl;
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	cout << "Flag 2.6" << endl;
	al_register_event_source(event_queue, al_get_mouse_event_source());
	cout << "flag 2.7" << endl;
	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();

	al_start_timer(timer);
	cout << "Flag 2" << endl;
	while (1)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER) {
			redraw = true;
		}
		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			break;
		}
		else if (ev.type == ALLEGRO_EVENT_MOUSE_AXES ||
			ev.type == ALLEGRO_EVENT_MOUSE_ENTER_DISPLAY) {

			bees_x = ev.mouse.x;
			bees_y = ev.mouse.y;
		}
		else if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
			break;
		}
		cout << "Flag 3" << endl;
		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;

			al_clear_to_color(al_map_rgb(0, 0, 0));
			for (int i = 0; i < 10; i++) {
				al_draw_filled_circle(bees_x - 150 + rand() % 300, bees_y - 150 + rand() % 300, 7, al_map_rgb(155 + rand() % 100, 155, 0));
			}
			al_flip_display();
		}
	}
	cout << "Flag 4" << endl;

	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

	return 0;
}