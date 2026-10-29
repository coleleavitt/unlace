void __fastcall sub_1BE560(const __m128i *a1)
{
  __m128i v1; // xmm0
  __int64 v3; // r13
  __m128i v4; // kr10_16
  __int128 v5; // kr30_16
  char v6; // al
  __int64 v7; // r8
  unsigned int *v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int *v11; // rdx
  signed int *v12; // r14
  unsigned int v13; // edx
  signed int v14; // ebx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  int v18; // edx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rdi
  char v26; // r13
  _QWORD *v27; // r10
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  void **v31; // rbp
  void *v32; // rdi
  char v33; // cl
  char v34; // dl
  unsigned __int64 v35; // rax
  char v36; // dl
  _BYTE *v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm1
  __int64 v40; // rcx
  _QWORD *exception; // rdi
  _QWORD *v42; // rdi
  unsigned int v43; // [rsp+0h] [rbp-154h]
  unsigned int *v44; // [rsp+4h] [rbp-150h]
  unsigned int *v45; // [rsp+Ch] [rbp-148h]
  __m128i *v46; // [rsp+14h] [rbp-140h]
  _QWORD *v47; // [rsp+1Ch] [rbp-138h]
  __int128 v48; // [rsp+2Ch] [rbp-128h]
  unsigned int *v49; // [rsp+3Ch] [rbp-118h]
  signed int v50; // [rsp+70h] [rbp-E4h] BYREF
  const __m128i *v51; // [rsp+74h] [rbp-E0h] BYREF
  unsigned int *v52; // [rsp+7Ch] [rbp-D8h] BYREF
  __int128 v53; // [rsp+84h] [rbp-D0h]
  signed int v54; // [rsp+9Ch] [rbp-B8h] BYREF
  __int64 v55; // [rsp+A4h] [rbp-B0h]
  __m128i v56; // [rsp+ACh] [rbp-A8h] BYREF
  __m128i v57; // [rsp+BCh] [rbp-98h] BYREF
  __int128 v58; // [rsp+CCh] [rbp-88h]
  __int128 v59; // [rsp+DCh] [rbp-78h]
  __int128 v60; // [rsp+ECh] [rbp-68h]
  __int128 v61; // [rsp+FCh] [rbp-58h]
  unsigned __int64 v62; // [rsp+114h] [rbp-40h]

  v1.m128i_i64[0] = 0;
  v62 = __readfsqword(0x28u);
  v57 = 0u;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_1BA740(&v57, 0);
  v3 = v60;
  v49 = *((unsigned int **)&v58 + 1);
  v45 = (unsigned int *)v58;
  v48 = v59;
  v4 = v57;
  v5 = v61;
  if ( (_QWORD)v60 == (_QWORD)v61 - 4LL )
  {
    sub_1BA8A0(v57.m128i_i64, &a1[1].m128i_i32[2]);
    v49 = *((unsigned int **)&v58 + 1);
    v45 = (unsigned int *)v58;
    v48 = v59;
    v44 = (unsigned int *)v60;
    v4 = v57;
    v5 = v61;
  }
  else
  {
    *(_DWORD *)v60 = a1[1].m128i_i32[2];
    v44 = (unsigned int *)(v3 + 4);
  }
  v46 = (__m128i *)&a1[3];
  if ( v45 == v44 )
    goto LABEL_40;
  do
  {
    v43 = *v45;
    if ( v45 == (unsigned int *)(v48 - 4) )
    {
      operator delete(v49, 0x200u);
      v45 = *(unsigned int **)(*((_QWORD *)&v48 + 1) + 8LL);
      *(_QWORD *)&v48 = v45 + 128;
      *((_QWORD *)&v48 + 1) += 8LL;
      v49 = v45;
    }
    else
    {
      ++v45;
    }
    if ( sub_1BC0E0((__int64)a1, v43) )
      continue;
    v52 = nullptr;
    v53 = 0;
    v6 = sub_1B9340((__int64)a1, (__int64)&v52, v43, *(double *)v1.m128i_i64);
    v7 = (__int64)v52;
    v8 = &v52[v53];
    if ( v6 )
    {
      v9 = a1->m128i_i64[1];
      if ( v43 != *(_DWORD *)(v9 + 64) - 1 )
      {
        v10 = v43 + 1;
        if ( v8 != v52 )
        {
          v11 = v52;
          while ( v10 != *v11 )
          {
            if ( v8 == ++v11 )
              goto LABEL_59;
          }
          if ( v8 != v11 )
            goto LABEL_14;
        }
LABEL_59:
        if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
        {
          v52 = (unsigned int *)qvector_reserve((__int64)&v52, (__int64)v52, v53 + 1, 4);
          v8 = &v52[v53];
        }
        *v8 = v10;
        v7 = (__int64)v52;
        *(_QWORD *)&v53 = v53 + 1;
        v8 = &v52[v53];
      }
    }
    if ( v8 == (unsigned int *)v7 )
      goto LABEL_37;
    v9 = a1->m128i_i64[1];
LABEL_14:
    v12 = (signed int *)v7;
    while ( 2 )
    {
      v13 = *(_DWORD *)(v9 + 64);
      v14 = *v12;
      v50 = v14;
      if ( v14 >= (int)(v13 - 1) )
        break;
      if ( v14 >= v13 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, *(double *)v1.m128i_i64);
        BUG();
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * (unsigned int)v14) + 76LL) == 6 )
        break;
      v15 = a1[3].m128i_u64[0];
      v54 = v14;
      v55 = 0;
      v51 = (const __m128i *)&v54;
      v56 = 0;
      if ( !v15 )
      {
        v38 = qalloc();
        v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
        if ( !v38 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v38 + 48) = 0;
        *(_OWORD *)(v38 + 16) = 0;
        *(_OWORD *)(v38 + 32) = 0;
        *(__m128i *)(v38 + 8) = v39;
        *(_QWORD *)v38 = v38 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a1[3].m128i_i64[0] = v38;
        *(_QWORD *)v38 = v38 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v38 & 3LL;
        *(__m128i *)(a1[3].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                 (__m128i)a1[3].m128i_u64[0],
                                                 (__m128i)a1[3].m128i_u64[0]);
        *(_QWORD *)a1[3].m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1[3].m128i_i64[0] |= 2uLL;
        v15 = a1[3].m128i_u64[0];
LABEL_23:
        v16 = qalloc();
        v17 = v16;
        if ( !v16 )
        {
          v42 = __cxa_allocate_exception(8u);
          *v42 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v42,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)v16 = 0;
        v18 = v54;
        *(_OWORD *)(v16 + 16) = 0;
        *(_DWORD *)(v16 + 24) = v18;
        v19 = v55;
        v20 = _mm_load_si128(&v56);
        v55 = 0;
        v56 = 0;
        *(_QWORD *)(v16 + 32) = v19;
        v21 = *(_QWORD *)v16;
        *(__m128i *)(v16 + 40) = v20;
        v22 = v15 & 0xFFFFFFFFFFFFFFFCLL | v21 & 1;
        *(_QWORD *)v16 = v22;
        v23 = _mm_loadl_epi64(a1 + 3);
        *(_QWORD *)v16 = v22 | 1;
        v1 = _mm_unpacklo_epi64(v23, v23);
        *(__m128i *)(v16 + 8) = v1;
        if ( v15 == a1[3].m128i_i64[0] )
        {
          *(_QWORD *)v15 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
          *(_QWORD *)(a1[3].m128i_i64[0] + 8) = v16;
          *(_QWORD *)(a1[3].m128i_i64[0] + 16) = v16;
          v40 = *(_QWORD *)v16 & 2LL;
          *(_QWORD *)v16 &= ~1uLL;
          *(_QWORD *)v16 = v40 | a1[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v15 + 8) = v16;
          v24 = a1[3].m128i_i64[0];
          if ( v15 == *(_QWORD *)(v24 + 8) )
            *(_QWORD *)(v24 + 8) = v16;
          sub_1BE000(v46, (__int64 *)v16);
        }
        ++a1[3].m128i_i64[1];
        v25 = v55;
        v26 = 1;
LABEL_29:
        if ( v25 )
        {
          v56.m128i_i64[0] = 0;
          qfree(v25);
        }
        v27 = (_QWORD *)(v17 + 24);
        goto LABEL_32;
      }
      if ( !a1[3].m128i_i64[1] )
        goto LABEL_23;
      v33 = 1;
      v17 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
        v34 = 1;
