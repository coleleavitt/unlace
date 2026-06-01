const __m128i **__fastcall sub_18C740(
        unsigned __int64 **a1,
        __m128i **a2,
        unsigned __int8 *a3,
        _QWORD *a4,
        __int64 *a5,
        double a6)
{
  const __m128i **v7; // r12
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v12; // rax
  int v13; // r15d
  __int64 v14; // rax
  unsigned __int64 *v15; // rdx
  const __m128i **v16; // rax
  const __m128i **v17; // r8
  const __m128i *v18; // rbx
  __m128i *v19; // rax
  unsigned int v20; // ebp
  __m128i *v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  __int32 v27; // r11d
  __int64 v28; // rax
  __int64 v29; // rdx
  const __m128i *v30; // rcx
  const __m128i *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // xmm2_8
  __m128i v34; // xmm1
  __int32 v35; // r11d
  __m128i v36; // xmm0
  const __m128i *v38; // rdx
  const __m128i *v39; // rcx
  const __m128i **v43; // [rsp+28h] [rbp-80h]
  __m128i v44; // [rsp+30h] [rbp-78h] BYREF
  const __m128i *v45; // [rsp+40h] [rbp-68h]
  const __m128i *v46; // [rsp+48h] [rbp-60h]
  const __m128i *v47; // [rsp+50h] [rbp-58h] BYREF
  __int128 v48; // [rsp+58h] [rbp-50h]
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]

  v7 = (const __m128i **)a2;
  v49 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( sub_64930(a5, *((_DWORD *)*a1 + 18))
      || (unsigned __int8)sub_64780(a1 + 11, a4)
      || (unsigned __int8)sub_318470(a1 + 13, (__int64)(a4 + 2)) )
    {
      return nullptr;
    }
    v9 = a1[1];
    if ( v9 )
    {
      v10 = (unsigned __int64 *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v10;
      if ( !v10 )
        break;
      if ( (*(_BYTE *)v10 & 2) == 0 )
      {
        while ( sub_11DA40(a3, (unsigned __int8 *)v11[3], a6) < 0 )
        {
          v11 = (unsigned __int64 *)v11[1];
LABEL_12:
          if ( (*(_BYTE *)v11 & 2) != 0 )
            goto LABEL_13;
        }
        if ( sub_11DA40((unsigned __int8 *)v11[3], a3, a6) < 0 )
        {
          v11 = (unsigned __int64 *)v11[2];
          goto LABEL_12;
        }
        if ( a1[1] != v11 )
          break;
      }
    }
LABEL_13:
    sub_64190(a5, *((_DWORD *)*a1 + 18), a6);
    v12 = a1[4];
    if ( v12 != (unsigned __int64 *)&byte_1 )
    {
      if ( !v12 )
        goto LABEL_33;
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = a1[3];
        v47 = nullptr;
        v48 = 0;
        v16 = sub_18C740((_QWORD *)v15[v14], &v47, a3, a4, a5);
        v17 = v16;
        if ( v16 )
        {
          v18 = *v16;
          if ( 32LL * (_QWORD)v16[1] )
            break;
        }
LABEL_30:
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree((__int64)v47);
        }
        v14 = ++v13;
        if ( v13 >= (unsigned __int64)a1[4] )
          goto LABEL_33;
      }
      while ( 2 )
      {
        v19 = (__m128i *)*v7;
        v20 = v18[1].m128i_u32[1];
        v21 = (__m128i *)&(*v7)[2 * (_QWORD)v7[1]];
        if ( *v7 == v21 )
        {
LABEL_35:
          v22 = v18->m128i_i64[0];
          goto LABEL_36;
        }
        while ( v20 != v19[1].m128i_i32[1]
             || v18[1].m128i_i32[2] != v19[1].m128i_i32[2]
             || v18[1].m128i_i32[0] != v19[1].m128i_i32[0] )
        {
          v19 += 2;
          if ( v21 == v19 )
            goto LABEL_35;
        }
        v22 = v18->m128i_i64[0];
        if ( v21 == v19 )
        {
LABEL_36:
          v24 = (unsigned __int64)v7[1]->m128i_u64 + 1;
          v25 = _mm_loadl_epi64((const __m128i *)&v18->m128i_u64[1]);
          v26 = _mm_cvtsi32_si128(v18[1].m128i_u32[0]);
          v27 = v18[1].m128i_i32[2];
          if ( (unsigned __int64)v7[2] < v24 )
          {
            v45 = v7[2];
            v43 = v17;
            v44.m128i_i64[1] = __PAIR64__(v27, _mm_cvtsi128_si32(v26));
            v44.m128i_i64[0] = v25.m128i_i64[0];
            v28 = qvector_reserve((__int64)v7, 0, v24, 32);
            v29 = v28;
            v30 = v7[2];
            v31 = *v7;
            v32 = (__int64)&v7[1][-1].m128i_i64[1] + 7;
            v7[2] = v45;
            v33 = v44.m128i_i64[0];
            v34 = _mm_cvtsi32_si128(v44.m128i_u32[2]);
            v35 = v44.m128i_i32[3];
            if ( v32 >= 0 )
            {
              do
              {
                v36 = _mm_loadu_si128(v31);
                v28 += 32;
                v31 += 2;
                *(__m128i *)(v28 - 32) = v36;
                *(__m128i *)(v28 - 16) = _mm_loadu_si128(v31 - 1);
              }
              while ( v32-- != 0 );
              v31 = *v7;
            }
            v46 = v30;
            v45 = (const __m128i *)v29;
            v44.m128i_i64[1] = __PAIR64__(v35, _mm_cvtsi128_si32(v34));
            v44.m128i_i64[0] = v33;
            qfree((__int64)v31);
            v38 = v45;
            v27 = v44.m128i_i32[3];
            v26 = _mm_cvtsi32_si128(v44.m128i_u32[2]);
            v25 = _mm_loadl_epi64(&v44);
            v17 = v43;
            v7[2] = v46;
            v39 = v7[1];
            *v7 = v38;
            v21 = (__m128i *)&v38[2 * (_QWORD)v39];
          }
          v21[1].m128i_i32[2] = v27;
          *v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, v25);
          v21[1].m128i_i64[0] = _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v20)).m128i_u64[0];
          v7[1] = (const __m128i *)((char *)v7[1] + 1);
        }
        else
        {
          if ( v19->m128i_i64[0] > v22 )
            v19->m128i_i64[0] = v22;
          v23 = v18->m128i_i64[1];
          if ( v23 > v19->m128i_i64[1] )
            v19->m128i_i64[1] = v23;
        }
        v18 += 2;
        if ( v18 == &(*v17)[2 * (_QWORD)v17[1]] )
          goto LABEL_30;
        continue;
      }
    }
    a1 = (unsigned __int64 **)*a1[3];
  }
  sub_18BE80(a2, (__int64)(v11 + 4));
LABEL_33:
  if ( !v7[1] )
    return nullptr;
  return v7;
}

