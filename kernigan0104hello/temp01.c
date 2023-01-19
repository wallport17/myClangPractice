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
		fahrenheit = 5 * (cels-32) / 9;
	        printf("%d\t%d\n", cels, fahrenheit);
	        cels = cels + step;
	}
}
