// blackjack1 - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: Blackjack  Canvas: Blackjack$b

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

PSP_MODULE_INFO("blackjack1", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct ofusc_03fb_s ofusc_03fb;
typedef struct ofusc_03fc_s ofusc_03fc;
typedef struct ofusc_03fd_s ofusc_03fd;
typedef struct ofusc_03fe_s ofusc_03fe;
typedef struct Blackjack_s Blackjack;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: Blackjack$a (extends Object) ===
// Padroes detectados: TEM_RUN
struct ofusc_03fb_s {
    int             do;  // do (I)
    int             a;  // a (I)
    int*            if;  // if ([Z)
    Blackjack*      ofusc_020c;  // this$0 (LBlackjack;)
};

// === Classe: Blackjack$b (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT
struct ofusc_03fc_s {
    int             do;  // do (I)
    int             if;  // if (I)
    int             a;  // a (I)
    Blackjack*      ofusc_020c;  // this$0 (LBlackjack;)
};

// === Classe: Blackjack$c (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT
struct ofusc_03fd_s {
    Blackjack*      ofusc_020c;  // this$0 (LBlackjack;)
};

// === Classe: Blackjack$d (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT
struct ofusc_03fe_s {
    int             if;  // if (I)
    int             a;  // a (I)
    int             do;  // do (I)
    Blackjack*      ofusc_020c;  // this$0 (LBlackjack;)
};

// === Classe: Blackjack (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_STARTAPP, USA_IMAGE
struct Blackjack_s {
    Command*        at;  // at (Ljavax/microedition/lcdui/Command;)
    Command*        as;  // as (Ljavax/microedition/lcdui/Command;)
    Command*        try;  // try (Ljavax/microedition/lcdui/Command;)
    Command*        M;  // M (Ljavax/microedition/lcdui/Command;)
    Command*        char;  // char (Ljavax/microedition/lcdui/Command;)
    Command*        f;  // f (Ljavax/microedition/lcdui/Command;)
    Command*        Q;  // Q (Ljavax/microedition/lcdui/Command;)
    Command*        ao;  // ao (Ljavax/microedition/lcdui/Command;)
    Command*        v;  // v (Ljavax/microedition/lcdui/Command;)
    Display*        int;  // int (Ljavax/microedition/lcdui/Display;)
    Blackjack$c*    P;  // P (LBlackjack$c;)
    Blackjack$d*    for;  // for (LBlackjack$d;)
    Blackjack$b*    d;  // d (LBlackjack$b;)
    Image*          ak;  // ak (Ljavax/microedition/lcdui/Image;)
    Image*          j;  // j (Ljavax/microedition/lcdui/Image;)
    Image*          y;  // y (Ljavax/microedition/lcdui/Image;)
    Image*          W;  // W (Ljavax/microedition/lcdui/Image;)
    Image*          al;  // al (Ljavax/microedition/lcdui/Image;)
    Image*          long;  // long (Ljavax/microedition/lcdui/Image;)
    int             Y;  // Y (I)
    int             if;  // if (I)
    int             ab;  // ab (I)
    int             c;  // c (I)
    int             t;  // t (I)
    int             s;  // s (I)
    int             new;  // new (I)
    int             G;  // G (I)
    Font*           ai;  // ai (Ljavax/microedition/lcdui/Font;)
    Font*           an;  // an (Ljavax/microedition/lcdui/Font;)
    Font*           ah;  // ah (Ljavax/microedition/lcdui/Font;)
    int             R;  // R (Z)
    int             l;  // l (I)
    int             O;  // O (I)
    int             B;  // B (I)
    int             h;  // h (I)
    int             a;  // a (I)
    int             U;  // U (I)
    int             z;  // z (I)
    int             p;  // p (I)
    int             Z;  // Z (I)
    int             A;  // A (I)
    int             F;  // F (I)
    int             u;  // u (I)
    String**        I;  // I ([Ljava/lang/String;)
    int*            H;  // H ([I)
    int             af;  // af (I)
    int             V;  // V (I)
    int             K;  // K (I)
    int             ad;  // ad (I)
    int             T;  // T (I)
    int             aj;  // aj (I)
    int             void;  // void (I)
    int             goto;  // goto (I)
    int             null;  // null (I)
    int             e;  // e (I)
    int             byte;  // byte (I)
    int             am;  // am (I)
    int             J;  // J (I)
    int**           aq;  // aq ([[I)
    int**           o;  // o ([[I)
    int             r;  // r (I)
    int             ac;  // ac (I)
    int*            ap;  // ap ([I)
    int*            w;  // w ([I)
    String*         m;  // m (Ljava/lang/String;)
    String*         else;  // else (Ljava/lang/String;)
    int             C;  // C (I)
    int             au;  // au (I)
    int**           ae;  // ae ([[I)
    int**           ag;  // ag ([[I)
    Random*         case;  // case (Ljava/util/Random;)
    Blackjack$a*    S;  // S (LBlackjack$a;)
    int*            b;  // b ([Z)
    int*            X;  // X ([Z)
    int             i;  // i (I)
    int             aa;  // aa (Z)
    int             g;  // g (Z)
    int             N;  // N (I)
    int             k;  // k (I)
    String*         q;  // q (Ljava/lang/String;)
    int             L;  // L (I)
    int*            D;  // D ([I)
    int             E;  // E (I)
    int**           n;  // n ([[I)
    Image*          do;  // do (Ljavax/microedition/lcdui/Image;)
    int             ar;  // ar (I)
    int             x;  // x (I)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === Blackjack$a.Blackjack$a_constructor ((LBlackjack;I)V) ===
// Instrucoes: 9
// APIs usadas:
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
void Blackjack$a_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$a.Blackjack$a_run (()V) ===
// Instrucoes: 223
// APIs usadas:
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
void Blackjack$a_run() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$a.Blackjack$a_a ((J)V) ===
// Instrucoes: 5
// APIs usadas:
//   1x java/lang/Thread.sleep -> j2me_sleep
void Blackjack$a_a() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$b.Blackjack$b_constructor ((LBlackjack;)V) ===
// Instrucoes: 14
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
void Blackjack$b_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$b.Blackjack$b_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 155
// APIs usadas:
//   5x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   5x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   4x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   2x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
void Blackjack$b_paint() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$b.Blackjack$b_keyPressed ((I)V) ===
// Instrucoes: 15
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Blackjack$b_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_constructor ((LBlackjack;)V) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
void Blackjack$c_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 297
// APIs usadas:
//   6x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   5x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   4x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   3x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   3x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   3x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   3x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void Blackjack$c_paint() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_a ((Ljavax/microedition/lcdui/Graphics;[[II[ZI)V) ===
// Instrucoes: 90
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void Blackjack$c_a() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_a_2 ((Ljavax/microedition/lcdui/Graphics;Ljavax/microedition/lcdui/Image;II)V) ===
// Instrucoes: 19
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void Blackjack$c_a_2() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_a_3 ((Ljavax/microedition/lcdui/Graphics;II)V) ===
// Instrucoes: 33
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void Blackjack$c_a_3() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_a_4 ((Ljavax/microedition/lcdui/Graphics;IILjava/lang/String;)V) ===
// Instrucoes: 27
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void Blackjack$c_a_4() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_keyPressed ((I)V) ===
// Instrucoes: 64
// APIs usadas:
//   2x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
void Blackjack$c_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$c.Blackjack$c_a_5 (([[II)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 67
Image* Blackjack$c_a_5() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack$d.Blackjack$d_constructor ((LBlackjack;)V) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
void Blackjack$d_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$d.Blackjack$d_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 235
// APIs usadas:
//   16x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   5x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x javax/microedition/lcdui/Graphics.drawLine -> ??? javax/microedition/lcdui/Graphics.drawLine
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
void Blackjack$d_paint() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack$d.Blackjack$d_keyPressed ((I)V) ===
// Instrucoes: 15
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Blackjack$d_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_constructor (()V) ===
// Instrucoes: 395
// APIs usadas:
//   9x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   3x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
//   1x java/util/Random.<init> -> j2me_random_init
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
void Blackjack_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_startApp (()V) ===
// Instrucoes: 12
// APIs usadas:
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Blackjack_startApp() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_pauseApp (()V) ===
// Instrucoes: 1
void Blackjack_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_destroyApp ((Z)V) ===
// Instrucoes: 1
void Blackjack_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_for (()V) ===
// Instrucoes: 4
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void Blackjack_for() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_byte (()V) ===
// Instrucoes: 11
void Blackjack_byte() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_void (()V) ===
// Instrucoes: 32
void Blackjack_void() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_h (()V) ===
// Instrucoes: 101
void Blackjack_h() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_l (()V) ===
// Instrucoes: 9
void Blackjack_l() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_o (()V) ===
// Instrucoes: 258
// APIs usadas:
//   2x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void Blackjack_o() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_if ((I)[[I) ===
// Instrucoes: 56
int** Blackjack_if() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_a (()V) ===
// Instrucoes: 65
// APIs usadas:
//   1x java/util/Random.nextInt -> j2me_random_next
//   1x java/lang/Math.abs -> abs
void Blackjack_a() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_a_2 (([II)I) ===
// Instrucoes: 20
int Blackjack_a_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_try (()V) ===
// Instrucoes: 163
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/Thread.start -> j2me_thread_start
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void Blackjack_try() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_new (()V) ===
// Instrucoes: 68
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/lang/Thread.start -> j2me_thread_start
void Blackjack_new() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_i (()V) ===
// Instrucoes: 3
void Blackjack_i() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_c (()V) ===
// Instrucoes: 26
void Blackjack_c() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_m (()V) ===
// Instrucoes: 13
void Blackjack_m() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_k (()V) ===
// Instrucoes: 37
void Blackjack_k() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_long (()V) ===
// Instrucoes: 12
// APIs usadas:
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Blackjack_long() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_q (()V) ===
// Instrucoes: 10
// APIs usadas:
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void Blackjack_q() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_f (()V) ===
// Instrucoes: 9
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
void Blackjack_f() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_char (()V) ===
// Instrucoes: 128
// APIs usadas:
//   6x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   3x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   3x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void Blackjack_char() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_goto (()V) ===
// Instrucoes: 225
// APIs usadas:
//   10x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   5x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   5x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void Blackjack_goto() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_else (()V) ===
// Instrucoes: 56
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void Blackjack_else() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_a_3 (([[II)[I) ===
// Instrucoes: 166
int* Blackjack_a_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_if_2 (([I)Ljava/lang/String;) ===
// Instrucoes: 34
// APIs usadas:
//   5x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
String* Blackjack_if_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_a_4 (([I)I) ===
// Instrucoes: 23
int Blackjack_a_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_a_5 ((I)I) ===
// Instrucoes: 7
int Blackjack_a_5() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_null (()V) ===
// Instrucoes: 13
void Blackjack_null() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_int (()V) ===
// Instrucoes: 21
// APIs usadas:
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
void Blackjack_int() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_s (()V) ===
// Instrucoes: 38
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/lang/Thread.start -> j2me_thread_start
void Blackjack_s() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 63
void Blackjack_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_p (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
void Blackjack_p() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_n (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
void Blackjack_n() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_j (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
void Blackjack_j() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_do (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
void Blackjack_do() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_g (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
void Blackjack_g() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_e (()V) ===
// Instrucoes: 15
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
void Blackjack_e() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_if_3 (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
void Blackjack_if_3() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_case (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
void Blackjack_case() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_d (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
void Blackjack_d() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_b (()V) ===
// Instrucoes: 15
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
void Blackjack_b() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_a_6 (([[I)V) ===
// Instrucoes: 33
// APIs usadas:
//   5x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void Blackjack_a_6() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_r (()V) ===
// Instrucoes: 46
// APIs usadas:
//   9x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void Blackjack_r() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_a_7 ((Ljava/lang/String;)V) ===
// Instrucoes: 4
// APIs usadas:
//   1x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void Blackjack_a_7() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_ofusc_0326 ((LBlackjack;)I) ===
// Instrucoes: 3
int Blackjack_ofusc_0326() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0327 ((LBlackjack;)I) ===
// Instrucoes: 3
int Blackjack_ofusc_0327() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0328 ((LBlackjack;)[Z) ===
// Instrucoes: 3
int* Blackjack_ofusc_0328() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032b ((LBlackjack;[[I)[[I) ===
// Instrucoes: 5
int** Blackjack_ofusc_032b() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032a ((LBlackjack;I)[[I) ===
// Instrucoes: 4
int** Blackjack_ofusc_032a() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032b_2 ((LBlackjack;)[[I) ===
// Instrucoes: 3
int** Blackjack_ofusc_032b_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032c ((LBlackjack;)I) ===
// Instrucoes: 3
int Blackjack_ofusc_032c() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0329 ((LBlackjack;)[[I) ===
// Instrucoes: 3
int** Blackjack_ofusc_0329() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0334 ((LBlackjack;)I) ===
// Instrucoes: 8
int Blackjack_ofusc_0334() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032d ((LBlackjack;)[Z) ===
// Instrucoes: 3
int* Blackjack_ofusc_032d() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0330 ((LBlackjack;Z)Z) ===
// Instrucoes: 5
int Blackjack_ofusc_0330() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032a_2 ((LBlackjack;[Z)[Z) ===
// Instrucoes: 5
int* Blackjack_ofusc_032a_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032f ((LBlackjack;)Ljavax/microedition/lcdui/Command;) ===
// Instrucoes: 3
Command* Blackjack_ofusc_032f() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0357 ((LBlackjack;)LBlackjack$c;) ===
// Instrucoes: 3
Blackjack$c* Blackjack_ofusc_0357() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0358 ((LBlackjack;)V) ===
// Instrucoes: 3
void Blackjack_ofusc_0358() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_ofusc_032f_2 ((LBlackjack;[Z)[Z) ===
// Instrucoes: 5
int* Blackjack_ofusc_032f_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0359 ((LBlackjack;)V) ===
// Instrucoes: 3
void Blackjack_ofusc_0359() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_ofusc_035a ((LBlackjack;)Z) ===
// Instrucoes: 3
int Blackjack_ofusc_035a() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0328_2 ((LBlackjack;I)I) ===
// Instrucoes: 5
int Blackjack_ofusc_0328_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035d ((LBlackjack;Ljava/lang/String;)Ljava/lang/String;) ===
// Instrucoes: 5
String* Blackjack_ofusc_035d() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035c ((LBlackjack;)V) ===
// Instrucoes: 3
void Blackjack_ofusc_035c() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_ofusc_035d_2 ((LBlackjack;)V) ===
// Instrucoes: 3
void Blackjack_ofusc_035d_2() {
    // TODO: traduzir logica do bytecode
}

// === Blackjack.Blackjack_ofusc_035c_2 ((LBlackjack;Z)Z) ===
// Instrucoes: 5
int Blackjack_ofusc_035c_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035e (()I) ===
// Instrucoes: 2
int Blackjack_ofusc_035e() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035f (()I) ===
// Instrucoes: 2
int Blackjack_ofusc_035f() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0360 (()I) ===
// Instrucoes: 2
int Blackjack_ofusc_0360() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0358_2 (()I) ===
// Instrucoes: 2
int Blackjack_ofusc_0358_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0359_2 ((LBlackjack;)Ljavax/microedition/lcdui/Font;) ===
// Instrucoes: 3
Font* Blackjack_ofusc_0359_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035a_2 (()I) ===
// Instrucoes: 2
int Blackjack_ofusc_035a_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035b ((LBlackjack;)[[I) ===
// Instrucoes: 3
int** Blackjack_ofusc_035b() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_032e ((LBlackjack;)Z) ===
// Instrucoes: 3
int Blackjack_ofusc_032e() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035c_3 ((LBlackjack;)I) ===
// Instrucoes: 3
int Blackjack_ofusc_035c_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035d_3 ((LBlackjack;)I) ===
// Instrucoes: 3
int Blackjack_ofusc_035d_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035b_2 ((LBlackjack;)Ljava/lang/String;) ===
// Instrucoes: 3
String* Blackjack_ofusc_035b_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0360_2 ((LBlackjack;I)I) ===
// Instrucoes: 5
int Blackjack_ofusc_0360_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0361 ((LBlackjack;Ljavax/microedition/lcdui/Image;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 5
Image* Blackjack_ofusc_0361() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035f_2 ((LBlackjack;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 3
Image* Blackjack_ofusc_035f_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035e_2 ((LBlackjack;)I) ===
// Instrucoes: 3
int Blackjack_ofusc_035e_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0360_3 ((LBlackjack;)[Ljava/lang/String;) ===
// Instrucoes: 3
String** Blackjack_ofusc_0360_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0361_2 ((LBlackjack;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 3
Image* Blackjack_ofusc_0361_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0361_3 ((LBlackjack;I)I) ===
// Instrucoes: 8
int Blackjack_ofusc_0361_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0359_3 ((LBlackjack;)Ljava/lang/String;) ===
// Instrucoes: 3
String* Blackjack_ofusc_0359_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035a_3 ((LBlackjack;)Ljava/lang/String;) ===
// Instrucoes: 3
String* Blackjack_ofusc_035a_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0360_4 ((LBlackjack;I)I) ===
// Instrucoes: 8
int Blackjack_ofusc_0360_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035e_3 ((LBlackjack;I)I) ===
// Instrucoes: 8
int Blackjack_ofusc_035e_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035f_3 ((LBlackjack;I)I) ===
// Instrucoes: 8
int Blackjack_ofusc_035f_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035f_4 ((LBlackjack;I)I) ===
// Instrucoes: 8
int Blackjack_ofusc_035f_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035b_3 ((LBlackjack;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 3
Image* Blackjack_ofusc_035b_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035c_4 ((LBlackjack;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 3
Image* Blackjack_ofusc_035c_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035d_4 ((LBlackjack;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 3
Image* Blackjack_ofusc_035d_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035e_4 ((LBlackjack;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 3
Image* Blackjack_ofusc_035e_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035f_5 ((LBlackjack;)Z) ===
// Instrucoes: 3
int Blackjack_ofusc_035f_5() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0360_5 ((LBlackjack;)Ljavax/microedition/lcdui/Font;) ===
// Instrucoes: 3
Font* Blackjack_ofusc_0360_5() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0361_4 ((LBlackjack;)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 3
Image* Blackjack_ofusc_0361_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_0362 (()I) ===
// Instrucoes: 2
int Blackjack_ofusc_0362() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035a_4 ((LBlackjack;)LBlackjack$d;) ===
// Instrucoes: 3
Blackjack$d* Blackjack_ofusc_035a_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035b_4 ((LBlackjack;)Ljavax/microedition/lcdui/Display;) ===
// Instrucoes: 3
Display* Blackjack_ofusc_035b_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Blackjack.Blackjack_ofusc_035c_5 ((LBlackjack;)LBlackjack$b;) ===
// Instrucoes: 3
Blackjack$b* Blackjack_ofusc_035c_5() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // Blackjack_startApp();
        // Blackjack$b_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
