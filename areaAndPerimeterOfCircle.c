float areaAndPerimeterOfCircle(float radius,float perimeter,float area)
{
	const float pi = 3.14;
	printf("Enter circle radius: \n");
	scanf("%f", &radius);
	getchar();
	perimeter = 2 * pi * radius;
	area = pi * radius * radius;
	printf("perimeter is %.2f\n",perimeter);
	return area;
}
