#ifndef __GRAPH_H
#define __GRAPH_H

#include "config.h"
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

#endif
