void __fastcall sub_10240(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  void (__fastcall *hexdsp)(__int64, _QWORD *); // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (void *)v1[3];
      v3 = v1;
      sub_10240(v2);
      v5 = v1[8];
      v1 = (_QWORD *)v1[2];
      v3[6] = &off_4D850;
      if ( v5 )
      {
        v2 = *(void **)(v3[7] + 8LL);
        Z3_dec_ref(v2);
      }
      hexdsp = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v2, v5, v4);
      hexdsp(276, v3 + 4);
      operator delete(v3, 0x48u);
    }
    while ( v1 );
  }
}
