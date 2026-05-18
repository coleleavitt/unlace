__int64 __fastcall sub_FBF10(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        double a7,
        _QWORD *a8)
{
  int v8; // eax
  int v9; // r10d
  unsigned __int8 *v10; // r11
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  int v13; // edx
  unsigned __int64 v14; // rbp
  __int64 *v15; // r13
  unsigned __int8 **v16; // r12
  unsigned __int8 *v17; // rbx
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r9
  int v21; // r14d
  _QWORD *v22; // rax
  __int64 v23; // r13
  _QWORD *v24; // r8
  __int64 v25; // rsi
  __int64 v26; // r10
  __int64 *v27; // rdi
  unsigned __int16 v28; // dx
  bool v29; // cl
  int v30; // eax
  bool v31; // cl
  int v32; // r10d
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 *v36; // rbp
  unsigned __int64 v37; // rbx
  bool v38; // r13
  _QWORD *v39; // r9
  __int64 v40; // rsi
  int v41; // eax
  __int64 k; // rdi
  bool v43; // r12
  int v44; // ecx
  _BYTE **v46; // rax
  _BYTE *v47; // rsi
  unsigned __int8 *m; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  _DWORD *v51; // rdx
  char v52; // al
  char v53; // cl
  int v54; // eax
  __int64 *v55; // rax
  __int64 *v56; // rdx
  __int16 v57; // ax
  char v58; // cl
  __int64 v59; // rdi
  _QWORD **v60; // rdx
  _QWORD **v61; // r10
  _QWORD *v62; // rsi
  unsigned __int64 v63; // r12
  int v64; // ebx
  unsigned __int64 v65; // rbp
  __int64 v66; // rax
  __int64 v67; // r15
  int v68; // ecx
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rcx
  _BYTE **v72; // rbx
  unsigned __int8 **v73; // rax
  unsigned __int8 *v74; // rsi
  _BYTE *j; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  int v78; // [rsp+0h] [rbp-148h]
  unsigned __int8 *v79; // [rsp+0h] [rbp-148h]
  unsigned __int8 *v80; // [rsp+8h] [rbp-140h]
  __int64 *v81; // [rsp+8h] [rbp-140h]
  char v82; // [rsp+10h] [rbp-138h]
  int v83; // [rsp+10h] [rbp-138h]
  __int64 v84; // [rsp+10h] [rbp-138h]
  __int64 v85; // [rsp+18h] [rbp-130h]
  unsigned __int8 *v86; // [rsp+18h] [rbp-130h]
  int v87; // [rsp+20h] [rbp-128h]
  __int64 v88; // [rsp+28h] [rbp-120h]
  unsigned int v89; // [rsp+30h] [rbp-118h]
  int v90; // [rsp+34h] [rbp-114h]
  __int64 v92; // [rsp+40h] [rbp-108h]
  _QWORD *v93; // [rsp+40h] [rbp-108h]
  unsigned __int8 *v94; // [rsp+48h] [rbp-100h]
  unsigned __int8 *v95; // [rsp+48h] [rbp-100h]
  _QWORD *v96; // [rsp+50h] [rbp-F8h]
  int v97; // [rsp+50h] [rbp-F8h]
  int v98; // [rsp+58h] [rbp-F0h]
  bool v99; // [rsp+5Eh] [rbp-EAh]
  unsigned __int8 v100; // [rsp+5Fh] [rbp-E9h]
  __int64 v101; // [rsp+60h] [rbp-E8h]
  __int64 v102; // [rsp+68h] [rbp-E0h]
  int v104; // [rsp+80h] [rbp-C8h]
  unsigned __int16 v105; // [rsp+84h] [rbp-C4h]
  __int64 i; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v107; // [rsp+90h] [rbp-B8h]
  __int64 v109; // [rsp+A0h] [rbp-A8h]
  char v112; // [rsp+C4h] [rbp-84h]
  char v113; // [rsp+C5h] [rbp-83h]
  unsigned __int16 v114; // [rsp+C6h] [rbp-82h]
  int v116; // [rsp+CCh] [rbp-7Ch]
  char v117[8]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 (__fastcall *v118)(__int64, __int64); // [rsp+D8h] [rbp-70h]
  __int64 (__fastcall *v119)(__int64); // [rsp+E0h] [rbp-68h]
  __int16 v120; // [rsp+F4h] [rbp-54h]
  int v121; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v122; // [rsp+108h] [rbp-40h]

  v122 = __readfsqword(0x28u);
  if ( a5 && (*(_BYTE *)(*(_QWORD *)*a1 + 96LL) & 0x40) != 0 )
    return 0;
  v8 = *a2;
  v116 = *a2;
  if ( (unsigned __int16)*a2 > 0x3Fu )
    return 0;
  v9 = (unsigned __int16)v8;
  v105 = ((a4 & 0x803) != 0) + 386;
  v107 = (1LL << v8) - 1;
  if ( 1LL << v8 == 1 )
    return (unsigned __int8)v116;
  v10 = byte_1BF000;
  v102 = 0;
  v104 = a5;
  v11 = 0;
  v109 = 0;
  for ( i = 0; ; i |= *(_QWORD *)(v12 + 8) )
  {
    if ( (int)v102 >= v104 )
    {
      v12 = a6;
      v13 = *(_DWORD *)(a6 + 48);
      if ( (v13 & 0x400) != 0 )
        goto LABEL_117;
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * v102);
      if ( (a4 & 0x800) != 0 )
        goto LABEL_104;
      v13 = *(_DWORD *)(v12 + 48);
      if ( (v13 & 0x400) != 0 )
      {
LABEL_117:
        if ( (!*(_BYTE *)(v12 + 29) || (a4 & 0x280) == 0x80) && v107 != v11 )
          return 0xFFFFFFFFLL;
        return (unsigned __int8)v116;
      }
    }
    if ( (a4 & 0x80) != 0 )
      *(_WORD *)(v12 + 30) = 0;
    v89 = *(_DWORD *)(a1[1] + 104LL * *(unsigned __int8 *)(v12 + 16) + 72);
    if ( !v9 )
    {
      if ( (v13 & 0x1000) != 0 )
      {
        v109 |= *(_QWORD *)(v12 + 8);
        goto LABEL_104;
      }
      goto LABEL_21;
    }
    v14 = 0;
    v15 = (__int64 *)(a2 + 2);
    v16 = (unsigned __int8 **)(a2 + 2);
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( _bittest64((const __int64 *)&v11, v14) )
            goto LABEL_19;
          v17 = *v16;
LABEL_15:
          if ( !v17 )
            goto LABEL_19;
          while ( 1 )
          {
            v18 = *((_DWORD *)v17 + 1);
            if ( (v18 & 0x41000) == 0 )
              break;
            if ( (v18 & 0x40000) == 0 )
            {
              v17 = *((unsigned __int8 **)v17 + 2);
              goto LABEL_15;
            }
            v17 = *(unsigned __int8 **)(*((_QWORD *)v17 + 4) + 8LL);
            if ( !v17 )
              goto LABEL_19;
          }
          if ( ((*v17 + 89) & 0xFD) != 0 )
            goto LABEL_19;
          if ( *((_DWORD *)v17 + 11) != v89 )
            goto LABEL_19;
          v83 = v9;
          v80 = v10;
          v55 = (__int64 *)sub_FA430((__int64)(a1 + 15), v89, *((__int16 *)v17 + 24), ~i, v105 & 0x3FF, nullptr, a7);
          v56 = v55;
          v10 = v80;
          v9 = v83;
          if ( !v55 )
            goto LABEL_19;
          v57 = *((_WORD *)v55 + 10);
          if ( v57 == 1 )
            break;
          v81 = v56;
          if ( (v57 & 0x82) == 0 || *((__int16 *)v17 + 24) < 0 )
            goto LABEL_100;
          v87 = v83;
          v86 = v10;
          v84 = *a1;
          v72 = (_BYTE **)sub_F3950(*a1, *v16, a7);
          if ( !v72 )
            v72 = *(_BYTE ***)(*(_QWORD *)v84 + 16LL);
          v73 = (unsigned __int8 **)sub_F3C70(v84, *v81, a7);
          v10 = v86;
          v9 = v87;
          if ( v73 )
          {
            v74 = *v73;
            for ( j = *v72; ; ++j )
            {
              v76 = (unsigned __int8)*j;
              v77 = *v74;
              if ( (_DWORD)v76 == (_DWORD)v77 )
              {
                if ( !*j )
                  goto LABEL_100;
              }
              else if ( v86[v76] != v86[v77] )
              {
                break;
              }
              ++v74;
            }
          }
LABEL_19:
          v14 = (unsigned int)(v14 + 1);
          v16 += 3;
          if ( v9 == (_DWORD)v14 )
            goto LABEL_20;
        }
        v68 = *(unsigned __int16 *)(v12 + 52);
        if ( !(_WORD)v68 )
          goto LABEL_19;
        v69 = *(_QWORD **)(v12 + 64);
        if ( v56 != (__int64 *)*v69 )
          break;
