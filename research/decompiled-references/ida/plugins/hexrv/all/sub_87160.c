__int64 __fastcall sub_87160(__int64 a1, char **a2)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r12
  int v6; // eax
  bool v7; // zf
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  __int64 v13; // r14
  unsigned __int64 v14; // r12
  int v15; // r14d
  char v16; // al
  unsigned __int64 *v17; // r10
  unsigned __int64 v18; // r15
  char *v19; // rax
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  char v22; // al
  unsigned __int8 v23; // cl
  signed __int64 v24; // rcx
  char v25; // dl
  __int64 v26; // rax
  __m128i v27; // xmm1
  _QWORD *v28; // rdi
  _QWORD *v29; // rdi
  _BYTE *v30; // rcx
  unsigned __int64 *v31; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v32; // [rsp+8h] [rbp-D0h]
  char v33; // [rsp+17h] [rbp-C1h]
  __m128i *v34; // [rsp+18h] [rbp-C0h]
  char v35; // [rsp+27h] [rbp-B1h] BYREF
  const __m128i *v36; // [rsp+28h] [rbp-B0h] BYREF
  unsigned __int64 *v37; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-98h] BYREF
  __int128 v40; // [rsp+48h] [rbp-90h]
  __int64 v41; // [rsp+58h] [rbp-80h]
  signed __int64 v42; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int8 v43; // [rsp+68h] [rbp-70h]
  _BYTE v44[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp-40h]

  v4 = *(unsigned __int64 **)(a1 + 8);
  v45 = __readfsqword(0x28u);
  if ( !v4 )
  {
LABEL_20:
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 1;
    v6 = sub_79170(a2);
    v7 = v6 == 0;
    if ( v6 < 0 )
      return 0;
    goto LABEL_21;
  }
  v5 = *v4;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_19:
      *v4 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL | v5 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 8));
      **(_QWORD **)(a1 + 8) &= ~1uLL;
      **(_QWORD **)(a1 + 8) |= 2uLL;
      goto LABEL_20;
    }
    v10 = *(_QWORD *)(v9 + 8);
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v13 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_15;
      goto LABEL_49;
    }
    v11 = *(_QWORD **)(v10 + 8);
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v12 = *(_QWORD **)(v10 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
LABEL_62:
        sub_30DA80(v10 + 40);
        *(_QWORD *)v10 |= 2uLL;
LABEL_11:
        if ( v10 )
          qfree();
        v13 = *(_QWORD *)(v9 + 16);
        if ( (*(_BYTE *)v13 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)v9 & 2) != 0 )
          {
LABEL_16:
            if ( v5 > 3 )
              qfree();
            v4 = *(unsigned __int64 **)(a1 + 8);
            v5 = *v4;
            goto LABEL_19;
          }
LABEL_15:
          sub_30DA80(v9 + 40);
          *(_QWORD *)v9 |= 2uLL;
          goto LABEL_16;
        }
LABEL_49:
        v28 = *(_QWORD **)(v13 + 8);
        if ( (*(_BYTE *)v28 & 2) != 0 )
        {
          v29 = *(_QWORD **)(v13 + 16);
          if ( (*(_BYTE *)v29 & 2) != 0 )
          {
LABEL_64:
            sub_30DA80(v13 + 40);
            *(_QWORD *)v13 |= 2uLL;
LABEL_53:
            if ( v13 )
              qfree();
            goto LABEL_14;
          }
        }
        else
        {
          sub_76CA0(v28);
          v29 = *(_QWORD **)(v13 + 16);
          if ( (*(_BYTE *)v29 & 2) != 0 )
            goto LABEL_52;
        }
        sub_76CA0(v29);
