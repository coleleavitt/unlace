__int64 __fastcall sub_11B4B0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5, int a6)
{
  int v6; // r12d
  const char *v7; // rbp
  int v8; // ebx
  char v9; // al
  const char *v10; // rdi
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // r14d
  _BYTE *v14; // r15
  int v15; // r14d
  int v16; // edi
  int v17; // r13d
  unsigned int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // r13
  char *v22; // rbp
  _QWORD *v23; // r12
  int v24; // edx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdi
  _QWORD *v32; // rax
  int v33; // eax
  int v34; // edx
  __int64 v35; // rax
  size_t v36; // r14
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rdx
  char v49; // bl
  __int64 v50; // rax
  __int16 v51; // ax
  char *v52; // rdi
  char v53; // al
  int v54; // ecx
  char *v55; // rdi
  int v56; // eax
  __int64 v57; // rdi
  __int64 (__fastcall *v58)(__int64, __int64); // rax
  unsigned int v59; // eax
  int v60; // ebx
  int v61; // esi
  __int64 v62; // rdx
  __int64 v63; // rdi
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rdi
  int v68; // eax
  int v69; // ebp
  int v70; // eax
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 *v79; // rax
  __int64 v80; // rcx
  unsigned int v81; // r14d
  char *v82; // rax
  size_t v83; // rax
  const char *v84; // rbx
  const char *v85; // rbx
  int v86; // ecx
  char *v87; // rax
  __int64 v88; // r11
  char *v89; // rcx
  char *v90; // rax
  char *v91; // rax
  __int64 *v92; // rax
  unsigned int v93; // eax
  __int64 v94; // rax
  __int64 v96; // [rsp+0h] [rbp-118h]
  __int64 v97; // [rsp+0h] [rbp-118h]
  char v99; // [rsp+14h] [rbp-104h]
  __int64 v100; // [rsp+18h] [rbp-100h]
  __int64 v102; // [rsp+20h] [rbp-F8h]
  char v103; // [rsp+20h] [rbp-F8h]
  char *s1; // [rsp+28h] [rbp-F0h]
  char *s1a; // [rsp+28h] [rbp-F0h]
  int s1b; // [rsp+28h] [rbp-F0h]
  __int64 v107; // [rsp+30h] [rbp-E8h]
  unsigned int v108; // [rsp+30h] [rbp-E8h]
  __int64 v109; // [rsp+30h] [rbp-E8h]
  __int64 v110; // [rsp+30h] [rbp-E8h]
  __int64 v111; // [rsp+30h] [rbp-E8h]
  __int64 v112; // [rsp+30h] [rbp-E8h]
  __int64 v113; // [rsp+30h] [rbp-E8h]
  __int64 v114; // [rsp+30h] [rbp-E8h]
  char n; // [rsp+38h] [rbp-E0h]
  size_t na; // [rsp+38h] [rbp-E0h]
  int nb; // [rsp+38h] [rbp-E0h]
  unsigned int nd; // [rsp+38h] [rbp-E0h]
  int nc; // [rsp+38h] [rbp-E0h]
  const char *v120; // [rsp+40h] [rbp-D8h]
  int v121; // [rsp+40h] [rbp-D8h]
  unsigned int v122; // [rsp+48h] [rbp-D0h]
  int v123; // [rsp+4Ch] [rbp-CCh]
  const char *src; // [rsp+50h] [rbp-C8h]
  const char *v125; // [rsp+58h] [rbp-C0h]
  unsigned int v126; // [rsp+68h] [rbp-B0h] BYREF
  int v127; // [rsp+6Ch] [rbp-ACh] BYREF
  _DWORD v128[26]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v129; // [rsp+D8h] [rbp-40h]

  v6 = a6 & 0x100;
  v7 = (const char *)a2;
  v8 = a6;
  v129 = __readfsqword(0x28u);
  v99 = a5;
  if ( a2 )
  {
    v9 = *(_BYTE *)a2;
    v10 = ":memory:";
    v11 = 9;
    v12 = *(_BYTE *)a2 == 0;
    v13 = v12;
    do
    {
      if ( !v11 )
        break;
      v12 = *(_BYTE *)a2++ == *v10++;
      --v11;
    }
    while ( v12 );
    if ( v12 )
    {
LABEL_46:
      v99 = a5 | 2;
      v12 = v6 == 0;
      v6 = 1;
      if ( v12 )
        goto LABEL_47;
      goto LABEL_99;
    }
    v13 = 0;
    if ( v9 )
      goto LABEL_7;
  }
  v13 = 1;
  if ( *(_BYTE *)(a3 + 102) == 2 )
    goto LABEL_46;
LABEL_7:
  if ( (a6 & 0x80u) != 0 )
    goto LABEL_46;
  if ( (a6 & 0x100) == 0 )
    goto LABEL_47;
  if ( !v13 )
  {
    v14 = sub_D2260(0x48u, a2);
    if ( v14 )
    {
      v14[16] = 0;
      v6 = 0;
      *((_QWORD *)v14 + 6) = v14;
      *((_DWORD *)v14 + 14) = 1;
      *(_QWORD *)v14 = a3;
      goto LABEL_12;
    }
    return 7;
  }
  v6 = 0;
LABEL_99:
  BYTE1(v8) = BYTE1(a6) & 0xFC | 2;
LABEL_47:
  v32 = sub_D2260(0x48u, a2);
  v14 = v32;
  if ( !v32 )
    return 7;
  *((_BYTE *)v32 + 16) = 0;
  v32[6] = v32;
  *((_DWORD *)v32 + 14) = 1;
  v100 = 0;
  *v32 = a3;
  if ( v13 )
    goto LABEL_49;
  if ( !v6 )
  {
LABEL_12:
    if ( (v8 & 0x20000) != 0 )
      goto LABEL_13;
LABEL_103:
    v100 = 0;
    goto LABEL_49;
  }
  if ( (v8 & 0x40) == 0 )
    goto LABEL_49;
  if ( (v8 & 0x20000) == 0 )
    goto LABEL_103;
LABEL_13:
  v15 = 1;
  if ( v7 )
    v15 = (strlen(v7) & 0x3FFFFFFF) + 1;
  v16 = v15;
  v17 = *(_DWORD *)(a1 + 8) + 1;
  if ( v17 >= v15 )
    v16 = *(_DWORD *)(a1 + 8) + 1;
  s1 = (char *)sub_D1E10(v16, a2);
  v14[17] = 1;
  if ( !s1 )
  {
    sub_C91C0((__int64)v14, a2);
    return 7;
  }
  if ( v6 )
  {
    a2 = (__int64)v7;
    memcpy(s1, v7, v15);
  }
  else
  {
    a2 = (__int64)v7;
    *s1 = 0;
    v18 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, char *))(a1 + 64))(a1, v7, (unsigned int)v17, s1);
    if ( (v18 & 0xFFFFFDFF) != 0 )
    {
      sub_C91C0((__int64)s1, (__int64)v7);
      sub_C91C0((__int64)v14, (__int64)v7);
      return v18;
    }
  }
  if ( !(_BYTE)word_241484 )
  {
    v100 = 0;
    goto LABEL_152;
  }
  v19 = xmmword_2414F0(4);
  v100 = v19;
  if ( v19 )
    xmmword_241500(v19);
  if ( !(_BYTE)word_241484 )
  {
LABEL_152:
    v21 = (char *)qword_242190;
    v107 = 0;
    if ( !qword_242190 )
    {
LABEL_153:
      sub_C91C0((__int64)s1, a2);
      goto LABEL_49;
    }
LABEL_26:
    v120 = v7;
    v22 = v21;
    n = v6;
    while ( 1 )
    {
      v23 = *(_QWORD **)v22;
      a2 = *(_QWORD *)(*(_QWORD *)v22 + 216LL);
      if ( !strcmp(s1, (const char *)a2) && a1 == *v23 )
        break;
      v22 = *((char **)v22 + 14);
      if ( !v22 )
      {
        LOBYTE(v6) = n;
        v21 = nullptr;
        v7 = v120;
        if ( !v107 )
          goto LABEL_153;
        goto LABEL_31;
      }
    }
    LOBYTE(v6) = n;
    v21 = v22;
    v7 = v120;
    nd = *(_DWORD *)(a3 + 40);
    a2 = nd;
    v20 = nd - 1;
    if ( (int)(nd - 1) >= 0 )
    {
      a2 = *(_QWORD *)(a3 + 32);
      v78 = 32LL * (int)v20;
      v79 = (__int64 *)(a2 + v78 + 8);
      v80 = a2 + v78 - 24 - 32LL * (unsigned int)v20;
      while ( 1 )
      {
        v20 = *v79;
        if ( *v79 )
        {
          if ( *(char **)(v20 + 8) == v21 )
            break;
        }
        v79 -= 4;
        if ( (__int64 *)v80 == v79 )
          goto LABEL_132;
      }
      if ( v107 )
        xmmword_241510(v107, a2, v20);
      if ( v100 )
        xmmword_241510(v100, a2, v20);
      v18 = 19;
      sub_C91C0((__int64)s1, a2);
      sub_C91C0((__int64)v14, a2);
      return v18;
    }
LABEL_132:
    *((_QWORD *)v14 + 1) = v21;
    ++*((_DWORD *)v21 + 26);
    if ( v107 )
      goto LABEL_31;
    sub_C91C0((__int64)s1, a2);
LABEL_32:
    if ( v14[17] )
      goto LABEL_33;
    goto LABEL_38;
  }
  v107 = xmmword_2414F0(2);
  if ( !v107 )
  {
    v21 = (char *)qword_242190;
    if ( !qword_242190 )
      goto LABEL_153;
    goto LABEL_26;
  }
  xmmword_241500(v107);
  v21 = (char *)qword_242190;
  if ( qword_242190 )
    goto LABEL_26;
