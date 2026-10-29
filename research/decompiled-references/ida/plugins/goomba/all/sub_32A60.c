void __fastcall sub_32A60(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r12
  void *v3; // rdi
  _QWORD *v4; // r13
  __int64 v5; // rdx
  void (__fastcall *hexdsp)(__int64, _QWORD *); // rax
  __int64 v7; // rsi
  char *v8; // rbx
  char *v9; // rdi
  char *v10; // rbp
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64, char *); // rax

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = (void *)v2[3];
      v4 = v2;
      sub_32A60(v3);
      v2 = (_QWORD *)v2[2];
      hexdsp = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v3, a2, v5);
      v7 = (__int64)(v4 + 11);
      hexdsp(276, v4 + 11);
      v8 = (char *)v4[7];
      while ( v8 )
      {
        v9 = *((char **)v8 + 3);
        v10 = v8;
        sub_32480(v9, v7);
        v8 = *((char **)v8 + 2);
        v12 = (void (__fastcall *)(__int64, char *))get_hexdsp(v9, v7, v11);
        v12(276, v10 + 32);
        v7 = 48;
        operator delete(v10, 0x30u);
      }
      a2 = 112;
      operator delete(v4, 0x70u);
    }
    while ( v2 );
  }
}

