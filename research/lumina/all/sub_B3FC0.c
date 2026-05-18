bool __fastcall sub_B3FC0(__int64 a1, const __m128i **a2, __int64 a3)
{
  __int8 *v3; // rbx
  bool result; // al
  _QWORD *v6; // r13
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  size_t v12; // r8
  size_t v13; // r9
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // r14
  void *v17; // rax
  void *v18; // rsi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // rax
  size_t v30; // rdx
  __int64 v31; // rax
  char *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  char *v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  char *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  char *v48; // rsi
  __int64 v49; // rcx
  size_t n; // [rsp+0h] [rbp-118h]
  size_t nh; // [rsp+0h] [rbp-118h]
  size_t na; // [rsp+0h] [rbp-118h]
  size_t ni; // [rsp+0h] [rbp-118h]
  size_t nj; // [rsp+0h] [rbp-118h]
  size_t nb; // [rsp+0h] [rbp-118h]
  size_t nc; // [rsp+0h] [rbp-118h]
  size_t nd; // [rsp+0h] [rbp-118h]
  size_t ne; // [rsp+0h] [rbp-118h]
  size_t nl; // [rsp+0h] [rbp-118h]
  size_t nk; // [rsp+0h] [rbp-118h]
  size_t ng; // [rsp+0h] [rbp-118h]
  size_t nf; // [rsp+0h] [rbp-118h]
  size_t v63; // [rsp+8h] [rbp-110h]
  __int8 *v64; // [rsp+8h] [rbp-110h]
  unsigned __int64 v65; // [rsp+8h] [rbp-110h]
  size_t v66; // [rsp+8h] [rbp-110h]
  size_t v67; // [rsp+8h] [rbp-110h]
  unsigned int v68; // [rsp+1Ch] [rbp-FCh]
  size_t v69; // [rsp+20h] [rbp-F8h]
  size_t v70; // [rsp+20h] [rbp-F8h]
  size_t v71; // [rsp+20h] [rbp-F8h]
  unsigned int v72; // [rsp+34h] [rbp-E4h] BYREF
  const __m128i *v73; // [rsp+38h] [rbp-E0h] BYREF
  void *v74; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v75; // [rsp+48h] [rbp-D0h]
  __int64 v76; // [rsp+58h] [rbp-C0h]
  __m128i v77; // [rsp+60h] [rbp-B8h] BYREF
  void *v78; // [rsp+70h] [rbp-A8h]
  __int128 v79; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int128 v81; // [rsp+98h] [rbp-80h]
  __int64 v82; // [rsp+A8h] [rbp-70h]
  __m128i v83; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-58h]
  __int128 v85; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v86; // [rsp+D8h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v73 = *a2;
  v3 = &v73->m128i_i8[a3];
  if ( __CFADD__(a3, v73) )
    return 0;
  v6 = a2;
  if ( !sub_6C650(&v72, (unsigned __int64 *)&v73, (__int64)v73->m128i_i64 + a3) )
    return 0;
  v7 = v72;
  v8 = *(_QWORD *)(a1 + 24);
  v68 = v72;
  if ( v72 == v8 )
    goto LABEL_28;
  v76 = 0;
  v74 = nullptr;
  v78 = nullptr;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  if ( v72 < v8 )
  {
    na = v72;
    v19 = v8;
    v64 = v3;
    v20 = v72;
    do
    {
      v21 = *(_QWORD *)(a1 + 16) + 72 * v20;
      v22 = *(void **)(v21 + 48);
      if ( v22 )
      {
        *(_QWORD *)(v21 + 56) = 0;
        j__free(v22);
      }
      v23 = *(void **)v21;
      if ( *(_QWORD *)v21 )
      {
        *(_QWORD *)(v21 + 8) = 0;
        j__free(v23);
      }
      ++v20;
    }
    while ( v20 < v19 );
    v7 = na;
    v3 = v64;
    *(_QWORD *)(a1 + 24) = na;
LABEL_24:
    v24 = v78;
    if ( !v78 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)&v74 >= v9 && (unsigned __int64)&v74 < v9 + 72 * v10 )
  {
    n = v72;
    ptr = nullptr;
    v81 = 0;
    sub_9CBB0(&ptr, (__int64)&v74);
    v11 = _mm_load_si128(&v77);
    v12 = n;
    v84 = 0;
    v83 = v11;
    v82 = v76;
    v85 = 0;
    if ( (_QWORD)v79 )
    {
      v67 = n;
      nf = v79;
      v44 = sub_198760(24 * v79);
      v45 = (char *)v78;
      v84 = v44;
      v12 = v67;
      *((_QWORD *)&v85 + 1) = nf;
      *(_QWORD *)v44 = *(_QWORD *)v78;
      *(__m128i *)(v44 + 8) = _mm_loadu_si128((const __m128i *)(v45 + 8));
      if ( nf != 1 )
      {
        v46 = 24;
        v47 = 1;
        do
        {
          ++v47;
          v48 = (char *)v78 + v46;
          v49 = v46 + v84;
          v46 += 24;
          *(_QWORD *)v49 = *(_QWORD *)v48;
          *(__m128i *)(v49 + 8) = _mm_loadu_si128((const __m128i *)(v48 + 8));
        }
        while ( nf != v47 );
      }
      *(_QWORD *)&v85 = nf;
    }
    if ( *(_QWORD *)(a1 + 32) < v12 )
    {
      ng = v12;
      *(_QWORD *)(a1 + 16) = sub_1987B0(a1 + 16, *(_QWORD *)(a1 + 16), v12, 72);
      v12 = ng;
    }
    v13 = *(_QWORD *)(a1 + 24);
    if ( v13 < v12 )
    {
      v14 = 0;
      do
      {
        v16 = *(_QWORD *)(a1 + 16) + 72 * v13;
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = v14;
        if ( (_QWORD)v81 )
        {
          v69 = v13;
          v63 = v12;
          nh = v81;
          v17 = (void *)sub_198760(v81);
          *(_QWORD *)v16 = v17;
          v18 = ptr;
          *(_QWORD *)(v16 + 16) = nh;
          memcpy(v17, v18, nh);
          v13 = v69;
          v14 = 0;
          v12 = v63;
          *(_QWORD *)(v16 + 8) = nh;
        }
        v15 = v82;
        *(_QWORD *)(v16 + 48) = 0;
        *(_OWORD *)(v16 + 56) = v14;
        *(_QWORD *)(v16 + 24) = v15;
        *(__m128i *)(v16 + 32) = _mm_load_si128(&v83);
        if ( (_QWORD)v85 )
        {
          v71 = v13;
          v66 = v12;
          ne = v85;
          v37 = sub_198760(24 * v85);
          *(_QWORD *)(v16 + 48) = v37;
          v14 = 0;
          v38 = v84;
          v12 = v66;
          *(_QWORD *)(v16 + 64) = ne;
          v13 = v71;
          *(_QWORD *)v37 = *(_QWORD *)v38;
          *(__m128i *)(v37 + 8) = _mm_loadu_si128((const __m128i *)(v38 + 8));
          if ( ne != 1 )
          {
            v39 = 24;
            v40 = 1;
            do
            {
              ++v40;
              v41 = v39 + v84;
              v42 = v39 + *(_QWORD *)(v16 + 48);
              v39 += 24;
              *(_QWORD *)v42 = *(_QWORD *)v41;
              *(__m128i *)(v42 + 8) = _mm_loadu_si128((const __m128i *)(v41 + 8));
            }
            while ( ne != v40 );
          }
          *(_QWORD *)(v16 + 56) = ne;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)(a1 + 24) = v12;
    nl = v12;
    sub_B3F50((__int64)&ptr);
    v7 = nl;
    goto LABEL_24;
  }
  if ( v10 < v72 )
  {
    nk = v72;
    v43 = sub_1987B0(a1 + 16, v9, v72, 72);
    v8 = *(_QWORD *)(a1 + 24);
    v7 = nk;
    *(_QWORD *)(a1 + 16) = v43;
  }
  if ( v8 >= v7 )
  {
    *(_QWORD *)(a1 + 24) = v7;
    goto LABEL_24;
  }
  do
  {
    nc = v8;
    v65 = v7;
    v28 = *(_QWORD *)(a1 + 16) + 72 * v8;
    *(_QWORD *)v28 = 0;
    *(_OWORD *)(v28 + 8) = 0;
    sub_9CBB0((_QWORD *)v28, (__int64)&v74);
    v29 = v76;
    v30 = nc;
    *(_QWORD *)(v28 + 48) = 0;
    *(_OWORD *)(v28 + 56) = 0;
    v7 = v65;
    *(_QWORD *)(v28 + 24) = v29;
    *(__m128i *)(v28 + 32) = _mm_load_si128(&v77);
    if ( (_QWORD)v79 )
    {
      v70 = nc;
      nd = v79;
      v31 = sub_198760(24 * v79);
      v7 = v65;
      *(_QWORD *)(v28 + 48) = v31;
      v32 = (char *)v78;
      v30 = v70;
      *(_QWORD *)(v28 + 64) = nd;
      *(_QWORD *)v31 = *(_QWORD *)v32;
      *(__m128i *)(v31 + 8) = _mm_loadu_si128((const __m128i *)(v32 + 8));
      if ( nd != 1 )
      {
        v33 = 24;
        v34 = 1;
        do
        {
          ++v34;
          v35 = (char *)v78 + v33;
          v36 = v33 + *(_QWORD *)(v28 + 48);
          v33 += 24;
          *(_QWORD *)v36 = *(_QWORD *)v35;
          *(__m128i *)(v36 + 8) = _mm_loadu_si128((const __m128i *)(v35 + 8));
        }
        while ( nd != v34 );
      }
      *(_QWORD *)(v28 + 56) = nd;
    }
    v8 = v30 + 1;
  }
  while ( v8 < v7 );
  v24 = v78;
  *(_QWORD *)(a1 + 24) = v7;
  if ( v24 )
  {
LABEL_25:
    ni = v7;
    *(_QWORD *)&v79 = 0;
    j__free(v24);
    v7 = ni;
LABEL_26:
    v25 = v74;
    if ( !v74 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v25 = v74;
  if ( !v74 )
  {
LABEL_29:
    nb = (size_t)v6;
    v26 = 0;
    v27 = 72 * v7;
    while ( (unsigned __int8)sub_ADF40((__m128i *)(v26 + *(_QWORD *)(a1 + 16)), &v73, v3 - (__int8 *)v73) )
    {
      v26 += 72;
      if ( v27 == v26 )
      {
        v6 = (_QWORD *)nb;
        goto LABEL_34;
      }
    }
    return 0;
  }
LABEL_27:
  nj = v7;
  *(_QWORD *)&v75 = 0;
  j__free(v25);
  v7 = nj;
LABEL_28:
  if ( v68 )
    goto LABEL_29;
LABEL_34:
  result = sub_6C650((_DWORD *)(a1 + 40), (unsigned __int64 *)&v73, (__int64)v3);
  if ( !result )
    return 0;
  *v6 = v73;
  return result;
}
