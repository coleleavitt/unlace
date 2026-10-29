__int64 __fastcall sub_11DB0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  __int16 v8; // ax
  int v9; // eax
  __int64 v10; // r12
  int v12; // r13d
  void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int16 v19; // r8
  __int64 v20; // r14
  __int64 v21; // r13
  const char *v22; // r12
  const char *v23; // r8
  const char *v24; // rdx
  unsigned __int16 v25; // r13
  const char *v26; // rax
  const char *v27; // r12
  void *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  const char *v31; // r12
  char v32; // r13
  const char *v33; // r8
  void *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  const char *v37; // rdx
  const char *v38; // r8
  const char *v39; // rdx
  const char *v40; // r8
  const char *v41; // rdx
  const char *v42; // r8
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // r14
  char *v46; // rsi
  void *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 sreg; // rax
  void *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  size_t v54; // r14
  __int64 v55; // r14
  size_t v56; // rax
  char *v57; // r8
  size_t v58; // r9
  size_t v59; // r11
  size_t v60; // rdx
  size_t v61; // rax
  size_t v62; // rax
  size_t v63; // r13
  char *v64; // rsi
  size_t v65; // rdx
  size_t v66; // [rsp+8h] [rbp-98h]
  const char *src; // [rsp+10h] [rbp-90h]
  void *srca; // [rsp+10h] [rbp-90h]
  size_t v69; // [rsp+18h] [rbp-88h]
  unsigned __int16 s; // [rsp+20h] [rbp-80h]
  char *sa; // [rsp+20h] [rbp-80h]
  size_t v72; // [rsp+28h] [rbp-78h]
  __int64 v73; // [rsp+30h] [rbp-70h] BYREF
  __int128 v74; // [rsp+38h] [rbp-68h]
  char *v75; // [rsp+50h] [rbp-50h] BYREF
  __int128 v76; // [rsp+58h] [rbp-48h]
  unsigned __int64 v77; // [rsp+68h] [rbp-38h]

  v2 = *((char *)a2 + 257);
  v77 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
    goto LABEL_5;
  v4 = *((_DWORD *)a2 + 63) & 0x1FF;
  if ( v4 > 0x37 )
  {
    switch ( v4 )
    {
      case 0x14Du:
        v31 = &::src;
        v32 = 0;
        sa = "333";
        if ( (unsigned __int8)v2 > 0x29u )
          goto LABEL_76;
        break;
      case 0x1C2u:
        v31 = &::src;
        v32 = 0;
        sa = "450";
        if ( (unsigned __int8)v2 > 0x29u )
          goto LABEL_76;
        break;
      case 0xA3u:
        v31 = &::src;
        v32 = 0;
        sa = "16v3";
        if ( (unsigned __int8)v2 > 0x29u )
        {
LABEL_76:
          v33 = off_2A4B0[2 * *((unsigned __int16 *)a2 + 124)];
          v75 = nullptr;
          v76 = 0;
          if ( !v33 )
          {
            v55 = 0;
            v61 = strlen(sa);
            v57 = nullptr;
            v59 = v61;
            v60 = v61 + 1;
            v58 = v61;
            goto LABEL_131;
          }
LABEL_77:
          src = v33;
          v54 = strlen(v33);
          v75 = (char *)qvector_reserve(&v75, 0, v54 + 1, 1);
          *(_QWORD *)&v76 = v54 + 1;
          memmove(v75, src, v54);
          v75[v54] = 0;
          v55 = v76;
          if ( !sa )
            goto LABEL_82;
          v56 = strlen(sa);
          v57 = v75;
          v58 = v56;
          if ( v55 )
          {
            --v55;
            v59 = v56 + v55;
          }
          else
          {
            v59 = v56;
          }
          v60 = v59 + 1;
          if ( *((_QWORD *)&v76 + 1) >= v59 + 1 )
          {
LABEL_81:
            *(_QWORD *)&v76 = v60;
            v57[v59] = 0;
            memmove(&v75[v55], sa, v58);
            v55 = v76;
LABEL_82:
            if ( !v32 || !v31 )
            {
LABEL_84:
              v34 = &unk_21435;
              if ( v55 )
                v34 = v75;
              (*(void (__fastcall **)(__int64 *, void *, __int64, _QWORD))(*a2 + 288))(a2, v34, 13, 0);
              goto LABEL_87;
            }
            v62 = strlen(v31);
            v72 = v62;
            v63 = v62;
            if ( v55 )
            {
              --v55;
              v72 = v62 + v55;
            }
LABEL_134:
            v64 = v75;
            v65 = v72 + 1;
            if ( *((_QWORD *)&v76 + 1) < v72 + 1 )
            {
              v75 = (char *)qvector_reserve(&v75, v75, v65, 1);
              v65 = v72 + 1;
              v64 = v75;
            }
            *(_QWORD *)&v76 = v65;
            v64[v72] = 0;
            memmove(&v75[v55], v31, v63);
            v55 = v76;
            goto LABEL_84;
          }
LABEL_131:
          v66 = v59;
          srca = (void *)v58;
          v69 = v60;
          v75 = (char *)qvector_reserve(&v75, v57, v60, 1);
          v59 = v66;
          v57 = v75;
          v58 = (size_t)srca;
          v60 = v69;
          goto LABEL_81;
        }
        break;
      default:
        goto LABEL_5;
    }
LABEL_103:
    v31 = *((const char **)&off_28EE0 + v2);
    v32 = *v31;
    goto LABEL_76;
  }
  if ( v4 > 4 )
  {
    switch ( v4 )
    {
      case 5u:
        v31 = &::src;
        v32 = 0;
        sa = "5";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 8u:
        v31 = &::src;
        v32 = 0;
        sa = "8";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 9u:
        v31 = &::src;
        v32 = 0;
        sa = "9";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0xAu:
        v31 = &::src;
        v32 = 0;
        sa = "10";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x10u:
        v31 = &::src;
        v32 = 0;
        sa = "16";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x19u:
        v31 = &::src;
        v32 = 0;
        sa = "25";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x21u:
        v31 = &::src;
        v32 = 0;
        sa = "33";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x24u:
        v31 = &::src;
        v32 = 0;
        sa = "36";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x25u:
        v31 = &::src;
        v32 = 0;
        sa = "37";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x26u:
        v31 = &::src;
        v32 = 0;
        sa = "38";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x2Cu:
        v31 = &::src;
        v32 = 0;
        sa = "44";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x2Du:
        v31 = &::src;
        v32 = 0;
        sa = "45";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      case 0x37u:
        v31 = &::src;
        v32 = 0;
        sa = "55";
        if ( (unsigned __int8)v2 <= 0x29u )
          goto LABEL_103;
        goto LABEL_76;
      default:
        break;
    }
  }
