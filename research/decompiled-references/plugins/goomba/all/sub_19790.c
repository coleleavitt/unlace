void __fastcall sub_19790(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v4; // rbx
  _QWORD *v5; // rdi
  char *v6; // rbp
  __int64 v7; // rdx
  void (__fastcall *hexdsp)(__int64, char *); // rax

  v4 = (char *)a1[3];
  *a1 = &off_4D8F8;
  while ( v4 )
  {
    v5 = *((_QWORD **)v4 + 3);
    v6 = v4;
    sub_19480(v5, a2, a3);
    v4 = *((char **)v4 + 2);
    hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v5, a2, v7);
    hexdsp(276, v6 + 32);
    a2 = 64;
    operator delete(v6, 0x40u);
  }
  operator delete(a1, 0x38u);
}
