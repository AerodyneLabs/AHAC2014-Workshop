class Rectangle {
	private:
		int width, height;
	public:
		void setDimensions(int x, int y) {
			width = x;
			height = y;
		}
		int area() {
			return x * y;
		}
}

int main() {
	Rectangle rect;
	rect.set_values(3, 4);
	printf("%d\n", rect.area());
}