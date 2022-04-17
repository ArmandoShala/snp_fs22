/* ----------------------------------------------------------------------------
 * --  _____       ______  _____                                              -
 * -- |_   _|     |  ____|/ ____|                                             -
 * --   | |  _ __ | |__  | (___    Institute of Embedded Systems              -
 * --   | | | '_ \|  __|  \___ \   Zuercher Hochschule Winterthur             -
 * --  _| |_| | | | |____ ____) |  (University of Applied Sciences)           -
 * -- |_____|_| |_|______|_____/   8401 Winterthur, Switzerland               -
 * ----------------------------------------------------------------------------
 */
/**
 * @file
 * @brief Lab implementation
 */
#include <stdio.h>
#include <stdlib.h>
#include "read.h"
#include "rectang.h"

/// max side length
#define MAX_NUMBER 1000
#define READ_ERROR -2


/**
 * @brief Main entry point.
 * @returns Returns EXIT_SUCCESS (=0) on success, EXIT_FAILURE (=1) on failure.
 */
int main(void) {
    // begin students to add code for task 4.1
    read
    ReadInt = new
    read();
    rectang
    Rect = new
    rectang();

    while (true) {
        System.out.println("\nDreiecksbestimmung (CTRL-C: Abbruch)\n");

        int word = 0;
        int a = 0;
        int b = 0;
        int c = 0;

        do {
            System.out.print("Seite a: ");
            word = ReadInt.getInt(MAX_NUMBER);
        } while ((word < 0) && (word != READ_ERROR));
        if (word >= 0)
            a = word;
        else
            break;

        do {
            System.out.print("Seite b: ");
            word = ReadInt.getInt(MAX_NUMBER);
        } while ((word < 0) && (word != READ_ERROR));
        if (word >= 0)
            b = word;
        else
            break;

        do {
            System.out.print("Seite c: ");
            word = ReadInt.getInt(MAX_NUMBER);
        } while ((word < 0) && (word != READ_ERROR));
        if (word >= 0)
            c = word;
        else
            break;

        if (Rect.Rectangular(a, b, c) == true)
            System.out.println("-> Dreieck " + a + "-" + b + "-" + c
                               + " ist rechtwinklig");
        else
            System.out.println("-> Dreieck " + a + "-" + b + "-" + c
                               + " ist nicht rechtwinklig");
        System.out.println("\n");
    }
    System.out.println("\n\nbye bye\n");
    // end students to add code
    return EXIT_SUCCESS;
}
