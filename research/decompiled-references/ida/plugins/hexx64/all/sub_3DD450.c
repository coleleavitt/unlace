__int64 __fastcall sub_3DD450(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 i; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 j; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi

  v5 = *(_QWORD *)(a2 + 64);
  if ( v5 && (unsigned int)(*(_DWORD *)(v5 + 60) - 1) >= 2 )
    v5 = 0;
  v6 = *(_QWORD *)(v5 + 64);
  v9 = sub_3D2ED0(**(_QWORD **)(a1 + 16), v6);
  if ( !v9 )
    return 0;
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v9;
  v10 = j__qalloc_or_throw(224, v6, v7, v8);
  sub_256FC0((__int64 *)v10, v9);
  sub_2523C0(v10, v9, v11, v12);
  v15 = *(_QWORD *)(a3 + 56);
  if ( v15 == -1 )
    v16 = 0;
  else
    v16 = sub_256E60(v10 + 16, v15);
  sub_3CA670(v10, v16, v13, v14);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v10);
      v18 = *(_QWORD *)(v10 + 184);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v10 + 192);
        if ( v19 )
        {
          for ( i = 0; i != v19; ++i )
          {
            v21 = (__int64 *)(v18 + 24 * i);
            v22 = *v21;
            if ( *v21 )
            {
              v21[1] = 0;
              qfree(v22);
              v18 = *(_QWORD *)(v10 + 184);
            }
          }
        }
        *(_QWORD *)(v10 + 192) = 0;
        qfree(v18);
      }
      v23 = *(_QWORD *)(v10 + 160);
      if ( v23 )
      {
        *(_QWORD *)(v10 + 168) = 0;
        qfree(v23);
      }
      v24 = *(_QWORD *)(v10 + 128);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v10 + 136);
        if ( v25 )
        {
          for ( j = 0; j != v25; ++j )
          {
            v27 = (__int64 *)(v24 + 32 * j);
            v28 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              qfree(v28);
              v24 = *(_QWORD *)(v10 + 128);
            }
          }
        }
        *(_QWORD *)(v10 + 136) = 0;
        qfree(v24);
      }
      sub_255050(v10 + 16, a4);
      j__qfree(v10);
    }
  }
  return 1;
}

