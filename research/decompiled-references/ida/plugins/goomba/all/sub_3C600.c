unsigned __int64 __fastcall sub_3C600(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  void (__fastcall *hexdsp)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rax
  unsigned int v6; // r12d
  void (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rax
  unsigned int v8; // r12d
  void (__fastcall *v9)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // r12
  void (__fastcall *v12)(__int64, __int64, __int64); // rax
  _DWORD *v13; // rsi
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64); // rax
  _DWORD *v20; // rsi
  __int64 v21; // rbx
  void (__fastcall *v22)(__int64, __int64); // rax
  const char *v23; // rsi
  const char *v24; // rdi
  int *v25; // r14
  int v26; // eax
  int *v27; // rbx
  __int64 v28; // rsi
  _DWORD *v29; // rax
  __int64 v30; // rsi
  const char *v31; // r12
  void (__fastcall *v32)(__int64, const char **); // rax
  void (__fastcall *v33)(__int64, int *, const char *); // rax
  void (__fastcall *v34)(__int64, const char *); // rax
  void (__fastcall *v35)(__int64, const char *); // rax
  void (__fastcall *v36)(__int64, const char *); // rax
  void (__fastcall *v37)(__int64, const char *); // rax
  __int64 v38; // rbx
  void (__fastcall *v39)(__int64, __int64); // rax
  const char *v40; // rsi
  __int64 v41; // rbx
  void (__fastcall *v42)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v43; // rsi
  __int64 v44; // rbx
  void *v46; // rdi
  __int64 v47; // r12
  void (__fastcall *v48)(__int64, unsigned __int64 *, __int64); // rax
  int v49; // edx
  void *v50; // rdi
  void (__fastcall *v51)(__int64, unsigned __int64 *); // rax
  int *v52; // r12
  int *i; // r13
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r15
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // r12
  __int64 v63; // r13
  int v64; // eax
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // r13
  __m128 v72; // xmm0
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // rbx
  __int64 v79; // r12
  __int64 v80; // r12
  __int64 v81; // r12
  unsigned __int8 (__fastcall *v82)(__int64, __int64, __int64, _QWORD); // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  __m128 v88; // xmm0
  __int64 v89; // rcx
  __int64 v90; // rcx
  unsigned __int8 (__fastcall *v91)(__int64, __int64, __int64, _QWORD); // rax
  int *v92; // r12
  int *j; // r13
  const char *v94; // rsi
  _DWORD *v95; // rax
  _DWORD *v96; // rbx
  void (__fastcall *v97)(__int64, unsigned __int64 *, _DWORD *); // rax
  __int64 v98; // r12
  __int64 v99; // r12
  __int64 v100; // r14
  __int64 v101; // r14
  __int64 v102; // r14
  __int64 v103; // r12
  __int64 v104; // r14
  __int64 v105; // r15
  unsigned __int64 v106; // [rsp+38h] [rbp-E8h]
  __int64 v107; // [rsp+40h] [rbp-E0h]
  __int64 v108; // [rsp+48h] [rbp-D8h]
  __int64 v109; // [rsp+50h] [rbp-D0h]
  unsigned __int64 v111; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v112; // [rsp+68h] [rbp-B8h]
  int v113[6]; // [rsp+70h] [rbp-B0h] BYREF
  void *v114; // [rsp+88h] [rbp-98h]
  const char *v115; // [rsp+B0h] [rbp-70h] BYREF
  _DWORD *v116; // [rsp+B8h] [rbp-68h]
  void *v117; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v118; // [rsp+E8h] [rbp-38h]

  v118 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_4DB80;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 64) = -1;
  *(_BYTE *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v4 = *(_DWORD *)(a3 + 36);
  hexdsp = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))get_hexdsp(a1, a2);
  hexdsp(284, a1 + 8, 1, v4, -1, 0);
  v6 = *(_DWORD *)(a3 + 36);
  v7 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))get_hexdsp(284, a1 + 8);
  v7(284, a1 + 24, 2, v6, -1, 0);
  v8 = *(_DWORD *)(a3 + 36);
  v9 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))get_hexdsp(284, a1 + 24);
  v9(284, a1 + 40, -1, v8, -1, 0);
  v10 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(284, a1 + 40);
  v11 = v10(129, 80);
  *(_OWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 72) = 0;
  v12 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v12(334, v11, a3);
  *(_QWORD *)(a1 + 56) = v11;
  sub_35C90((__int64)"pre-processing ... \n");
  v13 = *(_DWORD **)(a1 + 56);
  sub_36650((__int128 *)a1, v13, nullptr);
  v14 = *(_QWORD *)(a1 + 56);
  v15 = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, v13);
  v15(338, v14);
  sub_35C90((__int64)"%a: %s\n", 0.0, *(const char **)(*(_QWORD *)(a1 + 56) + 24LL));
  sub_35C90((__int64)"normalizing ... \n");
  v16 = *(_QWORD *)(a1 + 56);
  v17 = v16;
  sub_36BD0(a1, (int *)v16);
  if ( *(_BYTE *)(v16 + 32) == 4 )
  {
    v79 = *(_QWORD *)(v16 + 40);
    v17 = v79;
    sub_36BD0(a1, (int *)v79);
    if ( *(_BYTE *)(v79 + 32) == 4 )
    {
      v100 = *(_QWORD *)(v79 + 40);
      v17 = v100;
      sub_36BD0(a1, (int *)v100);
      if ( *(_BYTE *)(v100 + 32) == 4 )
      {
        v105 = *(_QWORD *)(v100 + 40);
        v17 = v105;
        sub_36BD0(a1, (int *)v105);
        if ( *(_BYTE *)(v105 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v105 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v105 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v105 + 56);
          sub_37220(a1, v17);
        }
      }
      if ( *(_BYTE *)(v100 + 48) == 4 )
      {
        v101 = *(_QWORD *)(v100 + 56);
        v17 = v101;
        sub_36BD0(a1, (int *)v101);
        if ( *(_BYTE *)(v101 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v101 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v101 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v101 + 56);
          sub_37220(a1, v17);
        }
      }
    }
    if ( *(_BYTE *)(v79 + 48) == 4 )
    {
      v80 = *(_QWORD *)(v79 + 56);
      v17 = v80;
      sub_36BD0(a1, (int *)v80);
      if ( *(_BYTE *)(v80 + 32) == 4 )
      {
        v104 = *(_QWORD *)(v80 + 40);
        v17 = v104;
        sub_36BD0(a1, (int *)v104);
        if ( *(_BYTE *)(v104 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v104 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v104 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v104 + 56);
          sub_37220(a1, v17);
        }
      }
      if ( *(_BYTE *)(v80 + 48) == 4 )
      {
        v81 = *(_QWORD *)(v80 + 56);
        v17 = v81;
        sub_36BD0(a1, (int *)v81);
        if ( *(_BYTE *)(v81 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v81 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v81 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v81 + 56);
          sub_37220(a1, v17);
        }
      }
    }
  }
  if ( *(_BYTE *)(v16 + 48) == 4 )
  {
    v76 = *(_QWORD *)(v16 + 56);
    v17 = v76;
    sub_36BD0(a1, (int *)v76);
    if ( *(_BYTE *)(v76 + 32) == 4 )
    {
      v98 = *(_QWORD *)(v76 + 40);
      v17 = v98;
      sub_36BD0(a1, (int *)v98);
      if ( *(_BYTE *)(v98 + 32) == 4 )
      {
        v102 = *(_QWORD *)(v98 + 40);
        v17 = v102;
        sub_36BD0(a1, (int *)v102);
        if ( *(_BYTE *)(v102 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v102 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v102 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v102 + 56);
          sub_37220(a1, v17);
        }
      }
      if ( *(_BYTE *)(v98 + 48) == 4 )
      {
        v99 = *(_QWORD *)(v98 + 56);
        v17 = v99;
        sub_36BD0(a1, (int *)v99);
        if ( *(_BYTE *)(v99 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v99 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v99 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v99 + 56);
          sub_37220(a1, v17);
        }
      }
    }
    if ( *(_BYTE *)(v76 + 48) == 4 )
    {
      v77 = *(_QWORD *)(v76 + 56);
      v17 = v77;
      sub_36BD0(a1, (int *)v77);
      if ( *(_BYTE *)(v77 + 32) == 4 )
      {
        v103 = *(_QWORD *)(v77 + 40);
        v17 = v103;
        sub_36BD0(a1, (int *)v103);
        if ( *(_BYTE *)(v103 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v103 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v103 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v103 + 56);
          sub_37220(a1, v17);
        }
      }
      if ( *(_BYTE *)(v77 + 48) == 4 )
      {
        v78 = *(_QWORD *)(v77 + 56);
        v17 = v78;
        sub_36BD0(a1, (int *)v78);
        if ( *(_BYTE *)(v78 + 32) == 4 )
        {
          v17 = *(_QWORD *)(v78 + 40);
          sub_37220(a1, v17);
        }
        if ( *(_BYTE *)(v78 + 48) == 4 )
        {
          v17 = *(_QWORD *)(v78 + 56);
          sub_37220(a1, v17);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 72) = 1;
  v18 = *(_QWORD *)(a1 + 56);
  v19 = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, v17);
  v19(338, v18);
  sub_35C90((__int64)"%a: %s\n", 0.0, *(const char **)(*(_QWORD *)(a1 + 56) + 24LL));
  sub_35C90((__int64)"multiplication distribution ... \n");
  v20 = *(_DWORD **)(a1 + 56);
  sub_369D0(a1, v20);
  *(_BYTE *)(a1 + 72) = 1;
  v21 = *(_QWORD *)(a1 + 56);
  v22 = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, v20);
  v22(338, v21);
  v23 = *(const char **)(*(_QWORD *)(a1 + 56) + 24LL);
  sub_35C90((__int64)"%a: %s\n", 0.0, v23);
  v24 = "remove parenthesis ... \n";
  sub_35C90((__int64)"remove parenthesis ... \n");
  v25 = *(int **)(a1 + 56);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)(*v25 - 12) > 1 || *((_BYTE *)v25 + 48) != 4 )
      break;
