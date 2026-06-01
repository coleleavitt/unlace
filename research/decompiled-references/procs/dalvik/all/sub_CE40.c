__int64 __fastcall sub_CE40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 *v11; // rsi
  unsigned int i; // ebx
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  const char *p_src; // rsi
  unsigned int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  size_t v28; // r10
  __int64 v29; // r14
  size_t v30; // r11
  __int64 v31; // rsi
  __int64 v32; // r14
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  size_t v37; // r13
  __int64 v38; // rbp
  size_t v39; // r14
  __int64 v40; // rsi
  __m128i v41; // xmm0
  __int64 v42; // rax
  char v43; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+20h] [rbp-88h]
  size_t v48; // [rsp+20h] [rbp-88h]
  size_t v49; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h] BYREF
  __int128 v51; // [rsp+38h] [rbp-70h]
  __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  __m128i v53; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]

  v7 = (unsigned __int64 *)a1[2];
  v8 = a1[3];
  v9 = *(_QWORD *)(a3 + 8);
  v54 = __readfsqword(0x28u);
  v11 = &v7[v8];
  if ( 8 * v8 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v9 < *v7 )
      {
        v13 = i - 1;
        goto LABEL_7;
      }
      if ( ++v7 == v11 )
        break;
    }
    v13 = i++;
  }
  else
  {
    v13 = 0xFFFFFFFFLL;
    i = 0;
  }
LABEL_7:
  src = nullptr;
  v14 = *(unsigned int *)(a3 + 16);
  v51 = 0;
  if ( v13 >= a1[7] )
  {
    sub_BBD0(v8, (int)v11, v14, v9, a5, a6, v43);
    goto LABEL_43;
  }
  p_src = *(const char **)(a1[6] + 8 * v13);
  v16 = sub_C8C0((__int64)&src, (__int64)p_src, v14, 0x55u);
  if ( !(_BYTE)v16 )
    goto LABEL_18;
  v8 = (__int64)&v52;
  sub_C1C0(&v52, (__int64)&src);
  v20 = v53.m128i_i64[0];
  v21 = 2;
  if ( v53.m128i_i64[0] )
  {
    v21 = v53.m128i_i64[0] + 1;
    v20 = v53.m128i_i64[0] - 1;
  }
  v11 = (unsigned __int64 *)v52;
  if ( v53.m128i_i64[1] < v21 )
  {
    v8 = (__int64)&v52;
    v47 = v21;
    v52 = qvector_reserve(&v52, v52, v21, 1);
    v21 = v47;
    v11 = (unsigned __int64 *)v52;
  }
  v53.m128i_i64[0] = v21;
  *((_BYTE *)v11 + v20) = 46;
  *(_BYTE *)(v52 + v20 + 1) = 0;
  v22 = *(unsigned int *)(a3 + 20);
  if ( v13 >= a1[7] )
LABEL_43:
    sub_BBD0(v8, (int)v11, v22, v17, v18, v19, v43);
  p_src = *(const char **)(a1[6] + 8 * v13);
  v16 = sub_C8C0((__int64)&src, (__int64)p_src, v22, 0x4Eu);
  if ( (_BYTE)v16 )
  {
    sub_BB40(&src);
    v27 = v51;
    if ( (_QWORD)v51 )
    {
      v28 = v51 - 1;
      if ( (_QWORD)v51 != 1 )
      {
        v29 = v53.m128i_i64[0];
        v30 = v51 - 1;
        if ( v53.m128i_i64[0] )
        {
          v29 = v53.m128i_i64[0] - 1;
          v30 = v28 + v53.m128i_i64[0] - 1;
          v27 = v51 + v53.m128i_i64[0] - 1;
        }
        v31 = v52;
        if ( v53.m128i_i64[1] < v27 )
        {
          v49 = v51 - 1;
          v48 = v30;
          v45 = v27;
          v52 = qvector_reserve(&v52, v52, v27, 1);
          v28 = v49;
          v31 = v52;
          v30 = v48;
          v27 = v45;
        }
        v53.m128i_i64[0] = v27;
        *(_BYTE *)(v31 + v30) = 0;
        memcpy((void *)(v29 + v52), src, v28);
      }
    }
    v32 = v53.m128i_i64[0];
    v33 = 2;
    if ( v53.m128i_i64[0] )
    {
      v33 = v53.m128i_i64[0] + 1;
      v32 = v53.m128i_i64[0] - 1;
    }
    v34 = v52;
    if ( v53.m128i_i64[1] < v33 )
    {
      v44 = v33;
      v52 = qvector_reserve(&v52, v52, v33, 1);
      v33 = v44;
      v34 = v52;
    }
    v53.m128i_i64[0] = v33;
    *(_BYTE *)(v34 + v32) = 64;
    p_src = (const char *)&src;
    *(_BYTE *)(v52 + v32 + 1) = 0;
    v35 = *(unsigned int *)(a3 + 28);
    *(_QWORD *)&v51 = 0;
    sub_C600((__int64)a1, (__int64)&src, i, v35, v25, v26);
    v36 = v51;
    if ( (_QWORD)v51 )
    {
      v37 = v51 - 1;
      if ( (_QWORD)v51 != 1 )
      {
        v38 = v53.m128i_i64[0];
        v39 = v51 - 1;
        if ( v53.m128i_i64[0] )
        {
          v38 = v53.m128i_i64[0] - 1;
          v39 = v37 + v53.m128i_i64[0] - 1;
          v36 = v51 + v53.m128i_i64[0] - 1;
        }
        v40 = v52;
        if ( v53.m128i_i64[1] < v36 )
        {
          v52 = qvector_reserve(&v52, v52, v36, 1);
          v40 = v52;
        }
        v53.m128i_i64[0] = v36;
        *(_BYTE *)(v40 + v39) = 0;
        p_src = (const char *)src;
        memcpy((void *)(v38 + v52), src, v37);
      }
    }
    v41 = _mm_loadu_si128(&v53);
    v23 = *(_QWORD *)a2;
    v42 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v52;
    *(__m128i *)(a2 + 8) = v41;
    v52 = v23;
    v53.m128i_i64[1] = v42;
  }
  else
  {
    v23 = v52;
  }
  if ( v23 )
  {
    v53.m128i_i64[0] = 0;
    qfree(v23, p_src);
  }
LABEL_18:
  if ( src )
  {
    *(_QWORD *)&v51 = 0;
    qfree(src, p_src);
  }
  return v16;
}
