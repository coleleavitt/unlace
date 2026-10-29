void __fastcall sub_19730(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  _QWORD *v4; // rdi
  char *v5; // rbp
  __int64 v6; // rdx
  void (__fastcall *hexdsp)(__int64, char *); // rax

  v3 = (char *)a1[3];
  *a1 = &off_4D8F8;
  while ( v3 )
  {
    v4 = *((_QWORD **)v3 + 3);
    v5 = v3;
    sub_19480(v4, a2, a3);
    v3 = *((char **)v3 + 2);
    hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v4, a2, v6);
    hexdsp(276, v5 + 32);
    a2 = 64;
    operator delete(v5, 0x40u);
  }
}

