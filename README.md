# cg_homework4
# 代码注释中是2.2-2.5
Homework 4: Let’s Go 3D
2.2 Draw a cube

Let’s draw a cube in 3D world, and place it to (0,0,0).

Disable deep test by calling function glDisable(GL_DEPTH_TEST), draw a cube with 0.1 length of size.
Enable deep test by calling function glEnable(GL_DEPTH_TEST) and draw the cube again. Remember to call glClear(GL_DEPTH_BUFFER_BIT) in your main cycle. Write down the differences and what the mechanism of deep test is in the report.
Write down your main algorithm and post your results in your report.
Hints: You may draw the cube by using primitives GL_QUADS, that makes you should draw 6 quads in total. You can also draw the cube by using GL_TRIANGLES, that makes you should draw 12 triangles in total. You should also draw 6 faces of the cube in different colors.
2.3 Translations

Implement translation of the cube.

The cube should be placed at (0,0,0) in the world.
The cube should translate back and forward along x-axis.
The cube should translate in a steady speed, but you can customize your speed.
Write down your main algorithm and post your results in your report.
2.4 Rotations

Implement rotation of the cube.

The cube should be placed at (0,0,0) in the world.
The cube should rotate around y=x axis in the XoY plane.
The cube should rotate in a steady speed, but you can customize your speed.
Enable and disable the deep test, what is the difference now?
Write down your main algorithm and post your results in your report.
2.5 Scaling

Implement scaling of the cube.

The cube should be placed at (0,0,0) in the world.
Scale the cube in a ratio which is equal to sin(t), where t represents time.
You may want to include <math.h> and <time.h> in your code.
Write down your main algorithm and post your results in your report.
2.6 Bonus: Combination

Let’s do something funny~ Now we want to combine 3 kinds of transformations together. In this time, we need 2 cubes.

The first cube should be placed in (0,0,0), each time becomes bigger than it was. So the cube may ends up with a unlimited size! HaHa!
The first cube should also rotate along y-axis in a steady speed.
The second cube should be place in (0.8,0,0), then it would start to rotate around y=x axis in XoY plane.
While the second cube is rotating itself, it should also ‘rotate’ around the first cube. To be precise, the second cube should translate around the first cube in the XoY plane.
Write down your main algorithm and post your results in your report.
P.S. Have you figure out what it looks like? Yes, the 2 cubes are moving like the Sun and the Earth. The sun is growing larger each year, just like the first cube. The earth is moving around the sun, while rotating itself, just like the second cube.
