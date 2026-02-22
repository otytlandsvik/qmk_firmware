#include QMK_KEYBOARD_H

/* Tap and Hold combos */
#define MSPC LT(1, KC_SPC)
#define MESC LT(3, KC_ESC)
#define MENT LT(2, KC_ENT)
#define SFT_BSP LSFT_T(KC_BSPC)
#define ALT_Q LALT_T(KC_Q)

/* Æ, Ø and Å */
#define KC_AE RALT(KC_Z)
#define KC_OE RALT(KC_L)
#define KC_AA RALT(KC_W)

/* Navigation */
#define PPAGE LALT(KC_LEFT)
#define NPAGE LALT(KC_RIGHT)
#define PTAB RCS(KC_TAB)
#define NTAB LCTL(KC_TAB)

#define GUI_1 LGUI(KC_1)
#define GUI_2 LGUI(KC_2)
#define GUI_3 LGUI(KC_3)
#define GUI_4 LGUI(KC_4)
#define GUI_5 LGUI(KC_5)
#define GUI_6 LGUI(KC_6)
#define GUI_7 LGUI(KC_7)
#define GUI_8 LGUI(KC_8)
#define GUI_9 LGUI(KC_9)
#define LOCK LGUI(LCTL(KC_L))
#define GUI_D LGUI(KC_D)
#define GUI_X LGUI(KC_X)
#define GUI_Q LGUI(KC_Q)

#define GUI_H LGUI(KC_H)
#define GUI_J LGUI(KC_J)
#define GUI_K LGUI(KC_K)
#define GUI_L LGUI(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
     * +-----------------------------------------+                             +-----------------------------------------+
     * |      |   b  |   l  |   d  |   w  |   z  |                             |   '  |   f  |   o  |   u  |   j  |   ;  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | CTRL |   n  |   r  |   t  |   s  |   g  |                             |   y  |   h  |   a  |   e  |   i  |   ,  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   q  |   x  |   m  |   c  |   v  |                             |   k  |   p  |   .  |   -  |   /  |      |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *               |      |      |                                                         |      |      |
     *               +-------------+-------------+------+               +------+-------------+-------------+
     *                             |      |      |      |               |      |      |      |
     *                             +-------------+------+               +-------------+------+
     */
    [0] = LAYOUT(
        MO(4),   KC_B,    KC_L,    KC_D,    KC_W,    KC_Z,                   KC_QUOT, KC_F,    KC_O,    KC_U,    KC_J,    KC_SCLN,
        KC_LCTL, KC_N,    KC_R,    KC_T,    KC_S,    KC_G,                   KC_Y,    KC_H,    KC_A,    KC_E,    KC_I,    KC_COMM,
        KC_TAB,  ALT_Q,   KC_X,    KC_M,    KC_C,    KC_V,                   KC_K,    KC_P,    KC_DOT,  KC_MINS, KC_SLSH, KC_RCTL,
                          KC_LBRC, KC_RBRC,                                                    KC_PLUS, KC_EQL,
                                   MSPC,    MESC, KC_LGUI,                  KC_LCTL, SFT_BSP, MENT
    ),

    // Symbol layer
    [1] = LAYOUT(
        QK_BOOT, _______, KC_AMPR, KC_ASTR, KC_BSLS, _______,                KC_AE,   KC_OE,   KC_AA,   KC_LPRN, KC_RPRN, _______,
        _______, _______, KC_DLR,  KC_PERC, KC_CIRC, KC_TILD,                KC_LT,   KC_PIPE, KC_GT,   KC_LCBR, KC_RCBR, _______,
        _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_GRV,                 KC_EQL,  KC_MINS, KC_PLUS, KC_LBRC, KC_RBRC, _______,
                          _______, _______,                                                    _______, _______,
                                   _______, _______, _______,                _______, _______, _______
    ),

    // Numpad + Navigation
    [2] = LAYOUT(
        _______, _______, KC_7,    KC_8,    KC_9,    KC_0,                   KC_PGDN, KC_PGUP, KC_HOME, KC_END,  _______, QK_BOOT,
        _______, _______, KC_4,    KC_5,    KC_6,    KC_DOT,                 KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, KC_1,    KC_2,    KC_3,    KC_COMMA,               PPAGE,   PTAB,    NTAB,    NPAGE,   _______, _______,
                          _______, _______,                                                    _______, _______,
                                   _______, _______, _______,                _______, _______, _______
    ),

    // Vim and WM Navigation
    [3] = LAYOUT(
        _______, _______, GUI_7,   GUI_8,   GUI_9,   LOCK,                   GUI_H,      GUI_J,      GUI_K,      GUI_L, _______, _______,
        _______, _______, GUI_4,   GUI_5,   GUI_6,   GUI_D,                  LCTL(KC_H), LCTL(KC_J), LCTL(KC_K), LCTL(KC_L), _______, _______,
        _______, GUI_Q,   GUI_1,   GUI_2,   GUI_3,   GUI_X,                  LSFT(KC_H), LSFT(KC_J), LSFT(KC_K), LSFT(KC_L), _______, _______,
                          _______, _______,                                                    _______, _______,
                                   _______, _______, _______,                _______, _______, _______
    ),

    // F-Keys + Mouse
    [4] = LAYOUT(
        _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,                 _______, _______, _______, _______, _______, _______,
        _______, _______, KC_F6,   KC_F5,   KC_F6,   KC_F11,                 MS_LEFT, MS_DOWN, MS_UP, MS_RGHT,   _______, _______,
        _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,                 _______, MS_BTN1, MS_BTN2, _______, _______, _______,
                          _______, _______,                                                    _______, _______,
                                   _______, KC_PSCR, _______,                _______, _______, _______
    )
};
