unsigned __int64 __fastcall sub_144730(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD **v4; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __m128i v12; // xmm4
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 i; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __m128i v19; // xmm5
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm0
  _QWORD *v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  size_t v43; // r15
  void *v44; // rax
  void *v45; // rax
  size_t v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __m128i v50; // [rsp+0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+18h] [rbp-60h]
  __m128i v53; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD ***)(a1 + 792);
  v54 = __readfsqword(0x28u);
  v6 = sub_13DB30(v4, a2);
  if ( v6 )
  {
    v9 = *v6;
    if ( v9 )
    {
      v51 = 0;
      v10 = *(_QWORD *)(v9 + 8);
      v11 = *(_QWORD *)(a3 + 8);
      v50.m128i_i64[0] = v11;
      if ( v11 )
        goto LABEL_27;
      while ( 1 )
      {
        v12 = _mm_loadl_epi64(&v50);
        v13 = *(_QWORD *)(v10 + 1256);
        v50 = _mm_unpacklo_epi64(v12, v12);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v10 + 1264);
          if ( v14 )
          {
            for ( i = 0; i != v14; ++i )
            {
              v16 = (_QWORD *)(v13 + 96 * i);
              v17 = v16[7];
              if ( v17 )
              {
                v16[8] = 0;
                qfree(v17);
              }
              clear_tinfo_t();
              v18 = v16[3];
              if ( v18 )
              {
                v16[4] = 0;
                qfree(v18);
              }
              cleanup_argloc();
              v13 = *(_QWORD *)(v10 + 1256);
            }
          }
          *(_QWORD *)(v10 + 1264) = 0;
          qfree(v13);
        }
        v19 = _mm_load_si128(&v50);
        *(_QWORD *)(v10 + 1256) = v51;
        *(__m128i *)(v10 + 1264) = v19;
        if ( a3 + 24 == v10 + 1280 )
          break;
        v53 = 0u;
        v20 = *(_QWORD *)(a3 + 32);
        v21 = 0;
        if ( !v20 )
          goto LABEL_15;
        v25 = qalloc();
        v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
        if ( !v25 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v25 + 64) = 0;
        *(_OWORD *)(v25 + 16) = 0;
        *(__m128i *)(v25 + 8) = v26;
        *(_OWORD *)(v25 + 32) = 0;
        *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v53 = (__m128i)(unsigned __int64)v25;
        v27 = *(_QWORD *)v25;
        *(_OWORD *)(v25 + 48) = 0;
        *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | v27 & 3;
        v28 = v53.m128i_i64[0];
        v29 = (__m128i)v53.m128i_u64[0];
        *(_QWORD *)v53.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v29, v29);
        *(_QWORD *)v53.m128i_i64[0] |= 2uLL;
        if ( !*(_QWORD *)(a3 + 32) )
          sub_134890();
        v30 = *(_QWORD **)(a3 + 24);
        if ( v30 )
          v31 = *v30 & 0xFFFFFFFFFFFFFFFCLL;
        else
          v31 = 0;
        v32 = sub_1445A0(&v53, v31, v53.m128i_i64[0]);
        a2 = v32 & 0xFFFFFFFFFFFFFFFCLL;
        *(_QWORD *)v53.m128i_i64[0] = v32 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v53.m128i_i64[0] & 3LL;
        if ( (*(_BYTE *)v32 & 2) == 0 )
        {
          v47 = v32;
          do
          {
            v48 = v47;
            v47 = *(_QWORD *)(v47 + 8);
          }
          while ( (*(_BYTE *)v47 & 2) == 0 );
          v21 = v53.m128i_i64[0];
          *(_QWORD *)(v53.m128i_i64[0] + 8) = v48;
          if ( (*(_BYTE *)v32 & 2) != 0 )
          {
            if ( under_debugger )
LABEL_43:
              BUG();
            v32 = interr();
          }
          do
          {
            v49 = v32;
            v32 = *(_QWORD *)(v32 + 16);
          }
          while ( (*(_BYTE *)v32 & 2) == 0 );
          *(_QWORD *)(v21 + 16) = v49;
          v20 = *(_QWORD *)(a3 + 32);
LABEL_15:
          v22 = *(_QWORD *)(v10 + 1280);
          *(_QWORD *)(v10 + 1280) = v21;
          v23 = *(_QWORD *)(v10 + 1288);
          *(_QWORD *)(v10 + 1288) = v20;
          v53.m128i_i64[0] = v22;
          v53.m128i_i64[1] = v23;
          if ( v22 )
          {
            sub_83C10((unsigned __int64 **)&v53);
            if ( v53.m128i_i64[0] )
              qfree(v53.m128i_i64[0]);
          }
          break;
        }
        if ( under_debugger )
          goto LABEL_43;
        v11 = interr();
LABEL_27:
        v33 = 0;
        v51 = qalloc_or_throw(96 * v11, a2, v7, v8);
        v34 = v51;
        do
        {
          v37 = *(_QWORD *)a3 + 96 * v33;
          *(_DWORD *)v34 = 0;
          v38 = v37;
          v39 = v37;
          copy_argloc();
          v42 = *(_QWORD *)(v38 + 16);
          *(_QWORD *)(v34 + 24) = 0;
          *(_OWORD *)(v34 + 32) = 0;
          *(_QWORD *)(v34 + 16) = v42;
          v43 = *(_QWORD *)(v38 + 32);
          if ( v43 )
          {
            v44 = (void *)qalloc_or_throw(*(_QWORD *)(v38 + 32), v39, v40, v41);
            *(_QWORD *)(v34 + 24) = v44;
            *(_QWORD *)(v34 + 40) = v43;
            memcpy(v44, *(const void **)(v38 + 24), v43);
            *(_QWORD *)(v34 + 32) = v43;
          }
          *(_QWORD *)(v34 + 48) = 0;
          copy_tinfo_t();
          *(_QWORD *)(v34 + 56) = 0;
          *(_OWORD *)(v34 + 64) = 0;
          if ( *(_QWORD *)(v38 + 64) )
          {
            n = *(_QWORD *)(v38 + 64);
            v45 = (void *)qalloc_or_throw(n, v38 + 48, v35, v36);
            v46 = n;
            *(_QWORD *)(v34 + 56) = v45;
            *(_QWORD *)(v34 + 72) = v46;
            memcpy(v45, *(const void **)(v38 + 56), v46);
            *(_QWORD *)(v34 + 64) = n;
          }
          ++v33;
          v34 += 96;
          *(_QWORD *)(v34 - 16) = *(_QWORD *)(v38 + 80);
          *(_DWORD *)(v34 - 8) = *(_DWORD *)(v38 + 88);
        }
        while ( v50.m128i_i64[0] != v33 );
      }
      *(_QWORD *)(v10 + 1296) = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(v10 + 1304) = *(_DWORD *)(a3 + 48);
    }
  }
  return v54 - __readfsqword(0x28u);
}

