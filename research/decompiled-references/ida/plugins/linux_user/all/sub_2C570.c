__int64 __fastcall sub_2C570(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 i; // r13
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // rbx
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v17 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v3 + v5);
        if ( *(_QWORD *)(v3 + v5 + 24) )
        {
          v7[4] = 0;
          qfree();
        }
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
        }
        v3 = *(_QWORD *)(a2 + 8);
        v5 += 56;
      }
    }
    *(_QWORD *)(a2 + 16) = 0;
    qfree();
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  if ( *(_BYTE *)(a1 + 248) )
  {
    v8 = *(_QWORD *)(a1 + 120);
    v9 = *(_QWORD *)(a1 + 112);
    v10 = v9;
    if ( v8 << 6 )
    {
      do
      {
        if ( *(_DWORD *)(v10 + 4) == 7 )
        {
          v15 = 0;
          v16 = 0;
          sub_2BFA0((__int64 *)(a1 + 80), &v15, v10);
          sub_29500((__int64 *)a2, &v15);
          if ( v15 )
          {
            *(_QWORD *)&v16 = 0;
            qfree();
          }
          v9 = *(_QWORD *)(a1 + 112);
          v8 = *(_QWORD *)(a1 + 120);
        }
        v10 += 64;
      }
      while ( v10 != v9 + (v8 << 6) );
    }
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(_DWORD **)(a1 + 32);
    v13 = v12;
    if ( 56 * v11 )
    {
      do
      {
        if ( *v13 == 4 )
        {
          v15 = 0;
          v16 = 0;
          sub_2C380(a1, &v15, (__int64)v13);
          sub_29500((__int64 *)a2, &v15);
          if ( v15 )
          {
            *(_QWORD *)&v16 = 0;
            qfree();
          }
          v12 = *(_DWORD **)(a1 + 32);
          v11 = *(_QWORD *)(a1 + 40);
        }
        v13 += 14;
      }
      while ( v13 != &v12[14 * v11] );
    }
  }
  *(_BYTE *)(a2 + 32) = 1;
  return 1;
}

