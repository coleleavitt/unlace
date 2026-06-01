__m128i **__fastcall sub_3A69F0(__m128i **a1, __int64 a2, __int64 a3, double a4, double a5, __m128i a6, double a7)
{
  bool v8; // zf
  __m128i *v10; // rax
  __int64 v11; // rbx
  __m128i *v12; // rbp
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 i; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 j; // rbp
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 k; // r13
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 m; // r13
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39[7]; // [rsp+0h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a3 + 32) == 0;
  v39[1] = __readfsqword(0x28u);
  if ( !v8 && !get_func()
    || (sub_14CDC0(v39, *(_QWORD *)(a3 + 16), (__int64 **)(a3 + 32), nullptr, 0, a4, a5, a6, a7), !v39[0]) )
  {
    *a1 = nullptr;
    return a1;
  }
  v10 = (__m128i *)operator new(0x28u);
  v11 = v39[0];
  v12 = v10;
  if ( !v39[0] )
  {
    v27 = *(_QWORD *)(a2 + 40);
    v12->m128i_i32[2] = 1;
    v12->m128i_i64[0] = (__int64)&off_4E6E50;
    v12[1].m128i_i64[0] = v27;
    v12[1].m128i_i64[1] = 0;
    v12[2].m128i_i32[0] = -1;
    *a1 = v12;
    return a1;
  }
  ++*(_DWORD *)(v39[0] + 104);
  v13 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  v10->m128i_i32[2] = 1;
  v14 = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)v11);
  v10->m128i_i64[0] = (__int64)&off_4E6E50;
  v10[1] = v14;
  ++*(_DWORD *)(v11 + 104);
  v10[2].m128i_i32[0] = -1;
  v8 = (*(_DWORD *)(v11 + 104))-- == 1;
  if ( !v8 )
  {
    *a1 = v10;
LABEL_7:
    v8 = (*(_DWORD *)(v11 + 104))-- == 1;
    if ( v8 )
    {
      sub_258970((__int64 *)v11);
      v15 = *(_QWORD *)(v11 + 184);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v11 + 192);
        if ( v16 )
        {
          for ( i = 0; i != v16; ++i )
          {
            v18 = (__int64 *)(v15 + 24 * i);
            v19 = *v18;
            if ( *v18 )
            {
              v18[1] = 0;
              qfree(v19);
              v15 = *(_QWORD *)(v11 + 184);
            }
          }
        }
        *(_QWORD *)(v11 + 192) = 0;
        qfree(v15);
      }
      v20 = *(_QWORD *)(v11 + 160);
      if ( v20 )
      {
        *(_QWORD *)(v11 + 168) = 0;
        qfree(v20);
      }
      v21 = *(_QWORD *)(v11 + 128);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v11 + 136);
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = (__int64 *)(v21 + 32 * j);
            v25 = *v24;
            if ( *v24 )
            {
              v24[1] = 0;
              qfree(v25);
              v21 = *(_QWORD *)(v11 + 128);
            }
          }
        }
        *(_QWORD *)(v11 + 136) = 0;
        qfree(v21);
      }
      sub_255050(v11 + 16, *(double *)v14.m128i_i64);
      j__qfree(v11);
    }
    return a1;
  }
  sub_258970((__int64 *)v11);
  v28 = *(_QWORD *)(v11 + 184);
  if ( v28 )
  {
    v29 = *(_QWORD *)(v11 + 192);
    if ( v29 )
    {
      for ( k = 0; k != v29; ++k )
      {
        v31 = (__int64 *)(v28 + 24 * k);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32);
          v28 = *(_QWORD *)(v11 + 184);
        }
      }
    }
    *(_QWORD *)(v11 + 192) = 0;
    qfree(v28);
  }
  v33 = *(_QWORD *)(v11 + 160);
  if ( v33 )
  {
    *(_QWORD *)(v11 + 168) = 0;
    qfree(v33);
  }
  v34 = *(_QWORD *)(v11 + 128);
  if ( v34 )
  {
    v35 = *(_QWORD *)(v11 + 136);
    if ( v35 )
    {
      for ( m = 0; m != v35; ++m )
      {
        v37 = (__int64 *)(v34 + 32 * m);
        v38 = *v37;
        if ( *v37 )
        {
          v37[1] = 0;
          qfree(v38);
          v34 = *(_QWORD *)(v11 + 128);
        }
      }
    }
    *(_QWORD *)(v11 + 136) = 0;
    qfree(v34);
  }
  sub_255050(v11 + 16, *(double *)v14.m128i_i64);
  j__qfree(v11);
  v11 = v39[0];
  *a1 = v12;
  if ( v11 )
    goto LABEL_7;
  return a1;
}

