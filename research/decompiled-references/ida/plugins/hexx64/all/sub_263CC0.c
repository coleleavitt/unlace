unsigned __int64 __fastcall sub_263CC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r13
  const char *v7; // rcx
  __int64 v8; // r13
  int v9; // edx
  _QWORD *v10; // rdi
  int v11; // r14d
  const char *v12; // r12
  unsigned __int64 v13; // rax
  size_t v14; // rax
  size_t v15; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  size_t v20; // rax
  unsigned __int64 v21; // r8
  size_t v22; // r9
  size_t v23; // r10
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  size_t v29; // r15
  const char *v30; // r8
  size_t v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  const char *v34; // rcx
  int v35; // eax
  size_t v36; // r15
  unsigned __int64 v37; // r9
  __int64 v38; // r8
  unsigned __int64 v39; // r14
  __int64 v40; // rsi
  unsigned __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rsi
  int v45; // eax
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rax
  size_t v49; // rax
  unsigned __int64 v50; // r14
  size_t v51; // r15
  size_t v52; // r8
  __int64 v53; // rsi
  __int64 v54; // rdx
  int v55; // r15d
  const char *v56; // rcx
  char v58; // r14
  char *v59; // rdi
  size_t v60; // r13
  __int64 v61; // r8
  __int64 v62; // rsi
  __int64 v63; // r8
  __int64 v64; // rsi
  unsigned int v65; // ecx
  __int64 v66; // rsi
  unsigned __int64 v67; // r15
  __int64 v68; // rdi
  char *v69; // rax
  char *v70; // rdx
  char v71; // cl
  size_t v72; // [rsp+8h] [rbp-178h]
  size_t v73; // [rsp+10h] [rbp-170h]
  size_t v74; // [rsp+18h] [rbp-168h]
  unsigned __int64 v75; // [rsp+18h] [rbp-168h]
  __int64 v76; // [rsp+18h] [rbp-168h]
  const char *v77; // [rsp+20h] [rbp-160h]
  __int64 v78; // [rsp+20h] [rbp-160h]
  size_t v79; // [rsp+20h] [rbp-160h]
  unsigned __int64 v80; // [rsp+20h] [rbp-160h]
  __int64 v81; // [rsp+20h] [rbp-160h]
  unsigned int v82; // [rsp+30h] [rbp-150h]
  __int64 v83; // [rsp+30h] [rbp-150h]
  __int64 v84; // [rsp+30h] [rbp-150h]
  __int64 v85; // [rsp+30h] [rbp-150h]
  __int64 v86; // [rsp+30h] [rbp-150h]
  unsigned __int64 v87; // [rsp+30h] [rbp-150h]
  unsigned __int64 v88; // [rsp+38h] [rbp-148h]
  unsigned int v89; // [rsp+44h] [rbp-13Ch]
  __int64 v90; // [rsp+48h] [rbp-138h]
  char *v91; // [rsp+50h] [rbp-130h]
  char *v92; // [rsp+50h] [rbp-130h]
  char *v93; // [rsp+50h] [rbp-130h]
  unsigned int v94; // [rsp+50h] [rbp-130h]
  char *v95; // [rsp+50h] [rbp-130h]
  __int64 v96; // [rsp+58h] [rbp-128h]
  unsigned int v97; // [rsp+58h] [rbp-128h]
  char v98[8]; // [rsp+68h] [rbp-118h] BYREF
  const char *v99; // [rsp+70h] [rbp-110h] BYREF
  __int128 v100; // [rsp+78h] [rbp-108h]
  const char *v101; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v102; // [rsp+98h] [rbp-E8h]
  char *v103; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v104; // [rsp+B8h] [rbp-C8h]
  unsigned int *v105; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v106; // [rsp+D8h] [rbp-A8h]
  __int64 v107; // [rsp+F0h] [rbp-90h] BYREF
  unsigned __int64 v108; // [rsp+F8h] [rbp-88h]
  unsigned __int64 v109; // [rsp+100h] [rbp-80h]
  char *v110; // [rsp+110h] [rbp-70h]
  __int128 v111; // [rsp+118h] [rbp-68h]
  char s[19]; // [rsp+130h] [rbp-50h] BYREF
  char v113; // [rsp+143h] [rbp-3Dh] BYREF
  unsigned __int64 v114; // [rsp+148h] [rbp-38h]

  v114 = __readfsqword(0x28u);
  v100 = 0;
  v99 = nullptr;
  *(_DWORD *)(a2 + 32) = 0;
  if ( sub_260EF0(a1, (__int64)&v99, nullptr) > 0 )
    *(_DWORD *)(a2 + 32) = sub_25F570((void (***)(_QWORD, _QWORD, const char *, ...))a2, 0, nullptr, v99);
  sub_260F60(a1, a2);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    *(_BYTE *)(a1 + 208) = 1;
    sub_33E140(*(_QWORD *)(a1 + 216), 0x16u, a1 + 184, a1);
  }
  v5 = *(_QWORD *)(a1 + 184);
  v96 = v5;
  v6 = v5 + 24LL * *(_QWORD *)(a1 + 192);
  if ( v5 != v6 )
  {
    do
    {
      v7 = s1;
      if ( *(_QWORD *)(v96 + 8) )
        v7 = *(const char **)v96;
      (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "// %s\n", v7);
      v96 += 24;
    }
    while ( v6 != v96 );
  }
  if ( **(char **)(a1 + 8) < 0 )
  {
    (**(void (__fastcall ***)(__int64, _QWORD, void *))a2)(a2, 0, &unk_4190F2);
    ++*(_DWORD *)(a2 + 32);
  }
  v101 = nullptr;
  v102 = 0;
  sub_263810(a1, (__int64 *)&v101, v4, v5);
  v8 = get_merge_state() & 3;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 604LL) & 0x800000;
  if ( v9 )
  {
    if ( (_DWORD)v8 )
      goto LABEL_15;
    goto LABEL_69;
  }
  v10 = *(_QWORD **)(a1 + 8);
  v11 = v10[58];
  if ( v11 <= 0 )
  {
LABEL_13:
    if ( (_DWORD)v8 || tag_strlen() >= (unsigned __int64)*(int *)(*(_QWORD *)(a1 + 216) + 600LL) )
      goto LABEL_15;
LABEL_69:
    v56 = s1;
    if ( (_QWORD)v102 )
      v56 = v101;
    (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v56);
    ++*(_DWORD *)(a2 + 32);
    goto LABEL_72;
  }
  while ( 1 )
  {
    v55 = v9;
    if ( *(_QWORD *)(sub_13D280(v10, v9, 0.0) + 64) > 1u )
      break;
    v9 = v55 + 1;
    if ( v55 + 1 == v11 )
      goto LABEL_13;
    v10 = *(_QWORD **)(a1 + 8);
  }
