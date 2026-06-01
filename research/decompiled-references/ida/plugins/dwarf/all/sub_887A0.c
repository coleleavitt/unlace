__int64 __fastcall sub_887A0(__int64 a1, __int16 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  unsigned __int64 *v5; // rbx
  __m128i *v6; // r14
  unsigned __int64 v7; // r12
  _WORD *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  __m128i si128; // xmm3
  __int64 v15; // rax
  _WORD *v16; // rdx
  __int16 v17; // ax
  __int64 result; // rax
  _WORD *v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rsi
  int v22; // eax
  size_t v23; // rdx
  __int64 v24; // rdi
  void *v25; // rax
  size_t v26; // rdx
  __int64 v27; // rsi
  int v28; // [rsp+4h] [rbp-6Ch]
  size_t n[2]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v30; // [rsp+18h] [rbp-58h]
  __int64 v31; // [rsp+20h] [rbp-50h]
  __int64 v32; // [rsp+28h] [rbp-48h]
  __int64 v33; // [rsp+30h] [rbp-40h]

  *(_QWORD *)a1 = &off_C8D68;
  v3 = (_QWORD *)(a1 + 16);
  v30 = a1;
  *(_WORD *)(a1 + 8) = a2;
  v32 = a1 + 16;
  v33 = a1 + 2416;
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != (_QWORD *)(a1 + 2416) );
  v4 = v30;
  v28 = 0;
  v5 = (unsigned __int64 *)(a3 + 8);
  *(_QWORD *)(v30 + 2416) = -1;
  v6 = (__m128i *)(v4 + 24);
  do
  {
    v7 = *v5;
    v8 = nullptr;
    if ( *v5 )
    {
      v8 = (_WORD *)qalloc_or_throw(32 * v7);
      v19 = v8;
      v20 = 0;
      do
      {
        v21 = *(v5 - 1) + 32 * v20;
        *v19 = *(_WORD *)v21;
        v19[1] = *(_WORD *)(v21 + 2);
        v22 = *(_DWORD *)(v21 + 4);
        *((_QWORD *)v19 + 1) = 0;
        *((_DWORD *)v19 + 1) = v22;
        *((_OWORD *)v19 + 1) = 0;
        v23 = *(_QWORD *)(v21 + 16);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v21 + 16);
          v31 = v21;
          n[0] = v23;
          v25 = (void *)qalloc_or_throw(v24);
          v26 = n[0];
          v27 = v31;
          *((_QWORD *)v19 + 1) = v25;
          *((_QWORD *)v19 + 3) = v26;
          memcpy(v25, *(const void **)(v27 + 8), v26);
          *((_QWORD *)v19 + 2) = n[0];
        }
        ++v20;
        v19 += 16;
      }
      while ( v7 != v20 );
    }
    v9 = v6[-1].m128i_i64[1];
    *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    if ( v9 )
    {
      v10 = v6->m128i_i64[0];
      if ( v6->m128i_i64[0] )
      {
        v11 = 0;
        do
        {
          v12 = v9 + 32 * v11;
          v13 = *(_QWORD *)(v12 + 8);
          if ( v13 )
          {
            *(_QWORD *)(v12 + 16) = 0;
            qfree(v13);
            v9 = v6[-1].m128i_i64[1];
          }
          ++v11;
        }
        while ( v10 != v11 );
      }
      v6->m128i_i64[0] = 0;
      qfree(v9);
    }
    si128 = _mm_load_si128((const __m128i *)n);
    v15 = v30;
    v6[-1].m128i_i64[1] = (__int64)v8;
    *v6 = si128;
    v16 = &v8[16 * v6->m128i_i64[0]];
    if ( v8 != v16 )
    {
      while ( *v8 != 0xFFFF && *(_WORD *)(v15 + 8) != *v8 )
      {
        v8 += 16;
        if ( v16 == v8 )
          goto LABEL_26;
      }
      if ( v8 )
      {
        v17 = v8[1];
        if ( (v17 & 1) != 0 )
        {
          if ( *(_DWORD *)(v30 + 2420) != -1 )
          {
            sub_1E060((__int64)"More than 1 register has the 'STACK_POINTER' flag set.", 0.0);
            v17 = v8[1];
          }
          *(_DWORD *)(v30 + 2420) = v28;
        }
        if ( (v17 & 2) != 0 )
        {
          if ( *(_DWORD *)(v30 + 2416) != -1 )
            sub_1E060((__int64)"More than 1 register has the 'STACK_FRAME' flag set.", 0.0);
          *(_DWORD *)(v30 + 2416) = v28;
        }
      }
    }
LABEL_26:
    result = (unsigned int)++v28;
    v5 += 3;
    v6 = (__m128i *)((char *)v6 + 24);
  }
  while ( v28 != 100 );
  return result;
}

