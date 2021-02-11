float distanceBetween2Points(float y1,float y2,float x1,float x2,float distance,float y,float x)
{
	printf("Enter point1 coordinates : \n");
	scanf("%f %f", &x1 , &y1);
	getchar();
	printf("Enter point2 coordinates : \n");
	scanf("%f %f", &x2,&y2);
	getchar();
	x = x1 - x2;
	y = y1 - y2;
	distance = pow(x,2)+pow(y,2);
	distance = sqrt(distance);
	return distance;
}
