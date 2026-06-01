__int64 __fastcall sub_4BB60(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // r12
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // r13
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  char v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdx
  size_t v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // r15
  __int8 *v55; // r13
  const void *v56; // r15
  size_t v57; // rax
  size_t v58; // r12
  void *v59; // rdi
  size_t v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // r9
  const __m128i *v66; // r15
  __int64 v67; // rdx
  __m128i *v68; // r13
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __int64 v72; // rax
  bool v73; // zf
  _QWORD *v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v82; // [rsp+0h] [rbp-478h]
  unsigned __int64 v83; // [rsp+0h] [rbp-478h]
  unsigned __int64 v84; // [rsp+0h] [rbp-478h]
  unsigned __int64 v85; // [rsp+0h] [rbp-478h]
  unsigned __int64 v86; // [rsp+0h] [rbp-478h]
  unsigned __int64 v87; // [rsp+0h] [rbp-478h]
  unsigned __int64 v88; // [rsp+0h] [rbp-478h]
  unsigned __int64 v89; // [rsp+0h] [rbp-478h]
  size_t v90; // [rsp+0h] [rbp-478h]
  __int64 v91; // [rsp+8h] [rbp-470h]
  int v92; // [rsp+8h] [rbp-470h]
  unsigned __int64 v93; // [rsp+8h] [rbp-470h]
  int v94; // [rsp+8h] [rbp-470h]
  __int64 v95; // [rsp+8h] [rbp-470h]
  unsigned __int64 v96; // [rsp+8h] [rbp-470h]
  unsigned __int64 v97; // [rsp+10h] [rbp-468h]
  unsigned __int64 v98; // [rsp+10h] [rbp-468h]
  const __m128i *v99; // [rsp+10h] [rbp-468h]
  unsigned __int64 v100; // [rsp+10h] [rbp-468h]
  unsigned __int64 v101; // [rsp+10h] [rbp-468h]
  __int64 v102; // [rsp+18h] [rbp-460h]
  unsigned __int64 v103; // [rsp+28h] [rbp-450h] BYREF
  char v104; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v105; // [rsp+438h] [rbp-40h]

  v105 = __readfsqword(0x28u);
  qsnprintf();
  v11 = sub_59640(*(_QWORD *)(a1 + 80), (unsigned int)&v104, 0, v8, v9, v10, a3);
  v12 = *(_QWORD *)(a2 + 820) + *(unsigned int *)(a4 + 24);
  v13 = v11;
  if ( !v11 || (v14 = *(_DWORD *)(v11 + 32)) == 0 )
  {
    v24 = *(_QWORD *)(a1 + 264);
    goto LABEL_19;
  }
  *(_QWORD *)(v13 + 24) = v12;
  if ( v14 == 1 )
  {
    if ( *(_QWORD *)a4 )
    {
      *(_QWORD *)(a4 + 8) = 0;
      v83 = v12;
      qfree();
      *(_QWORD *)a4 = 0;
      v12 = v83;
      *(_QWORD *)(a4 + 16) = 0;
    }
    v53 = *(_QWORD *)(a1 + 8);
    v54 = *(_QWORD *)(a1 + 16);
    if ( v54 < v53 + 1 )
    {
      v87 = v12;
      v62 = qvector_reserve();
      v63 = *(_QWORD *)(a1 + 8);
      v64 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v54;
      v65 = v87;
      v66 = *(const __m128i **)a1;
      v99 = (const __m128i *)v62;
      v67 = v63 - 1;
      v102 = v64;
      if ( v67 >= 0 )
      {
        v68 = (__m128i *)v62;
        do
        {
          v68->m128i_i64[0] = v66->m128i_i64[0];
          v69 = v66->m128i_i64[1];
          v70 = _mm_loadu_si128(v66 + 1);
          v66->m128i_i64[1] = 0;
          v68->m128i_i64[1] = v69;
          v68[1] = v70;
          LODWORD(v69) = v66[2].m128i_i32[0];
          v66[1].m128i_i64[1] = 0;
          v68[2].m128i_i32[0] = v69;
          if ( v66->m128i_i64[1] )
          {
            v66[1].m128i_i64[0] = 0;
            v95 = v67;
            v88 = v65;
            qfree();
            v67 = v95;
            v65 = v88;
          }
          v66 = (const __m128i *)((char *)v66 + 40);
          v68 = (__m128i *)((char *)v68 + 40);
        }
        while ( v67-- != 0 );
      }
      v89 = v65;
      qfree();
      v12 = v89;
      *(_QWORD *)a1 = v99;
      *(_QWORD *)(a1 + 16) = v102;
      v53 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v99 = *(const __m128i **)a1;
    }
    v55 = &v99->m128i_i8[40 * v53];
    *((_QWORD *)v55 + 1) = 0;
    *((_OWORD *)v55 + 1) = 0;
    ++*(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v13 + 48)
      && (v56 = *(const void **)(v13 + 40)) != nullptr
      && (v84 = v12, v57 = strlen(*(const char **)(v13 + 40)), v12 = v84, (v58 = v57) != 0) )
    {
      v59 = *((void **)v55 + 1);
      v60 = v57 + 1;
      if ( *((_QWORD *)v55 + 3) < v57 + 1 )
      {
        v90 = v57 + 1;
        v96 = v12;
        v80 = qvector_reserve();
        v12 = v96;
        v60 = v90;
        *((_QWORD *)v55 + 1) = v80;
        v59 = (void *)v80;
      }
      *((_QWORD *)v55 + 2) = v60;
      v85 = v12;
      memmove(v59, v56, v58);
      v12 = v85;
      *(_BYTE *)(*((_QWORD *)v55 + 1) + v58) = 0;
    }
    else
    {
      *((_QWORD *)v55 + 2) = 0;
    }
    *(_QWORD *)v55 = a2;
    *((_DWORD *)v55 + 8) = 512;
    if ( *(_BYTE *)(a1 + 57) )
    {
      v86 = v12;
      sub_4ACC0(a5, &unk_61EDC, 7u);
      v103 = v86;
      sub_4ACC0(a5, &v103, 8u);
      *((_DWORD *)v55 + 8) += a5[1] - 8;
    }
    else
    {
      v76 = a5[2];
      v77 = *a5;
      LODWORD(v103) = -5 - v12;
      v78 = a5[1];
      if ( v76 < v78 + 1 )
      {
        v79 = qvector_reserve();
        *a5 = v79;
        v77 = v79;
        v78 = a5[1];
      }
      *(_BYTE *)(v77 + v78) = -23;
      ++a5[1];
      sub_4ACC0(a5, &v103, 4u);
      *((_DWORD *)v55 + 8) += a5[1] - 4;
    }
    return 0;
  }
  v15 = *(_QWORD **)(a1 + 160);
  if ( !v15 )
    goto LABEL_81;
  v16 = (_QWORD *)(a1 + 152);
  do
  {
    while ( 1 )
    {
      v17 = v15[2];
      v18 = v15[3];
      if ( v15[4] < v12 )
        break;
      v16 = v15;
      v15 = (_QWORD *)v15[2];
      if ( !v17 )
        goto LABEL_9;
    }
    v15 = (_QWORD *)v15[3];
  }
  while ( v18 );
