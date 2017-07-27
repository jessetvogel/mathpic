#ifndef _palette_h
#define _palette_h

rgb rainbow[] =
{
    rgb(255, 0, 0),
    rgb(255, 127, 0),
    rgb(255, 255, 0),
    rgb(0, 255, 0),
    rgb(0, 255, 255),
    rgb(0, 0, 255),
    rgb(127, 0, 255)
    
};

int rainbow_size = 7;

rgb blue[] =
{
    rgb(1, 3, 64),
    rgb(14, 30, 140),
    rgb(0, 3, 199),
    rgb(21, 16, 240),
    rgb(20, 65, 247)
};

int blue_size = 5;

rgb red[] =
{
    rgb(204, 30, 0),
    rgb(176, 38, 29),
    rgb(156, 8, 34),
    rgb(125, 30, 43),
    rgb(94, 33, 48)
};

int red_size = 5;

rgb brown[] =
{
    rgb(115, 55, 2),
    rgb(115, 65, 36),
    rgb(217, 180, 167),
    rgb(191, 104, 96),
    rgb(166, 23, 23)
};

int brown_size = 5;

rgb rainbow_gray[] =
{
    rgb(12, 50, 115),
    rgb(53, 113, 115),
    rgb(94, 168, 103),
    rgb(191, 175, 114),
    rgb(166, 115, 85)
};

int rainbow_gray_size = 5;

rgb black_white[] =
{
    rgb(255, 255, 255),
    rgb(0, 0, 0)
};

int black_white_size = 2;

rgb fire[] =
{
    rgb(10, 71, 188),
    rgb(255, 255, 255),
    rgb(255, 204, 35),
    rgb(0, 0, 0),
};

int fire_size = 4;

rgb * palette = rainbow_gray;
int palette_size = rainbow_gray_size;

#endif
