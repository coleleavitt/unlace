__int64 __fastcall sub_8B620(__int64 a1, char **a2, __m128 a3)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v11; // r13
  __int64 v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  int v18; // r14d
  char v19; // al
  unsigned __int64 *v20; // r10
  unsigned __int64 v21; // r15
  char *v22; // rax
  unsigned __int8 v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  char v27; // al
  unsigned __int8 v28; // cl
  signed __int64 v29; // rcx
  char v30; // dl
  __int64 v31; // rax
  __m128i v32; // xmm1
  unsigned __int64 v33; // rax
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _BYTE *v36; // rcx
  unsigned __int64 *v37; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v38; // [rsp+8h] [rbp-D0h]
  char v39; // [rsp+17h] [rbp-C1h]
  __m128i *v40; // [rsp+18h] [rbp-C0h]
  char v41; // [rsp+27h] [rbp-B1h] BYREF
  const __m128i *v42; // [rsp+28h] [rbp-B0h] BYREF
  unsigned __int64 *v43; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+40h] [rbp-98h] BYREF
  __int128 v46; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+58h] [rbp-80h]
  signed __int64 v48; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int8 v49; // [rsp+68h] [rbp-70h]
  _BYTE v50[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-40h]

  v5 = *(unsigned __int64 **)(a1 + 8);
  v51 = __readfsqword(0x28u);
  if ( !v5 )
  {
LABEL_20:
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 1;
    v8 = sub_7D4F0(a2, *(double *)a3.m128_u64);
    v9 = v8 == 0;
    if ( v8 < 0 )
      return 0;
    goto LABEL_21;
  }
  v6 = *v5;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v11 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_19:
      *v5 = (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL | v6 & 3;
      v16 = *(_QWORD *)(a1 + 8);
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
      *(__m128 *)(v16 + 8) = a3;
      **(_QWORD **)(a1 + 8) &= ~1uLL;
      **(_QWORD **)(a1 + 8) |= 2uLL;
      goto LABEL_20;
    }
    v12 = *(_QWORD *)(v11 + 8);
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v15 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_15;
      goto LABEL_49;
    }
    v13 = *(_QWORD **)(v12 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
LABEL_62:
        sub_312B80(v12 + 40);
        *(_QWORD *)v12 |= 2uLL;
LABEL_11:
        if ( v12 )
          qfree(v12);
        v15 = *(_QWORD *)(v11 + 16);
        if ( (*(_BYTE *)v15 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)v11 & 2) != 0 )
          {
LABEL_16:
            if ( v6 > 3 )
              qfree(v6 & 0xFFFFFFFFFFFFFFFCLL);
            v5 = *(unsigned __int64 **)(a1 + 8);
            v6 = *v5;
            goto LABEL_19;
          }
LABEL_15:
          sub_312B80(v11 + 40);
          *(_QWORD *)v11 |= 2uLL;
          goto LABEL_16;
        }
LABEL_49:
        v34 = *(_QWORD **)(v15 + 8);
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
          v35 = *(_QWORD **)(v15 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
          {
LABEL_64:
            sub_312B80(v15 + 40);
            *(_QWORD *)v15 |= 2uLL;
LABEL_53:
            if ( v15 )
              qfree(v15);
            goto LABEL_14;
          }
        }
        else
        {
          sub_7B020(v34);
          v35 = *(_QWORD **)(v15 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
            goto LABEL_52;
        }
        sub_7B020(v35);
LABEL_52:
        if ( (*(_BYTE *)v15 & 2) != 0 )
          goto LABEL_53;
        goto LABEL_64;
      }
    }
    else
    {
      sub_7B020(v13);
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_10;
    }
    sub_7B020(v14);
