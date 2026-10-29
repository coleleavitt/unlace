__int64 __fastcall sub_3F6280(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int8 v21; // al
  unsigned __int8 *v22; // rbp
  int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // r12
  int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __int64 v33; // r12
  _DWORD *v34; // rax
  __int64 v35; // rdi
  signed __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int8 *v38; // r13
  bool v39; // cf
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rdx
  _DWORD *v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  _DWORD *v52; // rdx
  int v53; // r13d
  __int64 v54; // r12
  __int64 v55; // rax
  bool v56; // zf
  __int64 v57; // rdx
  int v58; // esi
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // eax
  unsigned __int64 v62; // rax
  char v63; // dl
  int v64; // eax
  unsigned __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // ecx
  __int64 v70; // r12
  unsigned __int64 *v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  unsigned __int64 v75; // rbp
  __int64 v76; // rdx
  int v77; // esi
  unsigned __int16 v78; // ax
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r14
  __int64 v82; // r13
  int v83; // ecx
  __int64 v84; // rdi
  signed __int64 v85; // r12
  __int64 v86; // rax
  unsigned __int8 *v87; // r13
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  int v94; // ecx
  int v95; // eax
  int v96; // ecx
  int v97; // ecx
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // ecx
  __int64 v102; // r15
  __int64 v103; // rax
  _QWORD *v104; // rdi
  __int64 v105; // r13
  __int64 v106; // r14
  __int64 v107; // rax
  _QWORD *v108; // r12
  __int64 v109; // rbp
  __int64 v110; // r13
  __int64 v111; // rax
  unsigned __int8 *v112; // r15
  __int64 v113; // rdi
  __int64 v114; // [rsp+8h] [rbp-1D0h]
  __int64 v115; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v116; // [rsp+18h] [rbp-1C0h]
  __int64 v117; // [rsp+20h] [rbp-1B8h] BYREF
  int v118; // [rsp+28h] [rbp-1B0h]
  __int128 v119; // [rsp+30h] [rbp-1A8h]
  __int64 v120; // [rsp+40h] [rbp-198h]
  __int64 v121; // [rsp+48h] [rbp-190h]
  __int64 v122; // [rsp+50h] [rbp-188h]
  _BYTE v123[6]; // [rsp+58h] [rbp-180h] BYREF
  __int16 v124; // [rsp+5Eh] [rbp-17Ah]
  __int64 v125; // [rsp+68h] [rbp-170h]
  __int64 v126; // [rsp+90h] [rbp-148h]
  unsigned __int64 v127; // [rsp+198h] [rbp-40h] BYREF

  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 40);
  v127 = __readfsqword(0x28u);
  if ( v10 == *(_QWORD *)(v9 + 40) && (*(_BYTE *)(*(_QWORD *)(v9 + 920) + 128LL) & 4) != 0 )
  {
    v60 = sub_3EAB70(
            a1,
            3u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
            v10,
            0x3BEA45E214ADDC55LL,
            **(int **)(*(_QWORD *)(a1 + 832) + 704LL),
            0);
    if ( v60 )
      *(_DWORD *)(v60 + 4) |= 0x80u;
  }
  sub_3E83C0(*(_QWORD *)(a1 + 832));
  if ( *(_QWORD *)(a1 + 784) != -1 )
  {
    v41 = sub_11E7A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
    if ( v41 )
    {
      if ( !under_debugger )
        sub_37E160(0xCC53u, *(double *)a2.m128_u64);
      goto LABEL_219;
    }
    v42 = *(_QWORD *)(a1 + 16);
    v43 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v42 + 32) != v43 )
    {
      if ( !under_debugger )
        sub_37E160(0xCC54u, *(double *)a2.m128_u64);
      goto LABEL_219;
    }
    if ( (*(_BYTE *)(v42 + 24) & 2) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(0xCC55u, *(double *)a2.m128_u64);
      goto LABEL_219;
    }
    v44 = *(_DWORD **)(a1 + 840);
    if ( v44 )
    {
      if ( *v44 == 55 )
      {
        v45 = v44 + 8;
      }
      else
      {
        if ( *v44 != 42 )
          goto LABEL_204;
        v45 = v44 + 16;
      }
      if ( *(_BYTE *)v45 == 6 && v43 == *((_QWORD *)v45 + 1) )
        goto LABEL_38;
LABEL_204:
      if ( !under_debugger )
        sub_37E160(0xCC51u, *(double *)a2.m128_u64);
      goto LABEL_219;
    }
    if ( (unsigned __int8)netnode_charval() )
      goto LABEL_62;
    v120 = -1;
    v71 = (unsigned __int64 *)v123;
    v121 = 0;
    v122 = 0;
    v119 = -1;
    a2 = 0;
    do
    {
      *(_WORD *)v71 = 0;
      v71 += 5;
      *((_WORD *)v71 - 19) = 0;
      *((_WORD *)v71 - 18) = 0;
      *((_DWORD *)v71 - 2) = 0;
      *((_WORD *)v71 - 17) = 0;
      *((_OWORD *)v71 - 2) = 0;
      *(v71 - 2) = 0;
    }
    while ( &v127 != v71 );
    if ( (int)decode_insn() <= 0 )
      goto LABEL_62;
    v12 = (unsigned __int16)v121;
    v72 = *((_QWORD *)&v119 + 1) + ((v122 & 0x400) == 0 ? 8LL : 6LL);
    if ( (_WORD)v121 == 203 )
    {
      if ( v72 == v125 )
        goto LABEL_62;
    }
    else
    {
      v12 = (unsigned __int16)v121 & 0xFFF7;
      if ( (v121 & 0xFFF7) == 0x63 && v123[1] == 1 && !v124 && v72 == v126 )
      {
        v41 = 0;
        goto LABEL_123;
      }
    }
    v73 = *(unsigned __int16 *)(a1 + 48);
    if ( (_WORD)v73 != 821 )
    {
      if ( (unsigned __int16)v73 > 0x335u )
      {
        if ( (unsigned __int16)v73 <= 0x344u )
        {
          if ( (unsigned __int16)v73 <= 0x33Du )
            goto LABEL_121;
        }
        else
        {
          v12 = (unsigned int)(v73 - 1736);
          if ( (unsigned __int16)(v73 - 1736) > 5u )
          {
            if ( (unsigned __int16)(v73 - 1743) > 0xDu )
              goto LABEL_121;
          }
          else
          {
            v99 = 43;
            if ( !_bittest64(&v99, v12) )
              goto LABEL_121;
          }
        }
      }
      else if ( (unsigned __int16)v73 > 0x206u )
      {
        v12 = (unsigned int)(v73 - 546);
        if ( (unsigned __int16)(v73 - 546) > 1u && ((unsigned __int16)v73 > 0x241u || (unsigned __int16)v73 <= 0x23Du) )
          goto LABEL_121;
      }
      else if ( (unsigned __int16)v73 <= 0x204u )
      {
        if ( (unsigned __int16)v73 <= 0x76u )
        {
          if ( (unsigned __int16)v73 <= 0x71u && (unsigned __int16)(v73 - 82) > 0x1Fu )
            goto LABEL_121;
        }
        else
        {
          v12 = (unsigned int)(v73 - 202);
          if ( (unsigned __int16)(v73 - 202) > 1u )
          {
            if ( (unsigned __int16)v73 <= 0xC9u )
            {
              if ( (unsigned __int16)v73 <= 0xC5u )
                goto LABEL_121;
            }
            else if ( (unsigned __int16)(v73 - 439) > 1u )
            {
LABEL_121:
              v74 = *(_QWORD *)(a1 + 872);
              v75 = *(_QWORD *)(a1 + 880);
              if ( v75 < v74 + 1 )
              {
                v103 = qvector_reserve();
                v104 = *(_QWORD **)(a1 + 864);
                v105 = *(_QWORD *)(a1 + 872);
                v106 = v103;
                v107 = *(_QWORD *)(a1 + 880);
                *(_QWORD *)(a1 + 880) = v75;
                v108 = v104;
                v109 = v106;
                v114 = v107;
                v110 = v105 - 1;
                if ( v110 >= 0 )
                {
                  do
                  {
                    v111 = *v108;
                    v112 = (unsigned __int8 *)(v108 + 1);
                    v113 = v109 + 8;
                    v108 += 3;
                    v109 += 24;
                    *(_QWORD *)(v109 - 24) = v111;
                    sub_11F840(v113, v112);
                    sub_118BA0((__int64)v112);
                    v39 = v110-- == 0;
                  }
                  while ( !v39 );
                }
                qfree();
                *(_QWORD *)(a1 + 864) = v106;
                *(_QWORD *)(a1 + 880) = v114;
                v74 = *(_QWORD *)(a1 + 872);
              }
              v12 = 3 * v74;
              v41 = *(_QWORD *)(a1 + 864) + 24 * v74;
              *(_QWORD *)v41 = 0;
              *(_QWORD *)(v41 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v41 + 16) = 0;
              ++*(_QWORD *)(a1 + 872);
LABEL_123:
              if ( !(*(_QWORD *)(a1 + 840) | v41) )
                goto LABEL_3;
LABEL_38:
              sub_1D1F50(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 352LL), 0);
              v46 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v52 = *(_DWORD **)(a1 + 840);
              *(_QWORD *)(a1 + 16) = v46;
              v53 = *(_DWORD *)(v46 + 72);
              if ( v52 )
              {
                v54 = (__int64)(v52 + 16);
                if ( *v52 == 55 )
                  v54 = (__int64)(v52 + 8);
                sub_118BA0(v54);
                *(_BYTE *)v54 = 7;
                *(_DWORD *)(v54 + 8) = v53;
              }
              else
              {
                *(_BYTE *)(v41 + 8) = 7;
                *(_DWORD *)(v41 + 16) = v53;
              }
              LODWORD(v33) = sub_3F4C00(a1, 0, a2, a3, a4, a5, v50, v51, a8, a9, (__int64)v52, v47, v48, v49);
              if ( !(_DWORD)v33 && *(_WORD *)(a1 + 448) != 80 )
              {
                v55 = *(_QWORD *)(a1 + 784);
                v56 = *(_QWORD *)(a1 + 840) == 0;
                *(_QWORD *)(a1 + 784) = *(_QWORD *)(a1 + 40);
                v57 = *(_QWORD *)(a1 + 832);
                *(_QWORD *)(a1 + 40) = v55;
                v58 = *(_DWORD *)(v57 + 352);
                if ( v56 )
                {
                  v115 = -4294967290LL;
                  v69 = 8 * *(_DWORD *)(v57 + 84);
                  if ( (unsigned __int64)v69 <= 0x3F )
                    v55 &= ~(-1LL << v69);
                  v118 = v58;
                  v116 = v55;
                  v117 = 0x100000001LL;
                  v70 = sub_1D2090(a1, 42, (unsigned __int8 *)&v117, nullptr, (unsigned __int8 *)&v115);
                  sub_118BA0((__int64)&v117);
                  sub_118BA0((__int64)&v115);
                  *(_QWORD *)v41 = v70;
                }
                else
                {
                  v118 = *(_DWORD *)(v57 + 352);
                  v117 = 0x100000001LL;
                  sub_1D2090(a1, 42, (unsigned __int8 *)&v117, nullptr, (unsigned __int8 *)(a1 + 848));
                  sub_118BA0((__int64)&v117);
                }
                v59 = *(_QWORD *)(a1 + 40);
                LODWORD(v33) = 1;
                *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
                *(_QWORD *)(a1 + 784) = v59;
              }
              if ( *(_QWORD *)(a1 + 840) )
              {
                *(_QWORD *)(a1 + 840) = 0;
                sub_118BA0(a1 + 848);
              }
              return (unsigned int)v33;
            }
          }
        }
      }
    }
