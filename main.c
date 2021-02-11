float distanceBetween2Points(float y1,float y2,float x1,float x2,float distance,float y,float x);
float hypotenuseOfTriangle(float a,float b,float c);
float areaAndPerimeterOfCircle(float radius,float perimeter,float area);
float areaOfRectangle(float length,float width,float area);
float areaOfSquare(float length,float area);

enum calcOption{one=1,two,three,four,five,six};

int main()
{
	int num = 0;
	do
	{
	    printf("Welcome to my calculator!\nChoose option: \n1 - Calc distance between 2 points\n2 - Calc hypotenuse of triangle\n");
	    printf("3 - Calc area and perimeter of circle\n4 - Calce area of rectangle\n5 - Calc area of square\n6 - Exit\n");
	    scanf("%d", &num);
	    getchar();
		if (num > 0 && num < 6)
		{
			if (num == one)
			{
				float y1 = 0, y2 = 0, x1 = 0, x2 = 0, distance = 0, y = 0, x = 0;
				printf("distance is %.2f\n\n", distanceBetween2Points(y1,y2,x1,x2,distance,y,x));
			}
			else if (num == two)
			{
				float a = 0, b = 0, c = 0;
				printf("hypotenuse is %.2f \n\n", hypotenuseOfTriangle(a,b,c));
			}
			if (num == three)
			{
				float radius = 0, perimeter = 0,area = 0;
				printf("area is %.2f\n\n",areaAndPerimeterOfCircle(radius,perimeter,area));
			}
			else if (num == four)
			{
				float length = 0, width = 0, area = 0;
				printf("The area of the rectangle is %.2f\n\n", areaOfRectangle(length,width,area));
			}
			if (num == five)
			{
				float length = 0,area = 0;
				printf("the area of the square is %.2f\n\n", areaOfSquare(length,area));
			}
		}
		if (num == six)
		{
			printf("Goodbye!\n");
		}
		else if (num > six || num <= 0)
		{
			printf("you should choose number from 1-6!\n\n");
			
		}
		
	}
	while (num != six);
	
	return 0;
}
