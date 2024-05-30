class Punto {
public:

    Punto(float ascissa=0, float ordinata=0);
	
    float getX();
    float getY();

    void setX(float x);
    void setY(float y);

private:
	float x;
	float y;
};
