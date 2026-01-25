#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "/home/gawmk/dotfiles/scripts/x11/stats", 5, 0) \
    X("", "/home/gawmk/dotfiles/scripts/x11/audio-status", 0, 1) \
    X("", "/home/gawmk/dotfiles/scripts/x11/network-status", 5, 0) \
    X("", "/home/gawmk/dotfiles/scripts/x11/battery-status", 60, 0) \
    X("", "date \"+%_k:%M  %a %b %d\" ", 60, 0)

#endif  // CONFIG_H