LABEL_100:
        v58 = v14;
        v14 = (unsigned int)(v14 + 1);
        v16 += 3;
        v11 |= 1LL << v58;
        if ( v9 == (_DWORD)v14 )
          goto LABEL_20;
      }
      v70 = v69 + 1;
      v71 = &v70[v68 - 1];
      while ( v71 != v70 )
      {
        if ( (__int64 *)*v70++ == v56 )
          goto LABEL_100;
      }
      v14 = (unsigned int)(v14 + 1);
      v16 += 3;
    }
    while ( v83 != (_DWORD)v14 );
LABEL_20:
    v13 = *(_DWORD *)(v12 + 48);
    if ( (v13 & 0x1000) != 0 )
    {
      v109 |= *(_QWORD *)(v12 + 8);
      goto LABEL_122;
    }
LABEL_21:
    if ( (v13 & 0x100) == 0 )
    {
      v19 = *(_QWORD *)(v12 + 32);
      if ( v19 && (*(_BYTE *)(v19 + 99) & 4) == 0 )
      {
        v114 = *(_WORD *)(v19 + 94);
        if ( *(_BYTE *)(v19 + 98) && (v13 & 0x8000) == 0 )
        {
          v90 = *(unsigned __int16 *)(v19 + 96);
          v99 = 1;
          if ( !*(_WORD *)(v19 + 96) )
            goto LABEL_154;
        }
        else
        {
          v90 = *(unsigned __int16 *)(v19 + 96);
          if ( !*(_WORD *)(v19 + 96) )
            goto LABEL_59;
          v99 = 0;
        }
        goto LABEL_28;
      }
      return 0;
    }
    v90 = 1;
    v19 = 0;
    v114 = 0;
    v99 = 1;