LABEL_5:
  if ( (unsigned __int8)v2 <= 0x29u )
  {
    v31 = *((const char **)&off_28EE0 + v2);
    v32 = *v31;
    if ( *v31 )
    {
      v33 = off_2A4B0[2 * *((unsigned __int16 *)a2 + 124)];
      v76 = 0;
      v75 = nullptr;
      if ( !v33 )
      {
        if ( !v31 )
        {
          v34 = &unk_21435;
          (*(void (__fastcall **)(__int64 *, void *, __int64, _QWORD))(*a2 + 288))(a2, &unk_21435, 13, 0);
LABEL_87:
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree(v75, v34, v35, v36);
          }
          goto LABEL_7;
        }
        v55 = 0;
        v72 = strlen(v31);
        v63 = v72;
        goto LABEL_134;
      }
      sa = nullptr;
      goto LABEL_77;
    }
  }
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 280))(a2, 13, 0);
LABEL_7:
  v5 = 0;
  while ( BYTE1(a2[5 * v5 + 33]) )
  {
    v6 = *a2;
    v7 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(v6 + 32))(a2, 44);
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 32);
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 304))(a2, (unsigned int)v7);
      v5 = v7 + 1;
      if ( v7 == 7 )
        break;
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, _QWORD))(v6 + 304))(a2, 0);
      v5 = 1;
    }
  }
  v8 = *((_WORD *)a2 + 124);
  if ( (unsigned __int16)(v8 - 25) <= 5u )
  {
    v19 = *((_WORD *)a2 + 175);
    v75 = nullptr;
    v20 = *((unsigned __int16 *)a2 + 135);
    s = v19;
    v21 = a2[49];
    v76 = 0;
    v75 = (char *)qvector_reserve(&v75, 0, 5, 1);
    v22 = "$";
    *(_QWORD *)&v76 = 5;
    strcpy(v75, " ; {");
    if ( (*(_BYTE *)(a1 + 168) & 2) != 0 )
      v22 = &::src;
    if ( (_WORD)v20 == s )
    {
      if ( (_WORD)v20 == 31 )
      {
        if ( (v21 & 8) == 0 )
        {
          if ( (v21 & 4) != 0 )
          {
            v23 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 232LL);
            v24 = &::src;
            goto LABEL_54;
          }
          if ( (v21 & 2) != 0 )
          {
            v40 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 240LL);
            v39 = &::src;
            goto LABEL_56;
          }
          if ( (v21 & 1) != 0 )
          {
            v42 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 248LL);
            v41 = &::src;
            goto LABEL_59;
          }
LABEL_60:
          v43 = v76;
          if ( (_QWORD)v76 )
          {
            v44 = v76 + 1;
            v45 = v76;
            v46 = v75;
            v43 = v76 - 1;
            if ( *((_QWORD *)&v76 + 1) >= (unsigned __int64)(v76 + 1) )
            {
LABEL_62:
              *(_QWORD *)&v76 = v44;
              v46[v45] = 0;
              v47 = &unk_21435;
              v75[v43] = 125;
              if ( (_QWORD)v76 )
                v47 = v75;
              (*(void (__fastcall **)(__int64 *, void *, __int64))(*a2 + 56))(a2, v47, 4);
              if ( v75 )
              {
                *(_QWORD *)&v76 = 0;
                qfree(v75, v47, v48, v49);
              }
              v8 = *((_WORD *)a2 + 124);
              goto LABEL_12;
            }
          }
          else
          {
            v46 = v75;
            v44 = 2;
            v45 = 1;
            if ( *((_QWORD *)&v76 + 1) >= 2u )
              goto LABEL_62;
          }
          v75 = (char *)qvector_reserve(&v75, v46, v44, 1);
          v46 = v75;
          goto LABEL_62;
        }
        v38 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 224LL);
        v37 = &::src;
        goto LABEL_52;
      }
      sub_11CF0(
        (__int64 *)&v75,
        (__int64)"%s%s",
        v22,
        *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v20));
    }
    else
    {
      sub_11CF0(
        (__int64 *)&v75,
        (__int64)"%s%s~%s%s",
        v22,
        *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v20),
        v22,
        *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * s));
    }
    if ( (v21 & 8) == 0 )
    {
      if ( (v21 & 4) == 0 )
      {
        if ( (v21 & 2) != 0 )
        {
          v39 = ", ";
          v40 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 240LL);
          goto LABEL_56;
        }
        if ( (v21 & 1) != 0 )
        {
          v41 = ", ";
          v42 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 248LL);
          goto LABEL_59;
        }
        goto LABEL_60;
      }
      v24 = ", ";
      v23 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 232LL);
      goto LABEL_54;
    }
    v37 = ", ";
    v38 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 224LL);