LABEL_31:
  xmmword_241510(v107, a2, v20);
  sub_C91C0((__int64)s1, a2);
  if ( v21 )
    goto LABEL_32;
LABEL_49:
  v21 = (char *)sub_D2260(0x98u, a2);
  if ( v21 )
  {
    v33 = 80;
    v126 = 4096;
    if ( *(int *)(a1 + 4) >= 80 )
      v33 = *(_DWORD *)(a1 + 4);
    *(_QWORD *)v21 = 0;
    v34 = v99 & 2;
    v108 = (v33 + 7) & 0xFFFFFFF8;
    if ( (v99 & 2) != 0 )
    {
      if ( !v7 )
      {
        v125 = nullptr;
        src = nullptr;
        v35 = 414;
        na = 1;
        v36 = 0;
        v123 = 1;
        v34 = 0;
        s1a = nullptr;
        goto LABEL_56;
      }
      if ( !*v7 )
      {
        v125 = v7;
        v35 = 414;
        na = 1;
        v36 = 0;
        v123 = 1;
        src = nullptr;
        v34 = 0;
        s1a = nullptr;
        goto LABEL_56;
      }
      a2 = (__int64)v7;
      v92 = sub_DC720(0, v7);
      s1a = (char *)v92;
      if ( v92 )
      {
        na = 1;
        v123 = 1;
        v34 = strlen((const char *)v92) & 0x3FFFFFFF;
        v125 = nullptr;
        src = nullptr;
        v36 = v34;
        v35 = 3LL * v34 + 414;
        goto LABEL_56;
      }
    }
    else
    {
      if ( !v7 )
      {
        v123 = 0;
        v125 = nullptr;
        v35 = 414;
        src = nullptr;
        na = 1;
        v36 = 0;
        s1a = nullptr;
        goto LABEL_56;
      }
      if ( !*v7 )
      {
        v123 = 0;
        v125 = v7;
        v35 = 414;
        na = 1;
        v36 = 0;
        src = nullptr;
        s1a = nullptr;
        goto LABEL_56;
      }
      a2 = *(unsigned int *)(a1 + 8);
      v81 = a2 + 1;
      v82 = (char *)sub_D1E10(2 * ((int)a2 + 1), a2);
      s1a = v82;
      if ( v82 )
      {
        *v82 = 0;
        a2 = (__int64)v7;
        v18 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, char *))(a1 + 64))(a1, v7, v81, v82);
        if ( v18 == 512 )
        {
          v18 = v8 & 0x1000000;
          if ( (v8 & 0x1000000) != 0 )
            v18 = 1550;
        }
        v121 = strlen(s1a);
        v83 = strlen(v7) & 0x3FFFFFFF;
        src = &v7[v83 + 1];
        if ( *src )
        {
          nc = v8;
          v84 = &v7[v83 + 1];
          do
          {
            v85 = &v84[strlen(v84) + 1];
            v84 = &v85[strlen(v85) + 1];
          }
          while ( *v84 );
          v86 = (int)v84;
          v8 = nc;
        }
        else
        {
          v86 = (int)src;
        }
        if ( v18 )
        {
          sub_C91C0((__int64)s1a, (__int64)v7);
          goto LABEL_124;
        }
        v34 = v121 & 0x3FFFFFFF;
        if ( (v121 & 0x3FFFFFFF) + 8 > *(_DWORD *)(a1 + 8) )
        {
          a2 = (__int64)"%s at line %d of [%.10s]";
          sub_E8BB0(
            0xEu,
            "%s at line %d of [%.10s]",
            "cannot open file",
            58510,
            "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          v18 = 14;
          sub_C91C0((__int64)s1a, (__int64)"%s at line %d of [%.10s]");
LABEL_124:
          if ( *(_QWORD *)v21 )
          {
            a2 = 0;
            sub_11B330(*(_QWORD *)v21, 0, v40, v38);
          }
          goto LABEL_116;
        }
        v36 = v34;
        v123 = 0;
        v125 = v7;
        na = v86 + 1 - (int)src;
        v35 = 3LL * v34 + 414;
LABEL_56:
        v122 = v34;
        a2 = v108;
        v37 = sub_D2260(v35 + na + (int)(2 * v108) + (__int64)(int)((*(_DWORD *)(a1 + 4) + 7) & 0xFFFFFFF8), v108);
        v39 = (__int64)v37;
        v40 = v122;
        if ( !v37 )
        {
          if ( s1a )
          {
            v18 = 7;
            sub_C91C0((__int64)s1a, v108);
            goto LABEL_124;
          }
          goto LABEL_150;
        }
        v37[36] = v37 + 39;
        v37[9] = v37 + 48;
        v41 = (__int64)v37 + (int)((*(_DWORD *)(a1 + 4) + 7) & 0xFFFFFFF8) + 384;
        *(_QWORD *)(v39 + 88) = v41;
        v42 = (int)v108 + v41;
        *(_QWORD *)(v39 + 80) = v42;
        v43 = (__int64 *)((int)v108 + v42);
        *v43 = v39;
        *(_QWORD *)(v39 + 216) = (char *)v43 + 12;
        if ( v122 )
        {
          v112 = v39;
          v87 = (char *)memcpy((char *)v43 + 12, s1a, v36);
          v88 = v112;
          v89 = &v87[v36 + 2];
          if ( src )
          {
            v90 = (char *)memcpy(&v87[v36 + 1], src, na);
            v88 = v112;
            v89 = &v90[na];
          }
          *(_QWORD *)(v88 + 224) = v89;
          v113 = v88;
          v91 = (char *)memcpy(v89, s1a, v36);
          *(_QWORD *)&v91[v36] = 0x6C616E72756F6A2DLL;
          *(_QWORD *)(v113 + 304) = &v91[v36 + 9];
          *(_DWORD *)((char *)memcpy(&v91[v36 + 9], s1a, v36) + v36) = 1818326829;
          v39 = v113;
          if ( s1a )
          {
            sub_C91C0((__int64)s1a, (__int64)s1a);
            v39 = v113;
          }
        }
        else
        {
          *(_QWORD *)(v39 + 224) = 0;
          *(_QWORD *)(v39 + 304) = 0;
        }
        v44 = a1;
        *(_DWORD *)(v39 + 180) = v8;
        *(_QWORD *)v39 = a1;
        if ( v125 && *v125 )
        {
          v45 = *(_QWORD *)(v39 + 216);
          v46 = *(_QWORD *)(v39 + 72);
          v102 = v39;
          v127 = 0;
          v47 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int *))(v44 + 40))(
                  v44,
                  v45,
                  v46,
                  v8 & 0x1087F7F,
                  &v127);
          v49 = v127;
          v18 = v47;
          v39 = v102;
          a2 = (unsigned __int8)v127 >> 7;
          *(_BYTE *)(v102 + 20) = (unsigned __int8)v127 >> 7;
          s1b = a2;
          if ( v47 )
            goto LABEL_121;
          v50 = **(_QWORD **)(v102 + 72);
          if ( v50 )
          {
            v51 = (*(__int64 (**)(void))(v50 + 96))();
            v39 = v102;
            LOWORD(v18) = v51;
          }
          v103 = v49 & 1;
          if ( (v49 & 1) == 0 )
          {
            v114 = v39;
            sub_CC1F0(v39);
            v39 = v114;
            v93 = *(_DWORD *)(v114 + 184);
            if ( v93 > v126 )
            {
              if ( v93 >= 0x2001 )
                v93 = 0x2000;
              v126 = v93;
            }
          }
          v52 = *(char **)(v39 + 216);
          v53 = 0;
          if ( v52 )
          {
            v109 = v39;
            v53 = sub_D4A10(v52, "nolock", 0);
            v39 = v109;
          }
          *(_BYTE *)(v39 + 17) = v53;
          v54 = v18 & 0x2000;
          if ( (v18 & 0x2000) != 0 )
            goto LABEL_178;
          v55 = *(char **)(v39 + 216);
          if ( !v55 )
            goto LABEL_71;
          v110 = v39;
          v56 = sub_D4A10(v55, "immutable", 0);
          v39 = v110;
          if ( v56 )
          {
LABEL_178:
            *(_BYTE *)(v39 + 17) = 1;
            v103 = 1;
            *(_WORD *)(v39 + 21) = 1025;
            v54 = 1;
          }
          else
          {
            v54 = v18 & 0x2000;
          }
        }
        else
        {
          *(_BYTE *)(v39 + 17) = 1;
          *(_WORD *)(v39 + 21) = 1025;
          v103 = v8 & 1;
          v54 = 1;
          s1b = 0;
        }
