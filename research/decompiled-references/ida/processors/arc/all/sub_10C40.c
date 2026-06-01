__int64 __fastcall sub_10C40(__int64 *a1, __int64 a2, __int64 a3, __m128i *a4, int a5)
{
  unsigned __int8 v6; // al
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  char v13; // al
  void *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int8 v18; // r13
  unsigned __int64 v19; // r14
  __int8 v20; // r15
  __int64 v21; // rdi
  __m128i v22; // xmm0
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rax
  void *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  unsigned int dword; // eax
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  size_t n; // [rsp+0h] [rbp-98h]
  _QWORD *v37; // [rsp+8h] [rbp-90h]
  __m128i v38; // [rsp+10h] [rbp-88h] BYREF
  __m128i si128; // [rsp+20h] [rbp-78h] BYREF
  void *src; // [rsp+30h] [rbp-68h]
  __int128 v41; // [rsp+38h] [rbp-60h]
  __int16 v42; // [rsp+48h] [rbp-50h]
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v6 = *(_BYTE *)(a3 + 1);
  v43 = __readfsqword(0x28u);
  if ( v6 > 4u )
  {
    if ( v6 == 5 )
    {
      if ( !a4 )
        return 1;
      a4->m128i_i64[0] = *(_QWORD *)(a3 + 8) & *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 16LL);
      a4[2].m128i_i8[9] = a4[2].m128i_i8[9] & 0xF8 | 5;
      v15 = a4[1].m128i_i64[1];
      v16 = *(_QWORD *)(a2 + 16);
      v17 = a4[1].m128i_i64[0];
      if ( a4[2].m128i_i64[0] < (unsigned __int64)(v15 + 1) )
      {
        v26 = qvector_reserve(&a4[1], v17, v15 + 1, 8);
        a4[1].m128i_i64[0] = v26;
        v17 = v26;
        v15 = a4[1].m128i_i64[1];
      }
      *(_QWORD *)(v17 + 8 * v15) = v16;
      ++a4[1].m128i_i64[1];
      return 1;
    }
    return 0;
  }
  if ( v6 > 2u )
  {
    src = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
    v42 = 0;
    v41 = 0;
    v13 = sub_108A0(a1, a2, a3, (__int64)&si128, a5 + 1);
    v14 = src;
    if ( v13 )
    {
      v18 = HIBYTE(v42);
      if ( (HIBYTE(v42) & 3) == 1 )
      {
        if ( !a4 )
          goto LABEL_31;
        v19 = v41;
        v20 = v42;
        *a4 = _mm_load_si128(&si128);
        if ( v19 )
        {
          v27 = (void *)qalloc_or_throw(8 * v19);
          v28 = memcpy(v27, v14, 8 * v19);
          v21 = a4[1].m128i_i64[0];
          v24 = v19 + 1;
          v23 = v28;
          v22 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
          if ( !v21 )
            goto LABEL_29;
        }
        else
        {
          v21 = a4[1].m128i_i64[0];
          if ( !v21 )
          {
            a4[2].m128i_i8[8] = v20;
            v24 = 1;
            a4[2].m128i_i8[9] = v18;
            *(__m128i *)((char *)&a4[1] + 8) = 0;
            v25 = *(_QWORD *)(a2 + 16);
            goto LABEL_39;
          }
          v22 = 0;
          v23 = nullptr;
          v24 = 1;
        }
        a4[1].m128i_i64[1] = 0;
        v37 = v23;
        n = v24;
        v38 = v22;
        qfree(v21);
        v22 = _mm_load_si128(&v38);
        v23 = v37;
        v24 = n;
LABEL_29:
        a4[1].m128i_i64[0] = (__int64)v23;
        a4[2].m128i_i8[8] = v20;
        a4[2].m128i_i8[9] = v18;
        *(__m128i *)((char *)a4 + 24) = v22;
        v25 = *(_QWORD *)(a2 + 16);
        if ( v19 >= v24 )
        {
LABEL_30:
          v23[v19] = v25;
          ++a4[1].m128i_i64[1];
LABEL_31:
          if ( v14 )
            qfree(v14);
          return 1;
        }
        v21 = (__int64)v23;
LABEL_39:
        v29 = qvector_reserve(&a4[1], v21, v24, 8);
        a4[1].m128i_i64[0] = v29;
        v19 = a4[1].m128i_u64[1];
        v23 = (_QWORD *)v29;
        goto LABEL_30;
      }
    }
    if ( src )
      qfree(src);
    return 0;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      if ( a4 )
      {
        v8 = *(_QWORD *)(a3 + 16) + 16LL * *(_QWORD *)a2;
        v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 16LL);
        if ( v8 != v9 )
        {
          v10 = 0xFFFFFFFFLL;
          if ( v8 == -1 )
            goto LABEL_10;
          v8 &= v9;
        }
        v10 = (unsigned int)v8;
LABEL_10:
        v11 = 0xFFFFFFFFLL;
        if ( *(_WORD *)(a2 + 24) == 1 && *(_BYTE *)(a2 + 85) == 2 )
        {
          if ( (unsigned __int8)is_loaded(v8) )
          {
            dword = get_dword(v8);
            v31 = a4[1].m128i_i64[0];
            v32 = dword;
            a4[2].m128i_i8[9] = a4[2].m128i_i8[9] & 0xF8 | 5;
            v33 = a4[1].m128i_i64[1];
            v34 = *(_QWORD *)(a2 + 16);
            if ( a4[2].m128i_i64[0] < (unsigned __int64)(v33 + 1) )
            {
              v35 = qvector_reserve(&a4[1], v31, v33 + 1, 8);
              a4[1].m128i_i64[0] = v35;
              v31 = v35;
              v33 = a4[1].m128i_i64[1];
            }
            *(_QWORD *)(v31 + 8 * v33) = v34;
            v11 = v10;
            v10 = v32;
            ++a4[1].m128i_i64[1];
          }
          else
          {
            v11 = v10;
            v10 = 0xFFFFFFFFLL;
          }
        }
        a4->m128i_i64[1] = v11;
        a4->m128i_i64[0] = v10;
      }
      return 1;
    }
    return 0;
  }
  return sub_FBC0(a1, a2, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a3 + 6), a4, a5);
}

