float areaOfRectangle(float length,float width,float area)
{
	printf("Enter rectangle length: \n");
	scanf("%f", &length);
	getchar();
	printf("Enter rectangle width: \n");
	scanf("%f", &width);
	getchar();
	area = length*width;
	return area;
}
