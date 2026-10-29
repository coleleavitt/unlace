unsigned __int64 __fastcall sub_8110(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  _QWORD *v5; // r12
  __int64 v6; // rsi
  unsigned int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int16 v10; // cx
  const char *v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  unsigned int v14; // r15d
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // rsi
  __int64 (__fastcall *v24)(_QWORD *, char); // rax
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rsi
  unsigned int v29; // eax
  void *v30; // rsi
  void *v31; // rdi
  int v32; // eax
  void (__fastcall *v34)(__int64, const char *, _QWORD); // r15
  const char *v35; // rsi
  int v36; // eax
  int v37; // r14d
  __int64 v38; // r13
  char *v39; // rdx
  unsigned __int64 v40; // rax
  const char *v41; // rdx
  __int64 regvar; // rax
  void (__fastcall *v43)(__int64, _BYTE *, __int64); // rcx
  void *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  struct _Unwind_Exception *v47; // rbx
  _QWORD *v48; // [rsp+10h] [rbp-1E8h]
  unsigned int v49; // [rsp+18h] [rbp-1E0h]
  unsigned int v50; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v51; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v52; // [rsp+18h] [rbp-1E0h]
  void (__fastcall *v53)(__int64, const char *, _QWORD); // [rsp+20h] [rbp-1D8h]
  unsigned int v54; // [rsp+20h] [rbp-1D8h]
  int v55; // [rsp+20h] [rbp-1D8h]
  __int64 v56; // [rsp+20h] [rbp-1D8h]
  int v57; // [rsp+2Ch] [rbp-1CCh]
  __int64 v58; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v59; // [rsp+38h] [rbp-1C0h]
  __int64 v60; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v61; // [rsp+58h] [rbp-1A0h]
  void *v62; // [rsp+70h] [rbp-188h] BYREF
  __int128 v63; // [rsp+78h] [rbp-180h]
  void *v64; // [rsp+90h] [rbp-168h] BYREF
  __int128 v65; // [rsp+98h] [rbp-160h]
  const char *v66; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-140h]
  _DWORD v68[52]; // [rsp+D0h] [rbp-128h] BYREF
  _BYTE v69[24]; // [rsp+1A0h] [rbp-58h] BYREF
  unsigned __int64 v70; // [rsp+1B8h] [rbp-40h]

  v5 = *(_QWORD **)(a1 + 616);
  v6 = *a2;
  v70 = __readfsqword(0x28u);
  memset(v68, 0, 0xC8u);
  if ( netnode_supval(v5[20], v6, &v66, 4, 333) <= 3 )
    goto LABEL_41;
  v7 = (unsigned int)v66;
  v48 = v5 + 15;
  v8 = (unsigned int)sub_C5C0(v5 + 15, *a2) - 1;
  if ( v8 >= v5[22] )
  {
    v24 = (__int64 (__fastcall *)(_QWORD *, char))((__int64 (*)(void))sub_7F50)();
LABEL_71:
    v24((_QWORD *)a1, 46);
    goto LABEL_29;
  }
  v2 = v7;
  if ( netnode_supval(*(_QWORD *)(v5[21] + 8 * v8), v7, v68, 200, 77) <= 199 )
  {
LABEL_41:
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(
      a1,
      "ERROR: Missing method info",
      0xFFFFFFFFLL);
    return v70 - __readfsqword(0x28u);
  }
  v9 = v68[41];
  v10 = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 144) &= 0xFFFFE76F;
  v57 = v10 & 0x1890;
  sub_BF60(&v66, v9);
  v11 = (const char *)&unk_150C8;
  if ( v67 )
    v11 = v66;
  sub_7FF0(a1, (__int64)"%s ", v11);
  if ( v66 )
  {
    v67 = 0;
    qfree();
  }
  v12 = *a2;
  v13 = v5 + 15;
  v58 = 0;
  v14 = v68[6];
  v59 = 0;
  v15 = (unsigned int)sub_C5C0(v48, v12) - 1;
  if ( v15 >= v5[22] )
  {
LABEL_75:
    v47 = (struct _Unwind_Exception *)sub_7F50(v13, v12, v16);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree();
    }
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree();
    }
    _Unwind_Resume(v47);
  }
  if ( (unsigned __int8)sub_C8C0(&v58, *(_QWORD *)(v5[21] + 8 * v15), v14, 85) )
  {
    v34 = *(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL);
    sub_BED0(&v66, &v58);
    v35 = (const char *)&unk_150C8;
    if ( v67 )
      v35 = v66;
    v34(a1, v35, 0);
    if ( v66 )
    {
      v67 = 0;
      qfree();
    }
  }
  else
  {
    sub_80D0(a1, v68[6]);
  }
  v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
  if ( v17 == sub_7F70 )
  {
    v18 = *(_QWORD *)(a1 + 32);
    v19 = 2;
    if ( v18 )
      v19 = v18-- + 1;
    v20 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < v19 )
    {
      v56 = v18;
      v52 = v19;
      v46 = qvector_reserve(a1 + 24, v20, v19, 1);
      *(_QWORD *)(a1 + 24) = v46;
      v18 = v56;
      v20 = v46;
      v19 = v52;
    }
    *(_QWORD *)(a1 + 32) = v19;
    *(_BYTE *)(v20 + v18) = 32;
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18 + 1) = 0;
  }
  else
  {
    v17((_QWORD *)a1, 32);
  }
  v12 = *a2;
  v60 = 0;
  v13 = v5 + 15;
  v61 = 0;
  v49 = v68[4];
  v21 = (unsigned int)sub_C5C0(v48, v12) - 1;
  v22 = v49;
  if ( v21 >= v5[22] )
  {
LABEL_74:
    sub_7F50(v13, v12, v22);
    goto LABEL_75;
  }
  if ( (unsigned __int8)sub_C8C0(&v60, *(_QWORD *)(v5[21] + 8 * v21), v49, 85) )
  {
    v53 = *(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL);
    sub_BED0(&v66, &v60);
    v23 = (const char *)&unk_150C8;
    if ( v67 )
      v23 = v66;
    v53(a1, v23, 0);
    if ( v66 )
    {
      v67 = 0;
      qfree();
    }
  }
  else
  {
    sub_80D0(a1, v68[4]);
  }
  v24 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
  if ( v24 != sub_7F70 )
    goto LABEL_71;
  v25 = *(_QWORD *)(a1 + 32);
  v26 = 2;
  if ( v25 )
    v26 = v25-- + 1;
  v27 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < v26 )
  {
    v51 = v26;
    v45 = qvector_reserve(a1 + 24, v27, v26, 1);
    *(_QWORD *)(a1 + 24) = v45;
    v26 = v51;
    v27 = v45;
  }
  *(_QWORD *)(a1 + 32) = v26;
  *(_BYTE *)(v27 + v25) = 46;
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v25 + 1) = 0;
LABEL_29:
  v28 = *a2;
  v62 = nullptr;
  v63 = 0;
  v29 = sub_C5C0(v48, v28);
  if ( (unsigned __int8)sub_DA70(v48, &v62, v29, v7, 0, 1) )
  {
    v30 = &unk_150C8;
    if ( (_QWORD)v63 )
      v30 = v62;
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v30, 0);
  }
  else
  {
    sub_80D0(a1, v2);
  }
  if ( LOWORD(v68[8]) )
  {
    sub_7FF0(a1, (__int64)"(");
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, 0);
    v36 = 32;
    if ( LOWORD(v68[8]) <= 0x20u )
      v36 = LOWORD(v68[8]);
    v50 = v36;
    v37 = ((v68[41] & 8) == 0) + LOWORD(v68[46]) - HIWORD(v68[46]);
    if ( !LOWORD(v68[8]) )
      goto LABEL_35;
    v38 = 0;
    while ( 1 )
    {
      v12 = *a2;
      v64 = nullptr;
      v13 = v5 + 15;
      v65 = 0;
      v54 = v68[v38 + 9];
      v40 = (unsigned int)sub_C5C0(v48, v12) - 1;
      if ( v40 >= v5[22] )
      {
        sub_7F50(v48, v12, v54);
        goto LABEL_74;
      }
      sub_C8C0(&v64, *(_QWORD *)(v5[21] + 8 * v40), v54, 85);
      sub_BED0(&v66, &v64);
      v41 = (const char *)&unk_150C8;
      if ( v67 )
        v41 = v66;
      sub_7FF0(a1, (__int64)"  %s ", v41);
      if ( v66 )
      {
        v67 = 0;
        qfree();
      }
      v55 = v37 + 1;
      qsnprintf(v69, 16, "v%u", v37);
      regvar = find_regvar(a2, *a2, *a2 + 1LL, v69, 0);
      v43 = *(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL);
      if ( regvar )
      {
        v43(a1, *(_BYTE **)(regvar + 24), 33);
      }
      else
      {
        v43(a1, v69, 33);
        v44 = &unk_150C8;
        if ( (_QWORD)v65 )
          v44 = v64;
        if ( (unsigned __int8)sub_C0B0(v44) )
        {
          sub_7FF0(a1, (__int64)":");
          v37 += 2;
          qsnprintf(v69, 16, "v%u", v55);
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v69, 33);
          goto LABEL_54;
        }
      }
      ++v37;
LABEL_54:
      v39 = ")";
      if ( v50 != (_DWORD)v38 + 1 )
        v39 = ",";
      sub_7FF0(a1, (__int64)"%s", v39);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 4);
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
      if ( (unsigned int)++v38 >= v50 )
        goto LABEL_35;
    }
  }
  sub_7FF0(a1, (__int64)"()");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, 0);
LABEL_35:
  v31 = v62;
  v32 = *(_DWORD *)(a1 + 144) | v57;
  BYTE1(v32) |= 0x20u;
  *(_DWORD *)(a1 + 144) = v32;
  if ( v31 )
  {
    *(_QWORD *)&v63 = 0;
    qfree();
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  return v70 - __readfsqword(0x28u);
}

