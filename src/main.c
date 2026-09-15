// blackjack1 - main.c gerado por V14
#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"

PSP_MODULE_INFO("blackjack1", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// Tipos J2ME (auto-detectados, dedup)
typedef void* Alert;
typedef void* AlertType;
typedef void* Boolean;
typedef void* Byte;
typedef void* ByteArrayInputStream;
typedef void* ByteArrayOutputStream;
typedef void* Calendar;
typedef void* Canvas;
typedef void* Character;
typedef void* ChoiceGroup;
typedef void* Class_x;
typedef void* Command;
typedef void* CommandListener;
typedef void* Control;
typedef void* DataInputStream;
typedef void* DataOutputStream;
typedef void* Date;
typedef void* DateField;
typedef void* DeviceControl;
typedef void* DirectGraphics;
typedef void* Display;
typedef void* Displayable;
typedef void* Double_x;
typedef void* Enumeration;
typedef void* Exception;
typedef void* Float_x;
typedef void* Font;
typedef void* Form;
typedef void* FullCanvas;
typedef void* GameCanvas;
typedef void* Gauge;
typedef void* Graphics;
typedef void* Hashtable;
typedef void* IOException;
typedef void* Image;
typedef void* ImageItem;
typedef void* InputStream;
typedef void* Integer;
typedef void* InterruptedException;
typedef void* Item;
typedef void* Iterator;
typedef void* List;
typedef void* ListItem;
typedef void* Locale;
typedef void* Long_x;
typedef void* MIDlet;
typedef void* MIDletStateChangeException;
typedef void* Manager;
typedef void* Math;
typedef void* Object;
typedef void* OutputStream;
typedef void* Player;
typedef void* PrintStream;
typedef void* Process;
typedef void* Queue;
typedef void* Random;
typedef void* RecordStore;
typedef void* Runtime;
typedef void* Screen;
typedef void* Short_x;
typedef void* Sound;
typedef void* Spacer;
typedef void* Stack;
typedef void* String;
typedef void* StringBuffer;
typedef void* StringTokenizer;
typedef void* System;
typedef void* TextBox;
typedef void* TextField;
typedef void* Thread;
typedef void* Ticker;
typedef void* TimeZone;
typedef void* Timer;
typedef void* TimerTask;
typedef void* Vector;

// Stubs de biblioteca
void j2me_canvas_repaint(void) { }
void j2me_canvas_serviceRepaints(void) { }
void j2me_gc(void) { }
void* j2me_image_get_graphics(void* img) { return img; }

// Forward typedefs
typedef struct Blackjack_a_s Blackjack_a;
typedef struct Blackjack_a_s Blackjack_a_s;
typedef struct Blackjack_b_s Blackjack_b;
typedef struct Blackjack_b_s Blackjack_b_s;
typedef struct Blackjack_c_s Blackjack_c;
typedef struct Blackjack_c_s Blackjack_c_s;
typedef struct Blackjack_d_s Blackjack_d;
typedef struct Blackjack_d_s Blackjack_d_s;
typedef struct Blackjack_s Blackjack;
typedef struct Blackjack_s Blackjack_s;

// Globais
void* _self = 0;
void* _p1_self = 0;
void* _p2_self = 0;
void* _role_self = 0;
Blackjack_b* msf_mc = 0;
int Game_count = 0;
int MapCanvas_OFFY = 96;
int MapCanvas_OFFX = 180;
int MapCanvas_CanvasWidth = 480;
int MapCanvas_CanvasHeight = 272;
int MapCanvas_still = 0;
int MapCanvas_lightflag = 0;

// Structs
struct Blackjack_a_s {
    int          do_x;
    int          a;
    int*         if_x;
    void*        this_0;
};

struct Blackjack_b_s {
    int          do_x;
    int          if_x;
    int          a;
    void*        this_0;
};

struct Blackjack_c_s {
    void*        this_0;
};

struct Blackjack_d_s {
    int          if_x;
    int          a;
    int          do_x;
    void*        this_0;
};

struct Blackjack_s {
    void*        at;
    void*        as;
    void*        try_x;
    void*        M;
    void*        char_x;
    void*        f;
    void*        Q;
    void*        ao;
    void*        v;
    void*        int_x;
    void*        P;
    void*        for_x;
    void*        d;
    void*        ak;
    void*        j;
    void*        y;
    void*        W;
    void*        al;
    void*        long_x;
    int          Y;
    int          if_x;
    int          ab;
    int          c;
    int          t;
    int          s;
    int          new_x;
    int          G;
    void*        ai;
    void*        an;
    void*        ah;
    int          R;
    int          l;
    int          O;
    int          B;
    int          h;
    int          a;
    int          U;
    int          z;
    int          p;
    int          Z;
    int          A;
    int          F;
    int          u;
    void*        I;
    int*         H;
    int          af;
    int          V;
    int          K;
    int          ad;
    int          T;
    int          aj;
    int          void_x;
    int          goto_x;
    int          null_x;
    int          e;
    int          byte;
    int          am;
    int          J;
    int**        aq;
    int**        o;
    int          r;
    int          ac;
    int*         ap;
    int*         w;
    void*        m;
    void*        else_x;
    int          C;
    int          au;
    int**        ae;
    int**        ag;
    void*        case_x;
    void*        S;
    int*         b;
    int*         X;
    int          i;
    int          aa;
    int          g;
    int          N;
    int          k;
    void*        q;
    int          L;
    int*         D;
    int          E;
    int**        n;
    void*        do_x;
    int          ar;
    int          x;
};

// Prototipos
void Blackjack_a_constructor(void* self, void* arg0, int arg1);
void Blackjack_a_run(void* self);
void Blackjack_a_a(void* self, int64_t arg0);
void Blackjack_b_constructor(void* self, void* arg0);
void Blackjack_b_paint(void* self, void* arg0);
void Blackjack_b_keyPressed(void* self, int arg0);
void Blackjack_c_constructor(void* self, void* arg0);
void Blackjack_c_paint(void* self, void* arg0);
void Blackjack_c_a(void* self, void* arg0, void* arg1, int arg2, void* arg3, int arg4);
void Blackjack_c_a_2(void* self, void* arg0, void* arg1, int arg2, int arg3);
void Blackjack_c_a_3(void* self, void* arg0, int arg1, int arg2);
void Blackjack_c_a_4(void* self, void* arg0, int arg1, int arg2, void* arg3);
void Blackjack_c_keyPressed(void* self, int arg0);
void* Blackjack_c_a_5(void* self, void* arg0, int arg1);
void Blackjack_d_constructor(void* self, void* arg0);
void Blackjack_d_paint(void* self, void* arg0);
void Blackjack_d_keyPressed(void* self, int arg0);
void Blackjack_constructor(void* self);
void Blackjack_startApp(void* self);
void Blackjack_pauseApp(void* self);
void Blackjack_destroyApp(void* self, int arg0);
void Blackjack_for_x(void* self);
void Blackjack_byte(void* self);
void Blackjack_void_x(void* self);
void Blackjack_h(void* self);
void Blackjack_l(void* self);
void Blackjack_o(void* self);
void* Blackjack_if_x(void* self, int arg0);
void Blackjack_a(void* self);
int Blackjack_a_2(void* self, void* arg0, int arg1);
void Blackjack_try_x(void* self);
void Blackjack_new_x(void* self);
void Blackjack_i(void* self);
void Blackjack_c(void* self);
void Blackjack_m(void* self);
void Blackjack_k(void* self);
void Blackjack_long_x(void* self);
void Blackjack_q(void* self);
void Blackjack_f(void* self);
void Blackjack_char_x(void* self);
void Blackjack_goto_x(void* self);
void Blackjack_else_x(void* self);
void* Blackjack_a_3(void* self, void* arg0, int arg1);
void* Blackjack_if_x_2(void* self, void* arg0);
int Blackjack_a_4(void* self, void* arg0);
int Blackjack_a_5(void* self, int arg0);
void Blackjack_null_x(void* self);
void Blackjack_int_x(void* self);
void Blackjack_s(void* self);
void Blackjack_commandAction(void* self, void* arg0, void* arg1);
void Blackjack_p(void* self);
void Blackjack_n(void* self);
void Blackjack_j(void* self);
void Blackjack_do_x(void* self);
void Blackjack_g(void* self);
void Blackjack_e(void* self);
void Blackjack_if_x_3(void* self);
void Blackjack_case_x(void* self);
void Blackjack_d(void* self);
void Blackjack_b(void* self);
void Blackjack_a_6(void* self, void* arg0);
void Blackjack_r(void* self);
void Blackjack_a_7(void* self, void* arg0);
int Blackjack_access_000(void* self, void* arg0);
int Blackjack_access_100(void* self, void* arg0);
void* Blackjack_access_200(void* self, void* arg0);
void* Blackjack_access_302(void* self, void* arg0, void* arg1);
void* Blackjack_access_400(void* self, void* arg0, int arg1);
void* Blackjack_access_500(void* self, void* arg0);
int Blackjack_access_600(void* self, void* arg0);
void* Blackjack_access_300(void* self, void* arg0);
int Blackjack_access_608(void* self, void* arg0);
void* Blackjack_access_700(void* self, void* arg0);
int Blackjack_access_802(void* self, void* arg0, int arg1);
void* Blackjack_access_202(void* self, void* arg0, void* arg1);
void* Blackjack_access_900(void* self, void* arg0);
void* Blackjack_access_1000(void* self, void* arg0);
void Blackjack_access_1100(void* self, void* arg0);
void* Blackjack_access_702(void* self, void* arg0, void* arg1);
void Blackjack_access_1200(void* self, void* arg0);
int Blackjack_access_1300(void* self, void* arg0);
int Blackjack_access_002(void* self, void* arg0, int arg1);
void* Blackjack_access_1402(void* self, void* arg0, void* arg1);
void Blackjack_access_1500(void* self, void* arg0);
void Blackjack_access_1600(void* self, void* arg0);
int Blackjack_access_1302(void* self, void* arg0, int arg1);
int Blackjack_access_1700(void* self);
int Blackjack_access_1800(void* self);
int Blackjack_access_1900(void* self);
int Blackjack_access_2000(void* self);
void* Blackjack_access_2100(void* self, void* arg0);
int Blackjack_access_2200(void* self);
void* Blackjack_access_2300(void* self, void* arg0);
int Blackjack_access_800(void* self, void* arg0);
int Blackjack_access_2400(void* self, void* arg0);
int Blackjack_access_2500(void* self, void* arg0);
void* Blackjack_access_1400(void* self, void* arg0);
int Blackjack_access_2602(void* self, void* arg0, int arg1);
void* Blackjack_access_2702(void* self, void* arg0, void* arg1);
void* Blackjack_access_2700(void* self, void* arg0);
int Blackjack_access_2600(void* self, void* arg0);
void* Blackjack_access_2800(void* self, void* arg0);
void* Blackjack_access_2900(void* self, void* arg0);
int Blackjack_access_2612(void* self, void* arg0, int arg1);
void* Blackjack_access_3000(void* self, void* arg0);
void* Blackjack_access_3100(void* self, void* arg0);
int Blackjack_access_2512(void* self, void* arg0, int arg1);
int Blackjack_access_2420(void* self, void* arg0, int arg1);
int Blackjack_access_2520(void* self, void* arg0, int arg1);
int Blackjack_access_2412(void* self, void* arg0, int arg1);
void* Blackjack_access_3200(void* self, void* arg0);
void* Blackjack_access_3300(void* self, void* arg0);
void* Blackjack_access_3400(void* self, void* arg0);
void* Blackjack_access_3500(void* self, void* arg0);
int Blackjack_access_3600(void* self, void* arg0);
void* Blackjack_access_3700(void* self, void* arg0);
void* Blackjack_access_3800(void* self, void* arg0);
int Blackjack_access_3900(void* self);
void* Blackjack_access_4000(void* self, void* arg0);
void* Blackjack_access_4100(void* self, void* arg0);
void* Blackjack_access_4200(void* self, void* arg0);

// Implementacoes
void Blackjack_a_constructor(void* self, void* arg0, int arg1) {
    Blackjack_a* s = (Blackjack_a*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_a_run(void* self) {
    Blackjack_a* s = (Blackjack_a*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_a_a(void* self, int64_t arg0) {
    Blackjack_a* s = (Blackjack_a*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_b_constructor(void* self, void* arg0) {
    Blackjack_b* s = (Blackjack_b*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_b_paint(void* self, void* arg0) {
    Blackjack_b* s = (Blackjack_b*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_b_keyPressed(void* self, int arg0) {
    Blackjack_b* s = (Blackjack_b*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c_constructor(void* self, void* arg0) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c_paint(void* self, void* arg0) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c_a(void* self, void* arg0, void* arg1, int arg2, void* arg3, int arg4) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c_a_2(void* self, void* arg0, void* arg1, int arg2, int arg3) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c_a_3(void* self, void* arg0, int arg1, int arg2) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c_a_4(void* self, void* arg0, int arg1, int arg2, void* arg3) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c_keyPressed(void* self, int arg0) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return;
    (void)s;
}

void* Blackjack_c_a_5(void* self, void* arg0, int arg1) {
    Blackjack_c* s = (Blackjack_c*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void Blackjack_d_constructor(void* self, void* arg0) {
    Blackjack_d* s = (Blackjack_d*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_d_paint(void* self, void* arg0) {
    Blackjack_d* s = (Blackjack_d*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_d_keyPressed(void* self, int arg0) {
    Blackjack_d* s = (Blackjack_d*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_constructor(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_startApp(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_pauseApp(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_destroyApp(void* self, int arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_for_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_byte(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_void_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_h(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_l(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_o(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void* Blackjack_if_x(void* self, int arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void Blackjack_a(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

int Blackjack_a_2(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void Blackjack_try_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_new_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_i(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_c(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_m(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_k(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_long_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_q(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_f(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_char_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_goto_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_else_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void* Blackjack_a_3(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_if_x_2(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_a_4(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_a_5(void* self, int arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void Blackjack_null_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_int_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_s(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_commandAction(void* self, void* arg0, void* arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_p(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_n(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_j(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_do_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_g(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_e(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_if_x_3(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_case_x(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_d(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_b(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_a_6(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_r(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_a_7(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

int Blackjack_access_000(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_100(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_200(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_302(void* self, void* arg0, void* arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_400(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_500(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_600(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_300(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_608(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_700(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_802(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_202(void* self, void* arg0, void* arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_900(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_1000(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void Blackjack_access_1100(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void* Blackjack_access_702(void* self, void* arg0, void* arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void Blackjack_access_1200(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

int Blackjack_access_1300(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_002(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_1402(void* self, void* arg0, void* arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void Blackjack_access_1500(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

void Blackjack_access_1600(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return;
    (void)s;
}

int Blackjack_access_1302(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_1700(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_1800(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_1900(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2000(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_2100(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2200(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_2300(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_800(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2400(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2500(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_1400(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2602(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_2702(void* self, void* arg0, void* arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_2700(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2600(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_2800(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_2900(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2612(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3000(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3100(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2512(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2420(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2520(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_2412(void* self, void* arg0, int arg1) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3200(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3300(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3400(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3500(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_3600(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3700(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_3800(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int Blackjack_access_3900(void* self) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_4000(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_4100(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* Blackjack_access_4200(void* self, void* arg0) {
    Blackjack* s = (Blackjack*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    Blackjack_b* mc = (Blackjack_b*)calloc(1, sizeof(Blackjack_b));
    _self = mc;
    msf_mc = mc;

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;
        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);
        j2me_gfx_flip();
    }
    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}