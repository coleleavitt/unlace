_QWORD *__fastcall sub_3D1130(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        _DWORD *a5,
        double a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 *v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 i; // r12
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 j; // r12
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v25; // [rsp+0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+8h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+10h] [rbp-50h] BYREF
  __int64 v28; // [rsp+18h] [rbp-48h]
  __int128 v29; // [rsp+20h] [rbp-40h]
  unsigned __int64 v30; // [rsp+38h] [rbp-28h]

  v30 = __readfsqword(0x28u);
  v27 = a3;
  v28 = 0;
  v25 = 0;
  v29 = 0;
  sub_14BF70(&v26, a2, &v27, a5, &v25, 0, 0.0, a7, a8, a9, 67, a4);
  v10 = (__int64 *)v26;
  if ( v26 )
  {
    if ( (*(_DWORD *)(v26 + 104))-- == 1 )
    {
      sub_258970(v10);
      v12 = v10[23];
      if ( v12 )
      {
        v13 = v10[24];
        if ( v13 )
        {
          for ( i = 0; i != v13; ++i )
          {
            v15 = (__int64 *)(v12 + 24 * i);
            v16 = *v15;
            if ( *v15 )
            {
              v15[1] = 0;
              qfree(v16);
              v12 = v10[23];
            }
          }
        }
        v10[24] = 0;
        qfree(v12);
      }
      v17 = v10[20];
      if ( v17 )
      {
        v10[21] = 0;
        qfree(v17);
      }
      v18 = v10[16];
      if ( v18 )
      {
        v19 = v10[17];
        if ( v19 )
        {
          for ( j = 0; j != v19; ++j )
          {
            v21 = (__int64 *)(v18 + 32 * j);
            v22 = *v21;
            if ( *v21 )
            {
              v21[1] = 0;
              qfree(v22);
              v18 = v10[16];
            }
          }
        }
        v10[17] = 0;
        qfree(v18);
      }
      sub_255050((__int64)(v10 + 2), 0.0);
      j__qfree((__int64)v10);
    }
  }
  v23 = v28;
  *a1 = v25;
  if ( v23 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v23);
  }
  return a1;
}

