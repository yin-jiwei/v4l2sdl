//
// Created by yjw on 18-3-2.
//

#ifndef SWC_OPT_H
#define SWC_OPT_H
struct options {
    int verbose;
    int width;
    int height;
};

void options_init();

void options_deal(int argc, char *argv[]);

#endif //SWC_OPT_H