__int64 __fastcall sub_10C190(__int64 a1, char *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // eax
  struct stat64 *p_stat_buf; // rsi
  __int64 v11; // rdi
  char *v13; // r10
  int v14; // r12d
  int v15; // r11d
  int *v16; // rax
  unsigned int v17; // eax
  char v18; // al
  __int16 v19; // dx
  struct stat64 *v20; // rsi
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __ino64_t st_ino; // rdx
  _QWORD *v30; // r12
  __int64 v31; // rdi
  int v32; // ecx
  __int64 v33; // rdi
  int *v34; // rax
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdi
  __m128i *v38; // rax
  __int64 v39; // rax
  int v40; // r12d
  int v41; // eax
  int v42; // ecx
  __int64 i; // rdx
  char v44; // si
  __int64 v45; // r9
  char v46; // al
  __gid_t v47; // r11d
  int *v48; // r12
  __gid_t v49; // r11d
  int v50; // eax
  const char *v51; // rdi
  int v52; // eax
  char *v53; // rax
  int v54; // eax
  const char *v55; // r10
  __gid_t v56; // r11d
  __uid_t v57; // eax
  int v58; // r13d
  int v59; // eax
  char *v60; // rax
  int v61; // eax
  int v62; // r13d
  __int64 v63; // rax
  __int64 v64; // r14
  __ino64_t *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // [rsp+8h] [rbp-540h]
  unsigned int v69; // [rsp+8h] [rbp-540h]
  int v70; // [rsp+8h] [rbp-540h]
  int v71; // [rsp+8h] [rbp-540h]
  char *v72; // [rsp+8h] [rbp-540h]
  int v73; // [rsp+10h] [rbp-538h]
  char *v74; // [rsp+10h] [rbp-538h]
  char *v75; // [rsp+10h] [rbp-538h]
  int owner; // [rsp+18h] [rbp-530h]
  __uid_t ownera[2]; // [rsp+18h] [rbp-530h]
  __uid_t ownerd[2]; // [rsp+18h] [rbp-530h]
  __uid_t ownerb; // [rsp+18h] [rbp-530h]
  __uid_t ownerc[2]; // [rsp+18h] [rbp-530h]
  __uid_t ownere[2]; // [rsp+18h] [rbp-530h]
  _BOOL4 v82; // [rsp+20h] [rbp-528h]
  __gid_t group; // [rsp+24h] [rbp-524h]
  __gid_t groupa; // [rsp+24h] [rbp-524h]
  __gid_t groupd; // [rsp+24h] [rbp-524h]
  __gid_t groupb; // [rsp+24h] [rbp-524h]
  __gid_t groupc; // [rsp+24h] [rbp-524h]
  __gid_t groupe; // [rsp+24h] [rbp-524h]
  int v89; // [rsp+28h] [rbp-520h]
  __gid_t v90; // [rsp+28h] [rbp-520h]
  char *v91; // [rsp+28h] [rbp-520h]
  __int64 v93; // [rsp+38h] [rbp-510h]
  __int64 v94; // [rsp+38h] [rbp-510h]
  __mode_t v95; // [rsp+38h] [rbp-510h]
  __int64 v96; // [rsp+38h] [rbp-510h]
  char *name; // [rsp+40h] [rbp-508h]
  __gid_t namea; // [rsp+40h] [rbp-508h]
  char *nameb; // [rsp+40h] [rbp-508h]
  __gid_t v100; // [rsp+48h] [rbp-500h]
  __m128i v101; // [rsp+50h] [rbp-4F8h] BYREF
  struct stat64 stat_buf; // [rsp+60h] [rbp-4E8h] BYREF
  _BYTE v103[528]; // [rsp+F0h] [rbp-458h] BYREF
  char v104[520]; // [rsp+300h] [rbp-248h] BYREF
  unsigned __int64 v105; // [rsp+508h] [rbp-40h]

  v7 = a4;
  v8 = a4 & 8;
  v105 = __readfsqword(0x28u);
  owner = a4 & 0x10;
  v9 = a4 & 0xFFF00;
  p_stat_buf = (struct stat64 *)(a4 & 1);
  v11 = a4 & 4;
  v68 = a4 & 0xFFF00;
  v89 = a4 & 1;
  v73 = a4 & 2;
  v82 = 0;
  group = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    p_stat_buf = (struct stat64 *)v9;
    v82 = v9 == 0x80000 || v9 == 2048 || v9 == 0x4000;
  }
  if ( getpid() != dword_242250 )
  {
    dword_242250 = getpid();
    if ( !(unsigned int)sub_FEBD0(v11, (__int64)p_stat_buf) )
    {
      p_stat_buf = nullptr;
      sub_FF240(0, nullptr);
    }
  }
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 112) = 0;
  memset(
    (void *)((a3 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a3 - (((_DWORD)a3 + 8) & 0xFFFFFFF8) + 120) >> 3));
  if ( v68 == 256 )
  {
    v28 = qword_242248;
    if ( qword_242248 )
    {
      xmmword_241500(qword_242248);
      if ( !qword_242240 )
        goto LABEL_106;
    }
    else if ( !qword_242240 )
    {
      goto LABEL_108;
    }
    p_stat_buf = &stat_buf;
    if ( !(unsigned int)off_2411C8(a2, &stat_buf) )
    {
      v30 = (_QWORD *)qword_242240;
      if ( qword_242240 )
      {
        st_ino = stat_buf.st_ino;
        while ( *v30 != stat_buf.st_dev || v30[1] != stat_buf.st_ino )
        {
          v30 = (_QWORD *)v30[8];
          if ( !v30 )
            goto LABEL_106;
        }
        v31 = v30[2];
        v32 = v7 & 3;
        if ( v31 )
        {
          xmmword_241500(v31);
          st_ino = v30[5];
          v32 = v7 & 3;
          if ( !st_ino )
            goto LABEL_65;
          goto LABEL_60;
        }
        st_ino = v30[5];
        if ( st_ino )
        {
LABEL_60:
          if ( v32 == *(_DWORD *)(st_ino + 4) )
          {
            v65 = v30 + 5;
            v66 = st_ino;
LABEL_129:
            st_ino = *(_QWORD *)(v66 + 8);
            *v65 = st_ino;
LABEL_66:
            v33 = v30[2];
            if ( v33 )
            {
              v93 = v66;
              xmmword_241510(v33, &stat_buf, st_ino);
              v66 = v93;
            }
            v28 = qword_242248;
            if ( qword_242248 )
            {
              v94 = v66;
              xmmword_241510(qword_242248, &stat_buf, st_ino);
              v66 = v94;
            }
            if ( v66 )
            {
              v14 = *(_DWORD *)v66;
LABEL_72:
              *(_QWORD *)(a3 + 48) = v66;
              v13 = a2;
              goto LABEL_6;
            }
LABEL_108:
            if ( (unsigned int)sub_FEBD0(v28, (__int64)p_stat_buf) || (v66 = sub_D1E10(16, (__int64)p_stat_buf)) == 0 )
            {
              LODWORD(v22) = 7;
              return (unsigned int)v22;
            }
            v14 = -1;
            goto LABEL_72;
          }
          while ( 1 )
          {
            v66 = *(_QWORD *)(st_ino + 8);
            if ( !v66 )
              break;
            if ( *(_DWORD *)(v66 + 4) == v32 )
            {
              v65 = (__ino64_t *)(st_ino + 8);
              goto LABEL_129;
            }
            st_ino = *(_QWORD *)(st_ino + 8);
          }
LABEL_65:
          v66 = 0;
          goto LABEL_66;
        }
      }
    }
LABEL_106:
    v28 = qword_242248;
    if ( qword_242248 )
      xmmword_241510(qword_242248, p_stat_buf, st_ino);
    goto LABEL_108;
  }
  v13 = a2;
  v14 = -1;
  if ( !a2 )
  {
    LODWORD(v22) = sub_10BB80(*(_DWORD *)(a1 + 8), v104);
    if ( (_DWORD)v22 )
      return (unsigned int)v22;
    v13 = v104;
  }
