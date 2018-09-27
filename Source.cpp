#include<allegro5\allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <iostream>
using namespace std;
enum noise {b,d, D, h};


int main() {
	cout << "flag 1 " << endl;
	if (!al_init()) {
		fprintf(stderr, "failed to initialize allegro!\n");
		return -1;
	}

	if (!al_install_audio()) {
		fprintf(stderr, "failed to initialize audio!\n");
		return -1;
	}

	if (!al_init_acodec_addon()) {
		fprintf(stderr, "failed to initialize audio codecs!\n");
		return -1;
	}

	if (!al_reserve_samples(4)) {
		fprintf(stderr, "failed to reserve samples!\n");
		return -1;
	}
ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_SAMPLE *bit = NULL;
ALLEGRO_SAMPLE *dog = NULL;

ALLEGRO_SAMPLE *donk = NULL;
ALLEGRO_SAMPLE *hor = NULL;

display = al_create_display(640, 480);

int noise1;
	char input;
while (1) {
	cout << "Which song do you want?" << endl;
	cout << "(d) for the doggo song, (D) for donkey lulaby, (h) for a horse with passion, annd (b) for a 8bit jam." << endl;
	cin >> input;

	if (input == 'd')
		noise1 = d;

	else if (input == 'b')
		noise1 = b;

	else if (input == 'D')
		noise1 = D;

	else if (input == 'h')
		noise1 = h;
	else
		cout << "Invalid. Try again" << endl;
	
	
		switch (noise1) {
		case b:
			bit = al_load_sample("8bit.wav");
			al_play_sample(bit, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
			break;
		case d:
			dog = al_load_sample("doggo.wav");
			al_play_sample(dog, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
			break;
		case D:
			donk = al_load_sample("donkey.wav");
			al_play_sample(donk, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
			break;
		case h:
			hor = al_load_sample("borse.wav");
			al_play_sample(hor, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
			break;



		}


		


	}
}