LABEL_62:
    if ( !*(_QWORD *)(a1 + 840) )
      goto LABEL_3;
    goto LABEL_38;
  }
LABEL_3:
  v18 = *(_QWORD *)(a1 + 416);
  if ( v18 == -1 )
    return sub_3F4C00(a1, 0, a2, a3, a4, a5, v16, v17, a8, a9, v12, v13, v14, v15);
  v12 = *(unsigned __int16 *)(a1 + 48);
  v19 = *(_QWORD *)(a1 + 32) + ((*(_BYTE *)(a1 + 57) & 4) == 0 ? 8LL : 6LL);
  if ( (_WORD)v12 == 203 )
  {
    if ( v19 == *(_QWORD *)(a1 + 80) )
      return sub_3F4C00(a1, 0, a2, a3, a4, a5, v16, v17, a8, a9, v12, v13, v14, v15);
    v20 = *(_QWORD *)(a1 + 408);
    if ( !*(_BYTE *)(a1 + 384) )
    {
      if ( v18 < v20 )
      {
        v21 = *(_BYTE *)(a1 + 792);
        v22 = nullptr;
LABEL_88:
        v39 = (_WORD)v12 == 439;
        LOWORD(v12) = v12 - 439;
        if ( v39 || (_WORD)v12 == 1 )
          goto LABEL_68;
        goto LABEL_14;
      }
LABEL_79:
      v22 = *(unsigned __int8 **)(a1 + 864);
      v13 = (__int64)&v22[24 * *(_QWORD *)(a1 + 872)];
      if ( (unsigned __int8 *)v13 == v22 )
      {
LABEL_64:
        v22 = nullptr;
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 40);
        while ( *(_QWORD *)(*(_QWORD *)v22 + 72LL) != v14 )
        {
          v22 += 24;
          if ( (unsigned __int8 *)v13 == v22 )
            goto LABEL_64;
        }
      }
LABEL_65:
      v21 = *(_BYTE *)(a1 + 792);
      if ( (unsigned __int16)v12 > 0x241u )
      {
        if ( (unsigned __int16)v12 <= 0x341u )
        {
          if ( (unsigned __int16)v12 > 0x33Du )
            goto LABEL_68;
        }
        else
        {
          LOWORD(v12) = v12 - 1743;
          if ( (unsigned __int16)v12 <= 0xDu )
            goto LABEL_68;
        }
LABEL_14:
        if ( !v21 )
        {
          v23 = 0;
          if ( v18 >= v20 )
          {
            sub_1D1F50(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 352LL), 0);
            if ( v22 )
            {
              sub_1D2090(a1, 55, v22 + 8, nullptr, nullptr);
              v24 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              *(_QWORD *)(a1 + 16) = v24;
              v25 = *(_QWORD *)v22;
              v26 = *(_DWORD *)(v24 + 72);
              sub_118BA0(*(_QWORD *)v22 + 64LL);
              *(_BYTE *)(v25 + 64) = 7;
              *(_DWORD *)(v25 + 72) = v26;
            }
            else
            {
              v88 = sub_1D1F50(
                      a1,
                      0x37u,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                      *(_QWORD *)(a1 + 416),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      0);
              v89 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 840) = v88;
              v90 = sub_63DD0(*(_QWORD *)(a1 + 8), v89, 2);
              *(_QWORD *)(a1 + 16) = v90;
              LODWORD(v90) = *(_DWORD *)(v90 + 72);
              *(_BYTE *)(a1 + 848) = 7;
              *(_DWORD *)(a1 + 856) = v90;
            }
            LODWORD(v33) = sub_3F4C00(a1, 0, a2, a3, a4, a5, v31, v32, a8, a9, v27, v28, v29, v30);
            if ( (_DWORD)v33 )
              return (unsigned int)v33;
            v34 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 56LL);
            if ( !v34
              || (unsigned int)(*v34 - 54) > 1
              && (v100 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2),
                  *(_QWORD *)(a1 + 16) = v100,
                  !*(_QWORD *)(v100 + 56)) )
            {
              sub_1D1F50(
                a1,
                0x37u,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                *(_QWORD *)(a1 + 416) + *(unsigned __int16 *)(a1 + 450),
                0x3BEA45E214ADDC55LL,
                0x3BEA45E214ADDC55LL,
                0);
            }
            if ( !v22 )
              goto LABEL_27;
            sub_118BA0((__int64)(v22 + 8));
            v35 = (__int64)(v22 + 8);
            v36 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 864) + 24LL * *(_QWORD *)(a1 + 872) - (__int64)v22) >> 3)
                - 2;
            if ( v36 >= 0 )
            {
              while ( 1 )
              {
                v37 = *((_QWORD *)v22 + 3);
                v38 = v22 + 32;
                v22 += 24;
                *((_QWORD *)v22 - 3) = v37;
                sub_11F840(v35, v38);
                sub_118BA0((__int64)v38);
                v39 = v36-- == 0;
                if ( v39 )
                  break;
                v35 = (__int64)(v22 + 8);
              }
            }
            goto LABEL_26;
          }
