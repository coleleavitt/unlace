unsigned __int64 __fastcall sub_25F440(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // r9d
  __int64 i; // r13
  const char *v7; // rcx
  __int64 v8; // r13
  int v9; // edx
  _QWORD *v10; // rdi
  int v11; // r14d
  const char *v12; // r12
  unsigned __int64 v13; // rax
  size_t v14; // rax
  size_t v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rsi
  size_t v22; // rax
  unsigned __int64 v23; // r8
  size_t v24; // r9
  size_t v25; // r10
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  size_t v31; // r15
  const void *v32; // r8
  size_t v33; // r9
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  const char *v36; // rcx
  int v37; // eax
  size_t v38; // r15
  unsigned __int64 v39; // r9
  __int64 v40; // r8
  unsigned __int64 v41; // r14
  __int64 v42; // rsi
  unsigned __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rsi
  int v47; // eax
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rax
  size_t v51; // rax
  unsigned __int64 v52; // r14
  size_t v53; // r15
  size_t v54; // r8
  __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  int v57; // r15d
  const char *v58; // rcx
  char v60; // r14
  void *v61; // rdi
  size_t v62; // r13
  __int64 v63; // r8
  __int64 v64; // rsi
  __int64 v65; // r8
  __int64 v66; // rsi
  unsigned int v67; // ecx
  __int64 v68; // rsi
  unsigned __int64 v69; // r15
  char *v70; // rdi
  char *v71; // rax
  char *v72; // rdx
  char v73; // cl
  size_t v74; // [rsp+8h] [rbp-178h]
  size_t v75; // [rsp+10h] [rbp-170h]
  size_t v76; // [rsp+18h] [rbp-168h]
  unsigned __int64 v77; // [rsp+18h] [rbp-168h]
  __int64 v78; // [rsp+18h] [rbp-168h]
  const void *v79; // [rsp+20h] [rbp-160h]
  unsigned __int64 v80; // [rsp+20h] [rbp-160h]
  size_t v81; // [rsp+20h] [rbp-160h]
  unsigned __int64 v82; // [rsp+20h] [rbp-160h]
  __int64 v83; // [rsp+20h] [rbp-160h]
  unsigned int v84; // [rsp+30h] [rbp-150h]
  __int64 v85; // [rsp+30h] [rbp-150h]
  unsigned __int64 v86; // [rsp+30h] [rbp-150h]
  unsigned __int64 v87; // [rsp+30h] [rbp-150h]
  __int64 v88; // [rsp+30h] [rbp-150h]
  unsigned __int64 v89; // [rsp+30h] [rbp-150h]
  unsigned __int64 v90; // [rsp+38h] [rbp-148h]
  unsigned int v91; // [rsp+44h] [rbp-13Ch]
  __int64 v92; // [rsp+48h] [rbp-138h]
  char *v93; // [rsp+50h] [rbp-130h]
  char *v94; // [rsp+50h] [rbp-130h]
  char *v95; // [rsp+50h] [rbp-130h]
  signed int v96; // [rsp+50h] [rbp-130h]
  char *v97; // [rsp+50h] [rbp-130h]
  __int64 v98; // [rsp+58h] [rbp-128h]
  unsigned int v99; // [rsp+58h] [rbp-128h]
  char v100[8]; // [rsp+68h] [rbp-118h] BYREF
  const char *v101; // [rsp+70h] [rbp-110h] BYREF
  __int128 v102; // [rsp+78h] [rbp-108h]
  const char *v103; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v104; // [rsp+98h] [rbp-E8h]
  __int64 v105; // [rsp+B0h] [rbp-D0h]
  __int128 v106; // [rsp+B8h] [rbp-C8h]
  unsigned int *v107; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v108; // [rsp+D8h] [rbp-A8h]
  __int64 v109; // [rsp+F0h] [rbp-90h] BYREF
  unsigned __int64 v110; // [rsp+F8h] [rbp-88h]
  unsigned __int64 v111; // [rsp+100h] [rbp-80h]
  char *v112; // [rsp+110h] [rbp-70h]
  __int128 v113; // [rsp+118h] [rbp-68h]
  char s[19]; // [rsp+130h] [rbp-50h] BYREF
  char v115; // [rsp+143h] [rbp-3Dh] BYREF
  unsigned __int64 v116; // [rsp+148h] [rbp-38h]

  v116 = __readfsqword(0x28u);
  v102 = 0;
  v101 = nullptr;
  *(_DWORD *)(a2 + 32) = 0;
  if ( sub_25C670(a1, (__int64)&v101, nullptr) > 0 )
    *(_DWORD *)(a2 + 32) = sub_25ACF0((void (***)(_QWORD, _QWORD, const char *, ...))a2, 0, nullptr, v101);
  sub_25C6E0(a1, a2);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    *(_BYTE *)(a1 + 208) = 1;
    sub_339220(*(_QWORD *)(a1 + 216), 22, a1 + 184, a1, v4, v5);
  }
  v98 = *(_QWORD *)(a1 + 184);
  for ( i = v98 + 24LL * *(_QWORD *)(a1 + 192); i != v98; v98 += 24 )
  {
    v7 = s1;
    if ( *(_QWORD *)(v98 + 8) )
      v7 = *(const char **)v98;
    (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "// %s\n", v7);
  }
  if ( **(char **)(a1 + 8) < 0 )
  {
    (**(void (__fastcall ***)(__int64, _QWORD, void *))a2)(a2, 0, &unk_3FD107);
    ++*(_DWORD *)(a2 + 32);
  }
  v103 = nullptr;
  v104 = 0;
  sub_25EF90(a1, (__int64 *)&v103);
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
    v58 = s1;
    if ( (_QWORD)v104 )
      v58 = v103;
    (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v58);
    ++*(_DWORD *)(a2 + 32);
    goto LABEL_72;
  }
  while ( 1 )
  {
    v57 = v9;
    if ( *(_QWORD *)(sub_139080(v10, v9) + 64) > 1u )
      break;
    v9 = v57 + 1;
    if ( v57 + 1 == v11 )
      goto LABEL_13;
    v10 = *(_QWORD **)(a1 + 8);
  }
