unsigned __int64 __fastcall sub_263810(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v5; // rbx
  __int64 v7; // rax
  char *v8; // r14
  int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rbx
  char v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm0
  size_t v23; // r15
  char *v24; // rax
  const void *v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rbx
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rax
  char v33; // [rsp+0h] [rbp-A0h]
  __int64 v34; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+8h] [rbp-98h]
  unsigned __int64 v36; // [rsp+8h] [rbp-98h]
  char v37; // [rsp+14h] [rbp-8Ch]
  char v38; // [rsp+18h] [rbp-88h]
  char *v39; // [rsp+30h] [rbp-70h] BYREF
  __int128 v40; // [rsp+38h] [rbp-68h]
  __int64 v41; // [rsp+50h] [rbp-50h] BYREF
  __m128i v42; // [rsp+58h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-38h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v43 = __readfsqword(0x28u);
  v39 = nullptr;
  v7 = *(_QWORD *)(v5 + 416);
  v40 = 0;
  if ( v7 )
  {
    v23 = v7;
    v24 = (char *)qalloc_or_throw(v7, (__int64)a2, a3, a4);
    v25 = *(const void **)(v5 + 408);
    *((_QWORD *)&v40 + 1) = v23;
    v39 = v24;
    memcpy(v24, v25, v23);
    *(_QWORD *)&v40 = v23;
    if ( v23 - 1 <= 7 || (v26 = (__int64)v39, strcmp(&v39[v23 - 7], " const")) )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v4 = 0;
      goto LABEL_2;
    }
    if ( (__int64)(v23 - 6) <= 1 )
    {
      if ( v39 )
      {
        v40 = 0u;
        qfree((__int64)v39);
        v39 = nullptr;
        v5 = *(_QWORD *)(a1 + 8);
        v4 = 1;
        goto LABEL_2;
      }
    }
    else
    {
      if ( *((_QWORD *)&v40 + 1) < v23 - 6 )
      {
        v39 = (char *)qvector_reserve((__int64)&v39, (__int64)v39, v23 - 6, 1);
        v26 = (__int64)v39;
      }
      *(_QWORD *)&v40 = v23 - 6;
      *(_BYTE *)(v26 + v23 - 7) = 0;
    }
    v5 = *(_QWORD *)(a1 + 8);
    v4 = 1;
  }
LABEL_2:
  v38 = 23;
  if ( *(_BYTE *)(v5 + 320) )
    v38 = 33;
  if ( (unsigned __int8)sub_3767A0(v5) && (unsigned __int8)print_tinfo() )
  {
    if ( v4 )
    {
      v27 = a2[1];
      if ( v27 )
      {
        v29 = v27 + 5;
        v28 = v27 + 6;
        --v27;
      }
      else
      {
        v28 = 7;
        v29 = 6;
      }
      v30 = *a2;
      if ( a2[2] < v28 )
      {
        v32 = qvector_reserve((__int64)a2, v30, v28, 1);
        *a2 = v32;
        v30 = v32;
      }
      a2[1] = v28;
      *(_BYTE *)(v30 + v29) = 0;
      v31 = *a2 + v27;
      *(_DWORD *)v31 = 1852793632;
      *(_WORD *)(v31 + 4) = 29811;
    }
    v37 = v38;
  }
  else
  {
    sub_6B870(a2);
    v37 = 18;
  }
  v41 = 0;
  v42 = 0;
  sub_32AA00(&v41, v37);
  if ( a2[1] )
  {
    v8 = (char *)*a2;
    v9 = *(unsigned __int8 *)*a2;
    if ( (_BYTE)v9 )
    {
      v10 = 0x28000000000003LL;
      do
      {
        while ( (unsigned __int8)(v9 - 40) <= 0x35u && _bittest64(&v10, (unsigned int)(v9 - 40)) )
        {
          sub_32AA00(&v41, 9);
          v11 = v42.m128i_i64[0];
          v12 = *v8;
          v13 = 2;
          if ( v42.m128i_i64[0] )
          {
            v13 = v42.m128i_i64[0] + 1;
            v11 = v42.m128i_i64[0] - 1;
          }
          v14 = v41;
          if ( v42.m128i_i64[1] < v13 )
          {
            v33 = *v8;
            v35 = v13;
            v41 = qvector_reserve((__int64)&v41, v41, v13, 1);
            v12 = v33;
            v14 = v41;
            v13 = v35;
          }
          v42.m128i_i64[0] = v13;
          *(_BYTE *)(v14 + v11) = v12;
          *(_BYTE *)(v41 + v11 + 1) = 0;
          sub_32AAE0(&v41, 9);
          v9 = (unsigned __int8)*++v8;
          if ( !(_BYTE)v9 )
            goto LABEL_22;
        }
        v15 = v42.m128i_i64[0];
        v16 = 2;
        if ( v42.m128i_i64[0] )
        {
          v16 = v42.m128i_i64[0] + 1;
          v15 = v42.m128i_i64[0] - 1;
        }
        v17 = v41;
        if ( v42.m128i_i64[1] < v16 )
        {
          v34 = v15;
          v36 = v16;
          v41 = qvector_reserve((__int64)&v41, v41, v16, 1);
          v15 = v34;
          v17 = v41;
          v16 = v36;
        }
        v42.m128i_i64[0] = v16;
        ++v8;
        *(_BYTE *)(v17 + v15) = v9;
        *(_BYTE *)(v41 + v15 + 1) = 0;
        v9 = (unsigned __int8)*v8;
      }
      while ( (_BYTE)v9 );
    }
  }
LABEL_22:
  sub_32AAE0(&v41, v37);
  v19 = a2[2];
  v20 = v41;
  v21 = _mm_loadu_si128(&v42);
  v41 = *a2;
  v18 = v41;
  *a2 = v20;
  v42.m128i_i64[1] = v19;
  *(__m128i *)(a2 + 1) = v21;
  if ( v18 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v18);
  }
  clear_tinfo_t();
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree((__int64)v39);
  }
  return v43 - __readfsqword(0x28u);
}