LABEL_71:
          v64 = sub_3F61E0(a1, a2, a3, a4, a5, *(double *)v16.m128_u64, *(double *)v17.m128_u64, a8, a9);
          v33 = v64;
          if ( v64 )
            return (unsigned int)v33;
          if ( *(_WORD *)(a1 + 448) == 80 )
            goto LABEL_55;
          if ( (unsigned int)(v23 - 1) <= 1 )
          {
            v65 = *(_WORD *)(a1 + 48);
            if ( v65 <= 0xC9u )
            {
              if ( v65 <= 0xC5u )
              {
                switch ( *(_WORD *)(a1 + 48) )
                {
                  case 'R':
                  case 'S':
                  case 'T':
                  case 'U':
                  case 'V':
                  case 'W':
                  case 'X':
                  case 'Y':
                  case 'Z':
                  case '[':
                  case '\\':
                  case ']':
                  case '^':
                  case '_':
                  case '`':
                  case 'a':
                    v33 = *(_BYTE *)(a1 + 105) != 0;
                    goto LABEL_93;
                  case 'b':
                  case 'c':
                  case 'd':
                  case 'e':
                  case 'f':
                  case 'g':
                  case 'h':
                  case 'i':
                  case 'j':
                  case 'k':
                  case 'l':
                  case 'm':
                    goto LABEL_96;
                  case 'n':
                  case 'o':
                  case 'p':
                  case 'q':
                    goto LABEL_100;
                  case 's':
                  case 'u':
                  case 'v':
                    goto LABEL_93;
                  default:
                    goto LABEL_102;
                }
              }
              goto LABEL_96;
            }
            if ( v65 > 0x341u )
            {
              if ( v65 != 1739 )
              {
                if ( v65 <= 0x6CBu )
                {
                  if ( (unsigned __int16)(v65 - 1736) > 1u )
                    goto LABEL_102;
                  goto LABEL_93;
                }
                if ( (unsigned __int16)(v65 - 1743) > 0xDu )
                  goto LABEL_102;
              }
            }
            else
            {
              if ( v65 > 0x33Du )
              {
LABEL_96:
                v33 = 1;
                goto LABEL_93;
              }
              if ( v65 > 0x241u )
              {
                if ( v65 != 821 )
                  goto LABEL_102;
                goto LABEL_93;
              }
              if ( v65 <= 0x23Du )
              {
                if ( v65 > 0xCBu && (unsigned __int16)(v65 - 439) > 1u )
                  goto LABEL_102;
LABEL_93:
                v66 = a1 + 40 * v33;
                if ( *(_BYTE *)(v66 + 65) == 7 )
                {
                  v67 = *(_QWORD *)(v66 + 80);
                  v68 = *(_QWORD *)(a1 + 832);
                  if ( v23 == 1 )
                  {
                    v115 = -4294967290LL;
                    v97 = 8 * *(_DWORD *)(v68 + 84);
                    if ( (unsigned __int64)v97 <= 0x3F )
                      v67 &= ~(-1LL << v97);
                    v116 = v67;
                    v98 = *(_DWORD *)(v68 + 352);
                    v117 = 0x100000001LL;
                    v118 = v98;
                    sub_1D2090(a1, 42, (unsigned __int8 *)&v117, nullptr, (unsigned __int8 *)&v115);
                    sub_118BA0((__int64)&v117);
                    sub_118BA0((__int64)&v115);
                  }
                  else
                  {
                    sub_1D1F50(a1, 0x37u, *(_DWORD *)(v68 + 84), v67, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                  }
                  goto LABEL_55;
                }
LABEL_218:
                sub_3E5390(*(double *)a2.m128_u64);
              }
            }
LABEL_100:
            v33 = 2;
            goto LABEL_93;
          }
          return sub_3F4C00(a1, 0, a2, a3, a4, a5, v16, v17, a8, a9, v12, v13, v14, v15);
        }
        if ( !under_debugger )
          sub_37E160(0xCC56u, *(double *)a2.m128_u64);
