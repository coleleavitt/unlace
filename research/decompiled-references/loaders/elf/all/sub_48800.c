__int64 __fastcall sub_48800(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 i; // r13
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rbx
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v19 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (__int64 *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 24);
        if ( v8 )
        {
          v7[4] = 0;
          qfree(v8);
        }
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v9);
        }
        v3 = *(_QWORD *)(a2 + 8);
        v5 += 56;
      }
    }
    *(_QWORD *)(a2 + 16) = 0;
    qfree(v3);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  if ( *(_BYTE *)(a1 + 248) )
  {
    v10 = *(_QWORD *)(a1 + 120);
    v11 = *(_QWORD *)(a1 + 112);
    v12 = v11;
    if ( v10 << 6 )
    {
      do
      {
        if ( *(_DWORD *)(v12 + 4) == 7 )
        {
          v17 = 0;
          v18 = 0;
          sub_48170((__int64 *)(a1 + 80), &v17, v12);
          sub_3CBE0((__int64 *)a2, &v17);
          if ( v17 )
          {
            *(_QWORD *)&v18 = 0;
            qfree(v17);
          }
          v11 = *(_QWORD *)(a1 + 112);
          v10 = *(_QWORD *)(a1 + 120);
        }
        v12 += 64;
      }
      while ( v12 != v11 + (v10 << 6) );
    }
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v13 = *(_QWORD *)(a1 + 40);
    v14 = *(_DWORD **)(a1 + 32);
    v15 = v14;
    if ( 56 * v13 )
    {
      do
      {
        if ( *v15 == 4 )
        {
          v17 = 0;
          v18 = 0;
          sub_48610(a1, &v17, (__int64)v15);
          sub_3CBE0((__int64 *)a2, &v17);
          if ( v17 )
          {
            *(_QWORD *)&v18 = 0;
            qfree(v17);
          }
          v14 = *(_DWORD **)(a1 + 32);
          v13 = *(_QWORD *)(a1 + 40);
        }
        v15 += 14;
      }
      while ( v15 != &v14[14 * v13] );
    }
  }
  *(_BYTE *)(a2 + 32) = 1;
  return 1;
}
