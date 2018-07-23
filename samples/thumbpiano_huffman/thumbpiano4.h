// generated by Mozzi/extras/python/audio2huff.py 

#ifndef THUMB4_H_
#define THUMB4_H_

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif 

#include "mozzi_pgmspace.h"
 

#define THUMB4_SAMPLERATE 16384
#define THUMB4_SAMPLE_BITS 8
CONSTTABLE_STORAGE(in16_t) THUMB4_HUFFMAN[214] = {
211,199,196,157,0,2,154,49,34,22,0,-7,19,13,7,4,0,-43,0,65,0,30,4,0,27,0,16,4,0,20,0,-10,10,0,-9,7,0,-16,4,0,
24,0,13,13,7,0,9,4,0,-13,0,-14,4,0,10,0,8,103,22,19,16,13,0,-24,10,4,0,64,0,54,4,0,41,0,39,0,-11,0,12,0,
-6,79,43,0,-8,40,22,10,4,0,37,0,34,4,0,33,0,32,10,4,0,-20,0,-25,4,0,-27,0,-30,16,10,4,0,-32,0,-34,4,0,-38,0,
-44,4,0,26,0,21,34,22,10,4,0,19,0,17,4,0,-17,0,-19,10,4,0,-21,0,-22,4,0,-26,0,-28,10,7,4,0,-29,0,-31,0,-18,0,
-15,37,7,4,0,5,0,-5,0,-4,28,0,4,25,13,10,4,0,23,0,18,4,0,15,0,14,0,6,10,7,4,0,11,0,-23,0,-12,0,7,0,
-1,10,0,1,7,0,-2,4,0,3,0,-3,0,0
};
uint32_t const THUMB4_SOUNDDATA_BITS = 21350L;
CONSTTABLE_STORAGE(uint8_t) THUMB4_SOUNDDATA[] = {
106,85,151,137,66,138,20,192,23,31,24,44,51,197,0,72,36,37,130,226,28,22,10,48,73,227,5,97,232,31,143,67,67,68,14,35,128,3,241,197,
193,16,20,36,29,80,144,224,20,15,96,194,4,224,224,79,13,20,60,130,4,128,48,193,224,28,28,195,188,35,7,184,122,5,132,4,3,16,241,31,
11,4,3,67,162,16,12,1,248,195,208,237,10,25,33,139,131,196,41,10,131,200,63,14,200,118,5,3,195,33,20,19,130,194,70,8,4,64,59,99,
208,176,129,131,160,24,80,184,163,128,121,135,200,125,16,60,194,34,25,28,2,40,59,227,200,64,63,15,103,132,72,100,50,17,130,112,224,18,10,135,
161,33,232,122,144,176,100,49,8,193,135,18,19,5,66,67,174,31,33,48,71,18,225,200,64,92,114,33,88,125,15,128,247,30,66,184,100,114,28,71,
17,152,36,30,97,128,38,34,16,119,7,72,64,64,39,5,195,172,16,10,225,64,158,17,131,35,128,69,8,15,161,162,72,64,56,56,4,225,2,71,
49,196,32,21,10,20,10,194,176,160,81,10,60,4,89,9,130,96,208,168,38,30,188,113,31,18,62,25,14,6,0,152,42,30,67,212,72,92,114,10,
12,34,19,15,33,33,67,16,224,70,30,0,193,145,204,62,7,33,131,71,32,5,2,120,70,31,9,7,225,220,57,143,35,225,211,8,151,138,56,133,
130,67,200,248,240,193,6,8,145,1,80,72,40,131,0,98,8,125,12,71,64,17,195,168,18,29,14,6,1,33,145,66,176,144,0,19,5,66,4,5,
97,32,5,0,67,192,124,87,34,61,120,100,114,16,22,8,176,200,93,224,29,112,174,30,3,33,146,48,89,131,128,31,21,225,144,200,112,122,225,2,
143,69,26,18,8,14,188,122,26,68,134,33,172,16,8,229,193,161,33,68,4,3,246,34,67,80,232,104,145,3,236,16,120,80,124,84,62,60,72,248,
93,200,46,17,97,72,248,240,224,216,89,206,12,142,97,65,132,48,64,52,36,37,56,44,22,115,10,26,21,5,99,208,196,72,206,47,20,52,38,15,
199,161,39,250,20,42,30,132,25,226,140,20,31,29,25,196,86,40,64,248,79,28,194,129,96,176,93,204,132,14,161,1,60,115,31,29,16,6,121,40,
97,209,158,37,239,9,6,33,164,72,148,67,67,67,66,56,76,21,132,4,134,138,0,60,52,32,36,32,18,21,1,56,116,12,93,140,20,30,7,196,
14,143,142,160,5,194,129,112,184,88,124,3,8,64,24,64,206,0,135,94,40,162,69,21,165,158,36,56,17,194,1,192,144,113,236,40,104,162,134,132,
131,130,69,125,23,155,196,198,24,3,161,113,215,0,103,1,195,225,112,176,92,44,22,29,115,156,4,225,241,241,132,12,235,51,61,138,103,176,104,64,
35,135,4,137,18,43,222,40,104,64,56,16,8,6,134,138,221,139,60,86,3,156,58,62,32,96,42,24,124,124,40,20,11,5,220,128,146,29,11,133,
199,68,58,246,123,20,0,73,18,16,14,9,18,37,228,188,81,33,161,192,224,151,138,250,97,94,241,68,181,92,50,40,9,33,3,162,6,16,58,231,
56,96,56,97,209,209,135,68,13,185,43,156,178,246,123,61,137,120,145,68,134,132,4,179,222,204,241,34,137,18,43,222,198,147,18,88,128,97,14,24,
96,36,0,56,64,248,232,232,129,0,72,0,24,97,3,163,3,36,148,128,139,10,241,34,69,121,102,102,18,26,26,36,52,87,177,44,194,138,43,61,
168,9,36,104,14,112,195,163,12,51,134,78,112,195,8,16,32,97,156,229,64,2,2,150,102,123,22,37,133,18,26,36,80,209,89,153,158,241,68,138,
43,223,232,146,112,56,97,134,3,128,128,225,132,8,16,32,96,0,8,14,112,195,57,200,146,73,169,103,188,81,94,43,51,51,197,120,161,162,138,207,
36,179,51,203,112,0,20,4,4,225,134,24,97,156,231,0,14,112,206,24,103,1,37,208,20,179,61,226,179,18,204,247,137,18,37,239,123,18,204,247,
189,239,58,75,232,14,25,195,56,8,0,115,134,16,32,103,0,9,0,0,115,156,148,150,105,50,204,241,69,123,222,43,51,222,43,197,20,87,189,139,
49,44,196,164,128,128,4,4,231,56,97,2,6,24,97,156,231,56,97,134,112,206,2,210,174,94,241,94,43,222,207,120,162,138,36,72,145,69,123,222,
246,120,175,123,19,164,149,0,0,24,97,132,12,48,206,112,195,8,16,32,64,129,156,4,7,0,0,0,36,150,123,22,103,188,81,68,137,18,40,151,
138,40,162,138,40,145,94,247,177,36,147,40,0,115,134,115,156,231,12,48,129,2,7,68,8,24,103,57,206,3,134,112,0,164,150,36,179,61,226,137,
18,40,162,138,43,197,20,72,162,138,43,217,152,177,98,76,0,0,28,7,0,14,115,134,16,32,64,129,156,231,57,206,112,206,115,146,94,73,44,207,
120,172,247,189,226,188,72,162,138,43,222,207,102,123,51,201,52,146,73,0,0,112,195,12,51,134,115,156,225,156,48,206,115,128,128,146,74,137,102,102,
123,61,153,239,21,226,138,43,222,246,123,61,239,123,49,63,170,64,112,28,51,128,231,1,206,24,97,156,51,156,0,32,0,0,0,22,73,36,177,103,
189,239,21,239,123,61,239,120,175,21,239,102,44,75,18,120,16,0,0,0,0,115,156,225,134,25,206,112,206,115,156,7,0,0,74,190,197,153,239,103,
189,158,247,188,81,94,43,222,204,246,102,102,98,77,82,73,32,1,192,115,156,231,1,206,112,206,115,156,228,0,36,4,5,201,98,88,150,102,123,197,
123,222,204,246,103,179,217,236,75,73,250,64,64,0,0,0,0,14,3,156,231,0,0,0,0,0,32,36,185,147,37,139,61,153,153,153,153,158,204,204,
197,140,146,79,164,146,73,32,0,0,0,0,128,4,0,0,0,73,37,85,89,36,146,88,146,204,89,153,152,177,98,197,137,51,63,164,144,18,2,2,
0,0,0,56,8,9,1,32,32,37,230,102,196,177,102,98,204,204,204,204,204,196,146,196,147,234,149,36,0,0,0,112,0,228,0,1,192,0,0,0,
36,146,95,36,150,44,204,94,207,103,179,217,236,204,246,102,102,36,231,210,64,0,0,7,1,192,112,28,231,57,192,112,0,0,0,9,36,166,100,177,
102,103,179,61,236,246,123,217,239,103,179,49,98,73,157,80,16,16,0,0,1,206,112,28,231,1,192,0,28,0,1,36,151,228,179,22,102,102,123,61,
236,247,189,153,153,152,179,22,51,85,73,1,0,0,112,28,7,1,192,3,128,224,0,8,8,10,151,38,196,177,102,102,103,179,217,158,204,204,89,152,
150,51,234,146,64,64,0,0,0,56,0,112,0,224,1,0,8,9,36,179,50,73,102,102,102,123,51,61,153,158,204,204,196,146,73,244,146,2,0,0,
0,56,14,3,128,224,56,0,0,0,0,36,151,204,177,102,102,103,179,61,153,236,247,179,217,152,177,36,153,213,36,4,0,0,14,3,128,231,1,192,
112,28,0,0,0,73,37,169,36,150,102,102,102,103,189,158,246,123,51,217,153,139,19,63,73,32,32,0,0,112,0,224,57,192,112,28,0,32,32,36,
146,230,73,98,197,153,236,204,246,102,102,102,102,44,73,38,122,164,146,2,64,2,0,0,0,0,0,2,2,2,64,85,252,201,44,88,177,98,204,89,
139,18,196,146,102,122,170,73,36,128,128,128,144,16,18,2,73,42,214,115,36,146,73,44,75,18,88,146,73,51,63,233,82,73,36,146,2,64,73,36,
146,74,181,158,100,146,73,44,73,98,196,177,36,201,153,250,165,73,32,36,4,4,4,4,128,146,73,42,212,230,73,36,177,44,88,179,18,196,150,36,
153,159,170,164,144,18,2,2,2,0,16,18,2,73,36,181,204,201,36,177,44,88,177,102,44,88,146,73,51,61,85,36,144,16,16,16,16,0,128,144,
18,73,42,175,50,73,36,146,196,177,98,197,137,36,146,76,229,117,74,144,18,64,72,8,8,9,36,146,73,87,204,201,36,146,197,137,98,196,150,36,
147,39,245,84,146,2,64,64,64,64,72,9,36,146,173,30,100,146,88,150,44,88,177,98,88,146,100,230,181,73,36,4,128,4,4,0,32,32,32,36,
146,175,204,146,196,177,102,98,204,204,89,139,18,73,51,234,168,9,0,8,0,2,0,0,0,1,0,8,9,42,174,100,216,150,44,204,89,153,153,139,
49,98,90,73,253,82,72,8,8,8,0,0,0,128,0,32,32,36,149,87,50,73,37,139,22,98,204,89,152,177,44,76,153,245,73,80,18,2,2,0,
16,16,18,2,73,37,85,206,73,36,146,88,150,37,137,98,73,50,103,245,84,169,32,36,146,2,73,36,146,85,95,57,146,73,36,146,75,18,73,50,
76,255,170,164,146,73,36,144,18,73,42,85,254,102,73,36,146,73,36,177,50,76,207,250,170,73,36,146,73,36,146,73,37,90,249,201,50,73,36,177,
36,146,73,36,204,255,85,73,82,72,9,36,146,73,36,170,171,206,102,73,36,146,73,36,147,36,153,159,250,213,37,73,36,149,36,146,165,85,215,60,
153,146,76,146,73,146,76,204,231,235,85,74,149,36,149,37,74,171,95,206,102,76,147,36,153,50,102,121,245,173,82,164,149,36,169,42,170,255,57,50,
100,146,73,50,76,153,159,235,74,149,36,146,73,36,146,165,175,243,38,73,36,146,73,99,36,147,39,157,116,169,36,146,73,1,36,146,73,37,85,249,
153,36,146,196,150,36,177,36,146,76,231,213,82,73,36,128,146,2,72,9,36,149,45,115,153,36,146,73,44,73,98,73,36,147,57,245,165,73,36,146,
64,73,36,146,73,42,175,204,201,50,73,98,73,36,146,73,147,159,170,170,73,36,146,73,36,149,42,90,243,153,147,36,146,73,36,153,38,103,250,213,
42,73,36,169,36,149,42,175,243,50,100,146,73,36,146,100,201,207,214,169,42,73,36,146,73,37,74,171,249,201,146,76,146,73,36,146,76,204,255,90,
84,149,36,146,73,37,73,85,107,231,50,100,153,36,146,73,147,38,115,250,213,82,164,169,37,73,85,85,127,231,51,50,100,201,147,51,60,255,93,106,
170,169,85,85,107,95,243,204,204,204,204,206,115,255,214,181,90,170,170,215,175,231,156,204,230,102,115,207,253,117,90,170,85,170,215,95,158,115,50,102,
76,204,231,63,174,170,170,149,42,165,85,93,121,231,51,38,76,147,50,102,115,255,90,170,84,149,42,74,169,107,174,121,153,147,36,201,50,76,204,243,
215,90,165,74,146,164,170,150,171,252,230,102,76,153,50,100,230,127,245,170,170,84,169,85,85,117,243,204,204,201,147,51,51,159,250,214,169,85,42,170,
174,191,206,102,102,100,204,206,115,255,90,170,170,85,84,181,95,71,231,51,38,100,204,204,207,63,93,106,149,82,170,165,170,250,159,57,153,153,153,153,
153,231,253,117,90,170,170,170,214,191,249,231,51,153,153,207,63,255,93,106,181,173,117,255,252,243,206,121,231,255,255,94,186,245,245,255,243,243,231,207,
207,255,95,175,94,191,95,252,254,124,249,252,255,254,190,189,122,250,255,255,159,62,124,249,255,255,215,175,93,125,127,255,243,231,159,62,127,255,245,245,
215,175,95,255,243,243,207,159,63,255,215,215,175,95,215,252,255,62,126,127,255,255,95,95,175,255,255,159,159,159,255,255,175,215,215,255,255,243,243,243,
255,255,254,190,190,191,255,255,207,207,231,255,255,250,253,126,191,255,254,127,207,249,255,254,191,250,255,253,20,81,255,255,63,255,255,255,250,255,255,255,
255,159,255,255,255,253,127,255,255,255,243,255,255,255,255,215,255,255,255,255,231,255,255,255,255,212,174,81,68
};
#endif /* THUMB4_H_ */