unsigned __int64 __fastcall sub_3183C0(_QWORD *a1, __int64 a2, __m128 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 **v10; // r14
  unsigned __int64 v11; // r8
  int *v12; // rbp
  unsigned __int64 v13; // rcx
  int *v14; // rax
  char v15; // si
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rax
  __m128i v20; // xmm1
  unsigned __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // rax
  char v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm5
  char v29; // r9
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm4
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r13
  __int64 *v38; // r12
  __int64 v39; // rdx
  __int64 *v40; // rbp
  __int64 v41; // rax
  __int64 *v42; // rbp
  __int64 *v43; // rdi
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 *v47; // rdi
  __int64 *v48; // rdi
  __m128i v49; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+10h] [rbp-C8h]
  __int64 v51; // [rsp+18h] [rbp-C0h]
  _QWORD *v52; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+28h] [rbp-B0h]
  int *v54; // [rsp+30h] [rbp-A8h]
  char v55; // [rsp+3Eh] [rbp-9Ah]
  char v56; // [rsp+3Fh] [rbp-99h]
  _QWORD *v57; // [rsp+40h] [rbp-98h]
  __int64 v58; // [rsp+48h] [rbp-90h]
  _QWORD v59[3]; // [rsp+50h] [rbp-88h] BYREF
  int v60; // [rsp+68h] [rbp-70h] BYREF
  int *v61; // [rsp+70h] [rbp-68h]
  int *v62; // [rsp+78h] [rbp-60h]
  int *v63; // [rsp+80h] [rbp-58h]
  __int64 v64; // [rsp+88h] [rbp-50h]
  unsigned __int64 v65; // [rsp+98h] [rbp-40h]

  v52 = a1;
  v50 = a2;
  v65 = __readfsqword(0x28u);
  v6 = a1[4];
  if ( (int)v6 != a1[1] )
    sub_317230(v50, 0xC63Au, *(double *)a3.m128_u64);
  if ( !(_DWORD)v6 )
    sub_317230(v50, 0xC63Bu, *(double *)a3.m128_u64);
  if ( (_DWORD)v6 == 1 )
  {
    v7 = *v52;
    if ( !*(_DWORD *)(*v52 + 8LL) )
      sub_317230(v50, 0xC63Cu, *(double *)a3.m128_u64);
    v60 = 0;
    v61 = nullptr;
    v54 = &v60;
    v62 = &v60;
    v63 = &v60;
    v64 = 0;
  }
  else
  {
    v60 = 0;
    v61 = nullptr;
    v54 = &v60;
    v62 = &v60;
    v63 = &v60;
    v64 = 0;
    if ( (int)v6 <= 0 )
    {
      sub_316E90(nullptr);
      return v65 - __readfsqword(0x28u);
    }
    v7 = *v52;
  }
  v56 = 0;
  v8 = 0;
  v9 = 0;
  v51 = 0;
  v58 = 4LL * (unsigned int)(v6 - 1) + 4;
  v57 = v59;
  while ( 1 )
  {
    v10 = (unsigned __int64 **)(v7 + 6 * v51);
    if ( v10[1] )
    {
      v16 = v8 + 1;
      v17 = **v10;
      if ( v9 )
      {
        v18 = v8;
        v49 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
        goto LABEL_27;
      }
      v33 = qalloc();
      v9 = v33;
      v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
      if ( !v33 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v34 = _mm_load_si128(&v49);
      *(_OWORD *)(v33 + 16) = 0;
      *(__m128i *)(v33 + 8) = v34;
      *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_23:
      v19 = qalloc();
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
      if ( !v19 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v20 = _mm_load_si128(&v49);
      *(_QWORD *)(v19 + 24) = v17;
      v18 = v16;
      *(__m128i *)(v19 + 8) = v20;
      *(_QWORD *)v19 = v9 & 0xFFFFFFFFFFFFFFFCLL | 1;
      v21 = *(_QWORD *)v9;
      *(__m128 *)(v9 + 8) = a3;
      *(_QWORD *)v9 = v19 & 0xFFFFFFFFFFFFFFFCLL | v21 & 3;
      *(_QWORD *)v19 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 2LL;
      while ( 1 )
      {
        v22 = v16++;
        v23 = v22 - (int)v8;
        if ( v23 >= (unsigned __int64)v10[1] )
          break;
        v17 = (*v10)[v23];
LABEL_27:
        if ( !v18 )
          goto LABEL_23;
        v24 = 1;
        v25 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v25 & 2) != 0 )
        {
          v25 = v9;
          v24 = 1;
        }
        else
        {
          v31 = *(_QWORD *)(v25 + 24);
          if ( v17 < v31 )
          {
LABEL_38:
            v32 = *(_QWORD *)(v25 + 8);
            v24 = 1;
            goto LABEL_39;
          }
          while ( v31 < v17 )
          {
            v32 = *(_QWORD *)(v25 + 16);
            v24 = 0;
LABEL_39:
            if ( (*(_BYTE *)v32 & 2) != 0 )
              goto LABEL_30;
            v25 = v32;
            v31 = *(_QWORD *)(v32 + 24);
            if ( v17 < v31 )
              goto LABEL_38;
          }
          if ( v25 )
            sub_317230(v50, 0xC63Fu, *(double *)a3.m128_u64);
        }
LABEL_30:
        v55 = v24;
        v53 = v25;
        v26 = qalloc();
        if ( !v26 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v27 = v53;
        v28 = _mm_load_si128(&v49);
        *(_QWORD *)(v26 + 24) = v17;
        v29 = v55;
        *(__m128i *)(v26 + 8) = v28;
        v30 = v27 & 0xFFFFFFFFFFFFFFFCLL;
        *(_QWORD *)v26 = v27 & 0xFFFFFFFFFFFFFFFCLL | 1;
        if ( v27 == v9 )
        {
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
          v36 = *(_QWORD *)v9 & 3LL;
          *(__m128 *)(v9 + 8) = a3;
          *(_QWORD *)v9 = v26 & 0xFFFFFFFFFFFFFFFCLL | v36;
          *(_QWORD *)v26 = v30 | *(_QWORD *)v26 & 2LL;
        }
        else
        {
          if ( v29 )
          {
            *(_QWORD *)(v27 + 8) = v26;
            if ( *(_QWORD *)(v9 + 8) == v27 )
              *(_QWORD *)(v9 + 8) = v26;
          }
          else
          {
            *(_QWORD *)(v27 + 16) = v26;
            if ( *(_QWORD *)(v9 + 16) == v27 )
              *(_QWORD *)(v9 + 16) = v26;
          }
          v59[0] = v9;
          v59[1] = v18;
          sub_317FD0(v57, (__int64 *)v26);
        }
        v18 = v16;
      }
      v8 = v18;
    }
    else
    {
      if ( v56 )
        sub_317230(v50, 0xC63Eu, *(double *)a3.m128_u64);
      v56 = 1;
    }
    v11 = *(int *)(v52[3] + v51);
    if ( (int)v11 <= 0 || *(_DWORD *)(*(_QWORD *)(v50 + 8) + 64LL) <= (int)v11 )
      sub_317230(v50, 0xC640u, *(double *)a3.m128_u64);
    v12 = v61;
    if ( v61 )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)v12 + 4);
        v14 = *((int **)v12 + 2);
        v15 = 1;
        if ( v11 >= v13 )
        {
          v14 = *((int **)v12 + 3);
          v15 = 0;
        }
        if ( !v14 )
          break;
        v12 = v14;
      }
      if ( !v15 )
        goto LABEL_19;
      if ( v62 == v12 )
        goto LABEL_48;
    }
    else if ( v62 == v54 )
    {
      goto LABEL_48;
    }
    v49.m128i_i64[0] = *(int *)(v52[3] + v51);
    v35 = std::_Rb_tree_decrement();
    v11 = v49.m128i_i64[0];
    v13 = *(_QWORD *)(v35 + 32);
