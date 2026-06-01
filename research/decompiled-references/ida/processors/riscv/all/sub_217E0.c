__int64 __fastcall sub_217E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7,
        char *s,
        __int64 a9)
{
  bool v10; // zf
  __int64 v11; // rcx
  __int64 name_expr; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rsi
  _QWORD *v18; // r13
  size_t v19; // rax
  __int64 v20; // r13
  size_t v21; // r15
  size_t v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r13
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  __int64 v28; // rsi
  unsigned __int64 v29; // rbp
  size_t v30; // r14
  __int64 v31; // r13
  size_t v32; // r15
  __int64 v33; // rsi
  int v34; // eax
  __int64 v35; // rbp
  __int64 v36; // r13
  unsigned __int64 v37; // r12
  __int64 v38; // rsi
  _DWORD *v39; // rbp
  __int64 v40; // r8
  unsigned __int64 v41; // r15
  __int64 v42; // rsi
  __int64 v43; // r13
  __int64 v44; // rbp
  __int64 v45; // r14
  unsigned __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rbp
  size_t v49; // rax
  __int64 v50; // rbp
  size_t v51; // r13
  size_t v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rbp
  __int64 v55; // r13
  unsigned __int64 v56; // r12
  __int64 v57; // rsi
  __int64 v58; // rbp
  __int64 v60; // rbp
  unsigned __int64 v61; // r13
  __int64 v62; // r14
  __int64 v63; // rsi
  size_t v64; // rax
  __int64 v65; // rbp
  size_t v66; // r13
  size_t v67; // r14
  __int64 v68; // rsi
  __int64 v69; // rbp
  __int64 v70; // r13
  unsigned __int64 v71; // r12
  __int64 v72; // rsi
  __int64 v73; // rbp
  __int64 v74; // r14
  unsigned __int64 v75; // r13
  __int64 v76; // rsi
  _QWORD *v77; // rbp
  __int64 v78; // rax
  __int64 v79; // r13
  unsigned __int64 v80; // r12
  __int64 v81; // rsi
  __int64 v82; // rbp
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // [rsp+0h] [rbp-478h]
  __int64 v97; // [rsp+0h] [rbp-478h]
  __int64 v98; // [rsp+0h] [rbp-478h]
  __int64 v99; // [rsp+0h] [rbp-478h]
  size_t v100; // [rsp+8h] [rbp-470h]
  void *src; // [rsp+10h] [rbp-468h] BYREF
  __int128 v102; // [rsp+18h] [rbp-460h]
  _BYTE v103[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v104; // [rsp+438h] [rbp-40h]

  v10 = *(_QWORD *)(a4 + 8) == 0;
  v104 = __readfsqword(0x28u);
  if ( !v10 )
  {
    *a7 = *a6 + *(_QWORD *)(a4 + 16);
    v11 = *(_QWORD *)(a4 + 8);
    if ( v11 == a2 )
    {
      v44 = a1[1];
      if ( (_BYTE)a9 )
      {
        if ( v44 )
        {
          v74 = v44 + 13;
          v75 = v44 + 14;
          --v44;
        }
        else
        {
          v75 = 15;
          v74 = 14;
        }
        v76 = *a1;
        if ( a1[2] < v75 )
        {
          v92 = qvector_reserve(a1, v76, v75, 1);
          *a1 = v92;
          v76 = v92;
        }
        a1[1] = v75;
        *(_BYTE *)(v76 + v74) = 0;
        v77 = (_QWORD *)(*a1 + v44);
        *v77 = 0x5F746F6725252001LL;
        *(_QWORD *)((char *)v77 + 6) = 0x5F6C657263705F74LL;
      }
      else
      {
        if ( v44 )
        {
          v45 = v44 + 9;
          v46 = v44 + 10;
          --v44;
        }
        else
        {
          v46 = 11;
          v45 = 10;
        }
        v47 = *a1;
        if ( a1[2] < v46 )
        {
          v93 = qvector_reserve(a1, v47, v46, 1);
          *a1 = v93;
          v47 = v93;
        }
        a1[1] = v46;
        *(_BYTE *)(v47 + v45) = 0;
        v48 = *a1 + v44;
        *(_QWORD *)v48 = 0x6572637025252001LL;
        *(_WORD *)(v48 + 8) = 24428;
      }
      v49 = strlen(s);
      v50 = a1[1];
      v51 = v49;
      v52 = v49;
      if ( v50 )
      {
        --v50;
        v52 = v49 + v50;
      }
      v53 = *a1;
      if ( a1[2] < v52 + 1 )
      {
        v91 = qvector_reserve(a1, v53, v52 + 1, 1);
        *a1 = v91;
        v53 = v91;
      }
      a1[1] = v52 + 1;
      *(_BYTE *)(v53 + v52) = 0;
      memmove((void *)(v50 + *a1), s, v51);
      v54 = a1[1];
      if ( v54 )
      {
        v55 = v54 + 5;
        v56 = v54 + 6;
        --v54;
      }
      else
      {
        v56 = 7;
        v55 = 6;
      }
      v57 = *a1;
      if ( a1[2] < v56 )
      {
        v83 = qvector_reserve(a1, v57, v56, 1);
        *a1 = v83;
        v57 = v83;
      }
      a1[1] = v56;
      *(_BYTE *)(v57 + v55) = 0;
      v58 = *a1 + v54;
      *(_DWORD *)v58 = 695412008;
      *(_WORD *)(v58 + 4) = 8194;
      return 3;
    }
    v102 = 0;
    src = nullptr;
    name_expr = get_name_expr(&src, a5, a3, v11, -1, 2);
    v13 = a1[1];
    v14 = name_expr;
    if ( (_BYTE)a9 )
    {
      if ( v13 )
      {
        v16 = v13 + 13;
        v15 = v13 + 14;
        --v13;
      }
      else
      {
        v15 = 15;
        v16 = 14;
      }
      v17 = *a1;
      if ( a1[2] < v15 )
      {
        v99 = v16;
        v88 = qvector_reserve(a1, v17, v15, 1);
        *a1 = v88;
        v16 = v99;
        v17 = v88;
      }
      a1[1] = v15;
      *(_BYTE *)(v17 + v16) = 0;
      v18 = (_QWORD *)(*a1 + v13);
      *v18 = 0x5F746F6725252001LL;
      *(_QWORD *)((char *)v18 + 6) = 0x5F6C657263705F74LL;
    }
    else
    {
      if ( v13 )
      {
        v40 = v13 + 9;
        v41 = v13 + 10;
        --v13;
      }
      else
      {
        v41 = 11;
        v40 = 10;
      }
      v42 = *a1;
      if ( a1[2] < v41 )
      {
        v98 = v40;
        v87 = qvector_reserve(a1, v42, v41, 1);
        *a1 = v87;
        v40 = v98;
        v42 = v87;
      }
      a1[1] = v41;
      *(_BYTE *)(v42 + v40) = 0;
      v43 = *a1 + v13;
      *(_QWORD *)v43 = 0x6572637025252001LL;
      *(_WORD *)(v43 + 8) = 24428;
    }
    v19 = strlen(s);
    v20 = a1[1];
    v21 = v19;
    v22 = v19;
    if ( v20 )
    {
      --v20;
      v22 = v19 + v20;
    }
    v23 = *a1;
    v24 = v22 + 1;
    if ( a1[2] < v22 + 1 )
    {
      v100 = v22;
      v97 = v22 + 1;
      v84 = qvector_reserve(a1, v23, v24, 1);
      v22 = v100;
      v24 = v97;
      *a1 = v84;
      v23 = v84;
    }
    a1[1] = v24;
    *(_BYTE *)(v23 + v22) = 0;
    memmove((void *)(v20 + *a1), s, v21);
    v25 = a1[1];
    if ( v25 )
    {
      v26 = v25 + 1;
      v27 = a1[1];
      v28 = *a1;
      --v25;
      if ( a1[2] >= v26 )
      {
LABEL_15:
        a1[1] = v26;
        *(_BYTE *)(v28 + v27) = 0;
        *(_BYTE *)(*a1 + v25) = 40;
        if ( v14 <= 0 )
        {
          btoa64(v103, 1024, *(_QWORD *)(a4 + 8), 0);
          sub_B630(a1, (__int64)&unk_2A1A9, v103);
        }
        else
        {
          v29 = v102;
          if ( (_QWORD)v102 )
          {
            v30 = v102 - 1;
            if ( (_QWORD)v102 != 1 )
            {
              v31 = a1[1];
              v32 = v102 - 1;
              if ( v31 )
              {
                --v31;
                v32 = v30 + v31;
                v29 = v102 + v31;
              }
              v33 = *a1;
              if ( a1[2] < v29 )
              {
                v95 = qvector_reserve(a1, v33, v29, 1);
                *a1 = v95;
                v33 = v95;
              }
              a1[1] = v29;
              *(_BYTE *)(v33 + v32) = 0;
              memcpy((void *)(v31 + *a1), src, v30);
            }
          }
        }
        v34 = (unsigned __int8)*s - 104;
        if ( *s == 104 )
        {
          v34 = (unsigned __int8)s[1] - 105;
          if ( s[1] == 105 )
            v34 = (unsigned __int8)s[2];
        }
        v35 = a1[1];
        if ( v34 )
        {
          if ( v35 )
          {
            v79 = v35 + 2;
            v80 = v35 + 3;
            --v35;
          }
          else
          {
            v80 = 4;
            v79 = 3;
          }
          v81 = *a1;
          if ( a1[2] < v80 )
          {
            v86 = qvector_reserve(a1, v81, v80, 1);
            *a1 = v86;
            v81 = v86;
          }
          a1[1] = v80;
          *(_BYTE *)(v81 + v79) = 0;
          v82 = *a1 + v35;
          *(_WORD *)v82 = 553;
          *(_BYTE *)(v82 + 2) = 32;
        }
        else
        {
          if ( v35 )
          {
            v36 = v35 + 6;
            v37 = v35 + 7;
            --v35;
          }
          else
          {
            v37 = 8;
            v36 = 7;
          }
          v38 = *a1;
          if ( a1[2] < v37 )
          {
            v85 = qvector_reserve(a1, v38, v37, 1);
            *a1 = v85;
            v38 = v85;
          }
          a1[1] = v37;
          *(_BYTE *)(v38 + v36) = 0;
          v39 = (_DWORD *)(*a1 + v35);
          *v39 = 1931814953;
          *(_DWORD *)((char *)v39 + 3) = 537012595;
        }
        if ( src )
        {
          *(_QWORD *)&v102 = 0;
          qfree(src);
        }
        return 3;
      }
    }
    else
    {
      v28 = *a1;
      v26 = 2;
      v27 = 1;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_15;
    }
    v96 = v27;
    v78 = qvector_reserve(a1, v28, v26, 1);
    *a1 = v78;
    v27 = v96;
    v28 = v78;
    goto LABEL_15;
  }
  v60 = a1[1];
  if ( v60 )
  {
    v62 = v60 + 3;
    v61 = v60 + 4;
    --v60;
  }
  else
  {
    v61 = 5;
    v62 = 4;
  }
  v63 = *a1;
  if ( a1[2] < v61 )
  {
    v90 = qvector_reserve(a1, v63, v61, 1);
    *a1 = v90;
    v63 = v90;
  }
  a1[1] = v61;
  *(_BYTE *)(v63 + v62) = 0;
  *(_DWORD *)(*a1 + v60) = 623190017;
  v64 = strlen(s);
  v65 = a1[1];
  v66 = v64;
  v67 = v64;
  if ( v65 )
  {
    --v65;
    v67 = v64 + v65;
  }
  v68 = *a1;
  if ( a1[2] < v67 + 1 )
  {
    v94 = qvector_reserve(a1, v68, v67 + 1, 1);
    *a1 = v94;
    v68 = v94;
  }
  a1[1] = v67 + 1;
  *(_BYTE *)(v68 + v67) = 0;
  memmove((void *)(v65 + *a1), s, v66);
  v69 = a1[1];
  if ( v69 )
  {
    v70 = v69 + 5;
    v71 = v69 + 6;
    --v69;
  }
  else
  {
    v71 = 7;
    v70 = 6;
  }
  v72 = *a1;
  if ( a1[2] < v71 )
  {
    v89 = qvector_reserve(a1, v72, v71, 1);
    *a1 = v89;
    v72 = v89;
  }
  a1[1] = v71;
  *(_BYTE *)(v72 + v70) = 0;
  v73 = *a1 + v69;
  *(_DWORD *)v73 = 695412008;
  *(_WORD *)(v73 + 4) = 8194;
  return 4;
}

