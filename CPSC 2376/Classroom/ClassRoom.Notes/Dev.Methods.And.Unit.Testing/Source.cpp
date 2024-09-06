

struct Position
{
	int x{ 0 };
	int y{ 0 };

};

Position addPositions(Position p1, Position p2)
{
	return { p1.x + p2.x, p1.y + p2.y };
}

int main()
{
	Position p1{ 1,2 };
	Position p2{ 2,3 };

}