LABEL_46:
        v35 = sub_1BE3E0(v46, (unsigned __int64 *)v15, v34, &v51);
        v25 = v55;
        v17 = v35;
        v26 = v36;
        goto LABEL_29;
      }
      while ( 1 )
      {
        v27 = (_QWORD *)(v17 + 24);
        if ( v14 < *(_DWORD *)(v17 + 24) )
        {
          v37 = *(_BYTE **)(v17 + 8);
          v33 = 1;
          goto LABEL_50;
        }
        if ( v14 <= *(_DWORD *)(v17 + 24) )
          break;
        v37 = *(_BYTE **)(v17 + 16);
        v33 = 0;
LABEL_50:
        if ( (*v37 & 2) != 0 )
          goto LABEL_51;
        v17 = (unsigned __int64)v37;
      }
      if ( !v17 )
      {
LABEL_51:
        v34 = v33;
        v15 = v17;
        goto LABEL_46;
      }
      v26 = 0;
LABEL_32:
      v28 = v27[2];
      v29 = v27[1];
      if ( v27[3] < (unsigned __int64)(v28 + 1) )
      {
        v47 = v27;
        v30 = qvector_reserve(v17 + 32, v29, v28 + 1, 4);
        v27 = v47;
        v29 = v30;
        v47[1] = v30;
        v28 = v47[2];
      }
      *(_DWORD *)(v29 + 4 * v28) = v43;
      ++v27[2];
      if ( v26 )
      {
        if ( v44 == (unsigned int *)(v5 - 4) )
        {
          v57 = v4;
          *(_QWORD *)&v58 = v45;
          *((_QWORD *)&v58 + 1) = v49;
          v59 = v48;
          *(_QWORD *)&v60 = v44;
          v61 = v5;
          sub_1BA8A0(v57.m128i_i64, &v50);
          v4 = v57;
          v49 = *((unsigned int **)&v58 + 1);
          v45 = (unsigned int *)v58;
          v48 = v59;
          v44 = (unsigned int *)v60;
          v5 = v61;
          break;
        }
        *v44 = v14;
        ++v12;
        ++v44;
        if ( v8 == (unsigned int *)v12 )
          goto LABEL_36;
LABEL_17:
        v9 = a1->m128i_i64[1];
        continue;
      }
      break;
    }
    if ( v8 != (unsigned int *)++v12 )
      goto LABEL_17;
LABEL_36:
    v7 = (__int64)v52;
LABEL_37:
    if ( v7 )
    {
      *(_QWORD *)&v53 = 0;
      qfree(v7);
    }
  }
  while ( v45 != v44 );
LABEL_40:
  if ( v4.m128i_i64[0] )
  {
    v31 = *((void ***)&v48 + 1);
    if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(*((_QWORD *)&v5 + 1) + 8LL) )
    {
      do
      {
        v32 = *v31++;
        operator delete(v32, 0x200u);
      }
      while ( (unsigned __int64)v31 < *((_QWORD *)&v5 + 1) + 8LL );
    }
    operator delete((void *)v4.m128i_i64[0], 8 * v4.m128i_i64[1]);
  }
}

