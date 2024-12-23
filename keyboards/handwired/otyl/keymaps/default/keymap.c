#include QMK_KEYBOARD_H

/* Tap and Hold combos */
#define MSPC LT(1, KC_SPC)
#define GUI_ESC RGUI_T(KC_ESC)
#define MENT LT(2, KC_ENT)
#define SFT_BSP LSFT_T(KC_BSPC)

/* Æ, Ø and Å */
#define KC_AE RALT(KC_Z)
#define KC_OE RALT(KC_L)
#define KC_AA RALT(KC_W)

/* Navigation */
#define PPAGE LALT(KC_LEFT)
#define NPAGE LALT(KC_RIGHT)
#define PTAB RCS(KC_TAB)
#define NTAB LCTL(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
     * +-----------------------------------------+                             +-----------------------------------------+
     * | ESC  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | SHFT |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |      |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *               |      |      |                                                         |      |      |
     *               +-------------+-------------+------+               +------+-------------+-------------+
     *                             |      |      |      |               |      |      |      |
     *                             +-------------+------+               +-------------+------+
     */
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                          KC_LBRC, KC_RBRC,                                                    KC_PLUS, KC_EQL,
                                   MSPC,    GUI_ESC, KC_LCTL,                KC_LALT, SFT_BSP, MENT
    ),

    [1] = LAYOUT(
        _______, _______, KC_AMPR, KC_ASTR, _______, _______,                KC_AE,   KC_OE,   KC_AA,   KC_LPRN, KC_RPRN, _______,
        _______, _______, KC_DLR,  KC_PERC, KC_CIRC, KC_TILD,                KC_LT,   KC_PIPE, KC_GT,   KC_LCBR, KC_RCBR, _______,
        _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_GRV,                 KC_EQL,  KC_MINS, KC_PLUS, KC_LBRC, KC_RBRC, _______,
                          _______, _______,                                                    _______, _______,
                                   _______, _______, _______,                _______, _______, _______
    ),

    [2] = LAYOUT(
        _______, _______, KC_7,    KC_8,    KC_9, _______,                   KC_PGDN, KC_PGUP, KC_HOME, KC_END,  _______, _______,
        _______, _______, KC_4,    KC_5,    KC_6, KC_DOT,                    KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, _______, _______,
        _______, _______, KC_1,    KC_2,    KC_3, KC_COMMA,                  PPAGE,   PTAB,    NTAB,    NPAGE,   _______, _______,
                          _______, _______,                                                    _______, _______,
                                   _______, _______, _______,                _______, _______, _______
    )
};
