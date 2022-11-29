#ifndef MESH_H
#define MESH_H

#define NODECOUNT 122
#define TRICOUNT 223

#define NODE(a, b) (long)(nodes[a][b])
#define EDGE(a, b) (faces[a][b])

const long nodes[NODECOUNT][3] = {
  {(long)(4.876*PRES), (long)(-12.0*PRES), (long)(-4.124*PRES)},
  {(long)(19.876*PRES), (long)(-10.688*PRES), (long)(3.562*PRES)},
  {(long)(9.0*PRES), (long)(-16.876*PRES), (long)(0.376*PRES)},
  {(long)(2.626*PRES), (long)(-18.75*PRES), (long)(-3.188*PRES)},
  {(long)(-9.0*PRES), (long)(-16.876*PRES), (long)(0.376*PRES)},
  {(long)(-19.876*PRES), (long)(-10.688*PRES), (long)(3.562*PRES)},
  {(long)(-5.25*PRES), (long)(-10.312*PRES), (long)(-6.75*PRES)},
  {(long)(-2.626*PRES), (long)(-18.75*PRES), (long)(-3.188*PRES)},
  {(long)(11.062*PRES), (long)(-16.876*PRES), (long)(2.812*PRES)},
  {(long)(-11.062*PRES), (long)(-16.876*PRES), (long)(2.812*PRES)},
  {(long)(20.626*PRES), (long)(-14.25*PRES), (long)(10.312*PRES)},
  {(long)(7.688*PRES), (long)(-17.626*PRES), (long)(18.188*PRES)},
  {(long)(4.876*PRES), (long)(-20.438*PRES), (long)(14.812*PRES)},
  {(long)(16.5*PRES), (long)(-17.438*PRES), (long)(9.938*PRES)},
  {(long)(-4.876*PRES), (long)(-20.438*PRES), (long)(14.812*PRES)},
  {(long)(-7.688*PRES), (long)(-17.626*PRES), (long)(18.188*PRES)},
  {(long)(-20.626*PRES), (long)(-14.25*PRES), (long)(10.312*PRES)},
  {(long)(-16.5*PRES), (long)(-17.438*PRES), (long)(9.938*PRES)},
  {(long)(3.75*PRES), (long)(-18.188*PRES), (long)(17.25*PRES)},
  {(long)(-3.75*PRES), (long)(-18.188*PRES), (long)(17.25*PRES)},
  {(long)(0.0*PRES), (long)(-19.688*PRES), (long)(8.438*PRES)},
  {(long)(0.0*PRES), (long)(-14.438*PRES), (long)(9.75*PRES)},
  {(long)(3.938*PRES), (long)(-18.562*PRES), (long)(9.938*PRES)},
  {(long)(-3.938*PRES), (long)(-18.562*PRES), (long)(9.938*PRES)},
  {(long)(8.062*PRES), (long)(-18.188*PRES), (long)(10.312*PRES)},
  {(long)(-8.062*PRES), (long)(-18.188*PRES), (long)(10.312*PRES)},
  {(long)(13.876*PRES), (long)(-16.312*PRES), (long)(4.688*PRES)},
  {(long)(-13.876*PRES), (long)(-16.312*PRES), (long)(4.688*PRES)},
  {(long)(4.876*PRES), (long)(-17.812*PRES), (long)(2.25*PRES)},
  {(long)(-4.876*PRES), (long)(-17.812*PRES), (long)(2.25*PRES)},
  {(long)(3.188*PRES), (long)(-18.188*PRES), (long)(5.062*PRES)},
  {(long)(-3.188*PRES), (long)(-18.188*PRES), (long)(5.062*PRES)},
  {(long)(2.25*PRES), (long)(-17.062*PRES), (long)(-19.688*PRES)},
  {(long)(-2.25*PRES), (long)(-17.062*PRES), (long)(-19.688*PRES)},
  {(long)(-8.812*PRES), (long)(-12.75*PRES), (long)(-21.376*PRES)},
  {(long)(8.812*PRES), (long)(-12.75*PRES), (long)(-21.376*PRES)},
  {(long)(0.0*PRES), (long)(-17.812*PRES), (long)(-7.874*PRES)},
  {(long)(0.0*PRES), (long)(-17.25*PRES), (long)(-18.562*PRES)},
  {(long)(0.0*PRES), (long)(-19.876*PRES), (long)(-4.876*PRES)},
  {(long)(4.312*PRES), (long)(-17.062*PRES), (long)(-7.5*PRES)},
  {(long)(-4.312*PRES), (long)(-17.062*PRES), (long)(-7.5*PRES)},
  {(long)(4.5*PRES), (long)(-18.562*PRES), (long)(3.75*PRES)},
  {(long)(4.124*PRES), (long)(-18.75*PRES), (long)(5.25*PRES)},
  {(long)(-4.5*PRES), (long)(-18.562*PRES), (long)(3.75*PRES)},
  {(long)(-4.124*PRES), (long)(-18.75*PRES), (long)(5.25*PRES)},
  {(long)(5.062*PRES), (long)(-18.75*PRES), (long)(9.0*PRES)},
  {(long)(-4.312*PRES), (long)(-18.75*PRES), (long)(7.126*PRES)},
  {(long)(-5.062*PRES), (long)(-18.75*PRES), (long)(9.0*PRES)},
  {(long)(5.438*PRES), (long)(-18.75*PRES), (long)(2.626*PRES)},
  {(long)(-5.438*PRES), (long)(-18.75*PRES), (long)(2.626*PRES)},
  {(long)(9.0*PRES), (long)(-17.812*PRES), (long)(1.5*PRES)},
  {(long)(-9.0*PRES), (long)(-17.812*PRES), (long)(1.5*PRES)},
  {(long)(14.062*PRES), (long)(-16.5*PRES), (long)(6.938*PRES)},
  {(long)(-13.5*PRES), (long)(-16.688*PRES), (long)(8.438*PRES)},
  {(long)(12.044*PRES), (long)(-17.396*PRES), (long)(9.376*PRES)},
  {(long)(-11.424*PRES), (long)(-17.152*PRES), (long)(9.376*PRES)},
  {(long)(2.626*PRES), (long)(-14.624*PRES), (long)(11.062*PRES)},
  {(long)(-2.626*PRES), (long)(-14.624*PRES), (long)(11.062*PRES)},
  {(long)(4.688*PRES), (long)(-14.812*PRES), (long)(15.938*PRES)},
  {(long)(-4.688*PRES), (long)(-14.812*PRES), (long)(15.938*PRES)},
  {(long)(7.876*PRES), (long)(-9.562*PRES), (long)(-21.938*PRES)},
  {(long)(0.0*PRES), (long)(-4.5*PRES), (long)(-11.062*PRES)},
  {(long)(5.062*PRES), (long)(-3.938*PRES), (long)(-9.376*PRES)},
  {(long)(-5.062*PRES), (long)(-3.938*PRES), (long)(-9.376*PRES)},
  {(long)(-7.876*PRES), (long)(-9.562*PRES), (long)(-21.938*PRES)},
  {(long)(7.126*PRES), (long)(6.374*PRES), (long)(-7.5*PRES)},
  {(long)(0.0*PRES), (long)(16.126*PRES), (long)(-4.688*PRES)},
  {(long)(0.0*PRES), (long)(13.126*PRES), (long)(21.562*PRES)},
  {(long)(-10.874*PRES), (long)(-5.626*PRES), (long)(20.438*PRES)},
  {(long)(10.874*PRES), (long)(-5.626*PRES), (long)(20.438*PRES)},
  {(long)(0.0*PRES), (long)(20.438*PRES), (long)(13.5*PRES)},
  {(long)(19.126*PRES), (long)(8.626*PRES), (long)(12.938*PRES)},
  {(long)(18.562*PRES), (long)(10.5*PRES), (long)(6.374*PRES)},
  {(long)(-19.126*PRES), (long)(8.626*PRES), (long)(12.938*PRES)},
  {(long)(-18.562*PRES), (long)(10.5*PRES), (long)(6.374*PRES)},
  {(long)(19.688*PRES), (long)(4.874*PRES), (long)(7.876*PRES)},
  {(long)(-19.688*PRES), (long)(4.874*PRES), (long)(7.876*PRES)},
  {(long)(14.25*PRES), (long)(3.938*PRES), (long)(-3.0*PRES)},
  {(long)(-14.25*PRES), (long)(3.938*PRES), (long)(-3.0*PRES)},
  {(long)(-15.376*PRES), (long)(10.312*PRES), (long)(-0.188*PRES)},
  {(long)(11.626*PRES), (long)(13.126*PRES), (long)(0.562*PRES)},
  {(long)(28.5*PRES), (long)(9.376*PRES), (long)(10.5*PRES)},
  {(long)(29.626*PRES), (long)(10.126*PRES), (long)(12.188*PRES)},
  {(long)(21.376*PRES), (long)(5.624*PRES), (long)(9.75*PRES)},
  {(long)(-24.562*PRES), (long)(7.5*PRES), (long)(11.438*PRES)},
  {(long)(-29.626*PRES), (long)(10.126*PRES), (long)(12.188*PRES)},
  {(long)(-28.5*PRES), (long)(9.376*PRES), (long)(10.5*PRES)},
  {(long)(30.376*PRES), (long)(9.75*PRES), (long)(6.938*PRES)},
  {(long)(32.438*PRES), (long)(10.126*PRES), (long)(7.688*PRES)},
  {(long)(-30.376*PRES), (long)(9.75*PRES), (long)(6.938*PRES)},
  {(long)(-32.438*PRES), (long)(10.126*PRES), (long)(7.688*PRES)},
  {(long)(29.062*PRES), (long)(9.75*PRES), (long)(1.876*PRES)},
  {(long)(30.75*PRES), (long)(10.312*PRES), (long)(1.312*PRES)},
  {(long)(-29.062*PRES), (long)(9.75*PRES), (long)(1.876*PRES)},
  {(long)(-30.75*PRES), (long)(10.312*PRES), (long)(1.312*PRES)},
  {(long)(24.938*PRES), (long)(7.874*PRES), (long)(-2.438*PRES)},
  {(long)(-24.938*PRES), (long)(7.874*PRES), (long)(-2.438*PRES)},
  {(long)(19.876*PRES), (long)(3.188*PRES), (long)(-1.688*PRES)},
  {(long)(18.562*PRES), (long)(3.0*PRES), (long)(-3.376*PRES)},
  {(long)(-18.562*PRES), (long)(3.0*PRES), (long)(-3.376*PRES)},
  {(long)(-19.688*PRES), (long)(6.562*PRES), (long)(2.062*PRES)},
  {(long)(25.126*PRES), (long)(10.126*PRES), (long)(0.0*PRES)},
  {(long)(-28.5*PRES), (long)(10.688*PRES), (long)(2.25*PRES)},
  {(long)(28.5*PRES), (long)(10.688*PRES), (long)(2.25*PRES)},
  {(long)(29.626*PRES), (long)(10.688*PRES), (long)(6.0*PRES)},
  {(long)(-29.626*PRES), (long)(10.688*PRES), (long)(6.0*PRES)},
  {(long)(28.126*PRES), (long)(10.5*PRES), (long)(8.626*PRES)},
  {(long)(-28.126*PRES), (long)(10.5*PRES), (long)(8.626*PRES)},
  {(long)(24.938*PRES), (long)(9.938*PRES), (long)(7.876*PRES)},
  {(long)(17.25*PRES), (long)(4.124*PRES), (long)(-0.562*PRES)},
  {(long)(-17.25*PRES), (long)(4.124*PRES), (long)(-0.562*PRES)},
  {(long)(20.25*PRES), (long)(6.562*PRES), (long)(0.376*PRES)},
  {(long)(18.938*PRES), (long)(7.874*PRES), (long)(-3.0*PRES)},
  {(long)(24.938*PRES), (long)(11.812*PRES), (long)(-2.062*PRES)},
  {(long)(-18.938*PRES), (long)(7.874*PRES), (long)(-3.0*PRES)},
  {(long)(-24.938*PRES), (long)(11.812*PRES), (long)(-2.062*PRES)},
  {(long)(31.5*PRES), (long)(12.75*PRES), (long)(1.312*PRES)},
  {(long)(-31.5*PRES), (long)(12.75*PRES), (long)(1.312*PRES)},
  {(long)(32.812*PRES), (long)(12.0*PRES), (long)(7.126*PRES)},
  {(long)(-32.812*PRES), (long)(12.0*PRES), (long)(7.126*PRES)},
  {(long)(30.0*PRES), (long)(13.126*PRES), (long)(11.25*PRES)},
  {(long)(-30.0*PRES), (long)(13.126*PRES), (long)(11.25*PRES)},
};

