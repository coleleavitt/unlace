__int64 __fastcall sub_458E0(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, char a5, int a6)
{
  __int64 v7; // rsi
  __int64 v9; // rax
  _QWORD *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  signed int *v14; // rax
  __m128i v15; // xmm0
  _QWORD *v16; // rbx
  __int64 v17; // r13
  unsigned int v18; // r13d
  __int64 v19; // rax
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int *v31; // rax
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // r15
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 *v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  bool v48; // cf
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 *v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // [rsp+0h] [rbp-68h]
  __int64 v57; // [rsp+0h] [rbp-68h]
  signed int v58; // [rsp+Ch] [rbp-5Ch] BYREF
  signed int *v59; // [rsp+10h] [rbp-58h] BYREF
  __m128i v60; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+28h] [rbp-40h]

  v7 = a3;
  v9 = a2[18];
  v58 = a3;
  v61 = __readfsqword(0x28u);
  if ( !v9 )
    goto LABEL_8;
  v11 = a2 + 17;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 24);
      if ( (int)v7 > *(_DWORD *)(v9 + 32) )
        break;
      v11 = (_QWORD *)v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v12 )
        goto LABEL_6;
    }
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v13 );
LABEL_6:
  if ( a2 + 17 == v11 || (int)v7 < *((_DWORD *)v11 + 8) )
  {
LABEL_8:
    sub_64B50(
      (unsigned int)&v59,
      a2[1],
      (unsigned int)"process_concrete_state_descend: unwind state %d (prev %d) has no descend handler block",
      a4,
      v7,
      a6);
    v14 = v59;
    v15 = _mm_loadu_si128(&v60);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v14;
    *(__m128i *)(a1 + 8) = v15;
    return a1;
  }
  if ( a5 )
  {
    v16 = a2 + 6;
    v17 = sub_4D480(a2 + 6, v7, v13);
    sub_4C000(v17 + 40, *((unsigned int *)v11 + 9));
    v18 = sub_4C060(v17);
    v19 = sub_4DA60(a2 + 6, (unsigned int)v58, a4, 1);
    v20 = sub_4C060(v19);
  }
  else
  {
    v16 = a2 + 6;
    v33 = sub_4D4C0(a2 + 6, v7, v13);
    sub_4C000(v33 + 40, *((unsigned int *)v11 + 9));
    v18 = sub_4C060(v33);
    v34 = sub_4DA60(a2 + 6, (unsigned int)v58, a4, 0);
    v20 = sub_4C060(v34);
    v35 = a2[24];
    if ( v35 )
    {
      v36 = a2 + 23;
      do
      {
        while ( 1 )
        {
          v37 = *(_QWORD *)(v35 + 16);
          v38 = *(_QWORD *)(v35 + 24);
          if ( v58 > *(_DWORD *)(v35 + 32) )
            break;
          v36 = (_QWORD *)v35;
          v35 = *(_QWORD *)(v35 + 16);
          if ( !v37 )
            goto LABEL_30;
        }
        v35 = *(_QWORD *)(v35 + 24);
      }
      while ( v38 );
LABEL_30:
      if ( a2 + 23 != v36 && v58 >= *((_DWORD *)v36 + 8) )
      {
        v39 = sub_4CB00(a2 + 6, *((unsigned int *)v36 + 9), 0);
        sub_4C000(v39, v20);
        v40 = (void *)std::_Rb_tree_rebalance_for_erase(v36, a2 + 23);
        operator delete(v40, 0x28u);
        --a2[27];
      }
    }
  }
  v21 = sub_4CB00(v16, v18, 0);
  sub_4C000(v21, v20);
  v22 = a2[61];
  if ( v22 )
  {
    v23 = (__int64)(a2 + 60);
    do
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v22 + 16);
        v25 = *(_QWORD *)(v22 + 24);
        if ( v58 > *(_DWORD *)(v22 + 32) )
          break;
        v23 = v22;
        v22 = *(_QWORD *)(v22 + 16);
        if ( !v24 )
          goto LABEL_16;
      }
      v22 = *(_QWORD *)(v22 + 24);
    }
    while ( v25 );
LABEL_16:
    if ( a2 + 60 != (_QWORD *)v23 && v58 >= *(_DWORD *)(v23 + 32) )
      goto LABEL_19;
  }
  else
  {
    v23 = (__int64)(a2 + 60);
  }
  v59 = &v58;
  v23 = sub_43D00(a2 + 59, v23, &v59);
LABEL_19:
  v59 = (signed int *)__PAIR64__(v20, v18);
  v26 = v23 + 64;
  v27 = *(_QWORD *)(v23 + 72);
  v28 = *(_QWORD *)(v23 + 64);
  v29 = *(_QWORD *)(v23 + 80);
  v30 = v27 + 1;
  if ( (unsigned __int64)&v59 < v28 || (unsigned __int64)&v59 >= v28 + 8 * v29 )
  {
    if ( v29 < v30 )
    {
      v56 = *(_QWORD *)(v23 + 80);
      v41 = qvector_reserve(v26, 0, v30, 8);
      v42 = *(_QWORD *)(v23 + 80);
      v28 = v41;
      v43 = *(_QWORD *)(v23 + 72);
      v44 = *(__int64 **)(v23 + 64);
      *(_QWORD *)(v23 + 80) = v56;
      v45 = v43 - 1;
      if ( v45 >= 0 )
      {
        v46 = v28;
        do
        {
          v47 = *v44;
          v46 += 8LL;
          ++v44;
          *(_QWORD *)(v46 - 8) = v47;
          v48 = v45-- == 0;
        }
        while ( !v48 );
        v44 = *(__int64 **)(v23 + 64);
      }
      qfree(v44);
      *(_QWORD *)(v23 + 64) = v28;
      v27 = *(_QWORD *)(v23 + 72);
      *(_QWORD *)(v23 + 80) = v42;
    }
    *(_QWORD *)(v28 + 8 * v27) = v59;
  }
  else
  {
    if ( v29 < v30 )
    {
      v57 = *(_QWORD *)(v23 + 80);
      v49 = qvector_reserve(v26, 0, v30, 8);
      v50 = *(_QWORD *)(v23 + 80);
      v28 = v49;
      v51 = *(_QWORD *)(v23 + 72);
      v52 = *(__int64 **)(v23 + 64);
      *(_QWORD *)(v23 + 80) = v57;
      v53 = v51 - 1;
      if ( v53 >= 0 )
      {
        v54 = v28;
        do
        {
          v55 = *v52;
          v54 += 8LL;
          ++v52;
          *(_QWORD *)(v54 - 8) = v55;
          v48 = v53-- == 0;
        }
        while ( !v48 );
        v52 = *(__int64 **)(v23 + 64);
      }
      qfree(v52);
      *(_QWORD *)(v23 + 64) = v28;
      v27 = *(_QWORD *)(v23 + 72);
      *(_QWORD *)(v23 + 80) = v50;
    }
    v31 = (unsigned int *)(v28 + 8 * v27);
    *v31 = v18;
    v31[1] = v20;
  }
  ++*(_QWORD *)(v23 + 72);
  *(_DWORD *)a1 = v18;
  *(_DWORD *)(a1 + 4) = v20;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