LABEL_52:
        if ( (*(_BYTE *)v13 & 2) != 0 )
          goto LABEL_53;
        goto LABEL_64;
      }
    }
    else
    {
      sub_76CA0(v11);
      v12 = *(_QWORD **)(v10 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_10;
    }
    sub_76CA0(v12);
LABEL_10:
    if ( (*(_BYTE *)v10 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_62;
  }
  *v4 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL | *v4 & 3;
  *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(a1 + 8),
                                              (__m128i)*(unsigned __int64 *)(a1 + 8));
  **(_QWORD **)(a1 + 8) &= ~1uLL;
  **(_QWORD **)(a1 + 8) |= 2uLL;
  *(_BYTE *)(a1 + 24) = 1;
  v6 = sub_79170(a2);
  v7 = v6 == 0;
  if ( v6 < 0 )
    return 0;
LABEL_21:
  if ( v7 )
    return 1;
  *(_BYTE *)(a1 + 24) = 0;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = v6 - 2;
  if ( v6 == 1 )
    return 1;
  v34 = (__m128i *)(a1 + 8);
LABEL_29:
  v18 = sub_78CA0((__int64)a2, 0);
  v19 = *a2;
  if ( *a2 >= a2[1] )
  {
    if ( !under_debugger )
      sub_37DDE0(50582);
    BUG();
  }
  v20 = *v19;
  *a2 = v19 + 1;
  v32 = v20;
  v39 = 0x800000000LL;
  v41 = 0;
  v40 = 0;
  v33 = sub_7AC80(&v39, a2);
  if ( v33 )
  {
    v42 = v18;
    v43 = v32;
    sub_30DB40(v44, &v39);
    v17 = *(unsigned __int64 **)(a1 + 8);
    v36 = (const __m128i *)&v42;
    if ( !v17 )
    {
      v26 = qalloc();
      v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
      if ( !v26 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v26 + 64) = 0;
      *(_OWORD *)(v26 + 16) = 0;
      *(_OWORD *)(v26 + 32) = 0;
      *(_OWORD *)(v26 + 48) = 0;
      *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v26 + 8) = v27;
      *(_QWORD *)(a1 + 8) = v26;
      *(_QWORD *)v26 = v26 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v26 & 3LL;
      *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 8));
      **(_QWORD **)(a1 + 8) &= ~1uLL;
      **(_QWORD **)(a1 + 8) |= 2uLL;
      v17 = *(unsigned __int64 **)(a1 + 8);
LABEL_33:
      v21 = sub_86FD0(v34, v17, 1, &v36);
      goto LABEL_34;
    }
    if ( !*(_QWORD *)(a1 + 16) )
      goto LABEL_33;
    v37 = v17;
    v35 = 1;
    v38 = 0;
    if ( v14 )
    {
      v31 = v17;
      v16 = sub_84980((unsigned __int64 *)v34, (__int64)&v42, v14, (unsigned __int64 *)&v37, &v35, &v38);
      v17 = v31;
      if ( v16 )
      {
        v14 = v38;
        if ( !v38 )
        {
          v21 = sub_86FD0(v34, v37, v35, &v36);
          goto LABEL_34;
        }
        goto LABEL_27;
      }
    }
    v14 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v25 = 1;
      goto LABEL_45;
    }
    v22 = v33;
    while ( 1 )
    {
      v23 = *(_BYTE *)(v14 + 32);
      if ( v43 < v23 )
        break;
      if ( v23 >= v43 )
      {
        v24 = *(_QWORD *)(v14 + 24);
        if ( v42 < v24 )
          break;
        if ( v42 <= v24 )
        {
          if ( v14 )
            goto LABEL_27;
LABEL_56:
          v25 = v22;
          v17 = (unsigned __int64 *)v14;
LABEL_45:
          v21 = sub_86FD0(v34, v17, v25, &v36);
LABEL_34:
          v14 = v21;
LABEL_27:
          sub_30DA80(v44);
          sub_30DA80(&v39);
          if ( !v15 )
            return 1;
          --v15;
          goto LABEL_29;
        }
      }
      v30 = *(_BYTE **)(v14 + 16);
      v22 = 0;
      if ( (*v30 & 2) != 0 )
        goto LABEL_56;
LABEL_58:
      v14 = (unsigned __int64)v30;
    }
    v30 = *(_BYTE **)(v14 + 8);
    v22 = v33;
    if ( (*v30 & 2) != 0 )
      goto LABEL_56;
    goto LABEL_58;
  }
  sub_30DA80(&v39);
  return 0;
}

