__int64 *__fastcall sub_2B9F00(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  int v12; // eax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  void *v20; // rax
  void *v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v23; // r13
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  int *v26; // r15
  __int64 v27; // rbx
  unsigned int v28; // r13d
  __int64 v29; // rbx
  __int64 v30; // rax
  void *v31; // rax
  void *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-140h]
  size_t v36; // [rsp+20h] [rbp-120h]
  size_t n; // [rsp+40h] [rbp-100h]
  __m128i v38; // [rsp+48h] [rbp-F8h] BYREF
  _QWORD v39[2]; // [rsp+58h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-D8h]
  void *v41; // [rsp+78h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+80h] [rbp-C0h]
  __int64 v43; // [rsp+90h] [rbp-B0h]
  __int64 v44; // [rsp+98h] [rbp-A8h]
  int v45; // [rsp+A0h] [rbp-A0h]
  unsigned __int8 v46[16]; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-88h]
  __int64 v48; // [rsp+C0h] [rbp-80h]
  void *src; // [rsp+C8h] [rbp-78h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-70h]
  int v51; // [rsp+E0h] [rbp-60h]
  int v52; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v53; // [rsp+100h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v38 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)a4);
  v5 = qalloc_or_throw();
  *(_QWORD *)v5 = 0;
  v6 = (__int64 *)v5;
  *(_OWORD *)(v5 + 8) = 0;
  v34 = *(_QWORD *)(a1 + 24);
  if ( v38.m128i_i64[1] - v38.m128i_i64[0] >= (unsigned __int64)((unsigned __int8)is_cvt64() == 0 ? 4 : 0) + 5 )
  {
    v12 = unpack_dd();
    if ( !v12 )
    {
      if ( !under_debugger )
        sub_37E160(51188);
      BUG();
    }
    v13 = v12;
    if ( v12 == v6[1] )
      goto LABEL_34;
    v39[1] = 0;
    v41 = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v42 = 0;
    v14 = v6[1];
    v39[0] = 0xFFFFFFFF00000000LL;
    if ( v12 < v14 )
    {
      v22 = v12;
      do
      {
        v23 = *v6 + 80 * v22;
        cleanup_argloc();
        if ( *(_QWORD *)(v23 + 32) )
        {
          *(_QWORD *)(v23 + 40) = 0;
          qfree();
        }
        ++v22;
        clear_tinfo_t();
        sub_118BA0(v23);
      }
      while ( v22 < v14 );
      v6[1] = v13;
    }
    else if ( v14 < v12 )
    {
      v15 = *v6;
      v16 = v6[2];
      if ( (unsigned __int64)v39 < *v6 || (unsigned __int64)v39 >= v15 + 80 * v16 )
      {
        if ( v16 >= v12 || (v33 = qvector_reserve(), v14 = v6[1], *v6 = v33, v15 = v33, v14 < v13) )
        {
          while ( 1 )
          {
            v29 = 80 * v14 + v15;
            sub_11F840(v29, (unsigned __int8 *)v39);
            v30 = si128.m128i_i64[0];
            *(_QWORD *)(v29 + 24) = 0;
            *(_QWORD *)(v29 + 16) = v30;
            copy_tinfo_t();
            *(_QWORD *)(v29 + 32) = 0;
            *(_OWORD *)(v29 + 40) = 0;
            if ( (_QWORD)v42 )
            {
              v36 = v42;
              v31 = (void *)qalloc_or_throw();
              *(_QWORD *)(v29 + 32) = v31;
              v32 = v41;
              *(_QWORD *)(v29 + 48) = v36;
              memcpy(v31, v32, v36);
              *(_QWORD *)(v29 + 40) = v36;
            }
            *(_DWORD *)(v29 + 56) = 0;
            copy_argloc();
            ++v14;
            *(_DWORD *)(v29 + 72) = v45;
            if ( v14 >= v13 )
              break;
            v15 = *v6;
          }
        }
        v6[1] = v13;
      }
      else
      {
        sub_11F840((__int64)v46, (unsigned __int8 *)v39);
        v48 = 0;
        v47 = si128.m128i_i64[0];
        copy_tinfo_t();
        src = nullptr;
        v50 = 0;
        sub_2A9AA0(&src, (__int64)&v41);
        v51 = 0;
        copy_argloc();
        v52 = v45;
        if ( v6[2] < v13 )
          *v6 = qvector_reserve();
        v17 = v6[1];
        if ( v17 < v13 )
        {
          do
          {
            v18 = *v6 + 80 * v17;
            sub_11F840(v18, v46);
            v19 = v47;
            *(_QWORD *)(v18 + 24) = 0;
            *(_QWORD *)(v18 + 16) = v19;
            copy_tinfo_t();
            *(_QWORD *)(v18 + 32) = 0;
            *(_OWORD *)(v18 + 40) = 0;
            if ( (_QWORD)v50 )
            {
              n = v50;
              v20 = (void *)qalloc_or_throw();
              *(_QWORD *)(v18 + 32) = v20;
              v21 = src;
              *(_QWORD *)(v18 + 48) = n;
              memcpy(v20, v21, n);
              *(_QWORD *)(v18 + 40) = n;
            }
            *(_DWORD *)(v18 + 56) = 0;
            copy_argloc();
            ++v17;
            *(_DWORD *)(v18 + 72) = v52;
          }
          while ( v13 != v17 );
        }
        v6[1] = v13;
        sub_7E200((__int64)v46);
      }
    }
    cleanup_argloc();
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_118BA0((__int64)v39);
    if ( v6[1] )
    {
LABEL_34:
      v24 = 0;
      do
      {
        while ( 1 )
        {
          v25 = *v6 + 80 * v24;
          v26 = (int *)(v25 + 56);
          sub_2AE560(v25 + 56, (const void **)&v38, v38.m128i_u64[1]);
          v27 = v25 + 24;
          v28 = unpack_dd();
          if ( !(unsigned __int8)sub_2B26B0((const void **)&v38, v38.m128i_u64[1], v27, 0) )
            break;
          if ( ++v24 >= v6[1] )
            goto LABEL_38;
        }
        sub_2B3130(v34, v27, v26, v28);
        ++v24;
      }
      while ( v24 < v6[1] );
    }
LABEL_38:
    *a3 = v38.m128i_i64[0];
  }
  else
  {
    *a3 = v38.m128i_i64[0];
    if ( v6 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = v6[1];
        if ( v8 )
        {
          v9 = 0;
          do
          {
            v10 = v7 + 80 * v9;
            cleanup_argloc();
            if ( *(_QWORD *)(v10 + 32) )
            {
              *(_QWORD *)(v10 + 40) = 0;
              qfree();
            }
            ++v9;
            clear_tinfo_t();
            sub_118BA0(v10);
            v7 = *v6;
          }
          while ( v8 != v9 );
        }
        v6[1] = 0;
        qfree();
      }
      qfree();
    }
    return nullptr;
  }
  return v6;
}

