/*#include<math.h>
#include<time.h>
#include<iostream>
#include<GL/freeglut.h>  

using namespace std;
float t;
int t_speed, LorR, r_speed;

// ��������İ˸����㱣�浽һ����������   
static const float vertex_list[][3] =
{
	-0.05f, -0.05f, -0.05f,
	0.05f, -0.05f, -0.05f,
	-0.05f, 0.05f, -0.05f,
	0.05f, 0.05f, -0.05f,
	-0.05f, -0.05f, 0.05f,
	0.05f, -0.05f, 0.05f,
	-0.05f, 0.05f, 0.05f,
	0.05f, 0.05f, 0.05f,
};

// ��Ҫʹ�õĶ������ű��浽һ����������   
static const GLint index_list[][4] =
{
	{ 0, 1, 5, 4 },
	{ 2, 6, 7, 3 },
	{ 0, 4, 6, 2 },
	{ 1, 5, 7, 3 },
	{ 0, 2, 3, 1 },
	{ 4, 6, 7, 5 }
};

//����ÿ�������ɫ
static const float color_list[][3] = {
	{1.0f, 0.0f, 0.0f},
	{0.0f, 1.0f, 0.0f},
	{0.0f, 0.0f, 1.0f},
	{1.0f, 1.0f, 0.0f},
	{1.0f, 0.0f, 1.0f},
	{0.0f, 1.0f, 1.0f},
};
//��ʼ��
void init() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//2.2 Draw a cube(1)
	//glDisable(GL_DEPTH_TEST);
	//2.2 Draw a cube(2)
	glEnable(GL_DEPTH_TEST);
}

// ����������  
void DrawCube(void)
{
	int i, j;
	glBegin(GL_QUADS);
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			glColor3f(color_list[i][0], color_list[i][1], color_list[i][2]);
			glVertex3fv(vertex_list[index_list[i][j]]);
		}
	}
	glEnd();
}

static float rot = 0;
static int times = 0;
static int range = 0;
void renderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	//2.3 Translations
	//if (LorR) {
	//	glTranslatef((range % (40 * speed)) / (20.0*speed) - 1.0, 0, 0); // ƽ�� 
	//}
	//else {
	//	glTranslatef(1.0 - (range % (40 * speed)) / (20.0*speed), 0, 0);
	//}
	//glScalef(2, 1, 1);    // ����
	//times++;
	times++;
	if (times > 100)
	{
		times = 0;
	}
	if (times % 100 == 0)
	{
		rot += 0.3;
		range += 1;
	}
	//2.4 Rotations
	glRotatef(rot * r_speed, 0, 1, 0);
	glRotatef(rot * r_speed, 1, 0, 0);

	//2.5 Scaling
	t = clock()/1000.0;
	glScalef(sin(t), sin(t), sin(t));

	DrawCube();
	glPopMatrix();
	glutSwapBuffers();
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	//cout << "�������������ƶ��ٶȣ�1~10���ٶ�1���,�������ƶ�����0����1���ң�" << endl;
	//cin >> t_speed >> LorR;
	//if (t_speed < 1 || t_speed > 10) {
	//	cout << "�������" << endl;
	//	return;
	//}
	cout << "��������������ת�ٶȣ�1~5���ٶ�1����" << endl;
	cin >> r_speed;
	if (r_speed < 1 || r_speed>5) {
		cout << "�������" << endl;
		return;
	}
	cout << t << endl;
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("CUBE");
	init();
	glutDisplayFunc(renderScene);
	glutIdleFunc(renderScene);
	glutMainLoop();
}*/
#include<math.h>
#include<time.h>
#include<iostream>
#include<GL/freeglut.h>  

using namespace std;

float t;
// ��������1�İ˸����㱣�浽һ����������   
static const float vertex_list1[][3] =
{
	-0.05f, -0.05f, -0.05f,
	0.05f, -0.05f, -0.05f,
	-0.05f, 0.05f, -0.05f,
	0.05f, 0.05f, -0.05f,
	-0.05f, -0.05f, 0.05f,
	0.05f, -0.05f, 0.05f,
	-0.05f, 0.05f, 0.05f,
	0.05f, 0.05f, 0.05f,
};
//��������2�İ˸����㱣�浽һ����������
static const float vertex_list2[][3] =
{
	0.75f, -0.05f, -0.05f,
	0.85f, -0.05f, -0.05f,
	0.75f, 0.05f, -0.05f,
	0.85f, 0.05f, -0.05f,
	0.75f, -0.05f, 0.05f,
	0.85f, -0.05f, 0.05f,
	0.75f, 0.05f, 0.05f,
	0.85f, 0.05f, 0.05f,
};


// ��Ҫʹ�õĶ������ű��浽һ����������   
static const GLint index_list[][4] =
{
	{ 0, 1, 5, 4 },
	{ 2, 6, 7, 3 },
	{ 0, 4, 6, 2 },
	{ 1, 5, 7, 3 },
	{ 0, 2, 3, 1 },
	{ 4, 6, 7, 5 }
};

//����ÿ�������ɫ
static const float color_list[][3] = {
	{ 1.0f, 0.0f, 0.0f },
	{ 0.0f, 1.0f, 0.0f },
	{ 0.0f, 0.0f, 1.0f },
	{ 1.0f, 1.0f, 0.0f },
	{ 1.0f, 0.0f, 1.0f },
	{ 0.0f, 1.0f, 1.0f },
};
//��ʼ��
void init() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
}

// ����������  
void DrawCube1(void)
{
	glBegin(GL_QUADS);
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			glColor3f(color_list[i][0], color_list[i][1], color_list[i][2]);
			glVertex3fv(vertex_list1[index_list[i][j]]);
		}
	}
	glEnd();
	//glFlush();
}

void DrawCube2(void)
{
	glBegin(GL_QUADS);
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			glColor3f(color_list[i][0], color_list[i][1], color_list[i][2]);
			glVertex3fv(vertex_list2[index_list[i][j]]);
		}
	}
	glEnd();
	//glFlush();
}

static float rot = 0;
static int times = 0;
static int range = 0;
void renderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	times++;
	if (times > 100)
	{
		times = 0;
	}
	if (times % 100 == 0)
	{
		rot += 0.5;
		range += 1;
	}

	glRotatef(rot, 0, 1, 0);
	t = clock() / 10000.0;
	glScalef(t, t, t);
	DrawCube1();
	glPopMatrix();
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glRotatef(rot, 0, 1, 1);
	glRotatef(rot, 1, 0, 0);
	DrawCube2();
	glPopMatrix();
	glutSwapBuffers();
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("CUBE");
	init();
	glutDisplayFunc(renderScene);
	glutIdleFunc(renderScene);
	glutMainLoop();
}