LABEL_28:
    v20 = v12;
    v82 = 0;
    v113 = 0;
    v112 = 0;
    v21 = v9;
    v22 = (_QWORD *)v19;
    v23 = 0;
    v24 = v22;
    while ( 1 )
    {
LABEL_34:
      v30 = *(unsigned __int16 *)(v20 + 24);
      v78 = v23;
      if ( v30 <= (int)v23 || *(unsigned __int16 *)(v20 + 54) > (int)v23 )
      {
        v31 = v21 > 0;
        goto LABEL_36;
      }
      v25 = *(_QWORD *)(v20 + 64);
      v26 = 8 * v23;
      v27 = *(__int64 **)(v25 + 8 * v23);
      v28 = *((_WORD *)v27 + 10);
      if ( (v28 & v105) == 0 )
        break;
      v29 = v99;
      if ( (v28 & 0x180) != 0 )
        v29 = 0;
      ++v23;
      v99 = v29;
      if ( v90 <= (int)v23 )
        goto LABEL_90;
    }
    v31 = v21 > 0;
    if ( (v28 & 1) != 0 )
    {
      v59 = *v27;
      if ( v30 > (int)v23 + 1 )
      {
        if ( v59 == **(_QWORD **)(v25 + v26 + 8) )
        {
LABEL_115:
          v31 = 0;
        }
        else
        {
          v60 = (_QWORD **)(v25 + v26 + 16);
          v61 = (_QWORD **)(v25 + 8 * (v23 + (unsigned int)(v30 - 2 - v23) + 2));
          while ( v61 != v60 )
          {
            v62 = *v60++;
            if ( *v62 == v59 )
              goto LABEL_115;
          }
        }
      }
    }
