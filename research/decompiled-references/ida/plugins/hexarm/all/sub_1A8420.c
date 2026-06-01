__int64 __fastcall sub_1A8420(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  __int64 *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  int v10; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  char v15; // cl
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // r14d
  unsigned __int64 v22; // rax
  char v23; // dl
  __m128i v24; // xmm0
  __int64 v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  char v31; // dl
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __m128i v34; // xmm0
  unsigned __int64 v35; // rdi
  char v36; // si
  _BYTE *v37; // rax
  char v38; // dl
  __int64 v39; // rax
  __int64 v40; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v42; // [rsp+18h] [rbp-90h] BYREF
  __int64 v43; // [rsp+20h] [rbp-88h] BYREF
  __m128i si128; // [rsp+28h] [rbp-80h] BYREF
  __int128 v45; // [rsp+38h] [rbp-70h] BYREF
  __int128 v46; // [rsp+48h] [rbp-60h] BYREF
  __int64 v47; // [rsp+58h] [rbp-50h]
  char v48; // [rsp+60h] [rbp-48h]
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]

  v6 = *(__int64 **)(a1 + 48);
  v49 = __readfsqword(0x28u);
  v48 = 0;
  v8 = *v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  v43 = 0;
  v47 = -1;
  v45 = -1;
  v46 = -1;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 24))(v6);
  v10 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 4 )
  {
    v12 = *(_DWORD *)(a3 + 68);
    if ( v12 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 80LL) )
      goto LABEL_5;
    if ( *(_BYTE *)(a3 + 32) != 10 )
      goto LABEL_5;
    v25 = *(_QWORD *)(a3 + 40);
    if ( *(_BYTE *)v25 != 5 || *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL) < *(_QWORD *)(*(_QWORD *)(a2 + 64) + 144LL) )
      goto LABEL_5;
    v26 = *(_QWORD **)(a1 + 88);
    v27 = &v26[2 * *(_QWORD *)(a1 + 96)];
    if ( v26 != v27 )
    {
      v28 = *(_QWORD **)(a1 + 88);
      while ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(*v28 + 72LL) || v28[1] != a3 )
      {
        v28 += 2;
        if ( v27 == v28 )
          goto LABEL_38;
      }
      if ( v27 != v28 )
        goto LABEL_5;
    }
LABEL_38:
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(*(_QWORD *)(a1 + 96) + 1LL) )
    {
      v39 = qvector_reserve();
      *(_QWORD *)(a1 + 88) = v39;
      v27 = (_QWORD *)(16LL * *(_QWORD *)(a1 + 96) + v39);
    }
    *v27 = a2;
    v27[1] = a3;
    ++*(_QWORD *)(a1 + 96);
    v10 = *(_DWORD *)a3;
  }
  if ( (v10 & 0xFFFFFFEF) != 4 )
    return 1;
  v12 = *(_DWORD *)(a3 + 68);
LABEL_5:
  v13 = *(char *)(v9 + 10);
  if ( v13 != v12 && 2 * v13 != v12 )
  {
    v14 = *(char *)(v9 + 11);
    if ( v14 != v12 && 2 * v14 != v12 )
      return 1;
  }
  if ( !(unsigned __int8)sub_32F650(a3 + 64, &v40) )
    return 1;
  v15 = sub_199680(a1, (__int64)&v43, a3);
  if ( !v15 )
    return 1;
  v16 = *(_QWORD **)(a1 + 24);
  v17 = &v16[*(_QWORD *)(a1 + 32)];
  if ( v16 != v17 )
  {
    while ( *v16 != a3 )
    {
      if ( v17 == ++v16 )
        goto LABEL_16;
    }
    if ( v16 != v17 )
      return 1;
  }
