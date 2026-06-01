__int64 __fastcall sub_315B40(_QWORD *a1, __int64 a2)
{
  _QWORD *exception; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // r12
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 *v16; // rax
  char v17; // cl
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __m128i v22; // xmm0
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  int v29; // [rsp+8h] [rbp-60h]
  unsigned __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  unsigned __int64 v32; // [rsp+8h] [rbp-60h]
  _QWORD *v33; // [rsp+10h] [rbp-58h]
  _QWORD v34[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1;
  v34[1] = __readfsqword(0x28u);
  v4 = a2;
  v5 = sub_314F30((__int64)a1, a2, 0);
  v7 = *(_DWORD *)(a2 + 4);
  if ( v5 )
  {
    a1 = v34;
    a2 = v5;
    v29 = *(_DWORD *)(v4 + 4);
    v34[0] = 0;
    __memcpy_chk();
    v8 = v34[0];
    if ( (unsigned int)(v29 - 1) <= 1 || v29 == 4 )
      return ~(-1LL << (8 * (unsigned __int8)v29)) & v34[0];
    if ( v29 != 8 )
      goto LABEL_41;
    return v8;
  }
  v10 = 0;
  v11 = 0;
  v33 = a1 + 1;
  if ( v7 <= 0 )
    goto LABEL_41;
  do
  {
    v18 = v3[1];
    v19 = v10 + *(_QWORD *)(v4 + 8);
    if ( !v18 )
    {
      v32 = v10 + *(_QWORD *)(v4 + 8);
      v26 = qalloc();
      v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
      if ( !v26 )
      {
LABEL_42:
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v19 = v32;
      *(_QWORD *)(v26 + 32) = 0;
      a2 = v26 & 0xFFFFFFFFFFFFFFFCLL;
      *(_OWORD *)(v26 + 16) = 0;
      *(__m128i *)(v26 + 8) = v27;
      *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v3[1] = v26;
      *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v26 & 3LL;
      *(__m128i *)(v3[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3[1], (__m128i)(unsigned __int64)v3[1]);
      *(_QWORD *)v3[1] &= ~1uLL;
      *(_QWORD *)v3[1] |= 2uLL;
      v18 = v3[1];
LABEL_9:
      a1 = &qword_28;
      v30 = v19;
      v12 = qalloc();
      v13 = v12;
      if ( !v12 )
        goto LABEL_42;
      *(_QWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 16) = 0;
      *(_OWORD *)v12 = 0;
      *(_QWORD *)(v12 + 24) = v30;
      *(_QWORD *)v12 = v18 & 0xFFFFFFFFFFFFFFFCLL;
      v14 = _mm_loadl_epi64((const __m128i *)(v3 + 1));
      *(_QWORD *)v12 = v18 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v14, v14);
      if ( v3[1] != v18 )
      {
        *(_QWORD *)(v18 + 8) = v12;
        v15 = v3[1];
        if ( *(_QWORD *)(v15 + 8) == v18 )
LABEL_22:
          *(_QWORD *)(v15 + 8) = v13;
LABEL_12:
        a1 = v33;
        a2 = v13;
        sub_315760(v33, (__int64 *)v13);
LABEL_13:
        ++v3[2];
        v7 = *(_DWORD *)(v4 + 4);
        v16 = (__int64 *)(v13 + 24);
        goto LABEL_14;
      }
LABEL_29:
      *(_QWORD *)v18 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v18 & 3LL;
      *(_QWORD *)(v3[1] + 8LL) = v13;
      *(_QWORD *)(v3[1] + 16LL) = v13;
      v25 = *(_QWORD *)v13 & 2LL;
      *(_QWORD *)v13 &= ~1uLL;
      *(_QWORD *)v13 = v25 | v3[1] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_13;
    }
    if ( !v3[2] )
      goto LABEL_9;
    a2 = 1;
    v20 = *(_QWORD *)v18 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v20 & 2) != 0 )
      goto LABEL_18;
    v23 = *(_QWORD *)(v20 + 24);
    v16 = (__int64 *)(v20 + 24);
    if ( v19 < v23 )
    {
LABEL_24:
      v24 = *(_QWORD *)(v20 + 8);
      a2 = 1;
      if ( (*(_BYTE *)v24 & 2) == 0 )
        goto LABEL_25;
LABEL_28:
      v18 = v20;
LABEL_18:
      a1 = &qword_28;
      v31 = v10 + *(_QWORD *)(v4 + 8);
      v21 = qalloc();
      v13 = v21;
      if ( !v21 )
        goto LABEL_42;
      a2 = (unsigned __int8)a2;
      *(_QWORD *)(v21 + 32) = 0;
      *(_OWORD *)(v21 + 16) = 0;
      *(_OWORD *)v21 = 0;
      *(_QWORD *)(v21 + 24) = v31;
      *(_QWORD *)v21 = v18 & 0xFFFFFFFFFFFFFFFCLL;
      v22 = _mm_loadl_epi64((const __m128i *)(v3 + 1));
      *(_QWORD *)v21 = v18 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v22, v22);
      if ( v18 != v3[1] )
      {
        if ( !(_BYTE)a2 )
        {
          *(_QWORD *)(v18 + 16) = v21;
          v28 = v3[1];
          if ( v18 == *(_QWORD *)(v28 + 16) )
            *(_QWORD *)(v28 + 16) = v13;
          goto LABEL_12;
        }
        *(_QWORD *)(v18 + 8) = v21;
        v15 = v3[1];
        if ( v18 == *(_QWORD *)(v15 + 8) )
          goto LABEL_22;
        goto LABEL_12;
      }
      goto LABEL_29;
    }
    while ( v23 < v19 )
    {
      v24 = *(_QWORD *)(v20 + 16);
      a2 = 0;
      if ( (*(_BYTE *)v24 & 2) != 0 )
        goto LABEL_28;
LABEL_25:
      v20 = v24;
      v23 = *(_QWORD *)(v24 + 24);
      v16 = (__int64 *)(v24 + 24);
      if ( v19 < v23 )
        goto LABEL_24;
    }
    if ( !v20 )
    {
      v18 = 0;
      goto LABEL_18;
    }
LABEL_14:
    v17 = 8 * v10++;
    v6 = *((unsigned __int8 *)v16 + 8) << v17;
    v11 |= v6;
  }
  while ( v7 > (int)v10 );
  if ( (unsigned int)(v7 - 1) > 1 && v7 != 4 )
  {
    if ( v7 == 8 )
      return v11;
LABEL_41:
    sub_3138E0(a1, a2, v6);
  }
  return ~(-1LL << (8 * (unsigned __int8)v7)) & v11;
}

