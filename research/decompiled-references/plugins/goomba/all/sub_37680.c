void __fastcall sub_37680(__int64 a1, __int64 a2)
{
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v3; // rsi
  char *v4; // rbx
  char *v5; // rdi
  char *v6; // rbp
  void (__fastcall *v7)(__int64, char *); // rax

  hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v3 = a1 + 56;
  hexdsp(276, a1 + 56);
  v4 = *(char **)(a1 + 24);
  while ( v4 )
  {
    v5 = *((char **)v4 + 3);
    v6 = v4;
    sub_32480(v5, v3);
    v4 = *((char **)v4 + 2);
    v7 = (void (__fastcall *)(__int64, char *))get_hexdsp(v5, v3);
    v7(276, v6 + 32);
    v3 = 48;
    operator delete(v6, 0x30u);
  }
}
