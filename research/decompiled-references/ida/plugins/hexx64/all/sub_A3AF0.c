unsigned int *__fastcall sub_A3AF0(__int64 a1, unsigned __int8 *a2, _QWORD *a3, char a4, __m128i a5, __m128 a6)
{
  unsigned int *v6; // r15
  unsigned __int64 v7; // r13
  int v10; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // rbp
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // r9
  char *v28; // r12
  __int64 v29; // r8
  char v30; // al
  char *v31; // rcx
  char *v32; // rdx
  __int64 *v33; // r12
  __int64 v34; // rax
  unsigned int *v35; // rax
  char v36; // al
  __int64 v37; // rdx
  int v38; // eax
  _QWORD *v39; // r12
  char v40; // r12
  __int128 v41; // rdi
  int v42; // r8d
  int v43; // r9d
  char v44; // al
  __int64 v45; // r11
  char v46; // al
  _DWORD *v47; // r12
  char v48; // al
  char v49; // al
  int v50; // [rsp+0h] [rbp-1B8h]
  char *v51; // [rsp+8h] [rbp-1B0h]
  int v52; // [rsp+10h] [rbp-1A8h]
  unsigned int v53; // [rsp+14h] [rbp-1A4h]
  unsigned __int8 *v54; // [rsp+18h] [rbp-1A0h]
  _DWORD *v55; // [rsp+20h] [rbp-198h]
  char *v56; // [rsp+28h] [rbp-190h]
  char v57; // [rsp+30h] [rbp-188h]
  __int64 *v58; // [rsp+30h] [rbp-188h]
  __int64 *v59; // [rsp+30h] [rbp-188h]
  __int64 *v60; // [rsp+30h] [rbp-188h]
  char v61; // [rsp+38h] [rbp-180h]
  __int64 v62; // [rsp+38h] [rbp-180h]
  __int64 v63; // [rsp+38h] [rbp-180h]
  __int64 v64; // [rsp+38h] [rbp-180h]
  unsigned int *v65; // [rsp+60h] [rbp-158h]
  unsigned int *v66; // [rsp+68h] [rbp-150h]
  __int64 v67; // [rsp+70h] [rbp-148h]
  __int64 v68; // [rsp+78h] [rbp-140h]
  __int64 v69; // [rsp+80h] [rbp-138h] BYREF
  int v70; // [rsp+88h] [rbp-130h]
  __int64 v71; // [rsp+90h] [rbp-128h] BYREF
  int v72; // [rsp+98h] [rbp-120h]
  __int64 v73[2]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-108h] BYREF
  __int128 v75; // [rsp+B8h] [rbp-100h]
  __int64 v76; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-E0h]
  unsigned __int64 *v78; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v79; // [rsp+E8h] [rbp-D0h]
  __int16 v80; // [rsp+104h] [rbp-B4h]
  char v81; // [rsp+106h] [rbp-B2h]
  char v82; // [rsp+107h] [rbp-B1h]
  __int64 v83; // [rsp+108h] [rbp-B0h] BYREF
  char v84[16]; // [rsp+110h] [rbp-A8h] BYREF
  char v85[16]; // [rsp+120h] [rbp-98h] BYREF
  _BYTE v86[16]; // [rsp+130h] [rbp-88h] BYREF
  unsigned __int8 v87[16]; // [rsp+140h] [rbp-78h] BYREF
  _BYTE v88[16]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int8 v89[24]; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v90; // [rsp+178h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  if ( !a2 )
    return nullptr;
  v6 = (unsigned int *)a2;
  if ( (*((_WORD *)a2 + 2) & 0x810) != 0 )
    return nullptr;
  v7 = *(unsigned int *)a2;
  if ( (_DWORD)v7 == 1 )
    return (unsigned int *)sub_A35F0(a1, (__int64)a2, a4, a5);
  v10 = *((_DWORD *)a2 + 17);
  if ( v10 <= 1 )
    return nullptr;
  v53 = v10 >> 1;
  if ( !sub_11CA80(v10 >> 1) )
    return nullptr;
  if ( (unsigned int)v7 > 0x3D )
    return nullptr;
  v14 = 0x30000000003FF39CLL;
  if ( !_bittest64(&v14, v7) )
    return nullptr;
  v56 = (char *)(a2 + 64);
  v55 = *(_DWORD **)(*(_QWORD *)(a1 + 480) + 112LL);
  v51 = v84;
  sub_123A40((__int64)v84, a2 + 64, v12, v13);
  v54 = (unsigned __int8 *)v85;
  sub_123A40((__int64)v85, a2 + 64, v15, v16);
  if ( !(unsigned __int8)sub_1272B0((unsigned __int64)v84, (__int64)v55, v53, 0)
    || (v61 = sub_127850((unsigned __int64)v85, (__int64)v55, v53, 0)) == 0 )
  {
    v17 = nullptr;
    goto LABEL_10;
  }
  v57 = sub_A1ED0(v84, a3, *(double *)a5.m128i_i64, a6) ^ 1;
  v81 = v57;
  v19 = sub_A1ED0(v85, a3, *(double *)a5.m128i_i64, a6) ^ 1;
  v82 = v19;
  if ( (_DWORD)v7 == 2 )
  {
    v31 = v85;
    v32 = nullptr;
    if ( !v19 )
      v31 = nullptr;
    if ( v57 )
      v32 = v84;
    v17 = (unsigned int *)sub_A38B0(a1, (__int64)a2, (__int64)v32, (__int64)v31, a4, a5);
    goto LABEL_10;
  }
  if ( !v19 && (unsigned int)(*(_DWORD *)a2 - 8) <= 1 )
  {
    if ( (a4 & 2) == 0 )
    {
      if ( *((_DWORD *)a2 + 9) == v53 )
      {
        *((_DWORD *)a2 + 1) |= 0x40000u;
        *(_DWORD *)a2 = 4;
      }
      else if ( *((_DWORD *)a2 + 9) >= (signed int)v53 )
      {
        if ( !under_debugger )
          sub_383060(0xCADDu, *(double *)a5.m128i_i64);
        BUG();
      }
      sub_11CA10(v56, v84);
    }
    v17 = (unsigned int *)a2;
    goto LABEL_10;
  }
  v80 = 257;
  v65 = (unsigned int *)(a2 + 32);
  sub_123A40((__int64)v86, a2 + 32, v20, 257);
  sub_123A40((__int64)v87, a2 + 32, v21, v22);
  v66 = (unsigned int *)(a2 + 48);
  sub_123A40((__int64)v88, a2 + 48, v23, v24);
  sub_123A40((__int64)v89, a2 + 48, v25, v26);
  if ( (unsigned int)(v7 - 8) <= 1 )
    goto LABEL_24;
  if ( !v86[0] )
  {
    if ( !v88[0] )
      goto LABEL_21;
LABEL_73:
    v40 = 0;
LABEL_74:
    if ( (unsigned __int8)sub_1272B0((unsigned __int64)v88, (__int64)v55, v53, 1u) == 1 && !v40 )
      goto LABEL_21;
    goto LABEL_76;
  }
  if ( (unsigned __int8)sub_1272B0((unsigned __int64)v86, (__int64)v55, v53, 1u) )
  {
    if ( !v88[0] )
      goto LABEL_21;
    goto LABEL_73;
  }
  if ( v88[0] )
  {
    v40 = v61;
    goto LABEL_74;
  }
