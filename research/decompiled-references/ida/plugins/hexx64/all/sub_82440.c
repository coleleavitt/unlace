unsigned __int64 __fastcall sub_82440(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  size_t v12; // r14
  void *v13; // rax
  void *v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  size_t v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  void *v25; // rax
  void *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  size_t v30; // [rsp+28h] [rbp-F0h]
  _QWORD v31[2]; // [rsp+30h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-D8h] BYREF
  void *src; // [rsp+50h] [rbp-C8h]
  size_t n[2]; // [rsp+58h] [rbp-C0h]
  __int64 v35; // [rsp+68h] [rbp-B0h]
  __int64 v36; // [rsp+70h] [rbp-A8h]
  int v37; // [rsp+78h] [rbp-A0h]
  unsigned __int8 v38[16]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v39; // [rsp+90h] [rbp-88h]
  __int64 v40; // [rsp+98h] [rbp-80h] BYREF
  void *v41; // [rsp+A0h] [rbp-78h]
  __int128 v42; // [rsp+A8h] [rbp-70h]
  int v43; // [rsp+B8h] [rbp-60h]
  int v44; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v45 - __readfsqword(0x28u);
  v31[0] = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v31[1] = 0;
  src = nullptr;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v15 = a2;
    do
    {
      v16 = *a1 + 80 * v15;
      cleanup_argloc();
      v17 = *(_QWORD *)(v16 + 32);
      if ( v17 )
      {
        *(_QWORD *)(v16 + 40) = 0;
        qfree(v17);
      }
      ++v15;
      clear_tinfo_t();
      sub_11CDA0(v16);
    }
    while ( v2 != v15 );
  }
  else
  {
    v5 = *a1;
    v6 = v31;
    v7 = a1[2];
    if ( (unsigned __int64)v31 >= *a1 && (unsigned __int64)v31 < v5 + 80 * v7 )
    {
      sub_123A40((__int64)v38, (unsigned __int8 *)v31, v7, (__int64)v31);
      v40 = 0;
      v39 = si128.m128i_i64[0];
      copy_tinfo_t();
      v21 = n[0];
      v41 = nullptr;
      v42 = 0;
      if ( n[0] )
      {
        v41 = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v19, v20);
        *((_QWORD *)&v42 + 1) = v21;
        memcpy(v41, src, v21);
        *(_QWORD *)&v42 = v21;
      }
      v43 = 0;
      copy_argloc();
      v44 = v37;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve((__int64)a1, *a1, a2, 80);
      v24 = a1[1];
      if ( v24 < a2 )
      {
        do
        {
          v27 = *a1 + 80 * v24;
          sub_123A40(v27, v38, v22, v23);
          v28 = v39;
          *(_QWORD *)(v27 + 24) = 0;
          *(_QWORD *)(v27 + 16) = v28;
          copy_tinfo_t();
          *(_QWORD *)(v27 + 32) = 0;
          *(_OWORD *)(v27 + 40) = 0;
          if ( (_QWORD)v42 )
          {
            v30 = v42;
            v25 = (void *)qalloc_or_throw(v42, (__int64)&v40, v42, v29);
            *(_QWORD *)(v27 + 32) = v25;
            v26 = v41;
            *(_QWORD *)(v27 + 48) = v30;
            memcpy(v25, v26, v30);
            *(_QWORD *)(v27 + 40) = v30;
          }
          *(_DWORD *)(v27 + 56) = 0;
          copy_argloc();
          ++v24;
          *(_DWORD *)(v27 + 72) = v44;
        }
        while ( a2 != v24 );
      }
      a1[1] = a2;
      cleanup_argloc();
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree((__int64)v41);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v38);
      goto LABEL_16;
    }
    if ( v7 < a2 )
    {
      *a1 = qvector_reserve((__int64)a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v8 + 72) = v37 )
    {
      v8 = *a1 + 80 * v2;
      sub_123A40(v8, (unsigned __int8 *)v31, v7, (__int64)v6);
      v9 = si128.m128i_i64[0];
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 16) = v9;
      copy_tinfo_t();
      *(_QWORD *)(v8 + 32) = 0;
      *(_OWORD *)(v8 + 40) = 0;
      v12 = n[0];
      if ( n[0] )
      {
        v13 = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v10, v11);
        *(_QWORD *)(v8 + 32) = v13;
        v14 = src;
        *(_QWORD *)(v8 + 48) = v12;
        memcpy(v13, v14, v12);
        *(_QWORD *)(v8 + 40) = v12;
      }
      *(_DWORD *)(v8 + 56) = 0;
      copy_argloc();
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_16:
  cleanup_argloc();
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v31);
  return v45 - __readfsqword(0x28u);
}

