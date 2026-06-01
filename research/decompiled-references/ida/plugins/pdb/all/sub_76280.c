__int64 __fastcall sub_76280(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbx
  __int64 v9; // r11
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 *v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // r10
  __int64 v20; // r10
  bool v21; // zf
  unsigned __int64 v22; // r11
  __int64 *v23; // rbx
  __m128i *v24; // rsi
  __m128i si128; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // rax

  v2 = a1;
  v3 = a1[5].m128i_u8[0];
  if ( (_BYTE)v3 )
  {
    v4 = v2[2].m128i_i64[1];
    if ( a2 < 0 || v4 < a2 )
    {
LABEL_17:
      v23 = (__int64 *)v2->m128i_i64[1];
      v24 = (__m128i *)*v23;
      if ( (unsigned __int64)v23[2] <= 0x28 )
      {
        v27 = qvector_reserve(v23, v24, 41, 1);
        *v23 = v27;
        v24 = (__m128i *)v27;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_94270);
      v23[1] = 41;
      v24[2].m128i_i64[0] = 0x657A6973206D6165LL;
      *v24 = si128;
      v24[1] = _mm_load_si128((const __m128i *)&xmmword_94280);
      *(_BYTE *)(*v23 + 40) = 0;
      return 0;
    }
    v5 = v2[1].m128i_i64[0];
    v6 = (_QWORD *)v2[1].m128i_i64[1];
    v7 = *(unsigned int *)(v5 + 136);
    v8 = v6[1];
    v9 = *(_QWORD *)(v5 + 128);
    v10 = v8 - 1;
    v11 = (unsigned int)(a2 / v7);
    if ( v4 == a2 && v4 && v8 == v11 )
    {
      v28 = v7 * *(unsigned int *)(*v6 + 4 * v10);
      if ( v28 + v7 - 1 < *(_QWORD *)(v5 + 80) )
      {
        v2[4].m128i_i64[0] = a2;
        v2[4].m128i_i64[1] = -1;
        v2[3] = _mm_unpacklo_epi64((__m128i)(v9 + v7 + v28), (__m128i)(v9 + v7 + v28));
        return v3;
      }
      return 0;
    }
    if ( v11 == v2[4].m128i_i64[1] )
    {
      v29 = v2[4].m128i_i64[0];
      v30 = v2[3].m128i_i64[0];
      if ( v29 < a2 )
        v31 = a2 - v29 + v30;
      else
        v31 = v30 - (v29 - a2);
      v2[3].m128i_i64[0] = v31;
      v2[4].m128i_i64[0] = a2;
      return v3;
    }
    if ( v11 >= v8 )
    {
      v32 = (__int64 *)v2->m128i_i64[1];
      v33 = *v32;
      if ( (unsigned __int64)v32[2] <= 0x27 )
      {
        v35 = qvector_reserve(v32, v33, 40, 1);
        *v32 = v35;
        v33 = v35;
      }
      v34 = _mm_load_si128((const __m128i *)&xmmword_94270);
      v32[1] = 40;
      *(__m128i *)v33 = v34;
      *(__m128i *)(v33 + 16) = _mm_load_si128((const __m128i *)&xmmword_94290);
      *(_QWORD *)(v33 + 31) = 0x65676E6172206567LL;
      *(_BYTE *)(*v32 + 39) = 0;
      return 0;
    }
    v12 = v7 * *(unsigned int *)(*v6 + 4 * v11);
    if ( v12 + v7 - 1 >= *(_QWORD *)(v5 + 80) )
      return 0;
    v13 = v9 + v12;
    v2[4].m128i_i64[0] = a2;
    v14 = v13 + a2 % v7;
    v2[4].m128i_i64[1] = v11;
    v2[3].m128i_i64[0] = v14;
    if ( v10 == v11 )
    {
      v22 = v13 + v7;
      v2[3].m128i_i64[1] = v13 + v7;
      goto LABEL_14;
    }
    v15 = *(unsigned int *)(*v6 + 4 * v11);
    v16 = v2[2].m128i_i64[0];
    v2[3].m128i_i64[1] = 0;
    v17 = *(unsigned __int64 **)v16;
    v18 = *(_QWORD *)v16 + 16LL * *(_QWORD *)(v16 + 8);
    if ( (unsigned __int64 *)v18 != v17 )
    {
      while ( 1 )
      {
        if ( v15 >= *v17 )
        {
          v19 = v17[1];
          if ( v15 < v19 )
            break;
        }
        v17 += 2;
        if ( (unsigned __int64 *)v18 == v17 )
          goto LABEL_26;
      }
      v20 = v7 * v19;
      v21 = v20 + v9 == 0;
      v22 = v20 + v9;
      v2[3].m128i_i64[1] = v22;
      if ( !v21 )
      {
LABEL_14:
        if ( v14 < v22 )
          return v3;
        if ( !under_debugger )
        {
          interr(30548);
          goto LABEL_17;
        }
LABEL_37:
        BUG();
      }
    }
LABEL_26:
    if ( under_debugger )
      goto LABEL_37;
    interr(30634);
  }
  return 0;
}