LABEL_76:
  if ( v57 )
    goto LABEL_45;
  LOBYTE(v80) = 0;
LABEL_21:
  if ( v87[0] )
  {
    if ( !(unsigned __int8)sub_127850((unsigned __int64)v87, (__int64)v55, v53, 1) )
    {
      if ( !v89[0] )
        goto LABEL_83;
      goto LABEL_81;
    }
    v57 = v81;
    if ( !v89[0] )
      goto LABEL_24;
LABEL_80:
    v61 = 0;
LABEL_81:
    if ( (unsigned __int8)sub_127850((unsigned __int64)v89, (__int64)v55, v53, 1) == 1 && !v61 )
      goto LABEL_23;
LABEL_83:
    if ( v82 )
      goto LABEL_45;
    HIBYTE(v80) = 0;
    goto LABEL_23;
  }
  if ( v89[0] )
    goto LABEL_80;
LABEL_23:
  v57 = v81;
LABEL_24:
  v27 = &v83;
  v28 = (char *)&v83;
  v83 = 0x100000000LL;
  if ( !v57 )
    goto LABEL_27;
  while ( 1 )
  {
    v28 += 4;
    if ( v28 == v84 )
      break;
    if ( !*(&v81 + *(int *)v28) )
    {
LABEL_27:
      v29 = *(int *)v28;
      if ( v86[16 * v29] == 4
        && (v63 = *(int *)v28,
            v59 = v27,
            v46 = sub_1205A0(*(_BYTE **)&v86[16 * v63 + 8], (__int64)v55, 0, 0x100000000LL, v29, (int)v27),
            v27 = v59,
            v29 = v63,
            v46)
        || v88[16 * v29] == 4
        && (v64 = v29,
            v60 = v27,
            v49 = sub_1205A0(*(_BYTE **)&v88[16 * v29 + 8], (__int64)v55, 0, 0x100000000LL, v29, (int)v27),
            v27 = v60,
            v29 = v64,
            v49)
        || v84[16 * v29] == 4
        && (v62 = v29,
            v58 = v27,
            v30 = sub_1205A0(*(_BYTE **)&v84[16 * v29 + 8], (__int64)v55, 0, 0x100000000LL, v29, (int)v27),
            v27 = v58,
            v29 = v62,
            v30) )
      {
        if ( !*((_BYTE *)&v80 + v29) )
          goto LABEL_45;
        *(&v81 + v29) = 1;
      }
    }
  }
  if ( (a4 & 2) == 0 )
  {
LABEL_43:
    switch ( (int)v7 )
    {
      case 3:
      case 4:
      case 7:
      case 19:
      case 20:
      case 21:
      case 61:
        if ( !v81 )
        {
          if ( !v82 )
            goto LABEL_45;
          if ( (a4 & 2) == 0 )
          {
            v6[1] &= ~0x2000u;
            v35 = sub_A30F0(*(_QWORD **)(a1 + 64), v6, v7, (__int64)v87, (__int64)v89, (__int64)v54);
            goto LABEL_51;
          }
          goto LABEL_65;
        }
        if ( !v82 )
          goto LABEL_59;
        if ( (a4 & 1) == 0 )
          goto LABEL_45;
        if ( (a4 & 2) != 0 )
          goto LABEL_65;
        v47 = sub_A30F0(*(_QWORD **)(a1 + 64), v6, v7, (__int64)v86, (__int64)v88, (__int64)v51);
        v17 = (unsigned int *)sub_A3240(a1, (__int64)v47, (unsigned int)v7, v87, v89, v54, a5);
        sub_A3780(a1, (__int64)v47, (__int64)v17, *(double *)a5.m128i_i64);
        goto LABEL_46;
      case 12:
      case 13:
      case 14:
        if ( v82 )
          goto LABEL_45;
        goto LABEL_58;
      case 15:
      case 16:
      case 17:
      case 18:
        if ( v82 )
          goto LABEL_45;
        if ( (((_DWORD)v7 - 15) & 0xFFFFFFFD) != 0 )
        {
          if ( !sub_30DAC0((__int64)v65, v53) )
            goto LABEL_45;
          v36 = sub_30DAC0((__int64)v66, v53);
        }
        else
        {
          if ( !(unsigned __int8)sub_11FD80((char *)v87, &v76, 0) || v76 )
            goto LABEL_45;
          v36 = sub_A2350((char *)v89, 0, 0);
        }
        if ( !v36 )
          goto LABEL_45;
LABEL_58:
        if ( !v81 )
          goto LABEL_45;
LABEL_59:
        if ( (a4 & 2) != 0 )
        {
LABEL_65:
          v17 = v6;
        }
        else
        {
          v35 = sub_A30F0(*(_QWORD **)(a1 + 64), v6, v7, (__int64)v86, (__int64)v88, (__int64)v51);
LABEL_51:
          v17 = v35;
        }
        break;
      case 60:
        if ( v81 && v82 )
          goto LABEL_45;
        if ( (a4 & 2) == 0 )
        {
          v71 = 1;
          v69 = 0x200000001LL;
          v37 = (unsigned int)v55[21];
          v70 = v55[14];
          v38 = v55[15];
          HIDWORD(v71) = v37;
          v72 = v38;
          sub_123A40((__int64)v73, (unsigned __int8 *)v56, v37, 0x200000001LL);
          v39 = *(_QWORD **)(a1 + 64);
          v6[1] &= ~0x10u;
          *v6 = 2;
          sub_A0C30(v39, (__int64)v65, (__int64)&v69);
          sub_A0C30(v39, (__int64)v66, (__int64)&v71);
          sub_A0C30(v39, (__int64)v56, (__int64)v73);
          v77 = 0;
          v76 = 0xFFFFFFFF00000000LL;
          sub_120A10((__int64)&v76, (__int64)v55, (int)(v10 & 0xFFFFFFFE), v55[21], -1, 0);
          v6 = (unsigned int *)sub_A3240(
                                 a1,
                                 (__int64)v6,
                                 12,
                                 (unsigned __int8 *)&v76,
                                 (unsigned __int8 *)&v71,
                                 (unsigned __int8 *)&v71,
                                 a5);
          sub_11CDA0((__int64)&v76);
          sub_11CDA0((__int64)v73);
          sub_11CDA0((__int64)&v71);
          sub_11CDA0((__int64)&v69);
        }
        goto LABEL_65;
      default:
        goto LABEL_45;
    }
    goto LABEL_46;
  }
  v83 = 0x100000000LL;
  v33 = v27;
  while ( 1 )
  {
    if ( !*(&v81 + *(int *)v33) )
    {
      v34 = 1 - *(_DWORD *)v33;
      if ( *((_BYTE *)&v80 + v34) )
        break;
    }
LABEL_42:
    v33 = (__int64 *)((char *)v33 + 4);
    if ( v51 == (char *)v33 )
      goto LABEL_43;
  }
  *(_QWORD *)&v41 = a1;
  v67 = 16 * v34;
  v68 = *(int *)v33;
  *((_QWORD *)&v41 + 1) = v73;
  v73[0] = 0;
  v73[1] = 0;
  v74 = 0;
  v75 = 0;
  sub_123EA0(v41, (__int64)&v86[16 * v34], 1, 0xFFFF0000);
  *(_QWORD *)&v41 = a1;
  *((_QWORD *)&v41 + 1) = v73;
  sub_123EA0(v41, (__int64)&v88[v67], 1, 0xFFFF0000);
  a5 = 0;
  v76 = 0;
  v77 = 0;
  v79 = 0;
  v78 = nullptr;
  sub_127FE0(a1, (__int64)&v76, (__int64)&v51[16 * v68], 0, v42, v43, v50, (int)v51, v52, (int)v54, (__int64)v55);
  v44 = sub_64780(&v76, v73);
  v45 = v68;
  if ( !v44 )
  {
    v48 = sub_318470(&v78, (__int64)&v74);
    v45 = v68;
    if ( !v48 )
    {
LABEL_88:
      if ( v78 )
      {
        *(_QWORD *)&v79 = 0;
        qfree((__int64)v78);
      }
      qfree(v76);
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree(v74);
      }
      qfree(v73[0]);
      goto LABEL_42;
    }
  }
  if ( *((_BYTE *)&v80 + v45) )
  {
    *(&v81 + v45) = 1;
    goto LABEL_88;
  }
  sub_93B40(&v76);
  sub_93B40(v73);
LABEL_45:
  v17 = nullptr;
LABEL_46:
  sub_11CDA0((__int64)v89);
  sub_11CDA0((__int64)v88);
  sub_11CDA0((__int64)v87);
  sub_11CDA0((__int64)v86);
LABEL_10:
  sub_11CDA0((__int64)v54);
  sub_11CDA0((__int64)v51);
  return v17;
}

