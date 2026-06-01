__int64 __fastcall sub_13150(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rax
  int v13; // edx

  sub_130C0(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  v3 = *(_QWORD *)(a1 + 664);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( *(_QWORD *)(a1 + 672) )
    {
      *(_QWORD *)(a1 + 680) = 0;
      qfree();
      *(_QWORD *)(a1 + 672) = 0;
      *(_QWORD *)(a1 + 688) = 0;
    }
    v4 = *(_QWORD *)(a1 + 696);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 704);
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = (_QWORD *)(v4 + 24 * i);
          if ( *v7 )
          {
            v7[1] = 0;
            qfree();
            v4 = *(_QWORD *)(a1 + 696);
          }
        }
      }
      *(_QWORD *)(a1 + 704) = 0;
      qfree();
      *(_QWORD *)(a1 + 696) = 0;
      *(_QWORD *)(a1 + 712) = 0;
    }
    if ( *(_QWORD *)(a1 + 720) )
    {
      *(_QWORD *)(a1 + 728) = 0;
      qfree();
      *(_QWORD *)(a1 + 720) = 0;
      *(_QWORD *)(a1 + 736) = 0;
    }
    v8 = *(_QWORD *)(a1 + 744);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 752);
      if ( v9 )
      {
        for ( j = 0; j != v9; ++j )
        {
          v11 = (_QWORD *)(v8 + 24 * j);
          if ( *v11 )
          {
            v11[1] = 0;
            qfree();
            v8 = *(_QWORD *)(a1 + 744);
          }
        }
      }
      *(_QWORD *)(a1 + 752) = 0;
      qfree();
      *(_QWORD *)(a1 + 744) = 0;
      *(_QWORD *)(a1 + 760) = 0;
    }
  }
  v12 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 664) = 0;
  (*(void (__fastcall **)(__int64))(v12 + 592))(a1);
  if ( *(_DWORD *)(a1 + 780) == -1 || *(_DWORD *)(a1 + 784) == -1 )
    goto LABEL_28;
  v13 = *(_QWORD *)(a1 + 680);
  if ( !*(_QWORD *)(a1 + 680) )
    v13 = *(_DWORD *)(a1 + 776);
  if ( v13 <= 0 )
  {
LABEL_28:
    if ( under_debugger )
      BUG();
    interr();
    return sub_130C0(30016);
  }
  else
  {
    sub_EA20(1);
    return 1;
  }
}