LABEL_36:
    if ( v24 )
    {
      v32 = -1;
      v33 = *(__int16 *)(v24[1] + 2 * v23);
      v100 = *(_BYTE *)(v24[7] + v23) & 1;
      v34 = v24[3];
      if ( (_WORD)v33 != *(_WORD *)(v34 + 52) )
      {
        v32 = (__int16)v33;
        if ( v99 )
        {
          if ( (v33 & 0x8000u) != 0LL )
          {
            v99 = (__int16)v33 != -2;
          }
          else if ( v30 <= (int)v23 )
          {
            v99 = (*(_BYTE *)(16 * v33 + *(_QWORD *)(v34 + 8) + 8) & 0xF) != 0;
          }
        }
      }
      if ( !v31 )
      {
LABEL_108:
        v9 = v21;
        v12 = v20;
        goto LABEL_56;
      }
    }
    else
    {
      v32 = -1;
      v100 = 0;
      if ( !v31 )
        goto LABEL_108;
    }
    v35 = 8 * v23;
    v36 = (__int64 *)(a2 + 2);
    v85 = v20;
    v101 = v23;
    v37 = 0;
    v38 = v31;
    v88 = v35;
    v39 = v24;
    while ( 2 )
    {
      if ( _bittest64((const __int64 *)&v11, v37) || (v40 = *v36) == 0 )
      {
LABEL_52:
        v43 = v38;
        goto LABEL_53;
      }
      v41 = *(_DWORD *)(v40 + 4);
      for ( k = *v36; (v41 & 0x41000) != 0; v41 = *(_DWORD *)(k + 4) )
      {
        if ( (v41 & 0x40000) != 0 )
        {
          k = *(_QWORD *)(*(_QWORD *)(k + 32) + 8LL);
          if ( !k )
            goto LABEL_52;
        }
        else
        {
          k = *(_QWORD *)(k + 16);
          if ( !k )
            goto LABEL_52;
        }
      }
      v43 = (a4 & 0xC0) != 0;
      if ( v32 < -1 )
      {
        v97 = v32;
        v95 = v10;
        v93 = v39;
        v54 = sub_F9E50(k, *(_QWORD *)(v39[10] + 24LL * v78 + 8), v89, a7);
        v39 = v93;
        v10 = v95;
        v32 = v97;
        if ( !v54 )
        {
          v40 = *v36;
          goto LABEL_71;
        }
LABEL_53:
        v37 = (unsigned int)(v37 + 1);
        v36 += 3;
        if ( v21 <= (int)v37 || !v43 )
        {
          v9 = v21;
          v12 = v85;
          goto LABEL_56;
        }
        continue;
      }
      break;
    }
    if ( ((*(_BYTE *)k + 89) & 0xFD) != 0 || *(_DWORD *)(k + 44) != v89 || *(__int16 *)(k + 48) != v32 )
      goto LABEL_53;
    if ( v32 != -1 )
    {
LABEL_71:
      v98 = v32;
      v96 = v39;
      v94 = v10;
      v92 = *a1;
      v46 = (_BYTE **)sub_F3950(*a1, (unsigned __int8 *)v40, a7);
      v10 = v94;
      v39 = v96;
      v32 = v98;
      if ( !v46 )
        v46 = *(_BYTE ***)(*(_QWORD *)v92 + 16LL);
      v47 = *v46;
      for ( m = *(unsigned __int8 **)(v96[8] + v88); ; ++m )
      {
        v49 = (unsigned __int8)*v47;
        v50 = *m;
        if ( (_DWORD)v49 == (_DWORD)v50 )
        {
          if ( !*v47 )
            break;
        }
        else if ( v94[v49] != v94[v50] )
        {
          goto LABEL_53;
        }
        ++v47;
      }
    }
    v24 = v39;
    v20 = v85;
    if ( (a4 & 0x80) != 0 )
      *(_WORD *)(v85 + 30) = v101 + 1;
    v51 = &a2[6 * (int)v37];
    v52 = *((_BYTE *)v51 + 24);
    if ( (a4 & 0x40) != 0 )
    {
LABEL_84:
      if ( (v52 & 2) != 0 )
      {
        if ( *(unsigned __int16 *)(v85 + 24) != v78 )
          goto LABEL_108;
        *(_DWORD *)(v85 + 48) |= 0x80000u;
      }
      v53 = v82;
      if ( v32 == -1 )
        v53 = 1;
      v23 = v101 + 1;
      v82 = v53;
      v11 |= 1LL << v37;
      if ( v90 <= (int)v101 + 1 )
      {
LABEL_90:
        v9 = v21;
        v12 = v20;
        goto LABEL_58;
      }
      goto LABEL_34;
    }
    if ( !v112 )
    {
      if ( (v52 & 1) == v100 )
      {
        v113 = 0;
        v112 = 1;
      }
      else
      {
        v113 = 1;
        v112 = 1;
        *a8 |= 1LL << v102;
        v52 = *((_BYTE *)v51 + 24);
      }
      goto LABEL_84;
    }
    if ( ((unsigned __int8)v113 ^ v100) == (v52 & 1) )
      goto LABEL_84;
    v9 = v21;
    v12 = v85;
