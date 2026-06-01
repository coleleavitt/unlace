void __fastcall func(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  __int64 v4; // rax
  void *v5; // rdi
  char *v6; // rbp
  char *v7; // rdi
  __int64 v8; // rsi

  v2 = (_QWORD *)a1[2];
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x18u);
  }
  v4 = a1[1];
  v5 = (void *)*a1;
  v6 = (char *)(a1 + 6);
  memset(v5, 0, 8 * v4);
  v7 = *((char **)v6 - 6);
  v8 = *((_QWORD *)v6 - 5);
  *((_QWORD *)v6 - 3) = 0;
  *((_QWORD *)v6 - 4) = 0;
  if ( v7 != v6 )
    operator delete(v7, 8 * v8);
}