LABEL_9:
    v27 = *((int **)v25 + 7);
    if ( (unsigned int)(*v27 - 12) > 1 )
      break;
    v28 = 12;
    if ( v26 == 13 )
    {
      if ( *v27 != 12 )
        v26 = 12;
      *v27 = v26;
      v28 = (unsigned int)*v25;
    }
    v29 = sub_36550(a1, v28, (__int64)(v25 + 8), (__int64)(v27 + 8));
    v30 = (unsigned int)*v27;
    LODWORD(v115) = 4;
    v116 = v29;
    HIDWORD(v115) = v29[17];
    v31 = (const char *)sub_36550(a1, v30, (__int64)&v115, (__int64)(v27 + 12));
    v32 = (void (__fastcall *)(__int64, const char **))get_hexdsp(a1, v30);
    v32(276, &v115);
    v33 = (void (__fastcall *)(__int64, int *, const char *))get_hexdsp(276, &v115);
    v23 = (const char *)v25;
    v24 = (const char *)&qword_150;
    v33(336, v25, v31);
    if ( v31 )
    {
      v34 = (void (__fastcall *)(__int64, const char *))get_hexdsp(336, v25);
      v34(276, v31 + 64);
      v35 = (void (__fastcall *)(__int64, const char *))get_hexdsp(276, v31 + 64);
      v35(276, v31 + 48);
      v36 = (void (__fastcall *)(__int64, const char *))get_hexdsp(276, v31 + 48);
      v36(276, v31 + 32);
      v37 = (void (__fastcall *)(__int64, const char *))get_hexdsp(276, v31 + 32);
      v23 = v31;
      v24 = (_BYTE *)(&qword_80 + 2);
      v37(130, v31);
    }
  }
  while ( *((_BYTE *)v25 + 32) == 4 )
  {
    v25 = *((int **)v25 + 5);
    v26 = *v25;
    if ( (unsigned int)(*v25 - 12) <= 1 && *((_BYTE *)v25 + 48) == 4 )
      goto LABEL_9;
  }
  v38 = *(_QWORD *)(a1 + 56);
  v39 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v24, v23);
  v39(338, v38);
  v40 = *(const char **)(*(_QWORD *)(a1 + 56) + 24LL);
  sub_35C90((__int64)"%a: %s\n", 0.0, v40);
  v41 = *(_QWORD *)(a1 + 56);
  v42 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))get_hexdsp("%a: %s\n", v40);
  v43 = v41;
  v42(340, v41, 0, 0, 0, 0, 0);
  v44 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v44 + 32) == 4 )
  {
    while ( (unsigned int)(**(_DWORD **)(v44 + 40) - 12) <= 1 )
    {
      if ( (unsigned int)(*(_DWORD *)v44 - 12) > 1 || !(unsigned __int8)sub_37550(v44 + 48, v43) )
        goto LABEL_18;
      v44 = *(_QWORD *)(v44 + 40);
      if ( *(_BYTE *)(v44 + 32) != 4 )
        goto LABEL_17;
    }
    if ( (unsigned int)(*(_DWORD *)v44 - 12) > 1 )
    {
LABEL_18:
      sub_35C90((__int64)"The mba expr is not normal form!\n");
      *(_BYTE *)(a1 + 72) = 0;
      return v118 - __readfsqword(0x28u);
    }
  }
  else
  {
LABEL_17:
    if ( (unsigned int)(*(_DWORD *)v44 - 12) > 1 )
      goto LABEL_18;
  }
  if ( !(unsigned __int8)sub_37550(v44 + 48, v43) )
    goto LABEL_18;
  v46 = (void *)(v44 + 32);
  if ( !(unsigned __int8)sub_37550(v44 + 32, v43) )
    goto LABEL_18;
  v47 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v47 + 32) == 4 )
  {
    while ( 1 )
    {
      v95 = *(_DWORD **)(v47 + 40);
      if ( (unsigned int)(*v95 - 12) > 1 )
        break;
      if ( *(_DWORD *)v47 == 12 )
      {
        sub_3C370((__int64)&v115, v47 + 48, 1);
        v43 = (__int64)&v115;
        sub_39E70((__int64 *)(a1 + 80), (int *)&v115);
      }
      else
      {
        if ( *(_DWORD *)v47 != 13 )
        {
          sub_35C90((__int64)"build_normal_mba error: unrecognized term.");
          goto LABEL_32;
        }
        sub_3C370((__int64)&v115, v47 + 48, -1);
        v43 = (__int64)&v115;
        sub_39E70((__int64 *)(a1 + 80), (int *)&v115);
      }
      v46 = v117;
      sub_32A60(v117, (__int64)&v115);
      v47 = *(_QWORD *)(v47 + 40);
      if ( *(_BYTE *)(v47 + 32) != 4 )
      {
        if ( (unsigned int)(*(_DWORD *)v47 - 12) <= 1 )
          goto LABEL_29;
        goto LABEL_108;
      }
    }
    if ( (unsigned int)(*(_DWORD *)v47 - 12) > 1 )
      goto LABEL_108;
    v112 = 0;
    v111 = 0xFFFFFFFF00000000LL;
    if ( *v95 == 5 )
    {
      v96 = v95 + 8;
      v97 = (void (__fastcall *)(__int64, unsigned __int64 *, _DWORD *))get_hexdsp(v46, v43);
      v97(274, &v111, v96);
      v49 = -1;
      goto LABEL_31;
    }
LABEL_30:
    v48 = (void (__fastcall *)(__int64, unsigned __int64 *, __int64))get_hexdsp(v46, v43);
    v48(274, &v111, v47 + 32);
    v49 = 1;
LABEL_31:
    sub_3C370((__int64)v113, (__int64)&v111, v49);
    sub_39E70((__int64 *)(a1 + 80), v113);
    sub_3C370((__int64)&v115, v47 + 48, 2 * (*(_DWORD *)v47 == 12) - 1);
    sub_39E70((__int64 *)(a1 + 80), (int *)&v115);
    sub_32A60(v117, (__int64)&v115);
    v50 = v114;
    sub_32A60(v114, (__int64)&v115);
    v51 = (void (__fastcall *)(__int64, unsigned __int64 *))get_hexdsp(v50, &v115);
    v43 = (__int64)&v111;
    v51(276, &v111);
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)v47 - 12) <= 1 )
    {
LABEL_29:
      v112 = 0;
      v111 = 0xFFFFFFFF00000000LL;
      goto LABEL_30;
    }
