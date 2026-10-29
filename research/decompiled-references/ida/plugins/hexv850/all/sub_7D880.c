unsigned __int64 __fastcall sub_7D880(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  size_t v7; // r14
  void *v8; // rax
  void *v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  size_t v13; // rbx
  unsigned __int64 v14; // rbp
  void *v15; // rax
  void *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  size_t v19; // [rsp+28h] [rbp-F0h]
  _QWORD v20[2]; // [rsp+30h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-D8h]
  void *src; // [rsp+50h] [rbp-C8h]
  size_t n[2]; // [rsp+58h] [rbp-C0h]
  __int64 v24; // [rsp+68h] [rbp-B0h]
  __int64 v25; // [rsp+70h] [rbp-A8h]
  int v26; // [rsp+78h] [rbp-A0h]
  _BYTE v27[16]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v28; // [rsp+90h] [rbp-88h]
  __int64 v29; // [rsp+98h] [rbp-80h]
  void *v30; // [rsp+A0h] [rbp-78h]
  __int128 v31; // [rsp+A8h] [rbp-70h]
  int v32; // [rsp+B8h] [rbp-60h]
  int v33; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+D8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v34 - __readfsqword(0x28u);
  v20[0] = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
  v20[1] = 0;
  src = nullptr;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v10 = a2;
    do
    {
      v11 = *a1 + 80 * v10;
      cleanup_argloc();
      if ( *(_QWORD *)(v11 + 32) )
      {
        *(_QWORD *)(v11 + 40) = 0;
        qfree();
      }
      ++v10;
      clear_tinfo_t();
      sub_1181E0(v11);
    }
    while ( v2 != v10 );
  }
  else
  {
    v4 = a1[2];
    if ( (unsigned __int64)v20 >= *a1 && (unsigned __int64)v20 < *a1 + 80 * v4 )
    {
      sub_11EE80(v27, v20);
      v29 = 0;
      v28 = si128.m128i_i64[0];
      copy_tinfo_t();
      v13 = n[0];
      v30 = nullptr;
      v31 = 0;
      if ( n[0] )
      {
        v30 = (void *)qalloc_or_throw();
        *((_QWORD *)&v31 + 1) = v13;
        memcpy(v30, src, v13);
        *(_QWORD *)&v31 = v13;
      }
      v32 = 0;
      copy_argloc();
      v33 = v26;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve();
      v14 = a1[1];
      if ( v14 < a2 )
      {
        do
        {
          v17 = *a1 + 80 * v14;
          sub_11EE80(v17, v27);
          v18 = v28;
          *(_QWORD *)(v17 + 24) = 0;
          *(_QWORD *)(v17 + 16) = v18;
          copy_tinfo_t();
          *(_QWORD *)(v17 + 32) = 0;
          *(_OWORD *)(v17 + 40) = 0;
          if ( (_QWORD)v31 )
          {
            v19 = v31;
            v15 = (void *)qalloc_or_throw();
            *(_QWORD *)(v17 + 32) = v15;
            v16 = v30;
            *(_QWORD *)(v17 + 48) = v19;
            memcpy(v15, v16, v19);
            *(_QWORD *)(v17 + 40) = v19;
          }
          *(_DWORD *)(v17 + 56) = 0;
          copy_argloc();
          ++v14;
          *(_DWORD *)(v17 + 72) = v33;
        }
        while ( a2 != v14 );
      }
      a1[1] = a2;
      cleanup_argloc();
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_1181E0(v27);
      goto LABEL_16;
    }
    if ( v4 < a2 )
    {
      *a1 = qvector_reserve();
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v5 + 72) = v26 )
    {
      v5 = *a1 + 80 * v2;
      sub_11EE80(v5, v20);
      v6 = si128.m128i_i64[0];
      *(_QWORD *)(v5 + 24) = 0;
      *(_QWORD *)(v5 + 16) = v6;
      copy_tinfo_t();
      *(_QWORD *)(v5 + 32) = 0;
      *(_OWORD *)(v5 + 40) = 0;
      v7 = n[0];
      if ( n[0] )
      {
        v8 = (void *)qalloc_or_throw();
        *(_QWORD *)(v5 + 32) = v8;
        v9 = src;
        *(_QWORD *)(v5 + 48) = v7;
        memcpy(v8, v9, v7);
        *(_QWORD *)(v5 + 40) = v7;
      }
      *(_DWORD *)(v5 + 56) = 0;
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
    qfree();
  }
  clear_tinfo_t();
  sub_1181E0(v20);
  return v34 - __readfsqword(0x28u);
}