LABEL_19:
    if ( v13 >= v11 )
      sub_317230(v50, 0xC641u, *(double *)a3.m128_u64);
LABEL_48:
    v49.m128i_i64[0] = v11;
    *(_QWORD *)(operator new(0x28u) + 32) = v11;
    std::_Rb_tree_insert_and_rebalance();
    v51 += 4;
    ++v64;
    if ( v58 == v51 )
      break;
    v7 = *v52;
  }
  sub_316E90(v61);
  if ( !v9 )
    return v65 - __readfsqword(0x28u);
  if ( !v8 )
    goto LABEL_71;
  v37 = *(_QWORD *)v9;
  v38 = (__int64 *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL);
  v39 = *v38;
  if ( (*v38 & 2) != 0 )
    goto LABEL_71;
  v40 = (__int64 *)v38[1];
  v41 = *v40;
  if ( (*v40 & 2) == 0 )
  {
    v47 = (__int64 *)v40[1];
    if ( (*(_BYTE *)v47 & 2) != 0 )
    {
      v48 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v48 & 2) != 0 )
      {
LABEL_89:
        *v40 = v41 | 2;
LABEL_79:
        if ( v40 )
          qfree();
        v42 = (__int64 *)v38[2];
        if ( (*(_BYTE *)v42 & 2) != 0 )
        {
LABEL_68:
          v39 = *v38;
          if ( (*v38 & 2) == 0 )
            goto LABEL_83;
          goto LABEL_69;
        }
LABEL_62:
        v43 = (__int64 *)v42[1];
        if ( (*(_BYTE *)v43 & 2) != 0 )
        {
          v44 = (__int64 *)v42[2];
          if ( (*(_BYTE *)v44 & 2) != 0 )
          {
            v45 = *v42;
LABEL_86:
            *v42 = v45 | 2;
LABEL_66:
            if ( v42 )
              qfree();
            goto LABEL_68;
          }
        }
        else
        {
          sub_316B70(v43);
          v44 = (__int64 *)v42[2];
          if ( (*(_BYTE *)v44 & 2) != 0 )
            goto LABEL_65;
        }
        sub_316B70(v44);
LABEL_65:
        v45 = *v42;
        if ( (*v42 & 2) != 0 )
          goto LABEL_66;
        goto LABEL_86;
      }
    }
    else
    {
      sub_316B70(v47);
      v48 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v48 & 2) != 0 )
        goto LABEL_78;
    }
    sub_316B70(v48);
LABEL_78:
    v41 = *v40;
    if ( (*v40 & 2) != 0 )
      goto LABEL_79;
    goto LABEL_89;
  }
  v42 = (__int64 *)v38[2];
  if ( (*(_BYTE *)v42 & 2) == 0 )
    goto LABEL_62;
LABEL_83:
  *v38 = v39 | 2;
LABEL_69:
  if ( v37 > 3 )
    qfree();
LABEL_71:
  qfree();
  return v65 - __readfsqword(0x28u);
}

