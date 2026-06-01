unsigned __int64 __fastcall sub_B460(__int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 v4; // rsi
  unsigned __int8 v5; // al
  _BOOL8 v6; // rcx
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  const char *v9; // r13
  char v10; // r15
  const char *v11; // rcx
  const char *v12; // r8
  char v13; // al
  const char *v14; // rcx
  const char *v15; // rcx
  const char *v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char v20; // r12
  __int16 v21; // r14
  __int16 v22; // dx
  const char *v23; // rcx
  __int16 v24; // ax
  const char *v25; // rbx
  const char *v26; // rbx
  const char *v27; // rbx
  const char *v28; // rcx
  const char *v29; // rcx
  __int64 v30; // rax
  const char *v31; // rcx
  const char *v32; // rbx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int16 v36; // r15
  __int64 v37; // rax
  unsigned __int16 v38; // r13
  int v39; // r12d
  int v40; // eax
  const char *v41; // rbx
  int v42; // r15d
  unsigned __int8 v43; // al
  __int64 v44; // rax
  __int64 v45; // rdi
  int v46; // ecx
  __int64 v47; // rdx
  _BOOL8 v48; // rcx
  char v49; // r14
  char v50; // al
  const char *v51; // r14
  _BYTE *v52; // rsi
  int v53; // eax
  __m128i v54; // xmm0
  unsigned __int8 v55; // al
  size_t v56; // rax
  __int64 v57; // r14
  size_t v58; // r15
  size_t v59; // r8
  _BYTE *v60; // rsi
  size_t v61; // rdx
  unsigned __int16 v62; // ax
  int *v63; // rdx
  int *v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned __int16 v68; // ax
  char v69; // r12
  const char *v70; // rax
  const char *v71; // r14
  unsigned __int64 v72; // rax
  char v73; // r13
  const char *v74; // rax
  const char *v75; // r12
  size_t v76; // rax
  size_t v77; // r14
  size_t v78; // r15
  void *v79; // rdx
  const char *v80; // rax
  const char *v81; // r12
  size_t v82; // rax
  size_t v83; // r14
  size_t v84; // r15
  const char *v85; // r15
  size_t v86; // rax
  size_t v87; // r12
  unsigned __int64 v88; // rax
  unsigned __int16 v89; // ax
  const char *v90; // r14
  const char *v91; // rbx
  const char *v92; // rcx
  const char *v93; // rbx
  const char *v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdi
  unsigned __int16 v98; // dx
  size_t v99; // r14
  void *v100; // r15
  char *v101; // rax
  const char *v102; // rax
  const char *v103; // r14
  size_t v104; // rax
  size_t v105; // r12
  size_t v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rdi
  unsigned __int16 v110; // dx
  size_t v111; // [rsp+8h] [rbp-118h]
  size_t v112; // [rsp+10h] [rbp-110h]
  char *s; // [rsp+18h] [rbp-108h]
  char v114; // [rsp+2Fh] [rbp-F1h] BYREF
  _BYTE *v115; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v116; // [rsp+38h] [rbp-E8h]
  const char *v117; // [rsp+50h] [rbp-D0h] BYREF
  __int128 v118; // [rsp+58h] [rbp-C8h]
  void *v119; // [rsp+70h] [rbp-B0h] BYREF
  __int128 v120; // [rsp+78h] [rbp-A8h]
  void *dest; // [rsp+90h] [rbp-90h] BYREF
  __int128 v122; // [rsp+98h] [rbp-88h]
  const char *v123; // [rsp+B0h] [rbp-70h] BYREF
  __int128 v124; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v125; // [rsp+D0h] [rbp-50h] BYREF
  __int128 v126; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v127; // [rsp+E8h] [rbp-38h]

  v127 = __readfsqword(0x28u);
  v1 = a1[6];
  if ( v1 < a1[1] )
  {
    a1[6] = v1 + 1;
    v116 = 0;
    v115 = nullptr;
    v115 = (_BYTE *)qvector_reserve(&v115, 0, 1, 1);
    v4 = -1;
    *(_QWORD *)&v116 = 1;
    *v115 = 0;
    v117 = nullptr;
    v118 = 0;
    v5 = sub_5EE0((__int64)a1, -1);
    if ( v5 > 0x9Au )
    {
      v7 = (unsigned __int8)(v5 + 101);
      switch ( v5 )
      {
        case 0x9B:
          v50 = 3;
          v51 = "Watcom parameters: ";
          goto LABEL_91;
        case 0x9C:
        case 0xA5:
        case 0xA8:
        case 0xA9:
        case 0xAB:
        case 0xAC:
        case 0xAD:
        case 0xAE:
        case 0xAF:
        case 0xB0:
        case 0xB1:
        case 0xB2:
        case 0xB3:
        case 0xB4:
        case 0xB5:
        case 0xB6:
        case 0xB7:
        case 0xB8:
        case 0xB9:
        case 0xBA:
        case 0xBB:
        case 0xBC:
        case 0xBD:
        case 0xBE:
        case 0xBF:
        case 0xC0:
        case 0xC1:
        case 0xC2:
        case 0xC3:
        case 0xC4:
        case 0xC5:
        case 0xC6:
        case 0xC7:
        case 0xC8:
        case 0xC9:
        case 0xCA:
        case 0xCB:
        case 0xCC:
        case 0xCD:
        case 0xCE:
        case 0xCF:
        case 0xD0:
        case 0xD1:
        case 0xD2:
        case 0xD3:
        case 0xD4:
        case 0xD5:
        case 0xD6:
        case 0xD7:
        case 0xD8:
        case 0xD9:
        case 0xDE:
        case 0xE0:
        case 0xE1:
        case 0xE2:
        case 0xE3:
        case 0xE4:
        case 0xE5:
        case 0xE6:
        case 0xE7:
        case 0xE8:
        case 0xEB:
        case 0xEC:
        case 0xED:
        case 0xEE:
        case 0xEF:
        case 0xF0:
        case 0xF1:
        case 0xF2:
        case 0xF3:
        case 0xF4:
        case 0xF5:
        case 0xF6:
        case 0xF7:
        case 0xF8:
        case 0xFC:
        case 0xFD:
        case 0xFE:
          goto LABEL_11;
        case 0x9D:
          v50 = 1;
          v51 = "MS parameters    : ";
LABEL_91:
          byte_145B2 = v50;
          v52 = v115;
          if ( *((_QWORD *)&v116 + 1) <= 0x13u )
          {
            v115 = (_BYTE *)qvector_reserve(&v115, v115, 20, 1);
            v52 = v115;
          }
          v53 = *(_DWORD *)(v51 + 15);
          v54 = _mm_loadu_si128((const __m128i *)v51);
          *(_QWORD *)&v116 = 20;
          *(__m128i *)v52 = v54;
          *(_DWORD *)(v52 + 15) = v53;
          v115[19] = 0;
          while ( a1[6] < (unsigned __int64)a1[1] )
          {
            v55 = sub_5EE0((__int64)a1, -1);
            s = (char *)strarray(&unk_13BA0, 17, v55);
            if ( !*s )
              break;
            if ( !s )
              continue;
            v56 = strlen(s);
            v57 = v116;
            v58 = v56;
            v59 = v56;
            if ( (_QWORD)v116 )
            {
              v57 = v116 - 1;
              v59 = v56 + v116 - 1;
            }
            v60 = v115;
            v61 = v59 + 1;
            if ( *((_QWORD *)&v116 + 1) < v59 + 1 )
            {
              v111 = v59;
              v112 = v59 + 1;
              v115 = (_BYTE *)qvector_reserve(&v115, v115, v61, 1);
              v59 = v111;
              v60 = v115;
              v61 = v112;
            }
            *(_QWORD *)&v116 = v61;
            v60[v59] = 0;
            memmove(&v115[v57], s, v58);
          }
LABEL_8:
          v14 = src;
          if ( (_QWORD)v116 )
            v14 = v115;
          sub_4EF0(qword_145D0, 1u, (__int64)"%s", v14);
          goto LABEL_11;
        case 0x9E:
          sub_4EF0(qword_145D0, 1u, (__int64)"DOSSEG directive : Yes");
          goto LABEL_11;
        case 0x9F:
          sub_73D0((__int64)a1, (__int64)&v115, -1);
          v16 = src;
          if ( (_QWORD)v116 )
            v16 = v115;
          if ( !(unsigned __int8)is_valid_utf8(v16)
            && (unsigned __int8)idb_utf8(&v117, v16, 0xFFFFFFFFLL, 0)
            && (unsigned __int64)v118 > 1 )
          {
            v16 = v117;
          }
          sub_4EF0(qword_145D0, 1u, (__int64)"includelib \"%s\"", v16);
          goto LABEL_11;
        case 0xA0:
          v17 = sub_5EE0((__int64)a1, -1);
          switch ( v17 )
          {
            case 1u:
              v73 = sub_5EE0((__int64)a1, -1);
              v74 = sub_7530((__int64)a1, 0xFFFFFFFFFFFFFFFFLL);
              v75 = v74;
              v119 = nullptr;
              v120 = 0;
              if ( !v74 )
                goto LABEL_11;
              v76 = strlen(v74);
              v77 = v76 + 1;
              v78 = v76;
              v119 = (void *)qvector_reserve(&v119, 0, v76 + 1, 1);
              *(_QWORD *)&v120 = v77;
              memmove(v119, v75, v78);
              *((_BYTE *)v119 + v78) = 0;
              v79 = v119;
              if ( (unsigned __int64)v120 <= 1 )
                goto LABEL_145;
              netnode_supset(qword_144F8, dword_144F0, v119, 0, 49);
              v80 = sub_7530((__int64)a1, 0xFFFFFFFFFFFFFFFFLL);
              v81 = v80;
              dest = nullptr;
              v122 = 0;
              if ( v80 )
              {
                v82 = strlen(v80);
                v83 = v82 + 1;
                v84 = v82;
                dest = (void *)qvector_reserve(&dest, 0, v82 + 1, 1);
                *(_QWORD *)&v122 = v83;
                memmove(dest, v81, v84);
                *((_BYTE *)dest + v84) = 0;
              }
              v123 = nullptr;
              v124 = 0;
              v85 = src;
              if ( (_QWORD)v122 )
                v85 = (const char *)dest;
              if ( !(unsigned __int8)is_valid_utf8(v85)
                && (unsigned __int8)idb_utf8(&v123, v85, 0xFFFFFFFFLL, 0)
                && (unsigned __int64)v124 > 1 )
              {
                v85 = v123;
              }
              if ( v85 && (v86 = strlen(v85), (v87 = v86) != 0) )
              {
                v99 = v86 + 1;
                if ( *((_QWORD *)&v122 + 1) < v86 + 1 )
                  dest = (void *)qvector_reserve(&dest, dest, v86 + 1, 1);
                *(_QWORD *)&v122 = v99;
                memmove(dest, v85, v87);
                *((_BYTE *)dest + v87) = 0;
                if ( (unsigned __int64)v122 > 1 )
                {
                  v100 = dest;
                  v101 = strrchr((const char *)dest, 46);
                  if ( v101 )
                  {
                    *v101 = 0;
                    v100 = dest;
                  }
                  netnode_supset(qword_144F8, dword_144F0, v100, 0, 50);
                  if ( v73 )
                  {
                    sub_5890((__int64)a1, -1, 2);
                    v107 = a1[6];
                    v108 = dword_144F0;
                    v109 = qword_144F8;
                    v110 = *(_WORD *)(*a1 + v107);
                    a1[6] = v107 + 2;
                    v125 = v110;
                    netnode_supset(v109, v108, &v125, 8, 65);
                    if ( v73 == 115 )
                    {
                      v114 = 68;
                      netnode_supset(qword_144F8, dword_144F0, &v114, 1, 68);
                    }
                  }
                  else
                  {
                    v102 = sub_7530((__int64)a1, 0xFFFFFFFFFFFFFFFFLL);
                    v125 = 0;
                    v126 = 0;
                    if ( v102 )
                    {
                      v103 = v102;
                      v104 = strlen(v102);
                      v105 = v104 + 1;
                      v106 = v104;
                      v125 = qvector_reserve(&v125, 0, v104 + 1, 1);
                      *(_QWORD *)&v126 = v105;
                      memmove((void *)v125, v103, v106);
                      *(_BYTE *)(v125 + v106) = 0;
                      if ( (unsigned __int64)v126 > 1 )
                        netnode_supset(qword_144F8, dword_144F0, v125, 0, 51);
                    }
                    dword_145C4 = -1;
                    if ( v125 )
                    {
                      *(_QWORD *)&v126 = 0;
                      qfree(v125);
                    }
                  }
                  ++dword_144F0;
                  if ( v123 )
                  {
                    *(_QWORD *)&v124 = 0;
                    qfree(v123);
                  }
                  if ( dest )
                  {
                    *(_QWORD *)&v122 = 0;
                    qfree(dest);
                  }
                  if ( v119 )
                  {
                    *(_QWORD *)&v120 = 0;
                    qfree(v119);
                  }
                  goto LABEL_11;
                }
              }
              else
              {
                *(_QWORD *)&v122 = 0;
              }
              if ( v123 )
              {
                *(_QWORD *)&v124 = 0;
                qfree(v123);
              }
              if ( dest )
              {
                *(_QWORD *)&v122 = 0;
                qfree(dest);
              }
              v79 = v119;
LABEL_145:
              if ( v79 )
              {
                *(_QWORD *)&v120 = 0;
                qfree(v79);
              }
              break;
            case 2u:
              v125 = (unsigned __int8)sub_5EE0((__int64)a1, -1);
              v69 = v125;
              netnode_supset(qword_144E8, dword_144E0, &v125, 8, 50);
              v70 = sub_7530((__int64)a1, 0xFFFFFFFFFFFFFFFFLL);
              v125 = 0;
              v71 = v70;
              v126 = 0;
              if ( !(unsigned __int8)is_valid_utf8(v70)
                && (unsigned __int8)idb_utf8(&v125, v71, 0xFFFFFFFFLL, 0)
                && (unsigned __int64)v126 > 1 )
              {
                v71 = (const char *)v125;
              }
              netnode_supset(qword_144E8, dword_144E0, v71, 0, 49);
              v72 = a1[6];
              if ( v72 >= a1[1] || *(_BYTE *)(*a1 + v72) )
                v71 = sub_7530((__int64)a1, 0xFFFFFFFFFFFFFFFFLL);
              else
                a1[6] = v72 + 1;
              netnode_supset(qword_144E8, dword_144E0, v71, 0, 52);
              if ( (v69 & 1) != 0 )
              {
                sub_5890((__int64)a1, -1, 2);
                v95 = a1[6];
                v96 = dword_144E0;
                v97 = qword_144E8;
                v98 = *(_WORD *)(*a1 + v95);
                a1[6] = v95 + 2;
                v123 = (const char *)v98;
                netnode_supset(v97, v96, &v123, 8, 51);
              }
              if ( v125 )
              {
                *(_QWORD *)&v126 = 0;
                qfree(v125);
              }
              goto LABEL_11;
            case 3u:
              sub_5C80(a1);
              goto LABEL_11;
            case 4u:
              sub_4EF0(qword_145D0, 1u, (__int64)"_loaddds used    : Yes, create protected mode library");
              goto LABEL_11;
            case 5u:
              sub_5F40((__int64)a1);
              goto LABEL_11;
            case 6u:
              sub_4EF0(qword_145D0, 1u, (__int64)"Big endian       : Yes");
              goto LABEL_11;
            case 7u:
              goto LABEL_11;
            default:
              if ( (int)sub_5150(0xFFFFFFFF, (__int64)&unk_103E0, v17, qword_145E0) <= 0 )
                sub_5230(0);
              goto LABEL_11;
          }
          goto LABEL_11;
        case 0xA1:
          v18 = a1[6];
          v19 = a1[1];
          if ( v18 < v19 && v19 - v18 > 2 )
          {
            v20 = sub_5EE0((__int64)a1, -1);
            v21 = sub_5EE0((__int64)a1, -1);
            v22 = (unsigned __int8)sub_5EE0((__int64)a1, -1);
            v23 = "Unknown";
            if ( v20 == 1 )
            {
              v23 = "IBM PM";
              v24 = v22 | (v21 << 8);
              if ( v24 != 18508 )
              {
                if ( (__int16)(v22 | (v21 << 8)) > 18508 )
                {
                  v23 = "Unknown";
                  if ( v24 == 21572 )
                    v23 = "Turbo Debugger";
                }
                else
                {
                  v23 = "CodeView";
                  if ( v24 != 17238 )
                  {
                    v23 = "Unknown";
                    if ( v24 == 17496 )
                      v23 = "AIX";
                  }
                }
              }
            }
            sub_4EF0(qword_145D0, 1u, (__int64)"Debug info type  : %s", v23);
          }
          goto LABEL_11;
        case 0xA2:
          if ( v117 )
          {
            *(_QWORD *)&v118 = 0;
            qfree(v117);
          }
          if ( v115 )
          {
            *(_QWORD *)&v116 = 0;
            qfree(v115);
          }
          return v127 - __readfsqword(0x28u);
        case 0xA3:
          v25 = sub_7530((__int64)a1, 0xFFFFFFFFFFFFFFFFLL);
          if ( !(unsigned __int8)is_valid_utf8(v25)
            && (unsigned __int8)idb_utf8(&v117, v25, 0xFFFFFFFFLL, 0)
            && (unsigned __int64)v118 > 1 )
          {
            v25 = v117;
          }
          sub_4EF0(qword_145D0, 1u, (__int64)"Library module   : %s", v25);
          goto LABEL_11;
        case 0xA4:
          sub_73D0((__int64)a1, (__int64)&v115, -1);
          v26 = src;
          if ( (_QWORD)v116 )
            v26 = v115;
          if ( !(unsigned __int8)is_valid_utf8(v26)
            && (unsigned __int8)idb_utf8(&v117, v26, 0xFFFFFFFFLL, 0)
            && (unsigned __int64)v118 > 1 )
          {
            v26 = v117;
          }
          sub_4EF0(qword_145D0, 1u, (__int64)"EXESTR           : %s", v26);
          goto LABEL_11;
        case 0xA6:
          sub_5080((__int64)"!!! Object file has an incremental compilation error record !!!");
          sub_4EF0(qword_145D0, 1u, (__int64)"!!! Object file has an incremental compilation error record !!!");
          goto LABEL_11;
        case 0xA7:
          while ( 2 )
          {
            if ( a1[6] >= (unsigned __int64)a1[1] )
              goto LABEL_11;
            v62 = sub_6A10((__int64)a1, v4, v7, v6);
            v63 = (int *)qword_14550;
            if ( qword_14550 )
            {
              v64 = &dword_14548;
              do
              {
                while ( 1 )
                {
                  v65 = *((_QWORD *)v63 + 2);
                  v66 = *((_QWORD *)v63 + 3);
                  if ( *((_QWORD *)v63 + 4) < (unsigned __int64)v62 )
                    break;
                  v64 = v63;
                  v63 = *((int **)v63 + 2);
                  if ( !v65 )
                    goto LABEL_110;
                }
                v63 = *((int **)v63 + 3);
              }
              while ( v66 );
LABEL_110:
              v67 = -1;
              if ( v64 != &dword_14548 && (unsigned __int64)v62 >= *((_QWORD *)v64 + 4) )
                v67 = *((_QWORD *)v64 + 5);
            }
            else
            {
              v67 = -1;
            }
            v4 = 1;
            sub_4EF0(
              v67,
              1u,
              (__int64)"                 This segment won't be padded even if\n"
                       "           /PADDATA or /PADCODE linker directives are used.");
            continue;
          }
        case 0xAA:
          sub_4EF0(qword_145D0, 1u, (__int64)"Pharlap format   : Yes");
          dword_145C8 = 2;
          setinf_flag(3, 4, 0);
          setinf_flag(3, 2, 1);
          goto LABEL_11;
        case 0xDA:
          sub_73D0((__int64)a1, (__int64)&v115, -1);
          v27 = src;
          if ( (_QWORD)v116 )
            v27 = v115;
          if ( !(unsigned __int8)is_valid_utf8(v27)
            && (unsigned __int8)idb_utf8(&v117, v27, 0xFFFFFFFFLL, 0)
            && (unsigned __int64)v118 > 1 )
          {
            v27 = v117;
          }
          sub_4EF0(qword_145D0, 1u, (__int64)"Comment          : %s", v27);
          goto LABEL_11;
        case 0xDB:
          sub_73D0((__int64)a1, (__int64)&v115, -1);
          v28 = src;
          if ( (_QWORD)v116 )
            v28 = v115;
          sub_4EF0(qword_145D0, 1u, (__int64)"Compiler         : %s", v28);
          goto LABEL_11;
        case 0xDC:
          sub_73D0((__int64)a1, (__int64)&v115, -1);
          v29 = src;
          if ( (_QWORD)v116 )
            v29 = v115;
          sub_4EF0(qword_145D0, 1u, (__int64)"Date stamp       : %s", v29);
          goto LABEL_11;
        case 0xDD:
          sub_5890((__int64)a1, -1, 1);
          v30 = a1[6];
          if ( *(_BYTE *)(*a1 + v30) == 16 )
          {
            a1[6] = v30 + 1;
            sub_73D0((__int64)a1, (__int64)&v115, -1);
            v94 = src;
            if ( (_QWORD)v116 )
              v94 = v115;
            sub_4EF0(qword_145D0, 1u, (__int64)"Phoenix timestamp: %s", v94);
          }
          else
          {
            sub_73D0((__int64)a1, (__int64)&v115, -1);
            v31 = src;
            if ( (_QWORD)v116 )
              v31 = v115;
            sub_4EF0(qword_145D0, 1u, (__int64)"Time stamp       : %s", v31);
          }
          goto LABEL_11;
        case 0xDF:
          sub_73D0((__int64)a1, (__int64)&v115, -1);
          v32 = src;
          if ( (_QWORD)v116 )
            v32 = v115;
          if ( !(unsigned __int8)is_valid_utf8(v32)
            && (unsigned __int8)idb_utf8(&v117, v32, 0xFFFFFFFFLL, 0)
            && (unsigned __int64)v118 > 1 )
          {
            v32 = v117;
          }
          sub_4EF0(qword_145D0, 1u, (__int64)"User info        : %s", v32);
          goto LABEL_11;
        case 0xE9:
          v33 = a1[6];
          v34 = a1[1];
          if ( v33 < v34 && v34 - v33 > 3 )
          {
            sub_5890((__int64)a1, -1, 2);
            v35 = a1[6];
            v36 = *(_WORD *)(*a1 + v35);
            a1[6] = v35 + 2;
            sub_5890((__int64)a1, -1, 2);
            v37 = a1[6];
            v38 = *(_WORD *)(*a1 + v37);
            a1[6] = v37 + 2;
            LODWORD(v37) = v38 >> 9;
            v39 = v37 + 80;
            v40 = v37 - 20;
            if ( v39 > 99 )
              v39 = v40;
            v41 = sub_7530((__int64)a1, 0xFFFFFFFFFFFFFFFFLL);
            if ( !(unsigned __int8)is_valid_utf8(v41)
              && (unsigned __int8)idb_utf8(&v117, v41, 0xFFFFFFFFLL, 0)
              && (unsigned __int64)v118 > 1 )
            {
              v41 = v117;
            }
            sub_4EF0(
              qword_145D0,
              1u,
              (__int64)"Dependency       : %02d.%02d.%02d %02d:%02d:%02d %s",
              v38 & 0x1F,
              (v38 >> 5) & 0xF,
              v39,
              v36 >> 11,
              (v36 >> 5) & 0x3F,
              (2 * (_BYTE)v36) & 0x3E,
              v41);
          }
          goto LABEL_11;
        case 0xEA:
          v8 = sub_5EE0((__int64)a1, -1);
          v9 = (const char *)strarray(&unk_13B20, 7, v8);
          v10 = sub_5EE0((__int64)a1, -1);
          v11 = (const char *)strarray(&unk_13A80, 10, v10 & 7);
          v12 = "with";
          if ( (v10 & 8) == 0 )
            v12 = "no";
          sub_B390((__int64 *)&v115, (__int64)"Language         : %s %s, %s underscores", v9, v11, v12);
          v13 = getinf(58, 0.0);
          setinf(58, byte_11418[v10 & 7] | v13 & 0xF0u);
          goto LABEL_8;
        case 0xF9:
          v42 = (unsigned __int8)sub_5EE0((__int64)a1, -1);
          v43 = sub_5EE0((__int64)a1, -1);
          sub_4EF0(qword_145D0, 1u, (__int64)"Borland debuginfo: version %d.%d", v43, v42);
          goto LABEL_11;
        case 0xFA:
          sub_5890((__int64)a1, -1, 4);
          v44 = a1[6];
          v45 = qword_145D0;
          v46 = *(_DWORD *)(*a1 + v44);
          a1[6] = v44 + 4;
          sub_4EF0(v45, 1u, (__int64)"Borland flags    : Optimization %08X", v46);
          goto LABEL_11;
        case 0xFB:
          v49 = sub_5EE0((__int64)a1, -1);
          switch ( v49 )
          {
            case 3:
              if ( !dword_145C4 && (unsigned __int64)a1[1] > 5 && *(_BYTE *)(*a1 + 5) == 115 )
              {
                LOBYTE(dest) = 68;
                netnode_supset(qword_144F8, dword_144F0 - 1, &dest, 1, 68);
              }
              goto LABEL_11;
            case 8:
              v90 = "link";
              goto LABEL_154;
            case 9:
              v90 = "resource";
              goto LABEL_154;
            case 10:
              v90 = "implements";
LABEL_154:
              sub_73D0((__int64)a1, (__int64)&v115, -1);
              v91 = src;
              if ( (_QWORD)v116 )
                v91 = v115;
              if ( !(unsigned __int8)is_valid_utf8(v91)
                && (unsigned __int8)idb_utf8(&v117, v91, 0xFFFFFFFFLL, 0)
                && (unsigned __int64)v118 > 1 )
              {
                v91 = v117;
              }
              sub_4EF0(qword_145D0, 1u, (__int64)"#pragma %s \"%s\"", v90, v91);
              break;
            case 11:
            case 13:
              v68 = sub_6A10((__int64)a1, -1, v47, v48);
              LOBYTE(v123) = v49;
              netnode_supset(qword_144A8, v68, &v123, 1, 68);
              break;
            case 12:
              v88 = a1[6];
              if ( v88 < a1[1] && *(_BYTE *)(*a1 + v88) == 1 )
              {
                a1[6] = v88 + 1;
                v89 = sub_69B0(a1, 0, -1);
                sub_4EF0(qword_145D0, 1u, (__int64)"Package flags    : 0x%04X", v89);
              }
              break;
            default:
              goto LABEL_11;
          }
          goto LABEL_11;
        case 0xFF:
          sub_73D0((__int64)a1, (__int64)&v115, -1);
          v15 = src;
          if ( (_QWORD)v116 )
            v15 = v115;
          sub_4EF0(qword_145D0, 1u, (__int64)"Compiler options : %s", v15);
          goto LABEL_11;
      }
    }
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        sub_5AB0(a1, (__int64)&v115);
        v92 = src;
        if ( (_QWORD)v116 )
          v92 = v115;
        sub_4EF0(qword_145D0, 1u, (__int64)"Intel copyright  : %s", v92);
      }
    }
    else if ( a1[6] < (unsigned __int64)a1[1] )
    {
      sub_5890((__int64)a1, -1, 1);
      if ( *(_BYTE *)(*a1 + a1[6]) )
      {
        sub_5AB0(a1, (__int64)&v115);
        v93 = src;
        if ( (_QWORD)v116 )
          v93 = v115;
        sub_4EF0(qword_145D0, 1u, (__int64)"Translator       : %s", v93);
        if ( stristr(v93, "borland", 0.0) )
          byte_145B2 = 2;
      }
    }
LABEL_11:
    if ( v117 )
    {
      *(_QWORD *)&v118 = 0;
      qfree(v117);
    }
    if ( v115 )
    {
      *(_QWORD *)&v116 = 0;
      qfree(v115);
    }
  }
  return v127 - __readfsqword(0x28u);
}

