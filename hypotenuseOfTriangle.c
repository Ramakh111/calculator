float hypotenuseOfTriangle(float a,float b,float c)
{
	printf("Enter 2 sides of triangle\n");
	scanf("%f %f",&a,&b);
	getchar();
	c = pow(a,2)+pow(b,2);
	c = sqrt(c);
	return c;
}