LABEL_15:
  v92 = *(_QWORD *)(a1 + 8);
  v12 = (const char *)tag_skipcode();
  v13 = (unsigned __int64)&v12[strlen(v12)];
  if ( (unsigned __int64)(v12 + 2) < v13 && *(_BYTE *)(v13 - 2) == 1 )
    v13 -= 2LL;
  v14 = v13 - (_QWORD)v12;
  v105 = 0;
  v106 = 0;
  v15 = v14;
  if ( v14 )
  {
    v61 = nullptr;
    v62 = v14 + 1;
    if ( v14 != -1 )
    {
      v105 = qvector_reserve();
      v61 = (void *)v105;
    }
    *(_QWORD *)&v106 = v62;
    memmove(v61, v12, v15);
    *(_BYTE *)(v105 + v15) = 0;
  }
  v107 = nullptr;
  v108 = 0;
  sub_368820(v100, v92, 0);
  sub_385340(&v107, v105, v100);
  if ( !(_QWORD)v108 )
  {
    v60 = 0;
    goto LABEL_78;
  }
  v99 = 23;
  if ( *(_BYTE *)(v92 + 320) )
    v99 = 33;
  (**(void (__fastcall ***)(__int64, _QWORD, void *, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a2)(
    a2,
    0,
    &unk_3FD121,
    v99,
    *v107,
    *v107,
    v105,
    v99);
  v17 = v92;
  v18 = 1;
  ++*(_DWORD *)(a2 + 32);
  v19 = *(_QWORD *)(v92 + 1496);
  v109 = 0;
  v111 = 0;
  v91 = *(_DWORD *)(v19 + 596);
  v90 = *(int *)(v92 + 464);
  if ( (_QWORD)v108 )
  {
    while ( 1 )
    {
      v110 = 0;
      sub_325AD0(&v109, v99, v16, v17);
      v96 = v107[v18 - 1];
      if ( v18 - 1 >= v90 )
      {
        v48 = v110;
        if ( v110 )
        {
          v49 = v110 + 8;
          v50 = v110 - 1;
          if ( v110 >= v110 + 8 )
            goto LABEL_56;
          v63 = v110 + 7;
          v48 = v110 - 1;
        }
        else
        {
          v49 = 9;
          v63 = 8;
        }
        v64 = v109;
        if ( v111 < v49 )
        {
          v88 = v63;
          v109 = qvector_reserve();
          v63 = v88;
          v64 = v109;
        }
        v110 = v49;
        v50 = v48;
        *(_BYTE *)(v64 + v63) = 0;
LABEL_56:
        *(_QWORD *)(v109 + v50) = 0x2020202020202020LL;
        v97 = (char *)(v105 + v96);
        if ( v97 )
        {
          v51 = strlen(v97);
          v52 = v110;
          v53 = v51;
          v54 = v51;
          if ( v110 )
          {
            v52 = v110 - 1;
            v54 = v51 + v110 - 1;
          }
          v55 = v109;
          v56 = v54 + 1;
          if ( v111 < v54 + 1 )
          {
            v81 = v54;
            v87 = v54 + 1;
            v109 = qvector_reserve();
            v54 = v81;
            v55 = v109;
            v56 = v87;
          }
          v110 = v56;
          *(_BYTE *)(v55 + v54) = 0;
          memmove((void *)(v52 + v109), v97, v53);
          sub_325BB0(&v109, v99);
        }
        else
        {
LABEL_87:
          sub_325BB0(&v109, v99);
        }
        v36 = (const char *)v109;
        goto LABEL_63;
      }
      if ( v18 >= (unsigned __int64)v108 )
      {
        v67 = v106 - 1;
        if ( !(_QWORD)v106 )
          v67 = 0;
        v84 = v67;
      }
      else
      {
        v84 = v107[v18];
      }
      v20 = sub_139080((_QWORD *)v92, (int)v18 - 1);
      v21 = 0x4EC4EC4EC4EC4EC5LL * ((v20 - *(_QWORD *)(v92 + 432)) >> 3);
      if ( (int)v21 >= 0 && (unsigned __int64)(int)v21 < *(_QWORD *)(v92 + 440) )
      {
        v112 = nullptr;
        v113 = 0;
        tag_addr();
        v70 = v112;
        v71 = s;
        v72 = v112;
        while ( 1 )
        {
          v73 = *v72++;
          *v71 = v73;
          if ( !v73 )
            break;
          if ( ++v71 == &v115 )
          {
            v115 = 0;
            break;
          }
        }
        if ( v70 )
        {
          *(_QWORD *)&v113 = 0;
          qfree();
        }
      }
      v22 = strlen(s);
      v23 = v110;
      v24 = v22;
      v25 = v22;
      if ( v110 )
      {
        v23 = v110 - 1;
        v25 = v22 + v110 - 1;
      }
      v26 = v109;
      v27 = v25 + 1;
      if ( v111 < v25 + 1 )
      {
        v74 = v22;
        v75 = v25;
        v77 = v23;
        v80 = v25 + 1;
        v109 = qvector_reserve();
        v24 = v74;
        v26 = v109;
        v25 = v75;
        v23 = v77;
        v27 = v80;
      }
      v110 = v27;
      *(_BYTE *)(v26 + v25) = 0;
      memmove((void *)(v23 + v109), s, v24);
      v28 = v110;
      if ( v110 )
      {
        v29 = v110 + 8;
        v30 = v110 - 1;
        if ( v110 >= v110 + 8 )
          goto LABEL_34;
        v65 = v110 + 7;
        v28 = v110 - 1;
      }
      else
      {
        v29 = 9;
        v65 = 8;
      }
      v66 = v109;
      if ( v111 < v29 )
      {
        v78 = v65;
        v82 = v29;
        v109 = qvector_reserve();
        v65 = v78;
        v66 = v109;
        v29 = v82;
      }
      v110 = v29;
      v30 = v28;
      *(_BYTE *)(v66 + v65) = 0;
LABEL_34:
      *(_QWORD *)(v109 + v30) = 0x2020202020202020LL;
      v31 = (int)(v84 - v96);
      v32 = (const void *)(v105 + v96);
      v93 = (char *)v110;
      v33 = v31;
      if ( v110 )
      {
        v93 = (char *)(v110 - 1);
        v33 = v31 + v110 - 1;
      }
      v34 = v109;
      v35 = v33 + 1;
      if ( v111 < v33 + 1 )
      {
        v76 = v33;
        v79 = v32;
        v86 = v33 + 1;
        v109 = qvector_reserve();
        v33 = v76;
        v34 = v109;
        v32 = v79;
        v35 = v86;
      }
      v110 = v35;
      *(_BYTE *)(v34 + v33) = 0;
      memmove(&v93[v109], v32, v31);
      v94 = (char *)v110;
      if ( v110 > 1 )
      {
        v68 = v109;
        if ( *(_BYTE *)(v109 + v110 - 2) == 32 )
        {
          v69 = v110 - 1;
          if ( (__int64)(v110 - 1) <= 1 )
          {
            if ( v109 )
            {
              v110 = 0;
              qfree();
              v109 = 0;
              v111 = 0;
            }
          }
          else
          {
            if ( v111 < v69 )
            {
              v109 = qvector_reserve();
              v68 = v109;
            }
            v110 = v69;
            v94[v68 - 2] = 0;
          }
        }
      }
      if ( *(_QWORD *)(v20 + 64) <= 1u )
        goto LABEL_87;
      v95 = *(char **)(v20 + 56);
      sub_325BB0(&v109, v99);
      v36 = (const char *)v109;
      if ( v95 )
      {
        v37 = v91 - tag_strlen();
        if ( v37 > 0 )
        {
          v38 = v37;
          if ( !v110 )
          {
            v39 = v37 + 1LL;
            v40 = v37;
            v41 = 0;
            goto LABEL_44;
          }
          v41 = v110 - 1;
          v40 = v37 + v110 - 1;
          v39 = v37 + v110;
          if ( v110 < v39 )
          {
LABEL_44:
            v42 = v109;
            if ( v111 < v39 )
            {
              v83 = v40;
              v89 = v39;
              v109 = qvector_reserve();
              v40 = v83;
              v42 = v109;
              v39 = v89;
            }
            v110 = v39;
            *(_BYTE *)(v42 + v40) = 0;
          }
          memset((void *)(v41 + v109), 32, v38);
        }
        v43 = v110;
        if ( v110 )
        {
          v44 = v110 + 3;
          v45 = v110 + 4;
          v46 = v109;
          v43 = v110 - 1;
          if ( v111 >= v110 + 4 )
          {
LABEL_50:
            v110 = v45;
            *(_BYTE *)(v46 + v44) = 0;
            *(_DWORD *)(v109 + v43) = 791612417;
            v47 = *(_DWORD *)(a2 + 32)
                + sub_25B160(
                    0,
                    0,
                    0,
                    (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a2,
                    &v109,
                    v91,
                    v91 + 3,
                    v95);
            goto LABEL_51;
          }
        }
        else
        {
          v46 = v109;
          v45 = 5;
          v44 = 4;
          if ( v111 >= 5 )
            goto LABEL_50;
        }
        v85 = v45;
        v109 = qvector_reserve();
        v45 = v85;
        v46 = v109;
        goto LABEL_50;
      }
LABEL_63:
      (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v36);
      v47 = *(_DWORD *)(a2 + 32) + 1;
LABEL_51:
      *(_DWORD *)(a2 + 32) = v47;
      if ( v18 >= (unsigned __int64)v108 )
      {
        if ( v109 )
        {
          v110 = 0;
          qfree();
        }
        break;
      }
      ++v18;
    }
  }
  v60 = 1;
LABEL_78:
  clear_tinfo_t();
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    qfree();
  }
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree();
  }
  if ( !v60 )
    goto LABEL_69;
LABEL_72:
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree();
  }
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree();
  }
  return v116 - __readfsqword(0x28u);
}