LABEL_219:
        BUG();
      }
      goto LABEL_10;
    }
  }
  else
  {
    v13 = (unsigned int)v12 & 0xFFFFFFF7;
    if ( (v12 & 0xFFF7) == 0x63 )
    {
      if ( *(_BYTE *)(a1 + 65) == 1 && !*(_WORD *)(a1 + 70) && v19 == *(_QWORD *)(a1 + 120) )
        return sub_3F4C00(a1, 0, a2, a3, a4, a5, v16, v17, a8, a9, v12, v13, v14, v15);
      v20 = *(_QWORD *)(a1 + 408);
      if ( !*(_BYTE *)(a1 + 384) )
      {
        if ( v18 < v20 )
        {
          v21 = *(_BYTE *)(a1 + 792);
          v22 = nullptr;
LABEL_10:
          if ( (unsigned __int16)v12 > 0x23Du )
            goto LABEL_68;
          if ( (unsigned __int16)v12 <= 0xC9u )
          {
            if ( (unsigned __int16)v12 <= 0xC5u )
            {
              v12 = (unsigned int)(v12 - 82);
              if ( (unsigned __int16)v12 > 0x1Fu )
                goto LABEL_14;
            }
LABEL_68:
            v61 = sub_3F4C00(
                    a1,
                    (unsigned int)(v21 & (v18 < v20)) + 1,
                    a2,
                    a3,
                    a4,
                    a5,
                    v16,
                    v17,
                    a8,
                    a9,
                    v12,
                    v13,
                    v14,
                    v15);
            v33 = v61;
            if ( v61 )
              return (unsigned int)v33;
            v62 = *(_QWORD *)(a1 + 416);
            v63 = *(_BYTE *)(a1 + 792);
            if ( v62 < *(_QWORD *)(a1 + 408) )
            {
              v23 = 1;
              if ( v63 )
              {
                v91 = *(unsigned __int16 *)(a1 + 450);
                v115 = -4294967290LL;
                v92 = v91 + v62;
                v93 = *(_QWORD *)(a1 + 832);
                v94 = 8 * *(_DWORD *)(v93 + 84);
                if ( (unsigned __int64)v94 <= 0x3F )
                  v92 &= ~(-1LL << v94);
                v116 = v92;
                v95 = *(_DWORD *)(v93 + 352);
                v117 = 0x100000001LL;
                v118 = v95;
                sub_1D2090(a1, 42, (unsigned __int8 *)&v117, nullptr, (unsigned __int8 *)&v115);
                v23 = 2;
                sub_118BA0((__int64)&v117);
                sub_118BA0((__int64)&v115);
                *(_QWORD *)(a1 + 16) = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 416), 2);
              }
              goto LABEL_71;
            }
            if ( v63 )
            {
              v76 = *(_QWORD *)(a1 + 832);
              v77 = *(_DWORD *)(v76 + 352);
              if ( v22 )
              {
                v118 = *(_DWORD *)(v76 + 352);
                v117 = 0x100000001LL;
                sub_1D2090(a1, 42, (unsigned __int8 *)&v117, nullptr, v22 + 8);
                sub_118BA0((__int64)&v117);
              }
              else
              {
                v115 = -4294967290LL;
                v101 = 8 * *(_DWORD *)(v76 + 84);
                if ( (unsigned __int64)v101 <= 0x3F )
                  v62 &= ~(-1LL << v101);
                v118 = v77;
                v116 = v62;
                v117 = 0x100000001LL;
                v102 = sub_1D2090(a1, 42, (unsigned __int8 *)&v117, nullptr, (unsigned __int8 *)&v115);
                sub_118BA0((__int64)&v117);
                sub_118BA0((__int64)&v115);
                *(_QWORD *)(a1 + 840) = v102;
              }
              *(_QWORD *)(a1 + 16) = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              sub_1D1F50(
                a1,
                0x37u,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                *(_QWORD *)(a1 + 416) + *(unsigned __int16 *)(a1 + 450),
                0x3BEA45E214ADDC55LL,
                0x3BEA45E214ADDC55LL,
                0);
            }
            else if ( v22 )
            {
              sub_1D2090(a1, 55, v22 + 8, nullptr, nullptr);
            }
            else
            {
              *(_QWORD *)(a1 + 840) = sub_1D1F50(
                                        a1,
                                        0x37u,
                                        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                                        *(_QWORD *)(a1 + 416),
                                        0x3BEA45E214ADDC55LL,
                                        0x3BEA45E214ADDC55LL,
                                        0);
            }
            v78 = *(_WORD *)(a1 + 48);
            if ( v78 <= 0xC9u )
            {
              if ( v78 <= 0xC5u )
              {
                switch ( *(_WORD *)(a1 + 48) )
                {
                  case 'R':
                  case 'S':
                  case 'T':
                  case 'U':
                  case 'V':
                  case 'W':
                  case 'X':
                  case 'Y':
                  case 'Z':
                  case '[':
                  case '\\':
                  case ']':
                  case '^':
                  case '_':
                  case '`':
                  case 'a':
                    v33 = *(_BYTE *)(a1 + 105) != 0;
                    goto LABEL_133;
                  case 'b':
                  case 'c':
                  case 'd':
                  case 'e':
                  case 'f':
                  case 'g':
                  case 'h':
                  case 'i':
                  case 'j':
                  case 'k':
                  case 'l':
                  case 'm':
                    goto LABEL_140;
                  case 'n':
                  case 'o':
                  case 'p':
                  case 'q':
                    goto LABEL_144;
                  case 's':
                  case 'u':
                  case 'v':
                    goto LABEL_133;
                  default:
                    goto LABEL_102;
                }
              }
              goto LABEL_140;
            }
            if ( v78 > 0x341u )
            {
              if ( v78 != 1739 )
              {
                if ( v78 <= 0x6CBu )
                {
                  if ( (unsigned __int16)(v78 - 1736) > 1u )
                    goto LABEL_102;
                  goto LABEL_133;
                }
                if ( (unsigned __int16)(v78 - 1743) > 0xDu )
                  goto LABEL_102;
              }
            }
            else
            {
              if ( v78 > 0x33Du )
              {
LABEL_140:
                v33 = 1;
                goto LABEL_133;
              }
              if ( v78 > 0x241u )
              {
                if ( v78 != 821 )
                  goto LABEL_102;
                goto LABEL_133;
              }
              if ( v78 <= 0x23Du )
              {
                if ( v78 > 0xCBu && (unsigned __int16)(v78 - 439) > 1u )
                {
LABEL_102:
                  if ( !under_debugger )
                    sub_37E160(0xCC4Fu, *(double *)a2.m128_u64);
                  goto LABEL_219;
                }
LABEL_133:
                v79 = a1 + 40 * v33;
                if ( *(_BYTE *)(v79 + 65) == 7 )
                {
                  v80 = *(_QWORD *)(v79 + 80);
                  v81 = *(_QWORD *)(a1 + 832);
                  if ( !v22 )
                  {
                    *(_BYTE *)(a1 + 848) = 6;
                    v96 = 8 * *(_DWORD *)(v81 + 84);
                    if ( (unsigned __int64)v96 <= 0x3F )
                      v80 &= ~(-1LL << v96);
                    *(_QWORD *)(a1 + 856) = v80;
                    goto LABEL_27;
                  }
                  v82 = *(_QWORD *)v22;
                  sub_118BA0(*(_QWORD *)v22 + 64LL);
                  *(_BYTE *)(v82 + 64) = 6;
                  v83 = 8 * *(_DWORD *)(v81 + 84);
                  if ( (unsigned __int64)v83 <= 0x3F )
                    v80 &= ~(-1LL << v83);
                  *(_QWORD *)(v82 + 72) = v80;
                  sub_118BA0((__int64)(v22 + 8));
                  v84 = (__int64)(v22 + 8);
                  v85 = 0xAAAAAAAAAAAAAAABLL
                      * ((*(_QWORD *)(a1 + 864) + 24LL * *(_QWORD *)(a1 + 872) - (__int64)v22) >> 3)
                      - 2;
                  if ( v85 >= 0 )
                  {
                    while ( 1 )
                    {
                      v86 = *((_QWORD *)v22 + 3);
                      v87 = v22 + 32;
                      v22 += 24;
                      *((_QWORD *)v22 - 3) = v86;
                      sub_11F840(v84, v87);
                      sub_118BA0((__int64)v87);
                      v39 = v85-- == 0;
                      if ( v39 )
                        break;
                      v84 = (__int64)(v22 + 8);
                    }
                  }
LABEL_26:
                  --*(_QWORD *)(a1 + 872);
LABEL_27:
                  LODWORD(v33) = 1;
                  return (unsigned int)v33;
                }
                goto LABEL_218;
              }
            }
LABEL_144:
            v33 = 2;
            goto LABEL_133;
          }
          goto LABEL_88;
        }
        goto LABEL_79;
      }
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 408);
      if ( !*(_BYTE *)(a1 + 384) )
      {
        v22 = nullptr;
        if ( v18 < v20 )
          goto LABEL_65;
        goto LABEL_79;
      }
    }
  }
  if ( v18 >= v20 )
  {
LABEL_55:
    LODWORD(v33) = 0;
    return (unsigned int)v33;
  }
  return sub_3F61E0(a1, a2, a3, a4, a5, *(double *)v16.m128_u64, *(double *)v17.m128_u64, a8, a9);
}

