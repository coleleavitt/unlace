void __fastcall sub_54940(__int64 a1, unsigned __int64 a2)
{
  char *v3; // r12
  __int64 v4; // r10
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r9
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  char *v9; // rax

  if ( a2 == 1 )
  {
    v4 = a1 + 48;
    *(_QWORD *)(a1 + 48) = 0;
    v3 = (char *)(a1 + 48);
  }
  else
  {
    if ( a2 >> 60 )
    {
      if ( a2 >> 61 )
        sub_23D63();
      std::__throw_bad_alloc();
    }
    v3 = (char *)operator new(8 * a2);
    memset(v3, 0, 8 * a2);
    v4 = a1 + 48;
  }
  v5 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  if ( v5 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = v5;
        v5 = (_QWORD *)*v5;
        v8 = *((unsigned int *)v7 + 2) % a2;
        v9 = &v3[8 * v8];
        if ( !*(_QWORD *)v9 )
          break;
        *v7 = **(_QWORD **)v9;
        **(_QWORD **)v9 = v7;
        if ( !v5 )
          goto LABEL_11;
      }
      *v7 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)v9 = a1 + 16;
      if ( *v7 )
        *(_QWORD *)&v3[8 * v6] = v7;
      v6 = v8;
    }
    while ( v5 );
  }
LABEL_11:
  if ( *(_QWORD *)a1 != v4 )
    operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = v3;
}
