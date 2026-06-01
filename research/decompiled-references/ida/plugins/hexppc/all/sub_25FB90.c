unsigned __int64 __fastcall sub_25FB90(__int64 a1, __int64 *a2)
{
  char v2; // r14
  __int64 v3; // rbx
  size_t v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r14
  int v11; // ebx
  __int64 v12; // r13
  __int64 v13; // rbx
  char v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm0
  size_t v24; // r15
  void *v25; // rax
  const void *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rax
  char v34; // [rsp+0h] [rbp-A0h]
  __int64 v35; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+8h] [rbp-98h]
  unsigned __int64 v37; // [rsp+8h] [rbp-98h]
  unsigned int v38; // [rsp+14h] [rbp-8Ch]
  unsigned __int8 v39; // [rsp+18h] [rbp-88h]
  __int64 v40; // [rsp+28h] [rbp-78h] BYREF
  __int64 v41; // [rsp+30h] [rbp-70h]
  __int128 v42; // [rsp+38h] [rbp-68h]
  __int64 v43; // [rsp+50h] [rbp-50h] BYREF
  __m128i v44; // [rsp+58h] [rbp-48h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v45 = __readfsqword(0x28u);
  v41 = 0;
  v5 = *(_QWORD *)(v3 + 416);
  v42 = 0;
  if ( v5 )
  {
    v24 = v5;
    v25 = (void *)qalloc_or_throw();
    v26 = *(const void **)(v3 + 408);
    *((_QWORD *)&v42 + 1) = v24;
    v41 = (__int64)v25;
    memcpy(v25, v26, v24);
    *(_QWORD *)&v42 = v24;
    if ( v24 - 1 <= 7 || (v27 = v41, strcmp((const char *)(v41 + v24 - 7), " const")) )
    {
      v3 = *(_QWORD *)(a1 + 8);
      v2 = 0;
      goto LABEL_2;
    }
    if ( (__int64)(v24 - 6) <= 1 )
    {
      if ( v41 )
      {
        v42 = 0u;
        qfree();
        v41 = 0;
        v3 = *(_QWORD *)(a1 + 8);
        v2 = 1;
        goto LABEL_2;
      }
    }
    else
    {
      if ( *((_QWORD *)&v42 + 1) < v24 - 6 )
      {
        v41 = qvector_reserve();
        v27 = v41;
      }
      *(_QWORD *)&v42 = v24 - 6;
      *(_BYTE *)(v27 + v24 - 7) = 0;
    }
    v3 = *(_QWORD *)(a1 + 8);
    v2 = 1;
  }
LABEL_2:
  v39 = 23;
  if ( *(_BYTE *)(v3 + 320) )
    v39 = 33;
  v40 = 0;
  if ( (unsigned __int8)sub_372620(v3, &v40) && (unsigned __int8)print_tinfo() )
  {
    if ( v2 )
    {
      v28 = a2[1];
      if ( v28 )
      {
        v30 = v28 + 5;
        v29 = v28 + 6;
        --v28;
      }
      else
      {
        v29 = 7;
        v30 = 6;
      }
      v31 = *a2;
      if ( a2[2] < v29 )
      {
        v33 = qvector_reserve();
        *a2 = v33;
        v31 = v33;
      }
      a2[1] = v29;
      v7 = 29811;
      *(_BYTE *)(v31 + v30) = 0;
      v32 = *a2 + v28;
      *(_DWORD *)v32 = 1852793632;
      *(_WORD *)(v32 + 4) = 29811;
    }
    v38 = v39;
  }
  else
  {
    sub_67E30(a2);
    v38 = 18;
  }
  v43 = 0;
  v44 = 0;
  sub_3266D0(&v43, v38, v6, v7);
  if ( a2[1] )
  {
    v10 = (char *)*a2;
    v11 = *(unsigned __int8 *)*a2;
    if ( (_BYTE)v11 )
    {
      v12 = 0x28000000000003LL;
      do
      {
        while ( (unsigned __int8)(v11 - 40) <= 0x35u && _bittest64(&v12, (unsigned int)(v11 - 40)) )
        {
          sub_3266D0(&v43, 9, v8, v9);
          v13 = v44.m128i_i64[0];
          v14 = *v10;
          v15 = 2;
          if ( v44.m128i_i64[0] )
          {
            v15 = v44.m128i_i64[0] + 1;
            v13 = v44.m128i_i64[0] - 1;
          }
          v16 = v43;
          if ( v44.m128i_i64[1] < v15 )
          {
            v34 = *v10;
            v36 = v15;
            v43 = qvector_reserve();
            v14 = v34;
            v16 = v43;
            v15 = v36;
          }
          v44.m128i_i64[0] = v15;
          *(_BYTE *)(v16 + v13) = v14;
          *(_BYTE *)(v43 + v13 + 1) = 0;
          sub_3267B0(&v43, 9);
          v11 = (unsigned __int8)*++v10;
          if ( !(_BYTE)v11 )
            goto LABEL_22;
        }
        v17 = v44.m128i_i64[0];
        v8 = 2;
        if ( v44.m128i_i64[0] )
        {
          v8 = v44.m128i_i64[0] + 1;
          v17 = v44.m128i_i64[0] - 1;
        }
        v18 = v43;
        if ( v44.m128i_i64[1] < v8 )
        {
          v35 = v17;
          v37 = v8;
          v43 = qvector_reserve();
          v17 = v35;
          v18 = v43;
          v8 = v37;
        }
        v44.m128i_i64[0] = v8;
        ++v10;
        *(_BYTE *)(v18 + v17) = v11;
        *(_BYTE *)(v43 + v17 + 1) = 0;
        v11 = (unsigned __int8)*v10;
      }
      while ( (_BYTE)v11 );
    }
  }
LABEL_22:
  sub_3267B0(&v43, v38);
  v20 = a2[2];
  v21 = v43;
  v22 = _mm_loadu_si128(&v44);
  v43 = *a2;
  v19 = v43;
  *a2 = v21;
  v44.m128i_i64[1] = v20;
  *(__m128i *)(a2 + 1) = v22;
  if ( v19 )
  {
    v44.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  return v45 - __readfsqword(0x28u);
}