const unsigned char faces[TRICOUNT][3] = {
  {0, 1, 2},
  {2, 3, 0},
  {4, 5, 6},
  {6, 7, 4},
  {8, 2, 1},
  {5, 4, 9},
  {10, 11, 12},
  {12, 13, 10},
  {14, 15, 16},
  {16, 17, 14},
  {11, 18, 12},
  {14, 19, 15},
  {20, 12, 18},
  {19, 14, 20},
  {18, 21, 20},
  {20, 21, 19},
  {12, 20, 22},
  {23, 20, 14},
  {22, 24, 12},
  {14, 25, 23},
  {12, 24, 13},
  {17, 25, 14},
  {26, 1, 10},
  {10, 13, 26},
  {16, 5, 27},
  {27, 17, 16},
  {1, 26, 8},
  {9, 27, 5},
  {28, 3, 2},
  {4, 7, 29},
  {20, 3, 28},
  {29, 7, 20},
  {20, 30, 22},
  {23, 31, 20},
  {20, 28, 30},
  {31, 29, 20},
  {32, 33, 34},
  {34, 35, 32},
  {32, 36, 37},
  {37, 36, 33},
  {36, 3, 38},
  {38, 7, 36},
  {3, 20, 38},
  {38, 20, 7},
  {3, 36, 39},
  {40, 36, 7},
  {32, 39, 36},
  {36, 40, 33},
  {39, 32, 35},
  {34, 33, 40},
  {35, 0, 39},
  {0, 3, 39},
  {40, 7, 6},
  {6, 34, 40},
  {33, 32, 37},
  {30, 28, 41},
  {41, 42, 30},
  {43, 29, 31},
  {31, 44, 43},
  {22, 30, 42},
  {42, 45, 22},
  {44, 31, 23},
  {23, 46, 44},
  {23, 47, 46},
  {48, 41, 28},
  {29, 43, 49},
  {28, 2, 50},
  {50, 48, 28},
  {51, 4, 29},
  {29, 49, 51},
  {8, 50, 2},
  {4, 51, 9},
  {26, 13, 52},
  {53, 17, 27},
  {54, 52, 13},
  {17, 53, 55},
  {24, 54, 13},
  {17, 55, 25},
  {24, 22, 45},
  {47, 23, 25},
  {21, 18, 56},
  {57, 19, 21},
  {58, 56, 18},
  {19, 57, 59},
  {18, 11, 58},
  {59, 15, 19},
  {10, 58, 11},
  {15, 59, 16},
  {60, 61, 62},
  {63, 61, 60},
  {35, 34, 60},
  {34, 64, 60},
  {63, 60, 64},
  {0, 60, 62},
  {63, 64, 6},
  {60, 0, 35},
  {34, 6, 64},
  {65, 61, 66},
  {66, 61, 63},
  {61, 65, 62},
  {67, 68, 69},
  {70, 67, 71},
  {71, 72, 70},
  {73, 67, 70},
  {70, 74, 73},
  {67, 69, 71},
  {73, 68, 67},
  {10, 71, 69},
  {68, 73, 16},
  {21, 10, 69},
  {68, 16, 21},
  {21, 69, 68},
  {58, 10, 56},
  {57, 16, 59},
  {10, 21, 56},
  {57, 21, 16},
  {1, 75, 71},
  {71, 10, 1},
  {73, 76, 5},
  {5, 16, 73},
  {71, 75, 72},
  {74, 76, 73},
  {65, 1, 62},
  {65, 77, 1},
  {5, 78, 63},
  {0, 62, 1},
  {5, 63, 6},
  {66, 79, 74},
  {70, 72, 80},
  {80, 66, 70},
  {66, 74, 70},
  {77, 65, 80},
  {66, 63, 78},
  {78, 79, 66},
  {66, 80, 65},
  {81, 82, 83},
  {84, 85, 86},
  {82, 81, 87},
  {87, 88, 82},
  {89, 86, 85},
  {85, 90, 89},
  {88, 87, 91},
  {91, 92, 88},
  {93, 89, 90},
  {90, 94, 93},
  {92, 91, 95},
  {96, 93, 94},
  {97, 98, 95},
  {96, 99, 100},
  {95, 101, 97},
  {100, 102, 96},
  {91, 103, 101},
  {101, 95, 91},
  {93, 96, 102},
  {87, 104, 103},
  {103, 91, 87},
  {102, 105, 89},
  {89, 93, 102},
  {81, 106, 104},
  {104, 87, 81},
  {105, 107, 86},
  {86, 89, 105},
  {83, 108, 106},
  {106, 81, 83},
  {107, 100, 84},
  {84, 86, 107},
  {1, 77, 109},
  {110, 78, 5},
  {77, 98, 97},
  {97, 109, 77},
  {100, 99, 78},
  {78, 110, 100},
  {111, 109, 97},
  {75, 109, 111},
  {100, 110, 76},
  {83, 75, 111},
  {111, 108, 83},
  {100, 76, 84},
  {1, 109, 75},
  {76, 110, 5},
  {111, 97, 101},
  {111, 101, 103},
  {100, 105, 102},
  {111, 103, 104},
  {111, 104, 106},
  {105, 100, 107},
  {108, 111, 106},
  {95, 98, 112},
  {112, 113, 95},
  {114, 99, 96},
  {96, 115, 114},
  {92, 95, 113},
  {113, 116, 92},
  {115, 96, 94},
  {94, 117, 115},
  {88, 92, 116},
  {116, 118, 88},
  {117, 94, 90},
  {90, 119, 117},
  {82, 88, 118},
  {118, 120, 82},
  {119, 90, 85},
  {85, 121, 119},
  {83, 82, 120},
  {120, 72, 83},
  {121, 85, 84},
  {84, 74, 121},
  {72, 113, 112},
  {114, 115, 74},
  {72, 120, 116},
  {116, 113, 72},
  {117, 121, 74},
  {74, 115, 117},
  {120, 118, 116},
  {117, 119, 121},
  {72, 75, 83},
  {84, 76, 74},
  {112, 80, 72},
  {74, 79, 114},
  {77, 80, 112},
  {112, 98, 77},
  {114, 79, 78},
  {78, 99, 114},
};

#endif // MESH_H