LABEL_6:
  v15 = v73;
  if ( group )
    v15 = v73 | 0x40;
  if ( owner )
    v15 |= 0x20080u;
  if ( v14 < 0 )
  {
    v40 = v15 | 0x20000;
    if ( (v7 & 0x80800) != 0 )
    {
      if ( !v13
        || (groupa = v15,
            *(_QWORD *)ownera = v13,
            v41 = strlen(v13) & 0x3FFFFFFF,
            v13 = *(char **)ownera,
            v15 = groupa,
            v42 = v41 - 1,
            v41 - 1 <= 0)
        || (i = v42, v44 = *(_BYTE *)(*(_QWORD *)ownera + v42), v45 = v42, v44 == 46) )
      {
LABEL_95:
        groupd = v15;
        *(_QWORD *)ownerd = v13;
        v14 = sub_EAA90(v13, v40, 0);
        v13 = *(char **)ownerd;
        v47 = groupd;
        if ( v14 >= 0 )
          goto LABEL_11;
        groupb = 0;
        ownerb = 0;
        v95 = 0;
        goto LABEL_97;
      }
      if ( v44 != 45 )
      {
        for ( i = v41 - 2; --v42; --i )
        {
          v46 = *(_BYTE *)(*(_QWORD *)ownera + i);
          if ( v46 == 46 )
            break;
          if ( v46 == 45 )
          {
            v45 = v42;
            goto LABEL_139;
          }
        }
        goto LABEL_95;
      }
LABEL_139:
      v96 = v45;
      v60 = (char *)__memcpy_chk(v103, *(_QWORD *)ownera, i, 513);
      v103[v96] = 0;
      v61 = off_2411C8(v60, &stat_buf);
      LODWORD(v22) = 1802;
      v55 = *(const char **)ownera;
      v56 = groupa;
      if ( v61 )
        return (unsigned int)v22;
      v95 = stat_buf.st_mode & 0x1FF;
      ownerb = stat_buf.st_uid;
      groupb = stat_buf.st_gid;
    }
    else
    {
      if ( v8 )
      {
        groupe = v15;
        *(_QWORD *)ownere = v13;
        v14 = sub_EAA90(v13, v40, 0x180u);
        v13 = *(char **)ownere;
        v47 = groupe;
        if ( v14 >= 0 )
          goto LABEL_11;
        groupb = 0;
        ownerb = 0;
        v95 = 384;
        goto LABEL_97;
      }
      if ( (v7 & 0x40) == 0 )
        goto LABEL_95;
      if ( !v13 )
        goto LABEL_95;
      groupc = v15;
      *(_QWORD *)ownerc = v13;
      v53 = sub_D4950(v13, "modeof");
      v13 = *(char **)ownerc;
      v15 = groupc;
      if ( !v53 )
        goto LABEL_95;
      v54 = off_2411C8(v53, &stat_buf);
      LODWORD(v22) = 1802;
      if ( v54 )
        return (unsigned int)v22;
      v55 = *(const char **)ownerc;
      v56 = groupc;
      v95 = stat_buf.st_mode & 0x1FF;
      ownerb = stat_buf.st_uid;
      groupb = stat_buf.st_gid;
    }
    v100 = v56;
    nameb = (char *)v55;
    v14 = sub_EAA90(v55, v40, v95);
    v13 = nameb;
    v47 = v100;
    if ( v14 >= 0 )
    {
LABEL_121:
      if ( v95 )
      {
        if ( (v7 & 0x80800) != 0 )
        {
          v74 = v13;
          v57 = off_241360();
          v13 = v74;
          if ( !v57 )
          {
            off_241348(v14, ownerb, groupb);
            v13 = v74;
          }
        }
      }
      goto LABEL_11;
    }
LABEL_97:
    name = v13;
    v90 = v47;
    v48 = __errno_location();
    v49 = v90;
    v50 = *v48;
    v13 = name;
    if ( v82 && v50 == 13 )
    {
      v51 = name;
      v91 = name;
      namea = v49;
      v52 = off_241198(v51, 0);
      v13 = v91;
      if ( v52 )
      {
        sub_E8BB0(
          0xEu,
          "%s at line %d of [%.10s]",
          "cannot open file",
          41550,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        v20 = (struct stat64 *)"open";
        sub_EABB0(0xEu, (__int64)"open", v91, 0xA24Eu);
        LODWORD(v22) = 1544;
        goto LABEL_77;
      }
      v50 = *v48;
      v49 = namea;
    }
    if ( v50 == 21
      || !v73
      || (v75 = v13, v7 = v7 & 0xFFFFFFF8 | 1, v14 = sub_EAA90(v13, v49 & 0xFFFDFFBD | 0x20000, v95), v13 = v75, v14 < 0) )
    {
      v72 = v13;
      sub_E8BB0(
        0xEu,
        "%s at line %d of [%.10s]",
        "cannot open file",
        41550,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      v20 = (struct stat64 *)"open";
      LODWORD(v22) = sub_EABB0(0xEu, (__int64)"open", v72, 0xA24Eu);
      if ( !(_DWORD)v22 )
        return (unsigned int)v22;
      goto LABEL_77;
    }
    v89 = 1;
    goto LABEL_121;
  }
LABEL_11:
  if ( a5 )
    *a5 = v7;
  v16 = *(int **)(a3 + 48);
  if ( v16 )
  {
    *v16 = v14;
    *(_DWORD *)(*(_QWORD *)(a3 + 48) + 4LL) = v7 & 3;
  }
  if ( v8 )
  {
    v8 = 32;
    off_2412E8(v13);
  }
  if ( v89 )
    v8 |= 2u;
  v17 = v8;
  if ( v68 != 256 )
  {
    LOBYTE(v17) = v8 | 0x80;
    v8 = v17;
  }
  if ( v82 )
    v8 |= 8u;
  if ( (v7 & 0x40) != 0 )
  {
    LOWORD(v8) = v8 | 0x40;
    v18 = 0;
  }
  else
  {
    v18 = ((v8 >> 6) ^ 1) & 1;
  }
  *(_DWORD *)(a3 + 24) = v14;
  *(_QWORD *)(a3 + 8) = a1;
  *(_QWORD *)(a3 + 56) = a2;
  *(_WORD *)(a3 + 30) = v8;
  v19 = v8;
  *(_QWORD *)(a3 + 96) = qword_2415A8;
  if ( !a2 || v18 )
    goto LABEL_27;
  if ( (unsigned int)sub_D4A10(a2, "psow", 1) )
  {
    v19 = *(_WORD *)(a3 + 30);
LABEL_27:
    *(_WORD *)(a3 + 30) = v19 | 0x10;
  }
  if ( !strcmp(*(const char **)(a1 + 24), "unix-excl") )
    *(_WORD *)(a3 + 30) |= 1u;
  if ( (v8 & 0x80) != 0 )
  {
    v21 = &unk_23BFA0;
    goto LABEL_33;
  }
  v20 = (struct stat64 *)a3;
  v21 = (void *)(**(__int64 (__fastcall ***)(char *, __int64))(a1 + 32))(a2, a3);
  if ( v21 == &unk_23C040 )
  {
    if ( qword_242248 )
      xmmword_241500(qword_242248);
    v20 = &stat_buf;
    v24 = *(unsigned int *)(a3 + 24);
    if ( (unsigned int)off_2411E0(v24, &stat_buf) )
    {
      v34 = __errno_location();
      v35 = 10;
      *(_DWORD *)(a3 + 32) = *v34;
    }
    else
    {
      v25 = qword_242240;
      v101 = *(__m128i *)&stat_buf.st_dev;
      if ( qword_242240 )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)v25 ^ v101.m128i_i64[0] | *(_QWORD *)(v25 + 8) ^ v101.m128i_i64[1];
          if ( *(_OWORD *)v25 == *(_OWORD *)&v101 )
            break;
          v25 = *(_QWORD *)(v25 + 64);
          if ( !v25 )
            goto LABEL_79;
        }
        ++*(_DWORD *)(v25 + 48);
        goto LABEL_45;
      }
LABEL_79:
      if ( (unsigned int)sub_FEBD0(v24, (__int64)&stat_buf)
        || (v38 = (__m128i *)sub_D1E10(80, (__int64)&stat_buf), (v25 = (__int64)v38) == 0) )
      {
        v35 = 7;
      }
      else
      {
        *v38 = 0;
        v38[1] = 0;
        v38[2] = 0;
        v38[3] = 0;
        v38[4] = 0;
        *v38 = _mm_load_si128(&v101);
        if ( !(_BYTE)word_241484 || (v67 = sub_FF5D0(0, (__int64)&stat_buf), (*(_QWORD *)(v25 + 16) = v67) != 0) )
        {
          v39 = qword_242240;
          *(_DWORD *)(v25 + 48) = 1;
          *(_QWORD *)(v25 + 72) = 0;
          *(_QWORD *)(v25 + 64) = v39;
          if ( v39 )
            *(_QWORD *)(v39 + 72) = v25;
          qword_242240 = v25;
LABEL_45:
          v27 = qword_242248;
          *(_QWORD *)(a3 + 16) = v25;
          if ( v27 )
            xmmword_241510(v27, &stat_buf, v26);
          *(_DWORD *)(a3 + 32) = 0;
          v21 = &unk_23C040;
          goto LABEL_34;
        }
        sub_C91C0(v25, (__int64)&stat_buf);
        v35 = 7;
      }
    }
    v69 = v35;
    v36 = off_241180(v14);
    v22 = v69;
    if ( v36 )
    {
      v20 = (struct stat64 *)(&stru_A048 + 1);
      sub_EAE20(a3, 0xA049u);
      v37 = qword_242248;
      v22 = v69;
      if ( qword_242248 )
        goto LABEL_76;
    }
    else
    {
      v37 = qword_242248;
      if ( qword_242248 )
      {
LABEL_76:
        v70 = v22;
        xmmword_241510(v37, v20, v22);
        LODWORD(v22) = v70;
        *(_DWORD *)(a3 + 32) = 0;
        goto LABEL_77;
      }
    }
    *(_DWORD *)(a3 + 32) = 0;
    goto LABEL_77;
  }
  if ( v21 == &unk_23BF00 )
  {
    v58 = strlen(a2);
    if ( !(unsigned int)sub_FEBD0((__int64)a2, a3) )
    {
      v62 = v58 + 6;
      v63 = sub_D1E10(v62, a3);
      v64 = v63;
      if ( v63 )
      {
        sub_E89C0(v62, v63, "%s.lock", a2);
        *(_QWORD *)(a3 + 40) = v64;
        goto LABEL_33;
      }
    }
    *(_QWORD *)(a3 + 40) = 0;
    *(_DWORD *)(a3 + 32) = 0;
    v59 = off_241180(v14);
    LODWORD(v22) = 7;
    if ( v59 )
    {
      v20 = (struct stat64 *)(&stru_A090 + 14);
      sub_EAE20(a3, 0xA09Eu);
      LODWORD(v22) = 7;
    }
LABEL_77:
    v71 = v22;
    sub_C91C0(*(_QWORD *)(a3 + 48), (__int64)v20);
    LODWORD(v22) = v71;
    return (unsigned int)v22;
  }
LABEL_33:
  *(_DWORD *)(a3 + 32) = 0;
LABEL_34:
  *(_QWORD *)a3 = v21;
  sub_EA3B0(a3);
  LODWORD(v22) = 0;
  return (unsigned int)v22;
}
