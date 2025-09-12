#include <stdio.h>
#include <string.h>

union vehicle_id {
	char vin[20];
	long reg_number;
	double tail;
};

enum vehicle_type {
	PLANE,
	CAR,
	BOAT,
	MAX_VEHICLE_TYPE
};

struct vehicle {
	int weight;
	enum vehicle_type type;
	union vehicle_id identifier;
	char color[32];
};

void print_vehicle(struct vehicle v) {
	printf("Weight: %d\n", v.weight);
	printf("type: %d\n", v.type);
	switch (v.type) {
		case PLANE:
			printf("ID: %0.6f\n", v.identifier.tail);
			break;
		case CAR:
			printf("ID: %s\n", v.identifier.vin);
			break;
		case BOAT:
			printf("ID: %ld\n", v.identifier.reg_number);
			break;
	}
	printf("Color: %s\n", v.color);
}

int main(int argc, char **argv) {
	for (enum vehicle_type e = 0; e < MAX_VEHICLE_TYPE; e++) {
	}
	struct vehicle some_car;
	some_car.weight = 4000;
	some_car.type = CAR;
	strcpy(some_car.identifier.vin, "1be89l23beo9873");
	strcpy(some_car.color, "blue");

	print_vehicle(some_car);

	struct vehicle some_plane;
	some_plane.weight = 14000;
	some_plane.type = PLANE;
	some_plane.identifier.tail = 1039.22523;
	strcpy(some_plane.color, "silver");

	print_vehicle(some_plane);

	return 0;
}
