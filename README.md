# FdF
Use the library minlibx to make 3D images. Minlibx lets you check for mouse clicks, keyboard entries and draw a point in the colour you wish.

# Testing

Use a file containing numbers separated by spaces and new lines, where the numbers represent the height of each dot (z-axis). Like this:

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

In order to use the graphic library, you must initialize the minilibx pointer, which enables you to use all the minilibx functions.

The program first reads the entry from the file using get_next_line(), one line at a time, and divides every map entry into a separate string using ft_strsplit() (get_grid.c).

Next, the z coordinate is set to the explicit number on the map (ft_atoi), x and y are set to their relative map placement.

The next step is to project the 3D coordinates to 2D. X and Y are projected using the following equation:

NEW_X = ((FOCAL_DISTANCE * OLD_X) / ((z_max + 5) - Z)) + WIN_WIDTH / 4;
NEW_Y = ((FOCAL_DISTANCE * OLD_Y) / ((z_max + 5) - Z)) + WIN_HEIGHT / 4;

Finally, the grid must be constructed by connecting the pixels.

The program draws a line between pixels using Bresenham's line algorithm. It iterates one coordinate at a time and connects to the next pixel to the right, and then the one below.

mlx enters the drawing loop, and now ALL IS WELL!
