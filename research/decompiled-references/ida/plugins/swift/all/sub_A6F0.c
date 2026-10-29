unsigned __int64 __fastcall sub_A6F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  size_t v3; // rbp
  __int64 v4; // rax
  size_t v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 *v8; // r15
  __int64 v9; // r13
  __int64 *v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  size_t v15; // r13
  const char *v16; // r15
  __int64 v17; // r12
  size_t v18; // r14
  char *v19; // rsi
  size_t v20; // rdx
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  char *v23; // rsi
  unsigned __int64 v24; // r12
  size_t v25; // r15
  __int64 v26; // r13
  size_t v27; // r14
  char *v28; // rsi
  unsigned __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // r14
  char *v33; // rsi
  char *v34; // r12
  size_t v35; // r15
  size_t v36; // r14
  __int64 v37; // r12
  char *v38; // rsi
  __int64 v39; // r12
  unsigned __int64 v40; // r13
  char *v41; // rsi
  const char *v42; // rsi
  __int64 v43; // r13
  __int64 v44; // r12
  size_t v45; // rdx
  size_t v46; // r14
  __int64 v47; // r8
  size_t v48; // r11
  char *v49; // rsi
  __int64 v50; // r14
  char *v51; // rsi
  __int64 v52; // r10
  __int64 v53; // rdx
  size_t v54; // rdx
  size_t v55; // r10
  size_t v56; // r11
  char *v57; // rsi
  unsigned __int64 v58; // rdx
  char *v59; // rsi
  const char *v60; // rsi
  char *v61; // rsi
  __int64 v62; // rbp
  __int64 v63; // r12
  __int64 v64; // r14
  __int64 v65; // r15
  __int64 v66; // r15
  void *v67; // rax
  void *v68; // rax
  void *v69; // rax
  const void *v70; // rsi
  void *v71; // rax
  const void *v72; // rsi
  size_t nb; // [rsp+8h] [rbp-130h]
  size_t n; // [rsp+8h] [rbp-130h]
  size_t na; // [rsp+8h] [rbp-130h]
  size_t nd; // [rsp+8h] [rbp-130h]
  size_t nc; // [rsp+8h] [rbp-130h]
  signed int v78; // [rsp+10h] [rbp-128h]
  __int64 v79; // [rsp+10h] [rbp-128h]
  size_t v80; // [rsp+10h] [rbp-128h]
  __int64 v81; // [rsp+18h] [rbp-120h]
  size_t v82; // [rsp+28h] [rbp-110h]
  size_t v83; // [rsp+28h] [rbp-110h]
  char *v84; // [rsp+30h] [rbp-108h] BYREF
  __int128 v85; // [rsp+38h] [rbp-100h]
  void *src; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v87; // [rsp+58h] [rbp-E0h]
  __int64 v88; // [rsp+70h] [rbp-C8h]
  signed int v89; // [rsp+78h] [rbp-C0h] BYREF
  void *v90; // [rsp+80h] [rbp-B8h]
  __int128 v91; // [rsp+88h] [rbp-B0h]
  __int64 v92; // [rsp+98h] [rbp-A0h]
  void *v93; // [rsp+A0h] [rbp-98h]
  __int128 v94; // [rsp+A8h] [rbp-90h]
  __int64 v95; // [rsp+B8h] [rbp-80h]
  __int64 v96; // [rsp+C0h] [rbp-78h]
  __int128 v97; // [rsp+C8h] [rbp-70h]
  __int64 v98; // [rsp+D8h] [rbp-60h]
  __int64 v99; // [rsp+E0h] [rbp-58h]
  int v100; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v102; // [rsp+F8h] [rbp-40h]

  v102 = __readfsqword(0x28u);
  sub_7200((__int64)"dumping SWIFT types...\n");
  v1 = *(_QWORD *)(a1 + 464);
  v81 = a1 + 448;
  if ( a1 + 448 != v1 )
  {
    while ( 1 )
    {
      v2 = *(_QWORD *)(v1 + 32);
      v3 = *(_QWORD *)(v1 + 56);
      v90 = nullptr;
      v91 = 0;
      v88 = v2;
      v78 = *(_DWORD *)(v1 + 40);
      v89 = v78;
      if ( v3 )
      {
        v69 = (void *)qalloc_or_throw(v3);
        v70 = *(const void **)(v1 + 48);
        *((_QWORD *)&v91 + 1) = v3;
        v90 = v69;
        memcpy(v69, v70, v3);
        *(_QWORD *)&v91 = v3;
      }
      v4 = *(_QWORD *)(v1 + 72);
      v5 = *(_QWORD *)(v1 + 88);
      v93 = nullptr;
      v94 = 0;
      v92 = v4;
      if ( v5 )
      {
        v71 = (void *)qalloc_or_throw(v5);
        v72 = *(const void **)(v1 + 80);
        v93 = v71;
        *((_QWORD *)&v94 + 1) = v5;
        memcpy(v71, v72, v5);
        *(_QWORD *)&v94 = v5;
      }
      v6 = *(_QWORD *)(v1 + 104);
      v7 = *(_QWORD *)(v1 + 120);
      v96 = 0;
      v97 = 0;
      v95 = v6;
      if ( v7 )
      {
        v96 = qalloc_or_throw(56 * v7);
        v62 = v96;
        v63 = 0;
        v64 = 0;
        *((_QWORD *)&v97 + 1) = v7;
        do
        {
          v65 = *(_QWORD *)(v1 + 112);
          *(_QWORD *)v62 = 0;
          *(_OWORD *)(v62 + 8) = 0;
          v66 = v63 + v65;
          if ( *(_QWORD *)(v66 + 8) )
          {
            nd = *(_QWORD *)(v66 + 8);
            v67 = (void *)qalloc_or_throw(nd);
            *(_QWORD *)v62 = v67;
            *(_QWORD *)(v62 + 16) = nd;
            memcpy(v67, *(const void **)v66, nd);
            *(_QWORD *)(v62 + 8) = nd;
          }
          *(_QWORD *)(v62 + 24) = 0;
          *(_OWORD *)(v62 + 32) = 0;
          if ( *(_QWORD *)(v66 + 32) )
          {
            nc = *(_QWORD *)(v66 + 32);
            v68 = (void *)qalloc_or_throw(nc);
            *(_QWORD *)(v62 + 24) = v68;
            *(_QWORD *)(v62 + 40) = nc;
            memcpy(v68, *(const void **)(v66 + 24), nc);
            *(_QWORD *)(v62 + 32) = nc;
          }
          ++v64;
          v63 += 56;
          v62 += 56;
          *(_DWORD *)(v62 - 8) = *(_DWORD *)(v66 + 48);
          *(_BYTE *)(v62 - 4) = *(_BYTE *)(v66 + 52);
        }
        while ( v7 != v64 );
        *(_QWORD *)&v97 = v7;
      }
      v98 = *(_QWORD *)(v1 + 136);
      v99 = *(_QWORD *)(v1 + 144);
      v100 = *(_DWORD *)(v1 + 152);
      if ( *(_BYTE *)(v1 + 156) )
        break;
      v8 = (__int64 *)v96;
LABEL_9:
      if ( v8 )
      {
        v9 = v97;
        v10 = v8;
        v11 = 0;
        if ( (_QWORD)v97 )
        {
          do
          {
            v12 = v10[3];
            if ( v12 )
            {
              v10[4] = 0;
              qfree(v12);
            }
            v13 = *v10;
            if ( *v10 )
            {
              v10[1] = 0;
              qfree(v13);
            }
            ++v11;
            v10 += 7;
          }
          while ( v9 != v11 );
        }
        qfree(v8);
      }
      if ( v93 )
        qfree(v93);
      if ( v90 )
        qfree(v90);
      v1 = std::_Rb_tree_increment(v1);
      if ( v81 == v1 )
        return v102 - __readfsqword(0x28u);
    }
    v85 = 0;
    v84 = nullptr;
    v84 = (char *)qvector_reserve(&v84, 0, 3, 1);
    v15 = 1;
    *(_QWORD *)&v85 = 3;
    v16 = "?";
    strcpy(v84, "  ");
    if ( (unsigned int)v78 <= 2 )
    {
      v16 = (const char *)*(&off_28590 + v78);
      if ( !v16 )
        goto LABEL_31;
      v15 = strlen((const char *)*(&off_28590 + v78));
    }
    v17 = v85;
    v18 = v15;
    if ( (_QWORD)v85 )
    {
      v17 = v85 - 1;
      v18 = v85 - 1 + v15;
    }
    v19 = v84;
    v20 = v18 + 1;
    if ( *((_QWORD *)&v85 + 1) < v18 + 1 )
    {
      v84 = (char *)qvector_reserve(&v84, v84, v20, 1);
      v20 = v18 + 1;
      v19 = v84;
    }
    *(_QWORD *)&v85 = v20;
    v19[v18] = 0;
    memmove(&v84[v17], v16, v15);
LABEL_31:
    v21 = v85;
    v22 = 2;
    if ( (_QWORD)v85 )
    {
      v22 = v85 + 1;
      v21 = v85 - 1;
    }
    v23 = v84;
    if ( *((_QWORD *)&v85 + 1) < v22 )
    {
      v84 = (char *)qvector_reserve(&v84, v84, v22, 1);
      v23 = v84;
    }
    *(_QWORD *)&v85 = v22;
    v23[v21] = 32;
    v84[v21 + 1] = 0;
    sub_A400((__int64 *)&src, (__int64)&v89, ".");
    v24 = v87;
    if ( v87 )
    {
      v25 = v87 - 1;
      if ( v87 != 1 )
      {
        v26 = v85;
        v27 = v87 - 1;
        if ( (_QWORD)v85 )
        {
          v26 = v85 - 1;
          v27 = v25 + v85 - 1;
          v24 = v87 + v85 - 1;
        }
        v28 = v84;
        if ( *((_QWORD *)&v85 + 1) < v24 )
        {
          v84 = (char *)qvector_reserve(&v84, v84, v24, 1);
          v28 = v84;
        }
        *(_QWORD *)&v85 = v24;
        v28[v27] = 0;
        memcpy(&v84[v26], src, v25);
      }
    }
    if ( src )
    {
      v87 = 0;
      qfree(src);
    }
    v29 = v94;
    if ( (unsigned __int64)v94 <= 1 )
      goto LABEL_52;
    v30 = v85;
    if ( (_QWORD)v85 )
    {
      v31 = v85 + 2;
      v32 = v85 + 3;
      v33 = v84;
      v30 = v85 - 1;
      if ( *((_QWORD *)&v85 + 1) >= (unsigned __int64)(v85 + 3) )
      {
LABEL_47:
        *(_QWORD *)&v85 = v32;
        v33[v31] = 0;
        v34 = &v84[v30];
        v35 = v29 - 1;
        *(_WORD *)v34 = 14880;
        v36 = v29 - 1;
        v34[2] = 32;
        v37 = v85;
        if ( (_QWORD)v85 )
        {
          v37 = v85 - 1;
          v36 = v85 - 1 + v35;
          v29 += v85 - 1;
        }
        v38 = v84;
        if ( *((_QWORD *)&v85 + 1) < v29 )
        {
          v84 = (char *)qvector_reserve(&v84, v84, v29, 1);
          v38 = v84;
        }
        *(_QWORD *)&v85 = v29;
        v38[v36] = 0;
        memcpy(&v84[v37], v93, v35);
LABEL_52:
        v39 = v85;
        v40 = 2;
        if ( (_QWORD)v85 )
        {
          v40 = v85 + 1;
          v39 = v85 - 1;
        }
        v41 = v84;
        if ( *((_QWORD *)&v85 + 1) < v40 )
        {
          v84 = (char *)qvector_reserve(&v84, v84, v40, 1);
          v41 = v84;
        }
        *(_QWORD *)&v85 = v40;
        v41[v39] = 10;
        v42 = s1;
        v84[v39 + 1] = 0;
        if ( (_QWORD)v85 )
          v42 = v84;
        sub_7200((__int64)"%s", v42);
        v8 = (__int64 *)v96;
        v43 = v96;
        v44 = v96 + 56 * v97;
        if ( v44 != v96 )
        {
          do
          {
            v61 = v84;
            if ( *((_QWORD *)&v85 + 1) <= 4u )
            {
              v84 = (char *)qvector_reserve(&v84, v84, 5, 1);
              v61 = v84;
            }
            *(_QWORD *)&v85 = 5;
            *(_DWORD *)v61 = 538976288;
            v84[4] = 0;
            v45 = *(_QWORD *)(v43 + 32);
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( v45 != 1 )
              {
                v47 = v85;
                v48 = v45 - 1;
                if ( (_QWORD)v85 )
                {
                  v47 = v85 - 1;
                  v48 = v46 + v85 - 1;
                  v45 += v85 - 1;
                }
                v49 = v84;
                if ( *((_QWORD *)&v85 + 1) < v45 )
                {
                  v82 = v48;
                  v79 = v47;
                  n = v45;
                  v84 = (char *)qvector_reserve(&v84, v84, v45, 1);
                  v48 = v82;
                  v49 = v84;
                  v47 = v79;
                  v45 = n;
                }
                *(_QWORD *)&v85 = v45;
                v49[v48] = 0;
                memcpy(&v84[v47], *(const void **)(v43 + 24), v46);
              }
            }
            v50 = v85;
            if ( (unsigned __int64)v85 > 1 )
            {
              v51 = v84;
              v52 = v85 - 1;
              v53 = v85 + 1;
              if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)(v85 + 1) )
              {
                v84 = (char *)qvector_reserve(&v84, v84, v53, 1);
                v52 = v50 - 1;
                v51 = v84;
                v53 = v50 + 1;
              }
              *(_QWORD *)&v85 = v53;
              v51[v52] = 32;
              v84[v50] = 0;
              v50 = v85;
            }
            v54 = *(_QWORD *)(v43 + 8);
            if ( v54 )
            {
              v55 = v54 - 1;
              if ( v54 != 1 )
              {
                v56 = v54 - 1;
                if ( v50 )
                {
                  --v50;
                  v56 = v55 + v50;
                  v54 += v50;
                }
                v57 = v84;
                if ( *((_QWORD *)&v85 + 1) < v54 )
                {
                  v83 = v55;
                  v80 = v56;
                  na = v54;
                  v84 = (char *)qvector_reserve(&v84, v84, v54, 1);
                  v55 = v83;
                  v57 = v84;
                  v56 = v80;
                  v54 = na;
                }
                *(_QWORD *)&v85 = v54;
                v57[v56] = 0;
                memcpy(&v84[v50], *(const void **)v43, v55);
                v50 = v85;
              }
            }
            v58 = 2;
            if ( v50 )
              v58 = v50-- + 1;
            v59 = v84;
            if ( *((_QWORD *)&v85 + 1) < v58 )
            {
              nb = v58;
              v84 = (char *)qvector_reserve(&v84, v84, v58, 1);
              v58 = nb;
              v59 = v84;
            }
            *(_QWORD *)&v85 = v58;
            v59[v50] = 10;
            v60 = s1;
            v84[v50 + 1] = 0;
            if ( (_QWORD)v85 )
              v60 = v84;
            sub_7200((__int64)"%s", v60);
            v43 += 56;
          }
          while ( v44 != v43 );
        }
        if ( v84 )
        {
          *(_QWORD *)&v85 = 0;
          qfree(v84);
        }
        goto LABEL_9;
      }
    }
    else
    {
      v33 = v84;
      v32 = 4;
      v31 = 3;
      if ( *((_QWORD *)&v85 + 1) >= 4u )
        goto LABEL_47;
    }
    v84 = (char *)qvector_reserve(&v84, v33, v32, 1);
    v33 = v84;
    goto LABEL_47;
  }
  return v102 - __readfsqword(0x28u);
}