LABEL_15:
  v90 = *(_QWORD *)(a1 + 8);
  v12 = (const char *)tag_skipcode();
  v13 = (unsigned __int64)&v12[strlen(v12)];
  if ( (unsigned __int64)(v12 + 2) < v13 && *(_BYTE *)(v13 - 2) == 1 )
    v13 -= 2LL;
  v14 = v13 - (_QWORD)v12;
  v103 = nullptr;
  v104 = 0;
  v15 = v14;
  if ( v14 )
  {
    v59 = nullptr;
    v60 = v14 + 1;
    if ( v14 != -1 )
    {
      v103 = (char *)qvector_reserve((__int64)&v103, 0, v14 + 1, 1);
      v59 = v103;
    }
    *(_QWORD *)&v104 = v60;
    memmove(v59, v12, v15);
    v103[v15] = 0;
  }
  v105 = nullptr;
  v106 = 0;
  sub_36D720((__int64 *)v98, v90, 0);
  sub_38A240((__int64 *)&v105, v103);
  if ( !(_QWORD)v106 )
  {
    v58 = 0;
    goto LABEL_78;
  }
  v97 = 23;
  if ( *(_BYTE *)(v90 + 320) )
    v97 = 33;
  (**(void (__fastcall ***)(__int64, _QWORD, void *, _QWORD, _QWORD, _QWORD, const char *, _QWORD))a2)(
    a2,
    0,
    &unk_41910C,
    v97,
    *v105,
    *v105,
    v103,
    v97);
  v16 = 1;
  ++*(_DWORD *)(a2 + 32);
  v17 = *(_QWORD *)(v90 + 1496);
  v107 = 0;
  v109 = 0;
  v89 = *(_DWORD *)(v17 + 596);
  v88 = *(int *)(v90 + 464);
  if ( (_QWORD)v106 )
  {
    while ( 1 )
    {
      v108 = 0;
      sub_32AA00(&v107, v97);
      v94 = v105[v16 - 1];
      if ( v16 - 1 >= v88 )
      {
        v46 = v108;
        if ( v108 )
        {
          v47 = v108 + 8;
          v48 = v108 - 1;
          if ( v108 >= v108 + 8 )
            goto LABEL_56;
          v61 = v108 + 7;
          v46 = v108 - 1;
        }
        else
        {
          v47 = 9;
          v61 = 8;
        }
        v62 = v107;
        if ( v109 < v47 )
        {
          v86 = v61;
          v107 = qvector_reserve((__int64)&v107, v107, v47, 1);
          v61 = v86;
          v62 = v107;
        }
        v108 = v47;
        v48 = v46;
        *(_BYTE *)(v62 + v61) = 0;
LABEL_56:
        *(_QWORD *)(v107 + v48) = 0x2020202020202020LL;
        v95 = &v103[v94];
        if ( v95 )
        {
          v49 = strlen(v95);
          v50 = v108;
          v51 = v49;
          v52 = v49;
          if ( v108 )
          {
            v50 = v108 - 1;
            v52 = v49 + v108 - 1;
          }
          v53 = v107;
          v54 = v52 + 1;
          if ( v109 < v52 + 1 )
          {
            v79 = v52;
            v85 = v52 + 1;
            v107 = qvector_reserve((__int64)&v107, v107, v54, 1);
            v52 = v79;
            v53 = v107;
            v54 = v85;
          }
          v108 = v54;
          *(_BYTE *)(v53 + v52) = 0;
          memmove((void *)(v50 + v107), v95, v51);
          sub_32AAE0(&v107, v97);
        }
        else
        {
LABEL_87:
          sub_32AAE0(&v107, v97);
        }
        v34 = (const char *)v107;
        goto LABEL_63;
      }
      if ( v16 >= (unsigned __int64)v106 )
      {
        v65 = v104 - 1;
        if ( !(_QWORD)v104 )
          v65 = 0;
        v82 = v65;
      }
      else
      {
        v82 = v105[v16];
      }
      v18 = sub_13D280((_QWORD *)v90, (int)v16 - 1, 0.0);
      v19 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v18 - *(_QWORD *)(v90 + 432)) >> 3);
      if ( (int)v19 >= 0 && (unsigned __int64)(int)v19 < *(_QWORD *)(v90 + 440) )
      {
        v110 = nullptr;
        v111 = 0;
        tag_addr();
        v68 = (__int64)v110;
        v69 = s;
        v70 = v110;
        while ( 1 )
        {
          v71 = *v70++;
          *v69 = v71;
          if ( !v71 )
            break;
          if ( ++v69 == &v113 )
          {
            v113 = 0;
            break;
          }
        }
        if ( v68 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v68);
        }
      }
      v20 = strlen(s);
      v21 = v108;
      v22 = v20;
      v23 = v20;
      if ( v108 )
      {
        v21 = v108 - 1;
        v23 = v20 + v108 - 1;
      }
      v24 = v107;
      v25 = v23 + 1;
      if ( v109 < v23 + 1 )
      {
        v72 = v20;
        v73 = v23;
        v75 = v21;
        v78 = v23 + 1;
        v107 = qvector_reserve((__int64)&v107, v107, v25, 1);
        v22 = v72;
        v24 = v107;
        v23 = v73;
        v21 = v75;
        v25 = v78;
      }
      v108 = v25;
      *(_BYTE *)(v24 + v23) = 0;
      memmove((void *)(v21 + v107), s, v22);
      v26 = v108;
      if ( v108 )
      {
        v27 = v108 + 8;
        v28 = v108 - 1;
        if ( v108 >= v108 + 8 )
          goto LABEL_34;
        v63 = v108 + 7;
        v26 = v108 - 1;
      }
      else
      {
        v27 = 9;
        v63 = 8;
      }
      v64 = v107;
      if ( v109 < v27 )
      {
        v76 = v63;
        v80 = v27;
        v107 = qvector_reserve((__int64)&v107, v107, v27, 1);
        v63 = v76;
        v64 = v107;
        v27 = v80;
      }
      v108 = v27;
      v28 = v26;
      *(_BYTE *)(v64 + v63) = 0;
