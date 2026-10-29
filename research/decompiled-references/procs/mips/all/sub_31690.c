__int64 __fastcall sub_31690(__int64 a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned __int16 v8; // cx
  char v9; // al
  unsigned int v10; // ebp
  char v12; // r14
  __int64 v13; // r15
  int v14; // edx
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rsi
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // al
  _DWORD *v20; // r8
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  unsigned __int8 v22; // al
  bool v23; // dl
  bool v24; // cc
  bool v25; // al
  int v26; // eax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 first_seg; // rax
  __int64 v34; // rdx
  int v35; // eax
  char v36; // dl
  __int64 v37; // rax
  __int16 v38; // dx
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rcx
  int v42; // eax
  _QWORD *v43; // rdi
  int v44; // r15d
  __int64 v45; // rdx
  _QWORD *v46; // rax
  int *v47; // rdx
  int v48; // ecx
  int v49; // edi
  unsigned int v50; // esi
  int *v51; // rdx
  int v52; // ecx
  int v53; // eax
  char v54; // al
  __int64 v55; // rdx
  _QWORD *v56; // rax
  _DWORD *v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+8h] [rbp-80h]
  _DWORD *v59; // [rsp+10h] [rbp-78h]
  _DWORD *v60; // [rsp+10h] [rbp-78h]
  _QWORD *v61; // [rsp+20h] [rbp-68h] BYREF
  __int128 v62; // [rsp+28h] [rbp-60h]
  char v63; // [rsp+38h] [rbp-50h]
  _DWORD v64[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v65; // [rsp+48h] [rbp-40h]

  v8 = *(_WORD *)(a1 + 40);
  v65 = __readfsqword(0x28u);
  v9 = 0;
  if ( v8 == 1010 )
  {
    *(_DWORD *)(a1 + 900) = 2;
    v9 = 2;
    goto LABEL_9;
  }
  if ( v8 <= 0x3F2u )
  {
    if ( v8 > 0x84u )
    {
      if ( v8 > 0x86u )
      {
        if ( v8 != 815 )
          return 0;
        *(_DWORD *)(a1 + 900) = 2;
        if ( a4 )
          return 0;
        goto LABEL_39;
      }
      v14 = 1;
      v9 = 1;
    }
    else if ( v8 > 0x82u )
    {
      v14 = 2;
      v9 = 2;
    }
    else
    {
      if ( v8 > 0x79u )
      {
        if ( v8 != 126 )
          return 0;
        *(_DWORD *)(a1 + 900) = 3;
        v9 = 3;
        goto LABEL_18;
      }
      v14 = 0;
      if ( v8 <= 0x77u )
        return 0;
    }
    *(_DWORD *)(a1 + 900) = v14;
    v15 = 1LL << ((unsigned __int8)v8 - 120);
    if ( (v15 & 0x5042) == 0 )
    {
      if ( (v15 & 0x2801) == 0 )
        return 0;
      goto LABEL_9;
    }
LABEL_18:
    v12 = 0;
    if ( !a4 )
      goto LABEL_22;
    if ( a4 < 0 )
      return 0;
    v12 = 0;
    goto LABEL_21;
  }
  if ( v8 == 1013 )
  {
    v16 = 0;
    v9 = 0;
    goto LABEL_33;
  }
  if ( v8 <= 0x3F5u )
  {
    if ( v8 != 1011 )
    {
      *(_DWORD *)(a1 + 900) = 1;
      goto LABEL_35;
    }
    v16 = 3;
    v9 = 3;
LABEL_33:
    *(_DWORD *)(a1 + 900) = v16;
    goto LABEL_18;
  }
  if ( v8 == 1130 )
  {
    *(_DWORD *)(a1 + 900) = 1;
LABEL_30:
    v9 = 1;
    goto LABEL_18;
  }
  if ( v8 > 0x46Au )
  {
    if ( (unsigned __int16)(v8 - 1711) > 1u )
      return 0;
    *(_DWORD *)(a1 + 900) = 1;
    if ( v8 != 1711 )
      goto LABEL_30;
LABEL_35:
    v9 = 1;
    goto LABEL_9;
  }
  if ( v8 != 1129 )
    return 0;
  *(_DWORD *)(a1 + 900) = 0;
  v9 = 0;
LABEL_9:
  if ( !a4 )
  {
LABEL_39:
    v12 = 1;
    goto LABEL_22;
  }
  if ( a4 >= 0 )
    return 0;
  a4 = -a4;
  v12 = 1;
LABEL_21:
  if ( 1 << v9 != a4 )
    return 0;
LABEL_22:
  v13 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v13 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v57 = a3;
  v17 = a1 + 56;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v13);
  if ( !(_BYTE)v10 )
    return 0;
  v18 = *(_BYTE *)(v13 + 5);
  v19 = *(_BYTE *)(a1 + 61);
  v20 = v57;
  if ( v19 <= 0xF9u )
  {
    if ( v19 >= v18 || v18 > 0xF9u || *(_BYTE *)(a1 + 8) && v19 == 2 )
      goto LABEL_48;
  }
  else if ( v19 >= v18 && v18 > 0xF9u )
  {
    goto LABEL_48;
  }
  v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v21 == sub_288C0 )
    return 0;
  v22 = v21(a1, a1 + 56);
  v20 = v57;
  v17 = (v22 < v18) & (unsigned __int8)(v18 <= 0xF9u);
  v23 = v18 <= 0xF9u || v22 < v18;
  v24 = v22 <= 0xF9u;
  v25 = v22 < v18 && v18 <= 0xF9u;
  if ( !v24 )
    v25 = v23;
  if ( v25 )
    return 0;