LABEL_10:
    if ( (*(_BYTE *)v12 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_62;
  }
  *v5 = (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL | *v5 & 3;
  v7 = *(_QWORD *)(a1 + 8);
  a3 = (__m128)_mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  *(__m128 *)(v7 + 8) = a3;
  **(_QWORD **)(a1 + 8) &= ~1uLL;
  **(_QWORD **)(a1 + 8) |= 2uLL;
  *(_BYTE *)(a1 + 24) = 1;
  v8 = sub_7D4F0(a2, *(double *)a3.m128_u64);
  v9 = v8 == 0;
  if ( v8 < 0 )
    return 0;
LABEL_21:
  if ( v9 )
    return 1;
  *(_BYTE *)(a1 + 24) = 0;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = v8 - 2;
  if ( v8 == 1 )
    return 1;
  v40 = (__m128i *)(a1 + 8);
LABEL_29:
  v21 = sub_7D020((__int64)a2, 0, *(double *)a3.m128_u64);
  v22 = *a2;
  if ( *a2 >= a2[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC596u, *(double *)a3.m128_u64);
    BUG();
  }
  v23 = *v22;
  a3.m128_u64[0] = 0;
  *a2 = v22 + 1;
  v38 = v23;
  v45 = 0x800000000LL;
  v47 = 0;
  v46 = 0;
  v39 = sub_7F080(&v45, a2, (__m128)0LL);
  if ( v39 )
  {
    v48 = v21;
    v49 = v38;
    sub_312C40((__int64)v50, (__int64)&v45, v24, v25);
    v20 = *(unsigned __int64 **)(a1 + 8);
    v42 = (const __m128i *)&v48;
    if ( !v20 )
    {
      v31 = qalloc();
      v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
      if ( !v31 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v31 + 64) = 0;
      *(_OWORD *)(v31 + 16) = 0;
      *(_OWORD *)(v31 + 32) = 0;
      *(_OWORD *)(v31 + 48) = 0;
      *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v31 + 8) = v32;
      *(_QWORD *)(a1 + 8) = v31;
      *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31 & 3LL;
      v33 = *(_QWORD *)(a1 + 8);
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
      *(__m128 *)(v33 + 8) = a3;
      **(_QWORD **)(a1 + 8) &= ~1uLL;
      **(_QWORD **)(a1 + 8) |= 2uLL;
      v20 = *(unsigned __int64 **)(a1 + 8);
LABEL_33:
      v26 = sub_8B490(v40, v20, 1, &v42);
      goto LABEL_34;
    }
    if ( !*(_QWORD *)(a1 + 16) )
      goto LABEL_33;
    v43 = v20;
    v41 = 1;
    v44 = 0;
    if ( v17 )
    {
      v37 = v20;
      v19 = sub_88E40((unsigned __int64 *)v40, (__int64)&v48, v17, (unsigned __int64 *)&v43, &v41, &v44);
      v20 = v37;
      if ( v19 )
      {
        v17 = v44;
        if ( !v44 )
        {
          v26 = sub_8B490(v40, v43, v41, &v42);
          goto LABEL_34;
        }
        goto LABEL_27;
      }
    }
    v17 = *v20 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
      v30 = 1;
      goto LABEL_45;
    }
    v27 = v39;
    while ( 1 )
    {
      v28 = *(_BYTE *)(v17 + 32);
      if ( v49 < v28 )
        break;
      if ( v28 >= v49 )
      {
        v29 = *(_QWORD *)(v17 + 24);
        if ( v48 < v29 )
          break;
        if ( v48 <= v29 )
        {
          if ( v17 )
            goto LABEL_27;
LABEL_56:
          v30 = v27;
          v20 = (unsigned __int64 *)v17;
LABEL_45:
          v26 = sub_8B490(v40, v20, v30, &v42);
LABEL_34:
          v17 = v26;
LABEL_27:
          sub_312B80((__int64)v50);
          sub_312B80((__int64)&v45);
          if ( !v18 )
            return 1;
          --v18;
          goto LABEL_29;
        }
      }
      v36 = *(_BYTE **)(v17 + 16);
      v27 = 0;
      if ( (*v36 & 2) != 0 )
        goto LABEL_56;
LABEL_58:
      v17 = (unsigned __int64)v36;
    }
    v36 = *(_BYTE **)(v17 + 8);
    v27 = v39;
    if ( (*v36 & 2) != 0 )
      goto LABEL_56;
    goto LABEL_58;
  }
  sub_312B80((__int64)&v45);
  return 0;
}

