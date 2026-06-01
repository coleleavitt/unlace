__m128i **__fastcall sub_3A6F30(__m128i **a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __m128i *v5; // rax
  unsigned __int64 v6; // rbx
  __m128i *v7; // rbp
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 i; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 j; // rbp
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 k; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 m; // r13
  _QWORD *v26; // rax
  _QWORD v27[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a3 + 32) == 0;
  v27[1] = __readfsqword(0x28u);
  if ( !v3 && !get_func() || (sub_14C800(v27, *(_QWORD *)(a3 + 16), (_QWORD *)(a3 + 32), nullptr, 0), !v27[0]) )
  {
    *a1 = nullptr;
    return a1;
  }
  v5 = (__m128i *)operator new(0x28u);
  v6 = v27[0];
  v7 = v5;
  if ( !v27[0] )
  {
    v18 = *(_QWORD *)(a2 + 40);
    v7->m128i_i32[2] = 1;
    v7->m128i_i64[0] = (__int64)&off_4E1510;
    v7[1].m128i_i64[0] = v18;
    v7[1].m128i_i64[1] = 0;
    v7[2].m128i_i32[0] = -1;
    *a1 = v7;
    return a1;
  }
  ++*(_DWORD *)(v27[0] + 104LL);
  v8 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  v5->m128i_i32[2] = 1;
  v5->m128i_i64[0] = (__int64)&off_4E1510;
  v5[1] = _mm_unpacklo_epi64(v8, (__m128i)v6);
  ++*(_DWORD *)(v6 + 104);
  v5[2].m128i_i32[0] = -1;
  v3 = (*(_DWORD *)(v6 + 104))-- == 1;
  if ( !v3 )
  {
    *a1 = v5;
LABEL_7:
    v3 = (*(_DWORD *)(v6 + 104))-- == 1;
    if ( v3 )
    {
      sub_258D30((__int64 *)v6);
      v9 = *(_QWORD *)(v6 + 184);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v6 + 192);
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = (_QWORD *)(v9 + 24 * i);
            if ( *v12 )
            {
              v12[1] = 0;
              qfree();
              v9 = *(_QWORD *)(v6 + 184);
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
      v13 = *(_QWORD *)(v6 + 128);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v6 + 136);
        if ( v14 )
        {
          for ( j = 0; j != v14; ++j )
          {
            v16 = (_QWORD *)(v13 + 32 * j);
            if ( *v16 )
            {
              v16[1] = 0;
              qfree();
              v13 = *(_QWORD *)(v6 + 128);
            }
          }
        }
        *(_QWORD *)(v6 + 136) = 0;
        qfree();
      }
      sub_255410(v6 + 16);
      j__qfree();
    }
    return a1;
  }
  sub_258D30((__int64 *)v6);
  v19 = *(_QWORD *)(v6 + 184);
  if ( v19 )
  {
    v20 = *(_QWORD *)(v6 + 192);
    if ( v20 )
    {
      for ( k = 0; k != v20; ++k )
      {
        v22 = (_QWORD *)(v19 + 24 * k);
        if ( *v22 )
        {
          v22[1] = 0;
          qfree();
          v19 = *(_QWORD *)(v6 + 184);
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
  v23 = *(_QWORD *)(v6 + 128);
  if ( v23 )
  {
    v24 = *(_QWORD *)(v6 + 136);
    if ( v24 )
    {
      for ( m = 0; m != v24; ++m )
      {
        v26 = (_QWORD *)(v23 + 32 * m);
        if ( *v26 )
        {
          v26[1] = 0;
          qfree();
          v23 = *(_QWORD *)(v6 + 128);
        }
      }
    }
    *(_QWORD *)(v6 + 136) = 0;
    qfree();
  }
  sub_255410(v6 + 16);
  j__qfree();
  v6 = v27[0];
  *a1 = v7;
  if ( v6 )
    goto LABEL_7;
  return a1;
}

