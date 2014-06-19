class Rectangle {
	private:
		int width, height;
	public:
		void setDimensions(int x, int y);
		int area();
}

void Rectangle::setDimensions(int x, int y) {
	width = x;
	height = y;
}

int Rectangle::area() {
	return x * y;
}