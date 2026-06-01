__int64 __fastcall sub_3D5B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 i; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 j; // rbp
  _QWORD *v17; // rax

  v4 = *(_QWORD *)(a2 + 64);
  if ( v4 && (unsigned int)(*(_DWORD *)(v4 + 60) - 1) >= 2 )
    v4 = 0;
  v5 = sub_3CB5D0(**(_QWORD **)(a1 + 16), *(_QWORD *)(v4 + 64));
  if ( !v5 )
    return 0;
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v5;
  v6 = j__qalloc_or_throw();
  sub_24FC40((__int64 *)v6, v5);
  sub_24B040(v6);
  v7 = *(_QWORD *)(a3 + 56);
  if ( v7 == -1 )
    v8 = 0;
  else
    v8 = sub_24FAE0(v6 + 16, v7);
  sub_3C2D70(v6, v8);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 104))-- == 1 )
    {
      sub_2515F0((__int64 *)v6);
      v10 = *(_QWORD *)(v6 + 184);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v6 + 192);
        if ( v11 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = (_QWORD *)(v10 + 24 * i);
            if ( *v13 )
            {
              v13[1] = 0;
              qfree();
              v10 = *(_QWORD *)(v6 + 184);
            }
          }
        }
        *(_QWORD *)(v6 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v6 + 160) )
      {
        *(_QWORD *)(v6 + 168) = 0;
        qfree();
      }
      v14 = *(_QWORD *)(v6 + 128);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v6 + 136);
        if ( v15 )
        {
          for ( j = 0; j != v15; ++j )
          {
            v17 = (_QWORD *)(v14 + 32 * j);
            if ( *v17 )
            {
              v17[1] = 0;
              qfree();
              v14 = *(_QWORD *)(v6 + 128);
            }
          }
        }
        *(_QWORD *)(v6 + 136) = 0;
        qfree();
      }
      sub_24DCD0(v6 + 16);
      j__qfree();
    }
  }
  return 1;
}

