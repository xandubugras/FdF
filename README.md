# FdF
Use the library minlibx to make 3D images. Minlibx lets you check for mouse clicks, keyboard entries and draw a point in the colour you wish.

# Testing

Use a file containing numbers separated by spaces, where the numbers represent the height (z-axis). Like this:

0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0 10 10  0  0 10 10  0  0  0 10 10 10 10 10  0  0  0
0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
0  0 10 10 10 10 10 10  0  0  0  0 10 10 10 10  0  0  0
0  0  0 10 10 10 10 10  0  0  0 10 10  0  0  0  0  0  0
0  0  0  0  0  0 10 10  0  0  0 10 10  0  0  0  0  0  0
0  0  0  0  0  0 10 10  0  0  0 10 10 10 10 10 10  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0


make && ./fdf name_of_your_file

# How it works

In order to be able to use the graphic library and create anything, you must initialize the minilibx pointer, which will be the one enables you to use all the functions.

The program first reads the entry from the file using get_next_line(), one line at a time, and divides every number into a separate string using ft_strsplit() (get_grid.c).

After that, sets z to the number inputted, and X and Y to an initial value.

The next step is to make the input coordinates into 3d. I do that by changing X and Y using the equation:

NEW_X = ((FOCAL_DISTANCE * OLD_X) / ((z_max + 5) - Z)) + WIN_WIDTH / 4;
NEW_Y = ((FOCAL_DISTANCE * OLD_Y) / ((z_max + 5) - Z)) + WIN_HEIGHT / 4;

After these new coordinates are set, all that is left is to connect the dots.

The program connects the dots using Bresenham's line algorithm. It iterates one coordinate at a time and connects to the next coordinate to the left, and below.

mlx enters the drawing loop, and now ALL IS WELL!