LABEL_52:
    sub_11CF0((__int64 *)&v75, (__int64)"%s%s%s", v37, v22, v38);
    if ( (v21 & 4) == 0 )
    {
      if ( (v21 & 2) != 0 )
      {
LABEL_55:
        v39 = ", ";
        v40 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 240LL);
LABEL_56:
        sub_11CF0((__int64 *)&v75, (__int64)"%s%s%s", v39, v22, v40);
LABEL_57:
        if ( (v21 & 1) == 0 )
          goto LABEL_60;
        goto LABEL_58;
      }
      if ( (v21 & 1) != 0 )
      {
LABEL_58:
        v41 = ", ";
        v42 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 248LL);
LABEL_59:
        sub_11CF0((__int64 *)&v75, (__int64)"%s%s%s", v41, v22, v42);
        goto LABEL_60;
      }
      goto LABEL_60;
    }
    v24 = ", ";
    v23 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 232LL);
LABEL_54:
    sub_11CF0((__int64 *)&v75, (__int64)"%s%s%s", v24, v22, v23);
    if ( (v21 & 2) == 0 )
      goto LABEL_57;
    goto LABEL_55;
  }
LABEL_12:
  if ( (unsigned __int16)(v8 - 480) <= 1u )
  {
    v25 = *((_WORD *)a2 + 135);
    v75 = nullptr;
    v76 = 0;
    v75 = (char *)qvector_reserve(&v75, 0, 5, 1);
    *(_QWORD *)&v76 = 5;
    strcpy(v75, " ; {");
    v26 = &::src;
    if ( (*(_BYTE *)(a1 + 168) & 2) == 0 )
      v26 = "$";
    v27 = v26;
    if ( v25 == 6 )
      sub_11CF0((__int64 *)&v75, (__int64)"%sr6", v26);
    else
      sub_11CF0(
        (__int64 *)&v75,
        (__int64)"%sr6~%s%s",
        v26,
        v26,
        *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v25));
    sub_11CF0(
      (__int64 *)&v75,
      (__int64)", %s%s, %s%s, %s%s}",
      v27,
      *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 224LL),
      v27,
      *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 232LL),
      v27,
      *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 240LL));
    v28 = &unk_21435;
    if ( (_QWORD)v76 )
      v28 = v75;
    (*(void (__fastcall **)(__int64 *, void *, __int64))(*a2 + 56))(a2, v28, 4);
    if ( v75 )
    {
      *(_QWORD *)&v76 = 0;
      qfree(v75, v28, v29, v30);
    }
  }
  v9 = *((_DWORD *)a2 + 63);
  if ( v9 >= 0 )
  {
    v10 = netnode_altval(*(_QWORD *)(a1 + 120), a2[30], 868);
    if ( v10 == -1 )
      goto LABEL_15;
    goto LABEL_22;
  }
  v75 = nullptr;
  v76 = 0;
  v12 = ((unsigned int)v9 >> 22) & 0x1FF;
  sub_DC30((__int64 *)&v75, (__int64)" ; ex9.it #0x%X", v12);
  v13 = &unk_21435;
  if ( (_QWORD)v76 )
    v13 = v75;
  (*(void (__fastcall **)(__int64 *, void *, __int64))(*a2 + 56))(a2, v13, 4);
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75, v13, v14, v15);
  }
  v10 = netnode_altval(*(_QWORD *)(a1 + 120), a2[30], 868);
  if ( v10 != -1 )
  {
LABEL_22:
    a2[19] = v10;
    v16 = (void *)v10;
    v73 = 0;
    v74 = 0;
    if ( get_ea_name(&v73, v10, 0, 0) <= 0 || (unsigned __int64)v74 <= 1 )
    {
      v75 = nullptr;
      v76 = 0;
      sub_11CF0((__int64 *)&v75, (__int64)"; 0x%llX", v10);
      v16 = &unk_21435;
      if ( (_QWORD)v76 )
        v16 = v75;
      (*(void (__fastcall **)(__int64 *, void *, __int64))(*a2 + 56))(a2, v16, 4);
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree(v75, v16, v17, v18);
      }
    }
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73, v16, v17, v18);
    }
    goto LABEL_15;
  }
  sreg = get_sreg(a2[30], 35);
  if ( sreg != -1 || (sreg = *(_QWORD *)(a1 + 176), sreg != -1) )
  {
    v75 = nullptr;
    v76 = 0;
    sub_DC30(
      (__int64 *)&v75,
      (__int64)" (ITB:0x%X + 0x%X*4 = 0x%X)",
      sreg & 0xFFFFFFFC,
      v12,
      (sreg & 0xFFFFFFFC) + 4 * v12);
    v51 = &unk_21435;
    if ( (_QWORD)v76 )
      v51 = v75;
    (*(void (__fastcall **)(__int64 *, void *, __int64))(*a2 + 56))(a2, v51, 4);
    if ( v75 )
    {
      *(_QWORD *)&v76 = 0;
      qfree(v75, v51, v52, v53);
    }
  }
LABEL_15:
  *((_DWORD *)a2 + 36) |= 0x80u;
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 128))(a2, 0xFFFFFFFFLL);
}