LABEL_16:
  v18 = *(unsigned __int64 **)(a1 + 8);
  if ( !v18 )
  {
    v20 = *(_DWORD *)(a3 + 68);
    v21 = *(char *)(v9 + 10);
    if ( v21 >= v20 )
    {
      v43 = a3;
      v21 = v20;
      si128.m128i_i64[0] = v20;
      v42 = &v40;
      goto LABEL_50;
    }
LABEL_20:
    if ( !v48 )
      return 1;
    if ( 2 * v21 != v20 )
    {
      if ( !under_debugger )
        sub_3835A0(51608);
      BUG();
    }
    v43 = a3;
    si128.m128i_i64[0] = v21;
    v42 = &v40;
    if ( v18 )
      goto LABEL_23;
LABEL_50:
    v33 = qalloc();
    v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
    if ( !v33 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v33, 0, 0x68u);
    *(__m128i *)(v33 + 8) = v34;
    *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 8) = v33;
    *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v33 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                (__m128i)*(unsigned __int64 *)(a1 + 8));
    **(_QWORD **)(a1 + 8) &= ~1uLL;
    **(_QWORD **)(a1 + 8) |= 2uLL;
    v18 = *(unsigned __int64 **)(a1 + 8);
    goto LABEL_24;
  }
  v19 = *v18 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v19 )
    return 2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_19;
      if ( v40 >= *(_QWORD *)(v19 + 24) )
        break;
      v19 = *(_QWORD *)(v19 + 8);
    }
    if ( v40 <= *(_QWORD *)(v19 + 24) )
      break;
    v19 = *(_QWORD *)(v19 + 16);
  }
  if ( v18 != (unsigned __int64 *)v19 )
    return 2;
LABEL_19:
  v20 = *(_DWORD *)(a3 + 68);
  v21 = *(char *)(v9 + 10);
  if ( v21 < v20 )
    goto LABEL_20;
  v43 = a3;
  v21 = v20;
  si128.m128i_i64[0] = v20;
  v42 = &v40;
LABEL_23:
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_24:
    v22 = sub_1A7FD0((__m128i *)(a1 + 8), v18, 1, &v42) + 24;
    goto LABEL_25;
  }
  v35 = *v18 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v35 & 2) != 0 )
  {
    v38 = 1;
LABEL_58:
    v22 = sub_1A7FD0((__m128i *)(a1 + 8), v18, v38, &v42) + 24;
    goto LABEL_25;
  }
  v36 = v15;
  while ( 1 )
  {
    v22 = v35 + 24;
    if ( v40 < *(_QWORD *)(v35 + 24) )
    {
      v37 = *(_BYTE **)(v35 + 8);
      v36 = v15;
      goto LABEL_56;
    }
    if ( v40 <= *(_QWORD *)(v35 + 24) )
      break;
    v37 = *(_BYTE **)(v35 + 16);
    v36 = 0;
LABEL_56:
    if ( (*v37 & 2) != 0 )
      goto LABEL_57;
    v35 = (unsigned __int64)v37;
  }
  if ( !v35 )
  {
LABEL_57:
    v38 = v36;
    v18 = (unsigned __int64 *)v35;
    goto LABEL_58;
  }
LABEL_25:
  v23 = v48;
  *(__m128i *)(v22 + 8) = _mm_load_si128((const __m128i *)&v43);
  v24 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
  *(_BYTE *)(v22 + 72) = v23;
  *(__m128i *)(v22 + 24) = v24;
  *(__m128i *)(v22 + 40) = _mm_load_si128((const __m128i *)((char *)&v45 + 8));
  *(__m128i *)(v22 + 56) = _mm_load_si128((const __m128i *)((char *)&v46 + 8));
  if ( *(_DWORD *)(a3 + 68) > v21 )
  {
    v29 = *(char *)(v9 + 10);
    si128.m128i_i64[1] += v29;
    v42 = &v41;
    v41 = v40 + v29;
    v30 = sub_1A82B0((__m128i *)(a1 + 8), &v41, &v42);
    v31 = v48;
    *(__m128i *)(v30 + 32) = _mm_load_si128((const __m128i *)&v43);
    v32 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
    *(_BYTE *)(v30 + 96) = v31;
    *(__m128i *)(v30 + 48) = v32;
    *(__m128i *)(v30 + 64) = _mm_load_si128((const __m128i *)((char *)&v45 + 8));
    *(__m128i *)(v30 + 80) = _mm_load_si128((const __m128i *)((char *)&v46 + 8));
  }
  return 0;
}

