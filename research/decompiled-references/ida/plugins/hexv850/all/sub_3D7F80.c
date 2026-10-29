unsigned __int64 __fastcall sub_3D7F80(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // r15
  __int64 v9; // rax
  __int64 *v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __m128i *v20; // rax
  char v22; // dl
  unsigned __int64 v23; // rax
  char v24; // dl
  unsigned __int64 v25; // rcx
  _BYTE *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  const __m128i *v30; // rdi
  __int64 v31; // rdx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  const __m128i *v40; // rdi
  __int64 v41; // rdx
  __m128i v42; // xmm0
  _QWORD *exception; // rdi
  __int64 v44; // [rsp+8h] [rbp-70h]
  const __m128i *v45; // [rsp+18h] [rbp-60h] BYREF
  __m128i v46; // [rsp+20h] [rbp-58h] BYREF
  __int64 v47; // [rsp+30h] [rbp-48h]
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 104);
  v48 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 144);
  if ( a3 == -1 )
    v7 = -1;
  else
    v7 = a3 & 7 | (unsigned __int64)(8 * v6);
  v8 = *(unsigned __int64 **)(a1 + 88);
  v46.m128i_i64[0] = a2;
  v46.m128i_i64[1] = v7;
  v45 = &v46;
  if ( !v8 )
  {
    v35 = qalloc();
    v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
    if ( !v35 )
      goto LABEL_41;
    *(_QWORD *)(v35 + 32) = 0;
    *(_OWORD *)(v35 + 16) = 0;
    *(__m128i *)(v35 + 8) = v36;
    *(_QWORD *)v35 = v35 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 88) = v35;
    *(_QWORD *)v35 = v35 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v35 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 88) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 88),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 88));
    **(_QWORD **)(a1 + 88) &= ~1uLL;
    **(_QWORD **)(a1 + 88) |= 2uLL;
    v8 = *(unsigned __int64 **)(a1 + 88);
LABEL_5:
    v9 = qalloc();
    v10 = (__int64 *)v9;
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 16) = 0;
      *(_OWORD *)v9 = 0;
      *(__m128i *)(v9 + 24) = _mm_load_si128(&v46);
      *(_QWORD *)v9 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL;
      v11 = _mm_loadl_epi64((const __m128i *)(a1 + 88));
      *(_QWORD *)v9 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v11, v11);
      if ( *(unsigned __int64 **)(a1 + 88) == v8 )
      {
        *v8 = v9 & 0xFFFFFFFFFFFFFFFCLL | *v8 & 3;
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL) = v9;
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) = v9;
        v34 = *(_QWORD *)v9 & 2LL;
        *(_QWORD *)v9 &= ~1uLL;
        *(_QWORD *)v9 = v34 | *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v8[1] = v9;
        v12 = *(_QWORD *)(a1 + 88);
        if ( *(unsigned __int64 **)(v12 + 8) == v8 )
          *(_QWORD *)(v12 + 8) = v10;
        sub_3D7B70((_QWORD *)(a1 + 88), v10);
      }
      ++*(_QWORD *)(a1 + 96);
LABEL_11:
      v13 = *(_QWORD **)(a1 + 104);
      v14 = *(_QWORD *)(a1 + 112);
      v46.m128i_i64[0] = a2;
      LODWORD(v47) = a3;
      v46.m128i_i64[1] = v14;
      v15 = v13[18];
      v16 = v13[17];
      v17 = v13[19];
      v18 = v15 + 1;
      if ( (unsigned __int64)&v46 < v16 || (unsigned __int64)&v46 >= v16 + 24 * v17 )
      {
        if ( v17 < v18 )
        {
          v27 = qvector_reserve();
          v28 = v13[18];
          v29 = v13[19];
          v13[19] = v17;
          v30 = (const __m128i *)v13[17];
          v16 = v27;
          v31 = v28 - 1;
          if ( v31 >= 0 )
          {
            do
            {
              v32 = _mm_loadu_si128(v30);
              v27 += 24;
              v30 = (const __m128i *)((char *)v30 + 24);
              *(__m128i *)(v27 - 24) = v32;
              *(_QWORD *)(v27 - 8) = v30[-1].m128i_i64[1];
              v33 = v31-- == 0;
            }
            while ( !v33 );
          }
          qfree();
          v13[17] = v16;
          v15 = v13[18];
          v13[19] = v29;
        }
        v20 = (__m128i *)(v16 + 24 * v15);
        *v20 = _mm_load_si128(&v46);
        v20[1].m128i_i64[0] = v47;
      }
      else
      {
        if ( v17 < v18 )
        {
          v44 = v14;
          v37 = qvector_reserve();
          v38 = v13[18];
          v39 = v13[19];
          v40 = (const __m128i *)v13[17];
          v16 = v37;
          v13[19] = v17;
          v41 = v38 - 1;
          if ( v41 >= 0 )
          {
            do
            {
              v42 = _mm_loadu_si128(v40);
              v37 += 24;
              v40 = (const __m128i *)((char *)v40 + 24);
              *(__m128i *)(v37 - 24) = v42;
              *(_QWORD *)(v37 - 8) = v40[-1].m128i_i64[1];
              v33 = v41-- == 0;
            }
            while ( !v33 );
          }
          qfree();
          v13[17] = v16;
          v14 = v44;
          v13[19] = v39;
          v15 = v13[18];
        }
        v19 = v16 + 24 * v15;
        *(_QWORD *)v19 = a2;
        *(_QWORD *)(v19 + 8) = v14;
        *(_DWORD *)(v19 + 16) = a3;
      }
      ++v13[18];
      return v48 - __readfsqword(0x28u);
    }
LABEL_41:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_5;
  v22 = 1;
  v23 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v23 & 2) != 0 )
  {
LABEL_20:
    sub_3D7E40((__m128i *)(a1 + 88), v8, v22, &v45);
    if ( !v24 )
      return v48 - __readfsqword(0x28u);
    goto LABEL_11;
  }
  while ( 1 )
  {
    v25 = *(_QWORD *)(v23 + 24);
    if ( a2 < v25 )
    {
      v26 = *(_BYTE **)(v23 + 8);
      v22 = 1;
      goto LABEL_25;
    }
    if ( v25 >= a2 )
      break;
    v26 = *(_BYTE **)(v23 + 16);
    v22 = 0;
LABEL_25:
    if ( (*v26 & 2) != 0 )
      goto LABEL_26;
    v23 = (unsigned __int64)v26;
  }
  if ( !v23 )
  {
LABEL_26:
    v8 = (unsigned __int64 *)v23;
    goto LABEL_20;
  }
  return v48 - __readfsqword(0x28u);
}

