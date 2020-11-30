#ifndef __GRAPH_H
#define __GRAPH_H

#define SCREEN_SIZE_X 760
#define SCREEN_SIZE_Y 1280

/* all structs have a "Gf" prefix */

/* definition of color
 * B,G,R
 */
typedef struct  
{
	unsigned char B;
	unsigned char G;
	unsigned char R;
} GfColor;

typedef struct  
{
	short x;
	short y;
} GfPoint;

typedef struct GfPoint GfSize;

extern Color __global_background_color = {0};
extern Color __global_graphics_color = {0};
extern Color __global_fonts_color = {0};

GfSize GfSCREEN_SIZE = {SCREEN_SIZE_X, SCREEN_SIZE_Y}


GfSize GfGetScreenSize();

#endif
