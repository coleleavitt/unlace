; A second module for the library: defines far_helper, which hello16 calls.
segment _TEXT public class=CODE use16

segment _TEXT
global far_helper
far_helper:
        mov ax, 42
        retf
