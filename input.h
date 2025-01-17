/*
//         .             .              .
//         |             |              |           .
// ,-. ,-. |-. ,-. . ,-. |  ,_, ,-. ,-. |-. ,-,-. . |- ,_,
// | | ,-| | | |   | |-' |   /  `-. |   | | | | | | |   /
// `-| `-^ ^-' '   ' `-' `' '"' `-' `-' ' ' ' ' ' ' `' '"'
//  ,|
//  `'
// input.h
*/
#ifndef INPUT_H_
#define INPUT_H_
#include <ncurses.h>

/* Defining some ASCII Keys */
#define BACKSPACE 127
#define ESC 27
#define ENTER 10
#define CTRLC 3
#define CTRLP 16
#define CTRLX 24
#define CTRLD 4
#define CTRLR 18
#define CTRLF 6
#define CTRLW 23
#define CTRLT 20

/* Input note */
extern void inputNote(appData*, int);
/* Input task */
extern void inputTask(appData*, int);

/* Handle user input and app state */
extern void handleInputs(appData*);
/* Handle mouse input */
extern void mouseInput(appData*, MEVENT);

/* Handle input at the main menu */
extern void mainMenuInput(appData*, char);
/* Handle input at the settings menu */
extern void settingsInput(appData*, char);
/* Handle input at the resume menu */
extern void resumeInput(appData*, char);

#endif