LABEL_9:
  if ( (_QWORD *)(a1 + 152) == v16 )
  {
LABEL_81:
    v100 = v12;
    v91 = a1 + 144;
    v72 = operator new(0x30u);
    v12 = v100;
    v73 = *(_QWORD *)(a1 + 184) == 0;
    *(_QWORD *)(v72 + 40) = 0;
    v20 = (_QWORD *)v72;
    *(_QWORD *)(v72 + 32) = v100;
    if ( !v73 )
    {
      v22 = *(_QWORD **)(a1 + 176);
      v16 = nullptr;
      if ( v22[4] < v100 )
      {
LABEL_16:
        if ( v22 )
        {
LABEL_17:
          v98 = v12;
          v16 = v20;
          std::_Rb_tree_insert_and_rebalance();
          v12 = v98;
          ++*(_QWORD *)(v91 + 40);
          goto LABEL_54;
        }
LABEL_52:
        if ( v20 )
        {
          v93 = v12;
          operator delete(v20, 0x30u);
          v12 = v93;
        }
        goto LABEL_54;
      }
    }
LABEL_83:
    v101 = v12;
    v74 = sub_4A740(v91, v12);
    v12 = v101;
    v16 = v74;
    goto LABEL_16;
  }
  if ( v12 < v16[4] )
  {
    v97 = v12;
    v91 = a1 + 144;
    v19 = operator new(0x30u);
    v12 = v97;
    *(_QWORD *)(v19 + 40) = 0;
    v20 = (_QWORD *)v19;
    *(_QWORD *)(v19 + 32) = v97;
    v21 = v16[4];
    if ( v97 >= v21 )
    {
      if ( v21 >= v97 )
        goto LABEL_52;
      if ( *(_QWORD **)(a1 + 176) == v16 )
      {
        if ( v16 )
          goto LABEL_17;
        goto LABEL_52;
      }
      v61 = std::_Rb_tree_increment();
      v12 = v97;
      v22 = (_QWORD *)v61;
      if ( v97 < *(_QWORD *)(v61 + 32) )
      {
        if ( !v16[3] )
        {
          if ( v16 )
            goto LABEL_17;
          goto LABEL_52;
        }
        v16 = (_QWORD *)v61;
        goto LABEL_16;
      }
    }
    else
    {
      v22 = v16;
      if ( *(_QWORD **)(a1 + 168) == v16 )
        goto LABEL_16;
      v23 = std::_Rb_tree_decrement();
      v12 = v97;
      v22 = (_QWORD *)v23;
      if ( *(_QWORD *)(v23 + 32) < v97 )
      {
        if ( *(_QWORD *)(v23 + 24) )
          v22 = v16;
        else
          v16 = nullptr;
        goto LABEL_16;
      }
    }
    goto LABEL_83;
  }
