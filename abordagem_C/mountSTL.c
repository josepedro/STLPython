/*Unit of measure is millimeter*/

#include<stdlib.h>
#include<stdio.h>

void begin_draw(FILE *arquivo){
	fprintf(arquivo,"solid cube\n\t");
}

void end_draw(FILE *arquivo){
	fprintf(arquivo,"endsolid");
}

void draw_rectangle(FILE *arquivo, float point_x, float point_y, float point_z, float height){
    height = 2*height;
	float position_a[] = {(-5.000000)+point_x,(-5.000000)+point_y,(5.000000*height)+point_z};
	float position_b[] =
{(-5.000000)+point_x,(5.000000)+point_y,(5.000000*height)+point_z};
	float position_c[] = {(-5.000000)+point_x,(5.000000)+point_y,(-5.000000)+point_z};
	float position_d[] = {(-5.000000)+point_x,(-5.000000)+point_y,(-5.000000)+point_z};
	float position_e[] =
{(5.000000)+point_x,(-5.000000)+point_y,(5.000000*height)+point_z};
	float position_f[] =
{(5.000000)+point_x,(5.000000)+point_y,(5.000000*height)+point_z};
	float position_g[] = {(5.000000)+point_x,(5.000000)+point_y,(-5.000000)+point_z};
	float position_h[] = {(5.000000)+point_x,(-5.000000)+point_y,(-5.000000)+point_z};

	//Base face YZ
	fprintf(arquivo,"facet normal -1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal -1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	//d
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Front of face XY
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	//e
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Front of face YZ
	fprintf(arquivo,"facet normal 1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Base face XY
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 -1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 -1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Front of face XZ
	fprintf(arquivo,"facet normal 0.000000e+000 1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Base face XZ
	fprintf(arquivo,"facet normal 0.000000e+000 -1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 -1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n");
}

void draw_cube(FILE *arquivo, float point_x, float point_y, float point_z, float height){
	float position_a[] = {(-0.500000*height)+point_x,(-0.500000*height)+point_y,(0.500000*height)+point_z};
	float position_b[] = {(-0.500000*height)+point_x,(0.500000*height)+point_y,(0.500000*height)+point_z};
	float position_c[] = {(-0.500000*height)+point_x,(0.500000*height)+point_y,(-0.500000*height)+point_z};
	float position_d[] = {(-0.500000*height)+point_x,(-0.500000*height)+point_y,(-0.500000*height)+point_z};
	float position_e[] = {(0.500000*height)+point_x,(-0.500000*height)+point_y,(0.500000*height)+point_z};
	float position_f[] = {(0.500000*height)+point_x,(0.500000*height)+point_y,(0.500000*height)+point_z};
	float position_g[] = {(0.500000*height)+point_x,(0.500000*height)+point_y,(-0.500000*height)+point_z};
	float position_h[] = {(0.500000*height)+point_x,(-0.500000*height)+point_y,(-0.500000*height)+point_z};

	//Base face YZ
	fprintf(arquivo,"facet normal -1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal -1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	//d
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Front of face XY
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	//e
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Front of face YZ
	fprintf(arquivo,"facet normal 1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 1.000000e+000 0.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Base face XY
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 -1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 0.000000e+000 -1.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Front of face XZ
	fprintf(arquivo,"facet normal 0.000000e+000 1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_f[0],position_f[1],position_f[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	//b
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_b[0],position_b[1],position_b[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_g[0],position_g[1],position_g[2]);
	//c
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_c[0],position_c[1],position_c[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	//Base face XZ
	fprintf(arquivo,"facet normal 0.000000e+000 -1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_h[0],position_h[1],position_h[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n\t");
	
	fprintf(arquivo,"facet normal 0.000000e+000 -1.000000e+000 0.000000e+000\n\t\t");
	fprintf(arquivo,"outer loop\n\t\t");
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_d[0],position_d[1],position_d[2]);
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_e[0],position_e[1],position_e[2]);
	//a
	fprintf(arquivo,"vertex %.6fe-002 %.6fe-002 %.6fe-002\n\t\t",position_a[0],position_a[1],position_a[2]);
	fprintf(arquivo,"endloop\n\t");
	fprintf(arquivo,"endfacet\n");

}

void recursive_draw(FILE *arquivo, float height, float pass){
	if(height >= 0){
		draw_cube(arquivo,pass,pass,pass,height);
		draw_cube(arquivo,pass,pass,-pass,height);
		draw_cube(arquivo,pass,-pass,pass,height);
		draw_cube(arquivo,pass,-pass,-pass,height);
		draw_cube(arquivo,-pass,pass,pass,height);
		draw_cube(arquivo,-pass,pass,-pass,height);
		draw_cube(arquivo,-pass,-pass,pass,height);
		draw_cube(arquivo,-pass,-pass,-pass,height);
		recursive_draw(arquivo,height - 0.2, pass + 1);
	}
	else{

	}

}

int main(){

	
	FILE *arquivo;
	arquivo = fopen("cube.stl","w");
	
	begin_draw(arquivo);
    //if puts height = 1, will draw a cube with 0.1 x 0.1 x 0.1
	//draw_rectangle(arquivo,0,0,0,200);
    
    //drawing a cube 2 cm x 2 cm x 2 cm with rectangle 
    int iteratorY;
    int iteratorX;
    int drawY = 0;
    int drawX = 0;
    for(iteratorY = 0; iteratorY < 200; iteratorY++){
        for(iteratorX = 0; iteratorX < 200; iteratorX++){
            draw_rectangle(arquivo, drawX, drawY, 0, 200);
            drawX = drawX + 10.000000;
        }
        drawX = 0;
       drawY = drawY + 10.000000;
    } 


	//draw_cube(arquivo,0.5,0.5,0,0.5);
	//draw_cube(arquivo,-0.5,0.5,0,0.5);
	//draw_cube(arquivo,-0.5,-0.5,0,0.5);
	//draw_cube(arquivo,0.5,-0.5,0,0.5);
	//draw_cube(arquivo,2,0,0,0.5);
	//recursive_draw(arquivo,10, 1);
	end_draw(arquivo);
	
	fclose(arquivo);
	return 0;
}
