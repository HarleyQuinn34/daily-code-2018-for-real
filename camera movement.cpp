#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5\allegro_primitives.h>
#include <iostream>
using namespace std;
const float FPS = 60;
const int SCREEN_W = 700;
const int SCREEN_H = 570;
const int BOUNCER_SIZE = 32;
enum MYKEYS {
	KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT
};

int map[15][15] = {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};
int collide(int x, int y, int map[15][15]);



int main(int argc, char **argv)
{
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_BITMAP *bouncer = NULL;
	ALLEGRO_BITMAP *background = NULL;
	float bouncer_x = SCREEN_W / 2.0 - BOUNCER_SIZE / 2.0;
	float bouncer_y = SCREEN_H / 2.0 - BOUNCER_SIZE / 2.0;
	bool key[4] = { false, false, false, false };
	bool redraw = true;
	bool doexit = false;

	int worldwidth = 1024;
	int worldhight = 700;

	int camerax = 0;
	int cameray = 0;
	

	
	float dx = 0;
	float dy = 0;
	// to keep track if the player can jump again so he doesn't perform another jump midair
	bool mayJumpAgain = false;
	bool mayJumpAgain2 = false;

	// is true if the player is on the ground
	bool isOnSolidGround = false;
	bool isOnSolidGround2 = false;

	al_init();
	al_init_image_addon();
	al_install_keyboard();
	al_init_primitives_addon();
	cout << "flag1" << endl;
	background = al_load_bitmap("forest.jpg");
	if (background == NULL)
		cout << "oops" << endl;
	cout << "flag2" << endl;
	bouncer = al_create_bitmap(32, 32);
	al_set_target_bitmap(bouncer);
	cout << "flag2.2" << endl;
	al_clear_to_color(al_map_rgb(255, 0, 255));
	cout << "flag2.3" << endl;
	al_set_target_bitmap(al_get_backbuffer(display));
	cout << "flag2.4" << endl;
	event_queue = al_create_event_queue();
	cout << "flag2.5" << endl;
	timer = al_create_timer(1.0 / FPS);
	display = al_create_display(SCREEN_W, SCREEN_H);
	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	al_register_event_source(event_queue, al_get_keyboard_event_source());

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();

	al_start_timer(timer);
	cout << "flag3" << endl;
	while (!doexit)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER) {
			if (key[KEY_UP] && mayJumpAgain == true && isOnSolidGround == true) {
				dy = -15;
				mayJumpAgain = false;
			}
			else
				mayJumpAgain = true;

			if (key[KEY_LEFT] && bouncer_x >= 4.0) {
				bouncer_x -= 4.0;
			}

			if (key[KEY_RIGHT] && bouncer_x <= worldwidth - BOUNCER_SIZE - 4.0) {
				bouncer_x += 4.0;
			}

			camerax = bouncer_x - SCREEN_W / 2;

			if (camerax < 0)
				camerax = 0;
			if (cameray < 0)
				cameray = 0;
			if (camerax > worldwidth - SCREEN_W)
				camerax = worldwidth - SCREEN_W;
			if (cameray > worldwidth - SCREEN_H)
				cameray = worldwidth - SCREEN_H;
			redraw = true;
		}
		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			break;
		}
		else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (ev.keyboard.keycode) {
			case ALLEGRO_KEY_UP:
				key[KEY_UP] = true;
				break;

			case ALLEGRO_KEY_DOWN:
				key[KEY_DOWN] = true;
				break;

			case ALLEGRO_KEY_LEFT:
				key[KEY_LEFT] = true;
				break;

			case ALLEGRO_KEY_RIGHT:
				key[KEY_RIGHT] = true;
				break;
			}
		}
		else if (ev.type == ALLEGRO_EVENT_KEY_UP) {
			switch (ev.keyboard.keycode) {
			case ALLEGRO_KEY_UP:
				key[KEY_UP] = false;
				break;

			case ALLEGRO_KEY_DOWN:
				key[KEY_DOWN] = false;
				break;

			case ALLEGRO_KEY_LEFT:
				key[KEY_LEFT] = false;
				break;

			case ALLEGRO_KEY_RIGHT:
				key[KEY_RIGHT] = false;
				break;

			case ALLEGRO_KEY_ESCAPE:
				doexit = true;
				break;
			}
		}


		if (collide(bouncer_x, bouncer_y, map) == 1) {
			isOnSolidGround = true;
			dy = 0;
		}


		if (bouncer_y + 32 > SCREEN_H) {
			bouncer_y = SCREEN_H - 32;
			isOnSolidGround = true;
			dy = 0;
		}
		else
			isOnSolidGround = false;

		if (isOnSolidGround == false)
			dy++;

		if (dy > 8)
			dy = 8;

		if (bouncer_x > worldwidth - 30)
			bouncer_x = worldwidth - 30;
		if (bouncer_x < 0)
			bouncer_x = 0;
		if (bouncer_y < 0)
			bouncer_y = 0;

		bouncer_x += dx; //adding the component velocities to the actual positions
		bouncer_y += dy;
		cout << "dy is " << dy << " , square_y is " << bouncer_y << endl;

		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;

			al_clear_to_color(al_map_rgb(0, 0, 0));

			al_draw_bitmap_region(background, camerax, cameray, SCREEN_W, SCREEN_H, 0, 0, 0);

			al_draw_bitmap(bouncer, bouncer_x - camerax, bouncer_y, 0);

			for (int i = 0; i < 15; i++) {
				for (int j = 0; j < 15; j++) {

					if (map[i][j] == 1)//platforms
						al_draw_filled_rectangle(j * 50, i * 50, j * 50 + 50, i * 50 + 50, al_map_rgb(80, 220, 120));

				}
			}

			al_flip_display();
		}
	}

	al_destroy_bitmap(bouncer);
	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

	return 0;
}
int collide(int x, int y, int map[15][15]) {
	//cout << "checkign map slot " << (x + 30 + 5 + offset) / 30 << " , " << (y + 30) / 30 << endl;



	//check for platform collision
	if (
		//check bottom right corner
		(map[(y + 30 + 2) / 50][(x + 30) / 50] == 1)

		//check bottom left corner
		|| (map[(y + 30 + 5) / 50][(x) / 50] == 1)) {
		cout << "platform collision.";
		return 1;
	}
	else
		return 0;


}