LABEL_54:
  v16[5] = v13;
  v24 = *(_QWORD *)(a1 + 272);
LABEL_19:
  if ( *(_BYTE *)(a1 + 57) )
  {
    v103 = v12;
    sub_4ACC0(a5, &unk_5E273, 2u);
    sub_4ACC0(a5, &v103, 8u);
    sub_4ACC0(a5, &unk_5E276, 2u);
    v103 = v24;
    sub_4ACC0(a5, &v103, 8u);
    sub_4ACC0(a5, &unk_5E279, 6u);
    if ( (*(_DWORD *)debug & 0x400000) == 0 )
      goto LABEL_25;
    goto LABEL_39;
  }
  v25 = a5[1];
  v26 = a5[2];
  LODWORD(v103) = v12;
  v27 = *a5;
  if ( v26 < v25 + 1 )
  {
    v94 = v12;
    v47 = qvector_reserve();
    LODWORD(v12) = v94;
    *a5 = v47;
    v27 = v47;
    v25 = a5[1];
  }
  *(_BYTE *)(v27 + v25) = -72;
  ++a5[1];
  v92 = v12;
  sub_4ACC0(a5, &v103, 4u);
  v28 = a5[1];
  v29 = *a5;
  v30 = v92;
  if ( a5[2] < (unsigned __int64)(v28 + 1) )
  {
    v46 = qvector_reserve();
    v30 = v92;
    *a5 = v46;
    v29 = v46;
    v28 = a5[1];
  }
  *(_BYTE *)(v29 + v28) = -24;
  ++a5[1];
  LODWORD(v103) = v24 - v30 - 10;
  sub_4ACC0(a5, &v103, 4u);
  if ( (*(_DWORD *)debug & 0x400000) != 0 )
  {
LABEL_39:
    v36 = a5[1];
    v37 = *a5;
    if ( a5[2] < (unsigned __int64)(v36 + 1) )
    {
      v51 = qvector_reserve();
      *a5 = v51;
      v37 = v51;
      v36 = a5[1];
    }
    *(_BYTE *)(v37 + v36) = -21;
    v38 = a5[1];
    v39 = 0;
    v40 = v38 + 1;
    a5[1] = v38 + 1;
    v41 = *(_QWORD *)(v82 + 8);
    if ( v41 )
      v39 = v41 - 1;
    v42 = *a5;
    if ( a5[2] < (unsigned __int64)(v38 + 2) )
    {
      v50 = qvector_reserve();
      *a5 = v50;
      v42 = v50;
      v40 = a5[1];
    }
    *(_BYTE *)(v42 + v40) = v39;
    ++a5[1];
    v43 = *(_QWORD *)(v82 + 8);
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( v44 )
        sub_4ACC0(a5, *(const void **)v82, v44);
    }
  }
LABEL_25:
  if ( !v13 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      sub_4ACC0(a5, &unk_5E273, 2u);
      v103 = 0;
      sub_4ACC0(a5, &v103, 8u);
      goto LABEL_34;
    }
LABEL_28:
    v31 = a5[1];
    v32 = *a5;
    if ( a5[2] < (unsigned __int64)(v31 + 1) )
    {
      v52 = qvector_reserve();
      *a5 = v52;
      v32 = v52;
      v31 = a5[1];
    }
    *(_BYTE *)(v32 + v31) = -72;
    ++a5[1];
    if ( v13 )
    {
      LODWORD(v103) = *(_QWORD *)(v13 + 8);
      sub_4ACC0(a5, &v103, 4u);
      goto LABEL_32;
    }
    LODWORD(v103) = 0;
    sub_4ACC0(a5, &v103, 4u);
LABEL_34:
    v33 = a5[1];
    v34 = *a5;
    if ( a5[2] < (unsigned __int64)(v33 + 1) )
    {
      v45 = qvector_reserve();
      *a5 = v45;
      v34 = v45;
      v33 = a5[1];
    }
    *(_BYTE *)(v34 + v33) = -61;
    ++a5[1];
    return 0;
  }
  if ( *(_DWORD *)(v13 + 32) )
    goto LABEL_32;
  if ( !*(_BYTE *)(a1 + 57) )
    goto LABEL_28;
  sub_4ACC0(a5, &unk_5E273, 2u);
  v103 = *(_QWORD *)(v13 + 8);
  sub_4ACC0(a5, &v103, 8u);
LABEL_32:
  if ( *(__int16 *)v13 <= 0 || *(_BYTE *)(a1 + 57) )
    goto LABEL_34;
  v48 = a5[1];
  v49 = *a5;
  if ( a5[2] < (unsigned __int64)(v48 + 1) )
  {
    v75 = qvector_reserve();
    *a5 = v75;
    v49 = v75;
    v48 = a5[1];
  }
  *(_BYTE *)(v49 + v48) = -62;
  ++a5[1];
  sub_4ACC0(a5, (const void *)v13, 2u);
  return 0;
}

