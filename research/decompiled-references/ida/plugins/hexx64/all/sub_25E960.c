unsigned __int64 __fastcall sub_25E960(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  bool v5; // zf
  __m128i *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v12; // r13
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v18; // r13
  __int64 v19; // rdx
  void *v20; // rbp
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm1
  size_t v25; // rbx
  unsigned __int64 v26; // rbx
  char v27; // dl
  unsigned __int64 v28; // rax
  _BYTE *v29; // rax
  __int64 v30; // rdx
  __m128i v31; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 *v33; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)(a3 + 8) == 0;
  v32 = a2;
  v34 = __readfsqword(0x28u);
  v6 = *(__m128i **)(a1 + 96);
  if ( !v5 )
  {
    v33 = &v32;
    v12 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] )
    {
      if ( v6->m128i_i64[1] )
      {
        v26 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v26 & 2) == 0 )
        {
          v14 = v32;
          v27 = 1;
          while ( 1 )
          {
            v28 = *(_QWORD *)(v26 + 24);
            v18 = v26 + 24;
            if ( v32 >= v28 )
            {
              if ( v28 >= v32 )
              {
                if ( !v26 )
                {
LABEL_33:
                  v12 = v26;
                  goto LABEL_35;
                }
                goto LABEL_17;
              }
              v29 = *(_BYTE **)(v26 + 16);
              v27 = 0;
            }
            else
            {
              v29 = *(_BYTE **)(v26 + 8);
              v27 = 1;
            }
            if ( (*v29 & 2) != 0 )
              goto LABEL_33;
            v26 = (unsigned __int64)v29;
          }
        }
        v27 = 1;
LABEL_35:
        a2 = v12;
        v18 = sub_25E800(v6, (unsigned __int64 *)v12, v27, (__int64 **)&v33) + 24;
LABEL_17:
        v19 = *(_QWORD *)(a3 + 8);
        v20 = nullptr;
        v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
        if ( v19 )
        {
          v25 = 4 * v19;
          v31 = v21;
          v20 = (void *)qalloc_or_throw(4 * v19, a2, v19, v14);
          memcpy(v20, *(const void **)a3, v25);
          v21 = _mm_load_si128(&v31);
        }
        v22 = *(_QWORD *)(v18 + 8);
        if ( v22 )
        {
          *(_QWORD *)(v18 + 16) = 0;
          v31 = v21;
          qfree(v22);
          v21 = _mm_load_si128(&v31);
        }
        *(_QWORD *)(v18 + 8) = v20;
        *(__m128i *)(v18 + 16) = v21;
        return v34 - __readfsqword(0x28u);
      }
    }
    else
    {
      v23 = qalloc();
      v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
      if ( !v23 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v23 + 48) = 0;
      *(_OWORD *)(v23 + 16) = 0;
      *(_OWORD *)(v23 + 32) = 0;
      *(__m128i *)(v23 + 8) = v24;
      *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v6->m128i_i64[0] = v23;
      *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
      *(__m128i *)(v6->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v6->m128i_u64[0], (__m128i)v6->m128i_u64[0]);
      *(_QWORD *)v6->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v6->m128i_i64[0] |= 2uLL;
      v12 = v6->m128i_i64[0];
    }
    v13 = (_OWORD *)qalloc();
    v15 = (__int64)v13;
    if ( !v13 )
    {
      v4 = __cxa_allocate_exception(8u);
      *v4 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *v13 = 0;
    v13[1] = 0;
    v16 = v32;
    *(_QWORD *)(v15 + 32) = 0;
    *(_QWORD *)(v15 + 24) = v16;
    *(_OWORD *)(v15 + 40) = 0;
    *(_QWORD *)v15 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    v17 = _mm_loadl_epi64(v6);
    *(_QWORD *)v15 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v17, v17);
    if ( v6->m128i_i64[0] == v12 )
    {
      *(_QWORD *)v12 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
      *(_QWORD *)(v6->m128i_i64[0] + 8) = v15;
      *(_QWORD *)(v6->m128i_i64[0] + 16) = v15;
      v30 = *(_QWORD *)v15 & 2LL;
      *(_QWORD *)v15 &= ~1uLL;
      *(_QWORD *)v15 = v30 | v6->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      *(_QWORD *)(v12 + 8) = v15;
      if ( *(_QWORD *)(v6->m128i_i64[0] + 8) == v12 )
        *(_QWORD *)(v6->m128i_i64[0] + 8) = v15;
      a2 = v15;
      sub_25E5C0(v6, (__int64 *)v15);
    }
    ++v6->m128i_i64[1];
    v18 = v15 + 24;
    goto LABEL_17;
  }
  v7 = (__int64 *)v6->m128i_i64[0];
  if ( v6->m128i_i64[0] )
  {
    v8 = (__int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v8 )
      goto LABEL_23;
    while ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v9 = v8[3];
      if ( v32 >= v9 )
      {
        if ( v9 >= v32 )
        {
          if ( v7 != v8 )
LABEL_23:
            sub_25E210(*(unsigned __int64 ***)(a1 + 96), v8);
          return v34 - __readfsqword(0x28u);
        }
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v8 = (__int64 *)v8[1];
      }
    }
  }
  return v34 - __readfsqword(0x28u);
}

