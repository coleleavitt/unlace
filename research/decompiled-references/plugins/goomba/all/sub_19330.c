void __fastcall sub_19330(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v4; // rbx
  _QWORD *v5; // rdi
  char *v6; // rbp
  __int64 v7; // rdx
  void (__fastcall *hexdsp)(__int64, char *); // rax
  char *v9; // rbx
  _QWORD *v10; // rdi
  char *v11; // rbp
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64, char *); // rax

  v4 = (char *)a1[11];
  *a1 = &off_4D920;
  while ( v4 )
  {
    v5 = *((_QWORD **)v4 + 3);
    v6 = v4;
    sub_18DD0(v5, a2, a3);
    v4 = *((char **)v4 + 2);
    hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v5, a2, v7);
    hexdsp(276, v6 + 32);
    a2 = 48;
    operator delete(v6, 0x30u);
  }
  v9 = (char *)a1[5];
  while ( v9 )
  {
    v10 = *((_QWORD **)v9 + 3);
    v11 = v9;
    sub_19080(v10, a2, a3);
    v9 = *((char **)v9 + 2);
    v13 = (void (__fastcall *)(__int64, char *))get_hexdsp(v10, a2, v12);
    v13(276, v11 + 32);
    a2 = 64;
    operator delete(v11, 0x40u);
  }
  operator delete(a1, 0x78u);
}
