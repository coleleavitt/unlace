unsigned __int64 __fastcall sub_1F1260(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // r14
  size_t v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  size_t v9; // r15
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rbx
  size_t v16; // rbp
  size_t v17; // rbp
  void *v18; // rax
  void *v19; // rsi
  __int64 v20; // [rsp+10h] [rbp-118h] BYREF
  __m128i si128; // [rsp+18h] [rbp-110h]
  __int64 v22; // [rsp+28h] [rbp-100h]
  void *src; // [rsp+30h] [rbp-F8h]
  size_t n[2]; // [rsp+38h] [rbp-F0h]
  void *v25; // [rsp+48h] [rbp-E0h]
  size_t v26[2]; // [rsp+50h] [rbp-D8h]
  __int64 v27; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v28; // [rsp+68h] [rbp-C0h]
  __int64 v29; // [rsp+70h] [rbp-B8h]
  _DWORD v30[4]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+90h] [rbp-98h]
  int v32; // [rsp+98h] [rbp-90h]
  void *v33; // [rsp+A0h] [rbp-88h]
  __int128 v34; // [rsp+A8h] [rbp-80h]
  void *v35; // [rsp+B8h] [rbp-70h]
  __int128 v36; // [rsp+C0h] [rbp-68h]
  __int64 v37; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-50h]
  __int64 v39; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+E8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v40 - __readfsqword(0x28u);
  v20 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
  v22 = 1;
  src = nullptr;
  v25 = nullptr;
  v27 = 0;
  v28 = 0xFFFFFFFF00000000LL;
  v29 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v26 = 0;
  if ( a2 < v2 )
  {
    v12 = a2;
    v13 = 104 * a2;
    do
    {
      v14 = (_QWORD *)(v13 + *a1);
      clear_tinfo_t();
      if ( v14[7] )
      {
        v14[8] = 0;
        qfree();
      }
      if ( v14[4] )
      {
        v14[5] = 0;
        qfree();
      }
      ++v12;
      v13 += 104;
      cleanup_argloc();
    }
    while ( v2 != v12 );
  }
  else
  {
    v4 = a1[2];
    if ( (unsigned __int64)&v20 >= *a1 && (unsigned __int64)&v20 < *a1 + 104 * v4 )
    {
      v30[0] = 0;
      copy_argloc();
      v16 = n[0];
      v33 = nullptr;
      v34 = 0;
      v31 = si128.m128i_i64[1];
      v32 = v22;
      if ( n[0] )
      {
        v33 = (void *)qalloc_or_throw();
        *((_QWORD *)&v34 + 1) = v16;
        memcpy(v33, src, v16);
        *(_QWORD *)&v34 = v16;
      }
      v17 = v26[0];
      v35 = nullptr;
      v36 = 0;
      if ( v26[0] )
      {
        v35 = (void *)qalloc_or_throw();
        *((_QWORD *)&v36 + 1) = v17;
        memcpy(v35, v25, v17);
        *(_QWORD *)&v36 = v17;
      }
      v37 = 0;
      copy_tinfo_t();
      v38 = v28;
      v39 = v29;
      sub_84670(a1, a2, (__int64)v30);
      clear_tinfo_t();
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
      cleanup_argloc();
      goto LABEL_20;
    }
    if ( v4 < a2 )
    {
      *a1 = qvector_reserve();
      v2 = a1[1];
    }
    if ( v2 < a2 )
    {
      v5 = 104 * v2;
      do
      {
        v7 = v5 + *a1;
        *(_DWORD *)v7 = 0;
        copy_argloc();
        v8 = si128.m128i_i64[1];
        *(_QWORD *)(v7 + 32) = 0;
        *(_OWORD *)(v7 + 40) = 0;
        *(_QWORD *)(v7 + 16) = v8;
        *(_DWORD *)(v7 + 24) = v22;
        v9 = n[0];
        if ( n[0] )
        {
          v10 = (void *)qalloc_or_throw();
          *(_QWORD *)(v7 + 32) = v10;
          v11 = src;
          *(_QWORD *)(v7 + 48) = v9;
          memcpy(v10, v11, v9);
          *(_QWORD *)(v7 + 40) = v9;
        }
        *(_QWORD *)(v7 + 56) = 0;
        *(_OWORD *)(v7 + 64) = 0;
        v6 = v26[0];
        if ( v26[0] )
        {
          v18 = (void *)qalloc_or_throw();
          *(_QWORD *)(v7 + 56) = v18;
          v19 = v25;
          *(_QWORD *)(v7 + 72) = v6;
          memcpy(v18, v19, v6);
          *(_QWORD *)(v7 + 64) = v6;
        }
        *(_QWORD *)(v7 + 80) = 0;
        copy_tinfo_t();
        ++v2;
        v5 += 104;
        *(_QWORD *)(v7 + 88) = v28;
        *(_QWORD *)(v7 + 96) = v29;
      }
      while ( v2 < a2 );
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t();
  if ( v25 )
  {
    v26[0] = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  cleanup_argloc();
  return v40 - __readfsqword(0x28u);
}