LABEL_34:
      *(_QWORD *)(v107 + v28) = 0x2020202020202020LL;
      v29 = (int)(v82 - v94);
      v30 = &v103[v94];
      v91 = (char *)v108;
      v31 = v29;
      if ( v108 )
      {
        v91 = (char *)(v108 - 1);
        v31 = v29 + v108 - 1;
      }
      v32 = v107;
      v33 = v31 + 1;
      if ( v109 < v31 + 1 )
      {
        v74 = v31;
        v77 = v30;
        v84 = v31 + 1;
        v107 = qvector_reserve((__int64)&v107, v107, v33, 1);
        v31 = v74;
        v32 = v107;
        v30 = v77;
        v33 = v84;
      }
      v108 = v33;
      *(_BYTE *)(v32 + v31) = 0;
      memmove(&v91[v107], v30, v29);
      v92 = (char *)v108;
      if ( v108 > 1 )
      {
        v66 = v107;
        if ( *(_BYTE *)(v107 + v108 - 2) == 32 )
        {
          v67 = v108 - 1;
          if ( (__int64)(v108 - 1) <= 1 )
          {
            if ( v107 )
            {
              v108 = 0;
              qfree(v107);
              v107 = 0;
              v109 = 0;
            }
          }
          else
          {
            if ( v109 < v67 )
            {
              v107 = qvector_reserve((__int64)&v107, v107, v108 - 1, 1);
              v66 = v107;
            }
            v108 = v67;
            v92[v66 - 2] = 0;
          }
        }
      }
      if ( *(_QWORD *)(v18 + 64) <= 1u )
        goto LABEL_87;
      v93 = *(char **)(v18 + 56);
      sub_32AAE0(&v107, v97);
      v34 = (const char *)v107;
      if ( v93 )
      {
        v35 = v89 - tag_strlen();
        if ( v35 > 0 )
        {
          v36 = v35;
          if ( !v108 )
          {
            v37 = v35 + 1LL;
            v38 = v35;
            v39 = 0;
            goto LABEL_44;
          }
          v39 = v108 - 1;
          v38 = v35 + v108 - 1;
          v37 = v35 + v108;
          if ( v108 < v37 )
          {
LABEL_44:
            v40 = v107;
            if ( v109 < v37 )
            {
              v81 = v38;
              v87 = v37;
              v107 = qvector_reserve((__int64)&v107, v107, v37, 1);
              v38 = v81;
              v40 = v107;
              v37 = v87;
            }
            v108 = v37;
            *(_BYTE *)(v40 + v38) = 0;
          }
          memset((void *)(v39 + v107), 32, v36);
        }
        v41 = v108;
        if ( v108 )
        {
          v42 = v108 + 3;
          v43 = v108 + 4;
          v44 = v107;
          v41 = v108 - 1;
          if ( v109 >= v108 + 4 )
          {
LABEL_50:
            v108 = v43;
            *(_BYTE *)(v44 + v42) = 0;
            *(_DWORD *)(v107 + v41) = 791612417;
            v45 = *(_DWORD *)(a2 + 32)
                + sub_25F9E0(
                    0,
                    0,
                    0,
                    (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a2,
                    &v107,
                    v89,
                    0.0,
                    v89 + 3,
                    v93);
            goto LABEL_51;
          }
        }
        else
        {
          v44 = v107;
          v43 = 5;
          v42 = 4;
          if ( v109 >= 5 )
            goto LABEL_50;
        }
        v83 = v43;
        v107 = qvector_reserve((__int64)&v107, v44, v43, 1);
        v43 = v83;
        v44 = v107;
        goto LABEL_50;
      }
LABEL_63:
      (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v34);
      v45 = *(_DWORD *)(a2 + 32) + 1;
LABEL_51:
      *(_DWORD *)(a2 + 32) = v45;
      if ( v16 >= (unsigned __int64)v106 )
      {
        if ( v107 )
        {
          v108 = 0;
          qfree(v107);
        }
        break;
      }
      ++v16;
    }
  }
  v58 = 1;
LABEL_78:
  clear_tinfo_t();
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree((__int64)v105);
  }
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree((__int64)v103);
  }
  if ( !v58 )
    goto LABEL_69;
LABEL_72:
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree((__int64)v101);
  }
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree((__int64)v99);
  }
  return v114 - __readfsqword(0x28u);
}

