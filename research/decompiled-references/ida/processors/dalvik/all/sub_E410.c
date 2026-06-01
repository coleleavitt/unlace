__int64 __fastcall sub_E410(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, __int64 a6)
{
  const char *v7; // rsi
  unsigned int v9; // r15d
  _BYTE **v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r12
  unsigned __int16 *v16; // rbx
  unsigned __int64 v17; // rdx
  size_t v18; // r15
  __int64 v19; // r8
  size_t v20; // r10
  _BYTE *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r12
  _BYTE *v24; // rsi
  unsigned __int64 v25; // rax
  void *v26; // rdi
  unsigned __int64 v27; // rbx
  size_t v28; // r12
  __int64 v29; // rbp
  size_t v30; // r13
  _BYTE *v31; // rsi
  __m128i v32; // xmm1
  _BYTE *v33; // rax
  __m128i v34; // xmm0
  char v35; // [rsp-8h] [rbp-D8h]
  unsigned __int64 v37; // [rsp+10h] [rbp-C0h]
  size_t v38; // [rsp+18h] [rbp-B8h]
  __int64 v39; // [rsp+20h] [rbp-B0h]
  _BYTE *v40; // [rsp+28h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+30h] [rbp-A0h] BYREF
  void *src; // [rsp+48h] [rbp-88h] BYREF
  __int128 v43; // [rsp+50h] [rbp-80h]
  _BYTE v44[4]; // [rsp+68h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+6Ch] [rbp-64h]
  unsigned __int16 *v46; // [rsp+70h] [rbp-60h]
  __int128 v47; // [rsp+78h] [rbp-58h]
  unsigned __int64 v48; // [rsp+90h] [rbp-40h]

  v7 = v44;
  v48 = __readfsqword(0x28u);
  v47 = 0;
  v46 = nullptr;
  v9 = sub_E230(a1, (__int64)v44, a3, a4, a5, a6);
  if ( !(_BYTE)v9 )
    goto LABEL_2;
  v11 = &v40;
  v40 = nullptr;
  v41 = 0;
  v40 = (_BYTE *)qvector_reserve(&v40, 0, 2, 1);
  v15 = a3 - 1;
  v41.m128i_i64[0] = 2;
  *v40 = 40;
  v40[1] = 0;
  v16 = v46;
  if ( 2LL * (_QWORD)v47 )
  {
    while ( 1 )
    {
      src = nullptr;
      v43 = 0;
      if ( v15 >= *(_QWORD *)(a1 + 56) )
      {
        if ( !under_debugger )
          interr(20112);
        BUG();
      }
      v7 = *(const char **)(*(_QWORD *)(a1 + 48) + 8 * v15);
      v9 = sub_C8C0((__int64)&src, (__int64)v7, *v16, 0x55u);
      if ( !(_BYTE)v9 )
        break;
      v17 = v43;
      if ( (_QWORD)v43 )
      {
        v18 = v43 - 1;
        if ( (_QWORD)v43 != 1 )
        {
          v19 = v41.m128i_i64[0];
          v20 = v43 - 1;
          if ( v41.m128i_i64[0] )
          {
            v19 = v41.m128i_i64[0] - 1;
            v20 = v18 + v41.m128i_i64[0] - 1;
            v17 = v43 + v41.m128i_i64[0] - 1;
          }
          v21 = v40;
          if ( v41.m128i_i64[1] < v17 )
          {
            v39 = v19;
            v38 = v20;
            v37 = v17;
            v40 = (_BYTE *)qvector_reserve(&v40, v40, v17, 1);
            v19 = v39;
            v21 = v40;
            v20 = v38;
            v17 = v37;
          }
          v41.m128i_i64[0] = v17;
          v21[v20] = 0;
          v7 = (const char *)src;
          memcpy(&v40[v19], src, v18);
        }
      }
      v11 = (_BYTE **)src;
      if ( src )
      {
        *(_QWORD *)&v43 = 0;
        qfree(src, v7);
      }
      if ( ++v16 == &v46[(_QWORD)v47] )
        goto LABEL_19;
    }
    v26 = src;
    if ( !src )
      goto LABEL_25;
    goto LABEL_24;
  }
LABEL_19:
  v22 = v41.m128i_i64[0];
  v23 = 2;
  if ( v41.m128i_i64[0] )
  {
    v23 = v41.m128i_i64[0] + 1;
    v24 = v40;
    v22 = v41.m128i_i64[0] - 1;
    if ( v41.m128i_i64[1] >= (unsigned __int64)(v41.m128i_i64[0] + 1) )
      goto LABEL_21;
  }
  else
  {
    v24 = v40;
    if ( v41.m128i_i64[1] >= 2uLL )
      goto LABEL_21;
  }
  v11 = &v40;
  v40 = (_BYTE *)qvector_reserve(&v40, v24, v23, 1);
  v24 = v40;
LABEL_21:
  v41.m128i_i64[0] = v23;
  v24[v22] = 41;
  v40[v22 + 1] = 0;
  v25 = a3 - 1;
  src = nullptr;
  v43 = 0;
  if ( v25 >= *(_QWORD *)(a1 + 56) )
    sub_BBD0((__int64)v11, (int)v24, v45, v12, v13, v14, v35);
  v7 = *(const char **)(*(_QWORD *)(a1 + 48) + 8 * v25);
  v9 = sub_C8C0((__int64)&src, (__int64)v7, v45, 0x55u);
  if ( (_BYTE)v9 )
  {
    v27 = v43;
    if ( (_QWORD)v43 )
    {
      v28 = v43 - 1;
      if ( (_QWORD)v43 != 1 )
      {
        v29 = v41.m128i_i64[0];
        v30 = v43 - 1;
        if ( v41.m128i_i64[0] )
        {
          v29 = v41.m128i_i64[0] - 1;
          v30 = v28 + v41.m128i_i64[0] - 1;
          v27 = v43 + v41.m128i_i64[0] - 1;
        }
        v31 = v40;
        if ( v41.m128i_i64[1] < v27 )
        {
          v40 = (_BYTE *)qvector_reserve(&v40, v40, v27, 1);
          v31 = v40;
        }
        v41.m128i_i64[0] = v27;
        v31[v30] = 0;
        v7 = (const char *)src;
        memcpy(&v40[v29], src, v28);
      }
    }
    v32 = _mm_loadu_si128(&v41);
    v26 = src;
    v33 = *(_BYTE **)a2;
    v34 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = v40;
    *(__m128i *)(a2 + 8) = v32;
    v40 = v33;
    v41 = v34;
    if ( !v26 )
      goto LABEL_25;
  }
  else
  {
    v26 = src;
    if ( !src )
      goto LABEL_25;
  }
LABEL_24:
  *(_QWORD *)&v43 = 0;
  qfree(v26, v7);
LABEL_25:
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40, v7);
  }
LABEL_2:
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v7);
  }
  return v9;
}

