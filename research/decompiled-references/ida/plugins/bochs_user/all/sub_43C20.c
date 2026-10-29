void __fastcall sub_43C20(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 j; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 k; // rbp
  _QWORD *v12; // rax

  sub_422B0(*(void **)(a1 + 352));
  if ( *(_QWORD *)(a1 + 304) )
  {
    *(_QWORD *)(a1 + 312) = 0;
    qfree();
  }
  v1 = *(_QWORD *)(a1 + 176);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 184);
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = *(_QWORD *)(a1 + 176);
        }
      }
    }
    *(_QWORD *)(a1 + 184) = 0;
    qfree();
  }
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 160);
    if ( v6 )
    {
      for ( j = 0; j != v6; ++j )
      {
        v8 = (_QWORD *)(v5 + 24 * j);
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v5 = *(_QWORD *)(a1 + 152);
        }
      }
    }
    *(_QWORD *)(a1 + 160) = 0;
    qfree();
  }
  sub_42320(*(void **)(a1 + 120));
  sub_42320(*(void **)(a1 + 72));
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( v10 )
    {
      for ( k = 0; k != v10; ++k )
      {
        v12 = (_QWORD *)(v9 + 24 * k);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
          v9 = *(_QWORD *)(a1 + 32);
        }
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree();
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree();
  }
}