LABEL_56:
    if ( !v78 || v114 > v78 )
      break;
LABEL_58:
    if ( !(v99 | (unsigned __int8)v82) )
      goto LABEL_59;
LABEL_154:
    v109 |= *(_QWORD *)(v12 + 8);
    if ( v9 )
    {
      v15 = (__int64 *)(a2 + 2);
LABEL_122:
      v63 = 0;
      v64 = v9;
      v65 = v11;
      while ( 2 )
      {
        while ( 2 )
        {
          if ( _bittest64((const __int64 *)&v65, v63) )
          {
LABEL_125:
            v63 = (unsigned int)(v63 + 1);
            v15 += 3;
            if ( v64 <= (int)v63 )
              goto LABEL_130;
            continue;
          }
          break;
        }
        v67 = *v15;
        if ( *v15 )
        {
          v79 = v10;
          v66 = sub_D0AB0((_DWORD *)a1 + 152, *v15);
          v10 = v79;
          if ( v66 )
          {
            if ( (v66 & ~v109) != 0 )
              goto LABEL_125;
            goto LABEL_128;
          }
          v120 = 1;
          v121 = 0;
          v118 = sub_CE7B0;
          v119 = sub_C43E0;
          sub_CDCD0((__int64)v117, v67);
          v10 = v79;
          if ( !v120 )
            goto LABEL_125;
          v65 |= 1LL << v63;
        }
        else
        {
LABEL_128:
          v65 |= 1LL << v63;
        }
        v63 = (unsigned int)(v63 + 1);
        v15 += 3;
        if ( v64 <= (int)v63 )
        {
LABEL_130:
          v11 = v65;
          v9 = v64;
          break;
        }
        continue;
      }
    }
LABEL_104:
    if ( v11 >= v107 )
    {
      if ( v11 != v107 )
        return 0xFFFFFFFFLL;
      return (unsigned __int8)v116;
    }
    if ( (int)v102 + 1 > v104 )
      return 0xFFFFFFFFLL;
    ++v102;
  }
  if ( v82 )
    goto LABEL_154;
LABEL_59:
  if ( v11 == v107 )
    return (unsigned __int8)v116;
  v44 = v9 - 1;
  if ( v9 - 1 <= 0 )
    return 0;
  if ( v44 <= 63 && (1LL << v44) - 1 != (((1LL << v44) - 1) & v11) )
  {
    while ( --v44 )
    {
      if ( (((1LL << v44) - 1) & v11) == (1LL << v44) - 1 )
        return (unsigned int)v44;
    }
    return 0;
  }
  return (unsigned int)v44;
}
