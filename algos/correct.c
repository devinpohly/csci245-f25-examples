// This function takes an integer and returns the number two greater

int two_more(int x) {
	return x + 2;
}

int two_more2(int x) {
	return x + 1 + 1;
}

int two_more3(int x) {
	x++;
	x++;
	return x;
}

int two_more4(int x) {
	if (x > 10) {
		return x + 2;
	} else {
		return x - (-2);
	}
}

int two_more5(int x) {
	if (x % 2 == 0) {
		return ((x / 2) + 1) * 2;
	} else {
		return ((x / 2) * 2) + 3;
	}
}

int two_more6(int x) {
	int i;
	for (i = 0; i < 2; i++) {
		x++;
	}
	return x;
}

// PRECONDITION: x >= 0
int two_more6(int x) {
	int y = 2;
	while (x != 0) {
		y++;
		x--;
	}
	// x == 0
	return y;
}
