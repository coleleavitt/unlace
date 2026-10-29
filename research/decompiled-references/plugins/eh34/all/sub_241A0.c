__int64 *__fastcall sub_241A0(__int64 a1, _QWORD *m128i_i64, __int64 a3)
{
  __int64 *v3; // r14
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // r12
  unsigned __int8 (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD); // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  __m128i v13; // xmm0
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __m128i *v16; // r12
  __m128 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rdx
  __m128i v23; // xmm0
  bool v24; // cf
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  unsigned __int64 v30; // rcx
  __m128i v32; // [rsp+8h] [rbp-88h] BYREF
  __m128i *v33; // [rsp+18h] [rbp-78h]
  unsigned __int64 v34; // [rsp+20h] [rbp-70h]
  __m128i v35; // [rsp+28h] [rbp-68h] BYREF
  __m128i v36; // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-40h]

  v3 = (__int64 *)a1;
  v37 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = m128i_i64[2];
  v33 = &v35;
  if ( *(int *)(v4 + 96) > 0 )
  {
    v5 = m128i_i64;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = (_QWORD *)v5[3];
        hexdsp = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(a1, m128i_i64);
        m128i_i64 = v7;
        a1 = 213;
        if ( hexdsp(213, v7, (unsigned int)v6) )
        {
          v9 = (v6 << 6) + *(_QWORD *)(v5[2] + 72LL);
          v10 = (**(__int64 (__fastcall ***)(__int64, _QWORD, _QWORD))(*v5 + 16LL))(
                  *v5 + 16LL,
                  *(_QWORD *)(v9 + 8),
                  *(_QWORD *)v9);
          m128i_i64 = (_QWORD *)a3;
          a1 = (__int64)v5;
          if ( sub_23FC0(v5, a3, v6, v10) )
            break;
        }
        if ( *(_DWORD *)(v5[2] + 96LL) <= (int)++v6 )
          return v3;
      }
      v11 = v3[1];
      v12 = *v3;
      v35.m128i_i32[2] = v6;
      m128i_i64 = v33->m128i_i64;
      v13 = (__m128i)_mm_loadh_ps((const double *)(v9 + 8));
      v35.m128i_i64[0] = v9;
      v14 = v3[2];
      v36 = v13;
      v15 = v11 + 1;
      if ( (unsigned __int64)v33 >= v12 && (unsigned __int64)v33 < v12 + 32 * v14 )
      {
        if ( v14 < v15 )
        {
          m128i_i64 = nullptr;
          v34 = v14;
          v32 = v13;
          v25 = qvector_reserve(v3, 0, v15, 32);
          v12 = v25;
          v26 = v3[2];
          a1 = *v3;
          v27 = v3[1] - 1;
          v3[2] = v34;
          v28 = _mm_load_si128(&v32);
          if ( v27 >= 0 )
          {
            do
            {
              v29 = _mm_loadu_si128((const __m128i *)a1);
              v25 += 32;
              a1 += 32;
              *(__m128i *)(v25 - 32) = v29;
              *(__m128i *)(v25 - 16) = _mm_loadu_si128((const __m128i *)(a1 - 16));
              v24 = v27-- == 0;
            }
            while ( !v24 );
            a1 = *v3;
          }
          v34 = v26;
          v32 = v28;
          qfree(a1);
          v30 = v34;
          v11 = v3[1];
          *v3 = v12;
          v13 = _mm_load_si128(&v32);
          v3[2] = v30;
        }
        v18 = (__m128 *)(v12 + 32 * v11);
        v18->m128_u64[0] = v9;
        v18->m128_i32[2] = v6;
        v18[1] = (__m128)v13;
      }
      else
      {
        if ( v14 < v15 )
        {
          m128i_i64 = nullptr;
          v32.m128i_i64[0] = v14;
          v19 = qvector_reserve(v3, 0, v15, 32);
          v20 = v3[1];
          v12 = v19;
          v21 = v3[2];
          a1 = *v3;
          v3[2] = v32.m128i_i64[0];
          v22 = v20 - 1;
          if ( v22 >= 0 )
          {
            do
            {
              v23 = _mm_loadu_si128((const __m128i *)a1);
              v19 += 32;
              a1 += 32;
              *(__m128i *)(v19 - 32) = v23;
              *(__m128i *)(v19 - 16) = _mm_loadu_si128((const __m128i *)(a1 - 16));
              v24 = v22-- == 0;
            }
            while ( !v24 );
            a1 = *v3;
          }
          qfree(a1);
          *v3 = v12;
          v11 = v3[1];
          v3[2] = v21;
        }
        v16 = (__m128i *)(32 * v11 + v12);
        *v16 = _mm_load_si128(&v35);
        v16[1] = _mm_load_si128(&v36);
      }
      ++v3[1];
      ++v6;
    }
    while ( *(_DWORD *)(v5[2] + 96LL) > (int)v6 );
  }
  return v3;
}