LABEL_48:
  v26 = *(unsigned __int16 *)(a1 + 40);
  if ( (_WORD)v26 != 815 )
  {
    if ( (unsigned __int16)v26 <= 0x32Fu )
    {
      v27 = (unsigned int)(v26 - 120);
      if ( (unsigned __int16)v27 > 0xEu )
        return 0;
      v28 = 30787;
      if ( !_bittest64(&v28, v27) || *(_BYTE *)(a1 + 97) != 4 )
        return 0;
      *a2 = *(_QWORD *)(a1 + 112) & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
      LOWORD(v29) = *(_WORD *)(a1 + 102);
      goto LABEL_54;
    }
    if ( (unsigned __int16)v26 > 0x46Au )
    {
      if ( (unsigned __int16)(v26 - 1711) > 1u )
        return 0;
    }
    else if ( (unsigned __int16)v26 <= 0x468u && (unsigned __int16)(v26 - 1010) > 3u )
    {
      return 0;
    }
  }
  if ( *(_BYTE *)(a1 + 97) != 3 )
    return 0;
  if ( *(_BYTE *)(a1 + 128) != 1 )
  {
    v39 = *(_QWORD *)(a1 + 32);
    v60 = v20;
    v40 = *(_QWORD *)(a1 + 888);
    v29 = *(_QWORD *)(a1 + 120) & 0x1FLL;
    v41 = (*(_QWORD *)(a1 + 120) >> 5) & 0x1FLL;
    if ( (unsigned __int16)(v26 - 1711) <= 1u || (_WORD)v26 == 815 )
    {
      v63 = 0;
      v61 = nullptr;
      v62 = 0;
      v54 = sub_488A0(v40, &v61, v39, v41);
      v43 = v61;
      if ( v54 && (unsigned __int8)(v63 - 10) <= 1u )
      {
        v55 = *v61;
        if ( (_QWORD)v62 == 1 || (v56 = v61 + 3, 24LL * (_QWORD)v62 == 24) )
        {
LABEL_125:
          *a2 = v55;
          v17 = a1 + 840;
          sub_48A10(*(_QWORD *)(a1 + 888), a1 + 840, &v61);
          v20 = v60;
          if ( v61 )
          {
            *(_QWORD *)&v62 = 0;
            qfree(v61);
            v20 = v60;
          }
          goto LABEL_54;
        }
        while ( *v56 == v55 )
        {
          v56 += 3;
          if ( v56 == &v61[3 * (_QWORD)v62] )
            goto LABEL_125;
        }
      }
      if ( !v61 )
        return 0;
    }
    else
    {
      v64[1] = (*(_QWORD *)(a1 + 120) >> 5) & 0x1F;
      v64[0] = v29;
      v61 = nullptr;
      v63 = 0;
      v62 = 0;
      v42 = sub_48E60(v40, &v61, v39, v64);
      v43 = v61;
      v44 = v42;
      if ( v42 != -1 && (unsigned __int8)(v63 - 10) <= 1u )
      {
        v45 = *v61;
        if ( (_QWORD)v62 == 1 || (v46 = v61 + 3, 24LL * (_QWORD)v62 == 24) )
        {
LABEL_118:
          *a2 = v45;
          v17 = a1 + 840;
          sub_48A10(*(_QWORD *)(a1 + 888), a1 + 840, &v61);
          v20 = v60;
          if ( v61 )
          {
            *(_QWORD *)&v62 = 0;
            qfree(v61);
            v20 = v60;
          }
          LODWORD(v29) = v64[1 - v44];
          goto LABEL_54;
        }
        while ( v45 == *v46 )
        {
          v46 += 3;
          if ( &v61[3 * (_QWORD)v62] == v46 )
            goto LABEL_118;
        }
      }
      if ( !v61 )
        return 0;
    }
    *(_QWORD *)&v62 = 0;
    qfree(v43);
    return 0;
  }
  *a2 = 0;
  LOWORD(v29) = *(_WORD *)(a1 + 102);