LABEL_71:
        a2 = (__int64)&v126;
        v111 = v39;
        nb = v54;
        v18 = sub_D2EC0(v39, (__int64)&v126, -1);
        v39 = v111;
        if ( !v18 )
        {
          v57 = *(_QWORD *)(v111 + 288);
          v58 = sub_119020;
          a2 = v126;
          *(_QWORD *)(v57 + 56) = v111;
          *(_QWORD *)(v57 + 64) = 0;
          if ( v123 )
            v58 = nullptr;
          *(_OWORD *)(v57 + 32) = 0;
          *(_QWORD *)(v57 + 48) = v58;
          *(_BYTE *)(v57 + 44) = v123 ^ 1;
          *(_OWORD *)(v57 + 16) = 0;
          *(_OWORD *)v57 = 0;
          *(_QWORD *)(v57 + 28) = 0x100000064LL;
          *(_BYTE *)(v57 + 45) = 2;
          *(_QWORD *)(v57 + 36) = 0x8800000001LL;
          v59 = sub_C3060(v57, a2);
          v60 = v59;
          v39 = v111;
          if ( !v59 )
          {
            *(_DWORD *)(v111 + 188) = 0x3FFFFFFF;
            *(_BYTE *)(v111 + 16) = nb;
            *(_BYTE *)(v111 + 8) = nb;
            *(_BYTE *)(v111 + 23) = nb;
            *(_BYTE *)(v111 + 11) = nb;
            *(_BYTE *)(v111 + 10) = (v99 & 1) == 0;
            *(_BYTE *)(v111 + 19) = v123;
            *(_BYTE *)(v111 + 18) = v103;
            if ( !nb )
              *(_DWORD *)(v111 + 12) = 167903233;
            *(_QWORD *)(v111 + 208) = -1;
            *(_WORD *)(v111 + 176) = 136;
            sub_CC1F0(v111);
            if ( (v99 & 1) != 0 )
            {
              *(_BYTE *)(v111 + 9) = 2;
            }
            else if ( s1b | v123 )
            {
              *(_BYTE *)(v111 + 9) = 4;
            }
            v61 = *(_DWORD *)(v111 + 48);
            *(_QWORD *)(v111 + 264) = sub_EBCE0;
            if ( v61 )
            {
              *(_QWORD *)(v111 + 272) = sub_C3690;
            }
            else if ( *(_BYTE *)(v111 + 27) )
            {
              *(_QWORD *)(v111 + 272) = sub_10F6E0;
            }
            else
            {
              *(_QWORD *)(v111 + 272) = sub_10F3A0;
            }
            *(_QWORD *)v21 = v111;
            *(_QWORD *)(v111 + 160) = *(_QWORD *)(a3 + 64);
            sub_C34F0(v111);
            a2 = (__int64)v128;
            v62 = *(_QWORD *)v21;
            memset(v128, 0, 100);
            v63 = *(_QWORD *)(v62 + 72);
            if ( *(_QWORD *)v63 )
            {
              v64 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD, double))(*(_QWORD *)v63 + 16LL))(
                      v63,
                      v128,
                      100,
                      0,
                      0.0);
              v18 = v64;
              if ( v64 != 522 )
              {
                if ( v64 )
                  goto LABEL_124;
              }
            }
            v21[32] = v99;
            *((_QWORD *)v21 + 1) = a3;
            v65 = *(_QWORD *)v21;
            v66 = *(_QWORD *)(*(_QWORD *)v21 + 72LL);
            *(_QWORD *)(v65 + 232) = sub_C3C00;
            *(_QWORD *)(v65 + 240) = v21;
            if ( *(_QWORD *)v66 )
              (*(void (__fastcall **)(__int64, __int64, __int64, double))(*(_QWORD *)v66 + 80LL))(
                v66,
                15,
                v65 + 232,
                0.0);
            *((_QWORD *)v14 + 1) = v21;
            v67 = *(_QWORD *)v21;
            *((_QWORD *)v21 + 2) = 0;
            *((_QWORD *)v21 + 3) = 0;
            if ( *(_BYTE *)(v67 + 18) )
              *((_WORD *)v21 + 20) |= 1u;
            v68 = (BYTE1(v128[4]) << 16) | (LOBYTE(v128[4]) << 8);
            *((_DWORD *)v21 + 13) = v68;
            if ( (unsigned int)(v68 - 512) > 0xFE00 || (v68 & (v68 - 1)) != 0 )
            {
              *((_DWORD *)v21 + 13) = 0;
              if ( !v7 || (_BYTE)v6 )
              {
                v69 = 0;
              }
              else
              {
                v69 = 0;
                *(_WORD *)(v21 + 33) = 0;
              }
            }
            else
            {
              v60 = LOBYTE(v128[5]);
              *((_WORD *)v21 + 20) |= 2u;
              v69 = v60;
              v21[33] = v128[13] != 0;
              v21[34] = v128[16] != 0;
            }
            a2 = (__int64)(v21 + 52);
            v18 = sub_D2EC0(v67, (__int64)(v21 + 52), v60);
            if ( v18 )
              goto LABEL_124;
            v70 = *((_DWORD *)v21 + 13);
            *((_DWORD *)v21 + 26) = 1;
            *((_DWORD *)v21 + 14) = v70 - v69;
            if ( !v14[17] )
              goto LABEL_38;
            if ( !(_BYTE)word_241484 )
              goto LABEL_186;
            v71 = xmmword_2414F0(2);
            if ( !(_BYTE)word_241484 || (v72 = xmmword_2414F0(0), (*((_QWORD *)v21 + 11) = v72) != 0) )
            {
              if ( v71 )
              {
                xmmword_241500(v71);
                v73 = qword_242190;
                qword_242190 = (__int64)v21;
                *((_QWORD *)v21 + 14) = v73;
                xmmword_241510(v71, a2, v74);
                goto LABEL_32;
              }
LABEL_186:
              v94 = qword_242190;
              qword_242190 = (__int64)v21;
              *((_QWORD *)v21 + 14) = v94;
              if ( v14[17] )
              {
LABEL_33:
                v24 = *(_DWORD *)(a3 + 40);
                if ( v24 > 0 )
                {
                  v25 = *(_QWORD *)(a3 + 32);
                  v26 = (__int64 *)(v25 + 8);
                  v27 = v25 + 32LL * (unsigned int)(v24 - 1) + 40;
                  while ( 1 )
                  {
                    v28 = *v26;
                    if ( *v26 )
                    {
                      if ( *(_BYTE *)(v28 + 17) )
                        break;
                    }
                    v26 += 4;
                    if ( v26 == (__int64 *)v27 )
                      goto LABEL_38;
                  }
                  while ( *(_QWORD *)(v28 + 40) )
                    v28 = *(_QWORD *)(v28 + 40);
                  v75 = *((_QWORD *)v14 + 1);
                  if ( *(_QWORD *)(v28 + 8) <= v75 )
                  {
                    while ( 1 )
                    {
                      v76 = *(_QWORD *)(v28 + 32);
                      if ( !v76 )
                      {
                        *((_QWORD *)v14 + 4) = 0;
                        *((_QWORD *)v14 + 5) = v28;
                        goto LABEL_112;
                      }
                      if ( *(_QWORD *)(v76 + 8) >= v75 )
                        break;
                      v28 = *(_QWORD *)(v28 + 32);
                    }
                    *((_QWORD *)v14 + 4) = v76;
                    *((_QWORD *)v14 + 5) = v28;
                    *(_QWORD *)(v76 + 40) = v14;
LABEL_112:
                    *(_QWORD *)(v28 + 32) = v14;
                  }
                  else
                  {
                    *((_QWORD *)v14 + 4) = v28;
                    *((_QWORD *)v14 + 5) = 0;
                    *(_QWORD *)(v28 + 40) = v14;
                  }
                }
              }
LABEL_38:
              a2 = 0;
              *a4 = v14;
              if ( !sub_DC1F0((__int64)v14, 0, 0) )
              {
                a2 = 4294965296LL;
                sub_CCE00((__int64)v14, 4294965296LL);
              }
              v30 = *(_QWORD *)(*(_QWORD *)v21 + 72LL);
              v18 = 0;
              if ( *(_QWORD *)v30 )
              {
                a2 = 30;
                (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v30 + 80LL))(v30, 30, v21 + 8);
              }
              goto LABEL_42;
            }
            goto LABEL_150;
          }
          v18 = v59;
        }
LABEL_121:
        v77 = *(_QWORD *)(v39 + 72);
        if ( *(_QWORD *)v77 )
        {
          v96 = v39;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
          v39 = v96;
          *(_QWORD *)v77 = 0;
        }
        v97 = v39;
        sub_CBC10(*(_QWORD **)(v39 + 280), a2, v48);
        sub_C91C0(v97, a2);
        goto LABEL_124;
      }
    }
LABEL_150:
    v18 = 7;
    goto LABEL_124;
  }
  v18 = 7;
LABEL_116:
  sub_C91C0((__int64)v21, a2);
  sub_C91C0((__int64)v14, a2);
  *a4 = 0;
LABEL_42:
  if ( v100 )
    xmmword_241510(v100, a2, v29);
  return v18;
}
