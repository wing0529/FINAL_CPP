class Rectangle {
private:
	int length;
	int width;
public:
	Rectangle() {
		width = 30;
		length = 40;
	}
	~Rectangle() {}
	void setLength(int length) { this->length = length; }
	int getLength() { return this->length; }
	void setWidth(int width) { this->width = width; }
	int getWidth() { return width; }
};
