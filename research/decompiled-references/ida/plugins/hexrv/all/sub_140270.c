unsigned __int64 __fastcall sub_140270(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD **v4; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __m128i v9; // xmm4
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 i; // r12
  _QWORD *v13; // rbx
  __m128i v14; // xmm5
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  _QWORD *v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  size_t v33; // r15
  void *v34; // rax
  void *v35; // rax
  size_t v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __m128i v40; // [rsp+0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+18h] [rbp-60h]
  __m128i v43; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD ***)(a1 + 792);
  v44 = __readfsqword(0x28u);
  v6 = sub_139670(v4, a2);
  if ( v6 )
  {
    v7 = *v6;
    if ( v7 )
    {
      v41 = 0;
      v8 = *(_QWORD *)(v7 + 8);
      v40.m128i_i64[0] = *(_QWORD *)(a3 + 8);
      if ( v40.m128i_i64[0] )
        goto LABEL_27;
      while ( 1 )
      {
        v9 = _mm_loadl_epi64(&v40);
        v10 = *(_QWORD *)(v8 + 1256);
        v40 = _mm_unpacklo_epi64(v9, v9);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v8 + 1264);
          if ( v11 )
          {
            for ( i = 0; i != v11; ++i )
            {
              v13 = (_QWORD *)(v10 + 96 * i);
              if ( v13[7] )
              {
                v13[8] = 0;
                qfree();
              }
              clear_tinfo_t();
              if ( v13[3] )
              {
                v13[4] = 0;
                qfree();
              }
              cleanup_argloc();
              v10 = *(_QWORD *)(v8 + 1256);
            }
          }
          *(_QWORD *)(v8 + 1264) = 0;
          qfree();
        }
        v14 = _mm_load_si128(&v40);
        *(_QWORD *)(v8 + 1256) = v41;
        *(__m128i *)(v8 + 1264) = v14;
        if ( a3 + 24 == v8 + 1280 )
          break;
        v43 = 0u;
        v15 = *(_QWORD *)(a3 + 32);
        v16 = 0;
        if ( !v15 )
          goto LABEL_15;
        v20 = qalloc();
        v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
        if ( !v20 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v20 + 64) = 0;
        *(_OWORD *)(v20 + 16) = 0;
        *(__m128i *)(v20 + 8) = v21;
        *(_OWORD *)(v20 + 32) = 0;
        *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v43 = (__m128i)(unsigned __int64)v20;
        v22 = *(_QWORD *)v20;
        *(_OWORD *)(v20 + 48) = 0;
        *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | v22 & 3;
        v23 = v43.m128i_i64[0];
        v24 = (__m128i)v43.m128i_u64[0];
        *(_QWORD *)v43.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v24, v24);
        *(_QWORD *)v43.m128i_i64[0] |= 2uLL;
        if ( !*(_QWORD *)(a3 + 32) )
          sub_1303D0(72);
        v25 = *(_QWORD **)(a3 + 24);
        if ( v25 )
          v26 = *v25 & 0xFFFFFFFFFFFFFFFCLL;
        else
          v26 = 0;
        v27 = sub_1400E0(&v43, v26, v43.m128i_i64[0]);
        *(_QWORD *)v43.m128i_i64[0] = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v43.m128i_i64[0] & 3LL;
        if ( (*(_BYTE *)v27 & 2) == 0 )
        {
          v37 = v27;
          do
          {
            v38 = v37;
            v37 = *(_QWORD *)(v37 + 8);
          }
          while ( (*(_BYTE *)v37 & 2) == 0 );
          v16 = v43.m128i_i64[0];
          *(_QWORD *)(v43.m128i_i64[0] + 8) = v38;
          if ( (*(_BYTE *)v27 & 2) != 0 )
          {
            if ( under_debugger )
LABEL_43:
              BUG();
            v27 = interr();
          }
          do
          {
            v39 = v27;
            v27 = *(_QWORD *)(v27 + 16);
          }
          while ( (*(_BYTE *)v27 & 2) == 0 );
          *(_QWORD *)(v16 + 16) = v39;
          v15 = *(_QWORD *)(a3 + 32);
LABEL_15:
          v17 = *(_QWORD *)(v8 + 1280);
          *(_QWORD *)(v8 + 1280) = v16;
          v18 = *(_QWORD *)(v8 + 1288);
          *(_QWORD *)(v8 + 1288) = v15;
          v43.m128i_i64[0] = v17;
          v43.m128i_i64[1] = v18;
          if ( v17 )
          {
            sub_7F750((unsigned __int64 **)&v43);
            if ( v43.m128i_i64[0] )
              qfree();
          }
          break;
        }
        if ( under_debugger )
          goto LABEL_43;
        interr();
LABEL_27:
        v28 = 0;
        v41 = qalloc_or_throw();
        v29 = v41;
        do
        {
          v30 = *(_QWORD *)a3 + 96 * v28;
          *(_DWORD *)v29 = 0;
          v31 = v30;
          copy_argloc();
          v32 = *(_QWORD *)(v31 + 16);
          *(_QWORD *)(v29 + 24) = 0;
          *(_OWORD *)(v29 + 32) = 0;
          *(_QWORD *)(v29 + 16) = v32;
          v33 = *(_QWORD *)(v31 + 32);
          if ( v33 )
          {
            v34 = (void *)qalloc_or_throw();
            *(_QWORD *)(v29 + 24) = v34;
            *(_QWORD *)(v29 + 40) = v33;
            memcpy(v34, *(const void **)(v31 + 24), v33);
            *(_QWORD *)(v29 + 32) = v33;
          }
          *(_QWORD *)(v29 + 48) = 0;
          copy_tinfo_t();
          *(_QWORD *)(v29 + 56) = 0;
          *(_OWORD *)(v29 + 64) = 0;
          if ( *(_QWORD *)(v31 + 64) )
          {
            n = *(_QWORD *)(v31 + 64);
            v35 = (void *)qalloc_or_throw();
            v36 = n;
            *(_QWORD *)(v29 + 56) = v35;
            *(_QWORD *)(v29 + 72) = v36;
            memcpy(v35, *(const void **)(v31 + 56), v36);
            *(_QWORD *)(v29 + 64) = n;
          }
          ++v28;
          v29 += 96;
          *(_QWORD *)(v29 - 16) = *(_QWORD *)(v31 + 80);
          *(_DWORD *)(v29 - 8) = *(_DWORD *)(v31 + 88);
        }
        while ( v40.m128i_i64[0] != v28 );
      }
      *(_QWORD *)(v8 + 1296) = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(v8 + 1304) = *(_DWORD *)(a3 + 48);
    }
  }
  return v44 - __readfsqword(0x28u);
}

