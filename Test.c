#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "loc.h"
#include "queue.h"
#include "test.h"


void testMap() {
        t_map map;
#if defined(_WIN32) || defined(_WIN64)
        map = createMapFromFile("..\\maps\\training.map");
#else
        map = createMapFromFile("../maps/example1.map");
#endif

        printf("Map created with dimensions %d x %d\n", map.y_max, map.x_max);
        for (int i = 0; i < map.y_max; i++)
        {
            for (int j = 0; j < map.x_max; j++)
            {
                printf("%d ", map.soils[i][j]);
            }
            printf("\n");
        }
        // printf the costs, aligned left 5 digits
        for (int i = 0; i < map.y_max; i++)
        {
            for (int j = 0; j < map.x_max; j++)
            {
                printf("%-5d ", map.costs[i][j]);
            }
            printf("\n");
        }
        displayMap(map);
}
void testMove() {

}