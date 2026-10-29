__m128i *__fastcall sub_123A40(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i *result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  size_t v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rbp
  void *v28; // rax
  const __m128i *v29; // roff
  __int64 v30; // rax
  unsigned __int8 *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const __m128i *v36; // rdx
  __m128i *v37; // r13
  __int64 v38; // r14
  __int8 *v39; // r13
  const void **v40; // rbp
  __int64 v41; // r8
  void *v42; // rax
  void *v43; // rax
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 n; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]

  *(_DWORD *)(a1 + 4) = *((_DWORD *)a2 + 1);
  v4 = *a2;
  *(_BYTE *)a1 = v4;
  *(_BYTE *)(a1 + 1) = a2[1];
  v5 = *((unsigned __int16 *)a2 + 1);
  *(_WORD *)(a1 + 2) = v5;
  switch ( v4 )
  {
    case 2LL:
      result = (__m128i *)j__qalloc_or_throw(32, (__int64)a2, v5, a4);
      v36 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v36);
      result[1] = _mm_loadu_si128(v36 + 1);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 3LL:
    case 11LL:
      result = (__m128i *)qstrdup();
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 4LL:
      v7 = j__qalloc_or_throw(80, (__int64)a2, v5, a4);
      v8 = *((_QWORD *)a2 + 1);
      v9 = (__m128i *)v7;
      *(_OWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v7 + 56) = 0;
      *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v7 + 72) = 0;
      result = (__m128i *)sub_1253A0(v7, v8);
      goto LABEL_5;
    case 5LL:
      result = (__m128i *)j__qalloc_or_throw(16, (__int64)a2, v5, a4);
      *result = _mm_loadu_si128((const __m128i *)*((_QWORD *)a2 + 1));
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 8LL:
      v9 = (__m128i *)j__qalloc_or_throw(312, (__int64)a2, v5, a4);
      result = (__m128i *)sub_BE490((__int64)v9, *((__int64 **)a2 + 1), v10, v11);
      goto LABEL_5;
    case 9LL:
      result = (__m128i *)j__qalloc_or_throw(24, (__int64)a2, v5, a4);
      v12 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = *(_QWORD *)v12;
      result->m128i_i64[1] = *(_QWORD *)(v12 + 8);
      result[1].m128i_i32[0] = *(_DWORD *)(v12 + 16);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 10LL:
      v13 = j__qalloc_or_throw(24, (__int64)a2, v5, a4);
      v14 = *((_QWORD *)a2 + 1);
      v15 = v13;
      sub_123A40(v13, (unsigned __int8 *)v14, v16, v17);
      result = *(__m128i **)(v14 + 16);
      *(_QWORD *)(v15 + 16) = result;
      *(_QWORD *)(a1 + 8) = v15;
      return result;
    case 12LL:
      result = (__m128i *)j__qalloc_or_throw(48, (__int64)a2, v5, a4);
      v25 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = 0;
      v9 = result;
      *(__m128i *)((char *)result + 8) = 0;
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
      {
        v44 = *(_QWORD *)(v25 + 8);
        result = (__m128i *)qalloc_or_throw(24 * v26, (__int64)a2, v24, v26);
        v26 = v44;
        v9->m128i_i64[0] = (__int64)result;
        v37 = result;
        v38 = 0;
        v9[1].m128i_i64[0] = v44;
        while ( 1 )
        {
          v39 = &v37->m128i_i8[24 * v38];
          v24 = *(_QWORD *)v25 + 24 * v38;
          *(_QWORD *)v39 = 0;
          v40 = (const void **)v24;
          *(_OWORD *)(v39 + 8) = 0;
          v41 = *(_QWORD *)(v24 + 8);
          if ( v41 )
          {
            v47 = v26;
            v45 = *(_QWORD *)(v24 + 8);
            n = 8 * v41;
            v42 = (void *)qalloc_or_throw(8 * v41, (__int64)a2, 8 * v41, v26);
            *(_QWORD *)v39 = v42;
            *((_QWORD *)v39 + 2) = v45;
            a2 = (unsigned __int8 *)*v40;
            result = (__m128i *)memcpy(v42, *v40, n);
            v26 = v47;
            *((_QWORD *)v39 + 1) = v45;
          }
          if ( v26 == ++v38 )
            break;
          v37 = (__m128i *)v9->m128i_i64[0];
        }
        v9->m128i_i64[1] = v26;
      }
      v9[1].m128i_i64[1] = 0;
      v9[2] = 0;
      v27 = *(_QWORD *)(v25 + 32);
      if ( v27 )
      {
        v28 = (void *)qalloc_or_throw(4 * v27, (__int64)a2, v24, v26);
        v9[1].m128i_i64[1] = (__int64)v28;
        v9[2].m128i_i64[1] = v27;
        result = (__m128i *)memcpy(v28, *(const void **)(v25 + 24), 4 * v27);
        v9[2].m128i_i64[0] = v27;
      }
      goto LABEL_5;
    case 13LL:
      result = (__m128i *)j__qalloc_or_throw(20, (__int64)a2, v5, a4);
      v29 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v29);
      result[1].m128i_i32[0] = v29[1].m128i_i32[0];
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 14LL:
      v30 = j__qalloc_or_throw(32, (__int64)a2, v5, a4);
      v31 = *((unsigned __int8 **)a2 + 1);
      v9 = (__m128i *)v30;
      sub_123A40(v30, v31, v32, v33);
      result = sub_123A40((__int64)v9[1].m128i_i64, v31 + 16, v34, v35);
      goto LABEL_5;
    case 15LL:
      v18 = (__m128i *)qalloc_or_throw(56, (__int64)a2, v5, a4);
      v19 = *((_QWORD *)a2 + 1);
      v18->m128i_i32[0] = 0;
      v9 = v18;
      copy_argloc();
      v22 = *(_QWORD *)(v19 + 16);
      v9[1].m128i_i64[1] = 0;
      v9[2] = 0;
      v9[1].m128i_i64[0] = v22;
      v23 = *(_QWORD *)(v19 + 32);
      if ( v23 )
      {
        v43 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 32), v19, v20, v21);
        v9[1].m128i_i64[1] = (__int64)v43;
        v9[2].m128i_i64[1] = v23;
        memcpy(v43, *(const void **)(v19 + 24), v23);
        v9[2].m128i_i64[0] = v23;
      }
      v9[3].m128i_i64[0] = 0;
      result = (__m128i *)copy_tinfo_t();
LABEL_5:
      *(_QWORD *)(a1 + 8) = v9;
      break;
    default:
      result = *((__m128i **)a2 + 1);
      *(_QWORD *)(a1 + 8) = result;
      break;
  }
  return result;
}

