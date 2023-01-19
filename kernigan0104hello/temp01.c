main()
{
	printf("Cels\t");
	printf("Fahr\n");

        int cels, fahrenheit;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	cels = lower;
	while (cels <= upper) {
		fahrenheit = (9/5) * (cels+32);
	        printf("%d\t%d\n", cels, fahrenheit);
	        cels = cels + step;
	}
}