LABEL_108:
    sub_35C90((__int64)"build_normal_mba error: unrecognized leftmost term.");
  }
LABEL_32:
  sub_35C90((__int64)"Normalized MBA: ");
  v52 = *(int **)(a1 + 80);
  for ( i = &v52[14 * *(_QWORD *)(a1 + 88)]; i != v52; v52 += 14 )
  {
    sub_3A2D0((__int64)&v115, v52);
    v43 = (__int64)src;
    if ( v116 )
      v43 = (__int64)v115;
    sub_35C90((__int64)"%s, ", (const char *)v43);
    if ( v115 )
    {
      v116 = nullptr;
      qfree(v115);
    }
  }
  sub_35C90((__int64)"\n");
  v109 = 0;
  v106 = 0;
  v54 = *(_QWORD *)(a1 + 88);
  if ( !v54 )
    goto LABEL_94;
  while ( 2 )
  {
    if ( ++v106 >= v54 )
    {
LABEL_50:
      v65 = 0;
      do
      {
        v67 = *(_QWORD *)(a1 + 80) + 56 * v65;
        if ( *(_DWORD *)v67 )
        {
          v66 = *(_QWORD *)(a1 + 88);
          ++v65;
        }
        else
        {
          sub_32A60(*(_QWORD **)(v67 + 24), v43);
          v68 = *(_QWORD *)(a1 + 88);
          v69 = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD *)(a1 + 80) + 56 * v68 - v67) >> 3) - 2;
          if ( v69 >= 0 )
          {
            v70 = v67 + 16;
            do
            {
              *(_DWORD *)(v70 - 16) = *(_DWORD *)(v70 + 40);
              v75 = *(_QWORD *)(v70 + 64);
              if ( v75 )
              {
                v71 = v70 + 56;
                v72 = _mm_loadh_ps((const double *)(v70 + 72));
                *(_DWORD *)v70 = *(_DWORD *)(v70 + 56);
                v73 = *(_QWORD *)(v70 + 80);
                *(__m128 *)(v70 + 8) = v72;
                *(_QWORD *)(v70 + 24) = v73;
                *(_QWORD *)(v75 + 8) = v70;
                v74 = *(_QWORD *)(v70 + 88);
                *(_QWORD *)(v70 + 64) = 0;
                *(_QWORD *)(v70 + 32) = v74;
                *(_QWORD *)(v70 + 72) = v70 + 56;
                *(_QWORD *)(v70 + 80) = v70 + 56;
                *(_QWORD *)(v70 + 88) = 0;
              }
              else
              {
                *(_DWORD *)v70 = 0;
                v71 = v70 + 56;
                *(_QWORD *)(v70 + 8) = 0;
                *(_QWORD *)(v70 + 16) = v70;
                *(_QWORD *)(v70 + 24) = v70;
                *(_QWORD *)(v70 + 32) = 0;
              }
              --v69;
              sub_32A60(nullptr, v43);
              v70 = v71;
            }
            while ( v69 != -1 );
            v68 = *(_QWORD *)(a1 + 88);
          }
          v66 = v68 - 1;
          *(_QWORD *)(a1 + 88) = v66;
        }
      }
      while ( v65 < v66 );
      goto LABEL_94;
    }
    v55 = v106;
    while ( 2 )
    {
      while ( 2 )
      {
        v56 = a1;
        v57 = *(_QWORD *)(a1 + 80);
        v58 = 56 * v55;
        v59 = v57 + 56 * v55;
        v60 = v109 + v57;
        v43 = *(_QWORD *)(v59 + 48);
        if ( *(_QWORD *)(v60 + 48) != v43 )
        {
          v54 = *(_QWORD *)(a1 + 88);
          ++v55;
          goto LABEL_42;
        }
        v61 = *(_QWORD *)(v60 + 32);
        v62 = v60 + 16;
        v63 = *(_QWORD *)(v59 + 32);
        if ( v60 + 16 == v61 )
        {
LABEL_85:
          *(_DWORD *)v60 += *(_DWORD *)v59;
          v84 = *(_QWORD *)(a1 + 80) + v58;
          sub_32A60(*(_QWORD **)(v84 + 24), v43);
          v85 = *(_QWORD *)(a1 + 88);
          v43 = 0x6DB6DB6DB6DB6DB7LL;
          v86 = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD *)(a1 + 80) + 56 * v85 - v84) >> 3) - 2;
          if ( v86 >= 0 )
          {
            v87 = v84 + 16;
            do
            {
              while ( 1 )
              {
                *(_DWORD *)(v87 - 16) = *(_DWORD *)(v87 + 40);
                v90 = *(_QWORD *)(v87 + 64);
                if ( !v90 )
                  break;
                --v86;
                v88 = _mm_loadh_ps((const double *)(v87 + 72));
                *(_DWORD *)v87 = *(_DWORD *)(v87 + 56);
                v43 = *(_QWORD *)(v87 + 80);
                *(__m128 *)(v87 + 8) = v88;
                *(_QWORD *)(v87 + 24) = v43;
                *(_QWORD *)(v90 + 8) = v87;
                v89 = *(_QWORD *)(v87 + 88);
                *(_QWORD *)(v87 + 64) = 0;
                *(_QWORD *)(v87 + 32) = v89;
                *(_QWORD *)(v87 + 72) = v87 + 56;
                *(_QWORD *)(v87 + 80) = v87 + 56;
                *(_QWORD *)(v87 + 88) = 0;
                v87 += 56;
                if ( v86 == -1 )
                  goto LABEL_90;
              }
              --v86;
              *(_QWORD *)(v87 + 16) = v87;
              *(_DWORD *)v87 = 0;
              *(_QWORD *)(v87 + 8) = 0;
              *(_QWORD *)(v87 + 24) = v87;
              *(_QWORD *)(v87 + 32) = 0;
              v87 += 56;
            }
            while ( v86 != -1 );
LABEL_90:
            v85 = *(_QWORD *)(a1 + 88);
          }
          v54 = v85 - 1;
          *(_QWORD *)(a1 + 88) = v54;