LABEL_54:
  v30 = *(_QWORD *)(a1 + 888);
  v31 = *(_DWORD *)(v30 + 120);
  if ( v31 > 5 )
    goto LABEL_128;
  if ( ((1LL << v31) & 0x16) != 0 )
  {
LABEL_97:
    v36 = 7;
    goto LABEL_62;
  }
  if ( ((1LL << v31) & 0x29) == 0 )
  {
LABEL_128:
    sub_28E30();
    goto LABEL_129;
  }
  v32 = *(_QWORD *)(a1 + 32);
  v59 = v20;
  v58 = *(_QWORD *)(a1 + 888);
  if ( v32 == -1 )
  {
    first_seg = get_first_seg(-1, v17, v30);
    v20 = v59;
    v34 = v58;
  }
  else
  {
    first_seg = getseg(v32);
    v34 = v58;
    v20 = v59;
  }
  if ( !first_seg )
  {
    sub_28E10(v32, v17, v34);
    goto LABEL_128;
  }
  if ( *(_BYTE *)(first_seg + 43) == 2 )
    goto LABEL_97;
  v35 = *(_DWORD *)(v34 + 184);
  v36 = 2;
  if ( (unsigned int)(v35 - 4) <= 1 )
    goto LABEL_97;
LABEL_62:
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v29;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v36;
  if ( *a2 )
    *v20 = (*(_DWORD *)(a1 + 44) & 8) == 0 ? 4 : 2;
  if ( a4 )
    goto LABEL_65;
  v47 = *(int **)(a1 + 376);
  v48 = *(_DWORD *)(a1 + 900);
  v49 = *v47;
  v50 = *v47 & 0xFFFFFBFB;
  *v47 = v50;
  if ( v48 == 2 )
  {
    *v47 = v50 | 4;
    goto LABEL_104;
  }
  if ( 1 << v48 > 4 )
  {
    if ( v48 == 3 )
    {
      *v47 = v49 | 0x404;
      goto LABEL_104;
    }
    goto LABEL_129;
  }
  if ( !v48 )
  {
    *v47 = v50 | 0x400;
    goto LABEL_104;
  }
  if ( v48 != 1 )
  {
LABEL_129:
    if ( !under_debugger )
      interr(1297);
    BUG();
  }
LABEL_104:
  v51 = *(int **)(a1 + 376);
  v53 = *v51;
  v52 = *v51;
  BYTE1(v53) = BYTE1(*v51) | 0x20;
  if ( !v12 )
  {
    BYTE1(v52) = BYTE1(*v51) & 0xDF;
    v53 = v52;
  }
  *v51 = v53;
LABEL_65:
  v37 = *(int *)(a1 + 896);
  if ( (_DWORD)v37 != -1 )
  {
    v38 = *(_WORD *)(a1 + 40);
    if ( (unsigned __int16)(v38 - 1711) <= 1u || v38 == 815 )
      *(_BYTE *)(a1 + v37 + 512) = 1;
  }
  return v10;
}
