__int64 __fastcall sub_164310(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        char a15)
{
  __int64 v15; // rdi
  double *v16; // rax
  double v17; // xmm0_8
  int v18; // edi
  unsigned int v19; // eax
  int *v20; // rsi
  unsigned __int64 v21; // rax
  _DWORD *v22; // r8
  unsigned __int64 *v23; // r9
  int v24; // edx
  __int16 i; // dx
  __int16 v26; // dx
  unsigned int v27; // ebp
  int *v29; // rdx
  __int64 **v30; // rax
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int16 v33; // ax
  __m128i **v34; // rdx
  unsigned int v35; // eax
  __m128i *v36; // rbx
  __int64 v37; // rdi
  unsigned __int8 **v38; // rdx
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rdx
  unsigned int v42; // ecx
  char *v43; // rax
  int v44; // eax
  char v45; // dl
  char *v46; // rdx
  __int64 v47; // rdi
  unsigned int v48; // ecx
  int **v49; // rax
  int *v50; // rax
  __int64 v51; // rax
  char *v52; // rax
  char *v53; // rax
  __int64 (__fastcall *v54)(_QWORD); // rax
  __int64 v55; // rax
  __int64 (__fastcall *v56)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  char *v57; // rdx
  __int64 (__fastcall *v58)(_QWORD, _QWORD); // rdx
  int *v59; // rax
  __int64 v60; // rsi
  int v61; // eax
  char *v62; // rdx
  __int64 v63; // rdx
  int v64; // edx
  unsigned int v65; // ecx
  __int64 v66; // rsi
  int v67; // ebx
  char *v68; // rax
  __int64 v69; // rbp
  unsigned int *v70; // rax
  unsigned int *v71; // r12
  int v72; // edi
  size_t v73; // rdi
  char *v74; // r14
  int v75; // r15d
  __int64 v76; // rax
  __int64 v77; // rax
  char *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  char *v81; // rdx
  unsigned __int64 v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // rax
  unsigned int v85; // r14d
  __int64 v86; // r13
  int *v87; // rdx
  int v88; // eax
  int v89; // edx
  _DWORD *v90; // rcx
  int v91; // edx
  bool v92; // cc
  int v93; // eax
  int v94; // eax
  int v95; // edx
  char *v96; // rax
  int v97; // eax
  _BOOL4 v98; // eax
  unsigned int v99; // ebp
  int v100; // r9d
  int v101; // r9d
  _BOOL4 v102; // eax
  int v103; // r9d
  int v104; // edi
  int v105; // ebx
  size_t v106; // rdi
  char *v107; // rax
  char *v108; // [rsp+0h] [rbp-138h]
  int *v109; // [rsp+8h] [rbp-130h]
  int v110; // [rsp+2Ch] [rbp-10Ch] BYREF
  unsigned int v111; // [rsp+30h] [rbp-108h]
  unsigned int v112; // [rsp+34h] [rbp-104h]
  char *v113; // [rsp+38h] [rbp-100h]
  char *v114; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v115; // [rsp+48h] [rbp-F0h]
  char v116; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v117; // [rsp+58h] [rbp-E0h]
  __int64 v118; // [rsp+60h] [rbp-D8h]
  __int64 v119; // [rsp+68h] [rbp-D0h]
  __int64 v120; // [rsp+70h] [rbp-C8h]
  __int64 v121; // [rsp+78h] [rbp-C0h]
  __m128 v122; // [rsp+80h] [rbp-B8h]

  v122 = a14;
  v117 = a2;
  v118 = a3;
  v119 = a4;
  v120 = a5;
  v121 = a6;
  v115 = __readfsqword(0x28u);
  v15 = (unsigned int)(a1 - 5);
  v113 = &a15;
  v111 = 8;
  v112 = 48;
  v114 = &v116;
  switch ( (int)v15 )
  {
    case 0:
      v27 = 0;
      qmemcpy(&unk_242260, byte_242380, 0x100u);
      unk_242360 = *(_WORD *)&byte_242383[253];
      byte_242362 = byte_242482;
      return v27;
    case 1:
      v27 = 0;
      qmemcpy(byte_242380, &unk_242260, 0x100u);
      *(_WORD *)&byte_242383[253] = unk_242360;
      byte_242482 = byte_242362;
      return v27;
    case 3:
      v65 = v111;
      v66 = v111;
      v111 += 8;
      v67 = *(_DWORD *)&v114[v65];
      if ( v111 > 0x2F )
      {
        v68 = v113;
        v113 += 8;
      }
      else
      {
        v68 = &v114[v111];
        v111 = v65 + 16;
      }
      v69 = *(_QWORD *)v68;
      v70 = (unsigned int *)sub_D2260(0x200u, v65);
      v71 = v70;
      if ( !v70 )
      {
        v104 = v67 + 14;
        v105 = v67 + 7;
        if ( v105 >= 0 )
          v104 = v105;
        v106 = (v104 >> 3) + 1;
        v108 = (char *)sub_D2260(v106, v66);
        if ( (unsigned int)sub_FEBD0(v106, v66) )
          goto LABEL_73;
        v109 = (int *)sub_D1E10(512, v66);
LABEL_96:
        v27 = -1;
        goto LABEL_74;
      }
      *v70 = v67;
      v72 = v67 + 14;
      if ( v67 + 7 >= 0 )
        v72 = v67 + 7;
      v73 = (v72 >> 3) + 1;
      v74 = (char *)sub_D2260(v73, v66);
      v108 = v74;
      v75 = sub_FEBD0(v73, v66);
      if ( v75 )
        goto LABEL_73;
      v83 = 512;
      v84 = sub_D1E10(512, v66);
      v109 = (int *)v84;
      if ( !v74 )
        goto LABEL_96;
      if ( !v84 )
      {
LABEL_73:
        v109 = nullptr;
        v27 = -1;
        goto LABEL_74;
      }
      v110 = 0;
      while ( 1 )
      {
        v85 = *(_DWORD *)(v69 + 4LL * v75);
        v86 = 4LL * v75;
        if ( !v85 )
          break;
        if ( v85 <= 5 && ((1LL << v85) & 0x26) != 0 )
        {
          v87 = (int *)(v69 + v86 + 8);
          v88 = *v87;
          v110 = *v87 - 1;
          *v87 = *(_DWORD *)(v69 + v86 + 12) + v88;
          v89 = 4;
        }
        else
        {
          v97 = sub_FEBD0(v83, v66);
          v89 = 2;
          if ( !v97 )
          {
            v66 = (__int64)&v110;
            v83 = 4;
            sub_FF240(4, (const char *)&v110);
            v89 = 2;
          }
        }
        v90 = (_DWORD *)(v69 + v86 + 4);
        v91 = v75 + v89;
        v92 = --*v90 <= 0;
        v93 = v110;
        if ( v92 )
          v75 = v91;
        v110 = (v110 & 0x7FFFFFFF) % v67;
        v94 = (v93 & 0x7FFFFFFF) % v67 + 1;
        v95 = 1 << (v94 & 7);
        v96 = &v108[v94 >> 3];
        if ( (v85 & 1) != 0 )
        {
          *v96 |= v95;
          if ( v85 != 5 )
          {
            v83 = (__int64)v71;
            v66 = (unsigned int)(v110 + 1);
            if ( (unsigned int)sub_D6EC0(v71, v66) )
              goto LABEL_96;
          }
        }
        else
        {
          *v96 &= ~(_BYTE)v95;
          v83 = (__int64)v71;
          v66 = (unsigned int)(v110 + 1);
          sub_C6A60((__int64)v71, v66, v109);
        }
      }
      sub_CBAC0(v71, v67 + 1);
      v66 = 0;
      v98 = sub_CBAC0(v71, 0);
      v99 = *v71;
      v110 = 1;
      v27 = v98 + v100 + v99 - v67;
      if ( v67 > 0 )
      {
        v101 = 1;
        while ( 1 )
        {
          v102 = sub_CBAC0(v71, v101);
          v66 = (__int64)v108;
          if ( v102 != (((int)(unsigned __int8)v108[v103 >> 3] >> (v103 & 7)) & 1) )
            break;
          v101 = v103 + 1;
          v110 = v101;
          if ( v101 > v67 )
            goto LABEL_74;
        }
        v27 = v103;
      }
LABEL_74:
      sub_C91C0((__int64)v109, v66);
      sub_C91C0((__int64)v108, v66);
      sub_C9E70((__int64)v71, v66);
      return v27;
    case 4:
      v53 = &v114[v111];
      v111 += 8;
      v54 = *(__int64 (__fastcall **)(_QWORD))v53;
      qword_241610 = v54;
      if ( !v54 )
        return 0;
      return (unsigned int)v54(0);
    case 5:
      v55 = v111;
      v111 += 8;
      v56 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))&v114[v55];
      if ( v111 > 0x2F )
        v57 = v113;
      else
        v57 = &v114[v111];
      v58 = *(__int64 (__fastcall **)(_QWORD, _QWORD))v57;
      qword_2424C0 = v56;
      v27 = 0;
      qword_2424C8 = v58;
      return v27;
    case 6:
      v27 = dword_241470;
      v29 = (int *)&v114[v111];
      v111 += 8;
      if ( *v29 )
        dword_241470 = *v29;
      return v27;
    case 7:
      v110 = 0;
      return 0;
    case 8:
      return *(unsigned int *)&v114[v111];
    case 10:
      v79 = v111;
      v111 += 8;
      v80 = *(_QWORD *)&v114[v79];
      if ( v111 > 0x2F )
        v81 = v113;
      else
        v81 = &v114[v111];
      v27 = 0;
      *(_DWORD *)(v80 + 96) = *(_DWORD *)v81;
      return v27;
    case 12:
      v27 = 0;
      *(_DWORD *)(*(_QWORD *)&v114[v111] + 44LL) ^= 0x20u;
      return v27;
    case 13:
      v59 = (int *)&v114[v111];
      v111 += 8;
      dword_241618 = *v59;
      if ( dword_241618 == 2 )
      {
        if ( v111 > 0x2F )
          v107 = v113;
        else
          v107 = &v114[v111];
        v27 = 0;
        qword_241620 = *(__int64 (__fastcall **)(_QWORD, _QWORD))v107;
      }
      else
      {
        qword_241620 = nullptr;
        return 0;
      }
      return v27;
    case 14:
      v27 = 0;
      dword_241628 = *(_DWORD *)&v114[v111];
      return v27;
    case 15:
      v27 = 0;
      dword_241490 = *(_DWORD *)&v114[v111];
      return v27;
    case 17:
      return 123410;
    case 18:
      return dword_2415D4 == 0;
    case 19:
      v76 = v111;
      v111 += 8;
      v77 = *(_QWORD *)&v114[v76];
      if ( v111 > 0x2F )
        v78 = v113;
      else
        v78 = &v114[v111];
      v27 = 0;
      *(_DWORD *)(v77 + 184) = *(_DWORD *)v78;
      return v27;
    case 20:
      v34 = (__m128i **)&v114[v111];
      v35 = v111 + 8;
      v111 += 8;
      v36 = *v34;
      v37 = (*v34)[1].m128i_i64[1];
      if ( v37 )
      {
        xmmword_241500(v37);
        v35 = v111;
      }
      if ( v35 > 0x2F )
      {
        v38 = (unsigned __int8 **)v113;
        v113 += 8;
      }
      else
      {
        v38 = (unsigned __int8 **)&v114[v35];
        v111 = v35 + 8;
      }
      v39 = (__int64)*v38;
      v40 = sub_CA320((__int64)v36, *v38);
      if ( v40 >= 0 )
      {
        v42 = v111;
        v36[12].m128i_i8[4] = v40;
        if ( v42 > 0x2F )
        {
          v43 = v113;
          v113 += 8;
        }
        else
        {
          v43 = &v114[v42];
          v42 += 8;
          v111 = v42;
        }
        v44 = *(_DWORD *)v43 & 1;
        v39 = (unsigned int)(2 * v44);
        v45 = v36[12].m128i_i8[6] & 0xFD;
        v36[12].m128i_i8[5] = v44;
        v36[12].m128i_i8[6] = (2 * v44) | v45;
        if ( v42 > 0x2F )
        {
          v46 = v113;
          v113 += 8;
        }
        else
        {
          v46 = &v114[v42];
          v111 = v42 + 8;
        }
        v41 = *(unsigned int *)v46;
        v36[12].m128i_i32[0] = v41;
        if ( !(_BYTE)v44 )
        {
          if ( (_DWORD)v41 )
            sub_D8BB0(v36, v39);
        }
      }
      v47 = v36[1].m128i_i64[1];
      if ( !v47 )
        return 0;
      xmmword_241510(v47, v39, v41);
      return 0;
    case 22:
      v30 = (__int64 **)&v114[v111];
      v111 += 8;
      v31 = *v30;
      v32 = **v30;
      v33 = *(_WORD *)(v32 + 20);
      if ( (v33 & 4) == 0 )
        return 0;
      v27 = 0;
      *(_WORD *)(v32 + 20) = v33 & 0xFFFB;
      *(_WORD *)(*v31 + 20) |= 0x20u;
      return v27;
    case 23:
      v60 = v111;
      v111 += 8;
      v61 = *(_DWORD *)&v114[(unsigned int)v60];
      if ( v111 > 0x2F )
      {
        v62 = v113;
        v113 += 8;
      }
      else
      {
        v60 = (unsigned int)(v60 + 16);
        v62 = &v114[v111];
        v111 = v60;
      }
      v63 = *(_QWORD *)v62;
      if ( v63 )
      {
        v64 = **(_DWORD **)(*(_QWORD *)(v63 + 32) + 24LL);
        if ( v64 )
          v61 = v64;
      }
      dword_241630 = v61;
      v27 = sub_FEBD0(v15, v60);
      if ( v27 )
        return 0;
      sub_FF240(0, nullptr);
      return v27;
    case 24:
      v27 = 0;
      byte_241489 = *(_DWORD *)&v114[v111];
      return v27;
    case 25:
      v51 = v111 + 8;
      v111 = v51;
      if ( (unsigned int)v51 > 0x2F )
        v52 = v113;
      else
        v52 = &v114[v51];
      v27 = 0;
      **(_QWORD **)v52 = 0;
      return v27;
    case 26:
      v48 = v111;
      v111 += 8;
      v27 = *(_DWORD *)&v114[v48];
      if ( v111 > 0x2F )
      {
        v49 = (int **)v113;
        v113 += 8;
      }
      else
      {
        v49 = (int **)&v114[v111];
        v111 = v48 + 16;
      }
      v50 = *v49;
      if ( v27 == 1 )
      {
        v27 = 0;
        dword_242580 = *v50;
      }
      else if ( (int)v27 <= 1 )
      {
        if ( v27 )
          return 0;
        *v50 = dword_242580;
      }
      else if ( v27 == 2 )
      {
        v27 = 0;
        *v50 = dword_242658;
      }
      else
      {
        if ( v27 != 3 )
          return 0;
        v27 = 0;
        dword_242658 = *v50;
      }
      return v27;
    case 28:
      v16 = (double *)&v114[v112];
      v112 += 16;
      v17 = *v16;
      v18 = 0;
      if ( *v16 > 1.0 )
      {
        if ( v17 <= 2000000000.0 )
          v18 = sub_D5C00(v17);
        else
          v18 = (__int16)(2 * (5 * (*(_QWORD *)&v17 >> 52) - 5110));
      }
      v19 = v111;
      v111 += 8;
      v20 = *(int **)&v114[v19];
      if ( v19 + 8 > 0x2F )
        v113 += 8;
      else
        v111 = v19 + 16;
      *v20 = v18;
      v21 = sub_C2A40(v18);
      *v23 = v21;
      if ( v21 > 7 )
      {
        _BitScanReverse64(&v82, v21);
        v21 >>= 60 - ((unsigned __int8)v82 ^ 0x3Fu);
        v26 = 10 * (60 - (v82 ^ 0x3F)) + 30;
      }
      else
      {
        v24 = 0;
        if ( v21 <= 1 )
        {
LABEL_14:
          *v22 = v24;
          return 0;
        }
        for ( i = 40; ; i -= 10 )
        {
          v21 *= 2LL;
          if ( v21 > 7 )
            break;
        }
        v26 = i - 20;
      }
      v24 = (__int16)(word_1BACD0[v21 & 7] + v26);
      goto LABEL_14;
    default:
      return 0;
  }
}