LABEL_42:
          if ( v55 >= v54 )
            goto LABEL_48;
          continue;
        }
        break;
      }
      while ( 1 )
      {
        v64 = *(_DWORD *)(v61 + 32);
        if ( v64 )
          break;
        if ( *(_DWORD *)(v63 + 32) )
          goto LABEL_47;
        v91 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64, _QWORD))get_hexdsp(v56, v61 + 88);
        v43 = v61 + 88;
        if ( !v91(295, v61 + 88, v63 + 88, 0) )
          goto LABEL_47;
LABEL_82:
        if ( *(_DWORD *)(v61 + 104) != *(_DWORD *)(v63 + 104) )
          goto LABEL_47;
        v56 = v63;
        v61 = std::_Rb_tree_increment(v61);
        v63 = std::_Rb_tree_increment(v63);
        if ( v62 == v61 )
        {
          v43 = v109;
          v83 = *(_QWORD *)(a1 + 80);
          v59 = v83 + v58;
          v60 = v109 + v83;
          goto LABEL_85;
        }
      }
      if ( v64 != 1 || *(_DWORD *)(v63 + 32) != 1 || *(_QWORD *)(v61 + 80) != *(_QWORD *)(v63 + 80) )
        goto LABEL_47;
      v43 = *(_QWORD *)(v61 + 64);
      v107 = *(_QWORD *)(v63 + 64);
      v108 = v43;
      if ( v61 + 48 == v43 )
        goto LABEL_82;
      while ( 1 )
      {
        v82 = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64, _QWORD))get_hexdsp(v56, v108 + 32);
        v43 = v108 + 32;
        if ( !v82(295, v108 + 32, v107 + 32, 0) )
          break;
        v56 = v107;
        v108 = std::_Rb_tree_increment(v108);
        v107 = std::_Rb_tree_increment(v107);
        if ( v61 + 48 == v108 )
          goto LABEL_82;
      }
LABEL_47:
      ++v55;
      v54 = *(_QWORD *)(a1 + 88);
      if ( v55 < v54 )
        continue;
      break;
    }
LABEL_48:
    v109 += 56;
    if ( v106 < v54 )
      continue;
    break;
  }
  if ( v54 )
    goto LABEL_50;
LABEL_94:
  sub_35C90((__int64)"Simplification Result: ");
  v92 = *(int **)(a1 + 80);
  for ( j = &v92[14 * *(_QWORD *)(a1 + 88)]; j != v92; v92 += 14 )
  {
    sub_3A2D0((__int64)&v115, v92);
    v94 = src;
    if ( v116 )
      v94 = v115;
    sub_35C90((__int64)"%s, ", v94);
    if ( v115 )
    {
      v116 = nullptr;
      qfree(v115);
    }
  }
  sub_35C90((__int64)"\n");
  return v118 - __readfsqword(0x28u);
}

