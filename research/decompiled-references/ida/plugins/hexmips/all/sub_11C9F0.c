__int64 __fastcall sub_11C9F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  _BYTE *v15; // rax
  _BYTE *v16; // rdx
  __int64 v17; // r12
  int v18; // ecx
  _BYTE *v20; // rax
  _BYTE *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r13
  char v30; // al
  char v31; // dl
  char v32; // al
  __int16 v33; // dx
  __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // r13
  int v37; // edx
  int v38; // r8d
  __int64 (*v39)(); // rax
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rdx
  char v45; // al
  char v46; // cl
  char v47; // al
  __int16 v48; // cx
  __int16 v49; // ax
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  unsigned __int64 v55; // rsi
  char v56; // cl
  char v57; // al
  __int16 v58; // cx
  __int16 v59; // ax
  int v60; // ecx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  int v67; // [rsp+0h] [rbp-A8h]
  __int64 name_base_ea; // [rsp+8h] [rbp-A0h]
  __int64 v69; // [rsp+8h] [rbp-A0h]
  __int64 v70; // [rsp+18h] [rbp-90h]
  int v71; // [rsp+28h] [rbp-80h] BYREF
  int v72; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v73; // [rsp+30h] [rbp-78h]
  __int64 v74; // [rsp+38h] [rbp-70h]
  char v75[16]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v76; // [rsp+50h] [rbp-58h]
  char v77; // [rsp+58h] [rbp-50h]
  char v78; // [rsp+59h] [rbp-4Fh]
  unsigned __int64 v79; // [rsp+68h] [rbp-40h]
  __int64 v80; // [rsp+B8h] [rbp+10h]

  v11 = a5;
  v12 = a3;
  v13 = *(_QWORD *)(a2 + 112);
  if ( a8 != -1 )
    v12 = a8;
  v79 = __readfsqword(0x28u);
  v80 = v12;
  if ( a6 == 8 && a5 > 0 && (int)a5 != a5 && *(_DWORD *)(v13 + 84) == 8 )
  {
    v24 = getinf();
    v11 = a5;
    if ( a5 == v24 )
    {
      *(_BYTE *)a1 = 6;
      v25 = 8 * *(_DWORD *)(v13 + 84);
      if ( (unsigned __int64)v25 <= 0x3F )
        v11 = ~(-1LL << v25) & a5;
      *(_QWORD *)(a1 + 8) = v11;
      sub_118750((char *)a1, v13);
      return 1;
    }
  }
  sub_11C810(a1, v13, v11, a6, a3, *a4);
  if ( (unsigned __int8)get_item_refinfo() )
  {
    if ( (a7 & 1) != 0 )
    {
      v15 = *(_BYTE **)(v13 + 304);
      v16 = &v15[*(_QWORD *)(v13 + 312)];
      if ( v16 != v15 )
      {
        while ( *v15 != (v77 & 0x4F) )
        {
          if ( v16 == ++v15 )
            goto LABEL_18;
        }
        if ( v15 != v16 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          sub_118BA0(a1);
          *(_BYTE *)a1 = 6;
          v18 = 8 * *(_DWORD *)(v13 + 84);
          if ( (unsigned __int64)v18 <= 0x3F )
            v17 &= ~(-1LL << v18);
          *(_QWORD *)(a1 + 8) = v17;
          sub_118750((char *)a1, v13);
          sub_11C5E0((char *)a1, v13, 9, a3, a6);
          return 1;
        }
      }
    }
LABEL_18:
    if ( (v77 & 0x10) != 0 )
      goto LABEL_25;
    if ( (a7 & 4) != 0 )
    {
      v20 = *(_BYTE **)(v13 + 328);
      v21 = &v20[*(_QWORD *)(v13 + 336)];
      if ( v20 != v21 )
      {
        while ( *v20 != (v77 & 0x4F) )
        {
          if ( v21 == ++v20 )
            goto LABEL_27;
        }
        if ( v21 != v20 )
        {
LABEL_25:
          *(_BYTE *)(a1 + 1) |= 0x20u;
          return 0;
        }
      }
    }
LABEL_27:
    if ( *(_DWORD *)(v13 + 80) == 8 && *(_DWORD *)(a2 + 152) == 18 && (unsigned __int64)getinf() <= 0x294 )
      v76 = (unsigned int)v76;
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 8 )
      v22 = (int)v22;
    v70 = v22;
    if ( !(unsigned __int8)calc_reference_data() )
      return 0;
    name_base_ea = get_name_base_ea();
    if ( !(unsigned __int8)is_mapped() )
      return 0;
    v71 = 0;
    v72 = 0;
    v23 = v70;
    switch ( v77 & 0x4F )
    {
      case 1:
        v26 = 2;
        goto LABEL_41;
      case 2:
      case 9:
        v26 = 4;
        goto LABEL_41;
      case 3:
        v72 = 10;
        v71 = 1;
        if ( a6 <= 1 )
          return 0;
        v40 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v41) = 8;
          if ( (unsigned __int64)v40 <= 0x3F )
            v42 = 1LL << v40;
          else
            v42 = 0;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v40 > 0x3F )
        {
          LOBYTE(v54) = 7;
          v64 = 0;
          goto LABEL_98;
        }
        v55 = 7;
        LOBYTE(v54) = 7;
        goto LABEL_97;
      case 4:
        v72 = 10;
        v71 = 2;
        if ( a6 <= 3 )
          return 0;
        v40 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v41) = 16;
          if ( (unsigned __int64)v40 > 0x3F )
            v42 = 0;
          else
            v42 = 1LL << v40;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v40 <= 0x3F )
        {
          v55 = 15;
          LOBYTE(v54) = 15;
          goto LABEL_97;
        }
        LOBYTE(v54) = 15;
        v64 = 0;
        goto LABEL_98;
      case 5:
        v72 = 11;
        v71 = 1;
        if ( a6 <= 1 )
          return 0;
        goto LABEL_43;
      case 6:
        v72 = 11;
        v71 = 2;
        if ( a6 <= 3 )
          return 0;
        goto LABEL_43;
      case 0xA:
        v26 = 1;
LABEL_41:
        v71 = v26;
        goto LABEL_42;
      case 0xB:
        v72 = 10;
        v71 = 4;
        if ( a6 <= 7 )
          return 0;
        v40 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v41) = 32;
          if ( (unsigned __int64)v40 > 0x3F )
            v42 = 0;
          else
            v42 = 1LL << v40;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v40 > 0x3F )
        {
          LOBYTE(v54) = 31;
          v64 = 0;
          goto LABEL_98;
        }
        v55 = 31;
        LOBYTE(v54) = 31;
        goto LABEL_97;
      case 0xC:
        v72 = 11;
        v71 = 4;
        if ( a6 <= 7 )
          return 0;
        goto LABEL_43;
      default:
        v39 = *(__int64 (**)())(*(_QWORD *)v13 + 400LL);
        if ( v39 == sub_117230
          || !((unsigned __int8 (__fastcall *)(__int64, int *, int *, char *))v39)(v13, &v71, &v72, v75) )
        {
          return 0;
        }
        v26 = v71;
        v23 = v70;
        if ( !v72 )
        {
LABEL_42:
          if ( a6 < v26 )
            return 0;
          goto LABEL_43;
        }
        if ( a6 < 2 * v71 )
          return 0;
        if ( v72 != 10 )
          goto LABEL_43;
        v40 = 8 * a6;
        v41 = 8 * v71;
        if ( (a7 & 4) == 0 )
        {
          if ( (unsigned __int64)v40 <= 0x3F )
          {
            v42 = 1LL << v40;
            if ( (unsigned __int64)v41 > 0x3F )
            {
LABEL_75:
              if ( (v23 & v42) != 0 )
                return 0;
              goto LABEL_43;
            }
LABEL_74:
            v42 -= 1LL << v41;
            goto LABEL_75;
          }
          if ( (unsigned __int64)v41 <= 0x3F )
          {
            v42 = 0;
            goto LABEL_74;
          }
LABEL_43:
          v67 = 9;
          goto LABEL_44;
        }
        v54 = v41 - 1;
        v55 = v54;
        if ( (unsigned __int64)v40 <= 0x3F )
        {
LABEL_97:
          v64 = 1LL << v40;
          if ( v55 > 0x3F )
          {
LABEL_99:
            v65 = v64 & v23;
            if ( v65 && v65 != v64 )
              return 0;
LABEL_92:
            v67 = 8;
LABEL_44:
            sub_118BA0(a1);
            *(_BYTE *)a1 = 6;
            v27 = 8 * *(_DWORD *)(v13 + 84);
            v28 = name_base_ea;
            if ( (unsigned __int64)v27 <= 0x3F )
              v28 = name_base_ea & ~(-1LL << v27);
            *(_QWORD *)(a1 + 8) = v28;
            sub_118750((char *)a1, v13);
            if ( (unsigned __int8)get_fixup() && *(_BYTE *)a1 == 10 && **(_BYTE **)(a1 + 8) == 6 )
              *(_BYTE *)(a1 + 1) |= 8u;
            sub_11C5E0((char *)a1, v13, 9, a3, a6);
            if ( v73 + v76 != name_base_ea )
            {
              v69 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) & (v73 + v76 - name_base_ea);
              v29 = j__qalloc_or_throw();
              *(_QWORD *)(v29 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v29 + 40) = 0;
              *(_QWORD *)(v29 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v29 + 56) = 0;
              *(_QWORD *)(v29 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v29 + 72) = 0;
              sub_32B920(v29, v80);
              sub_11C810(v29 + 48, v13, v69, a6, a3, *a4);
              v30 = *(_BYTE *)a1;
              *(_BYTE *)a1 = *(_BYTE *)(v29 + 32);
              v31 = *(_BYTE *)(v29 + 33);
              *(_BYTE *)(v29 + 32) = v30;
              v32 = *(_BYTE *)(a1 + 1);
              *(_BYTE *)(a1 + 1) = v31;
              v33 = *(_WORD *)(v29 + 34);
              *(_BYTE *)(v29 + 33) = v32;
              v34 = *(_WORD *)(a1 + 2);
              *(_WORD *)(a1 + 2) = v33;
              *(_WORD *)(v29 + 34) = v34;
              *(_DWORD *)(v29 + 36) = *(_DWORD *)(a1 + 4);
              v35 = *(_QWORD *)(a1 + 8);
              *(_DWORD *)v29 = 12;
              *(_QWORD *)(v29 + 40) = v35;
              *(_DWORD *)(v29 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_QWORD *)(a1 + 8) = v29;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v36 = v74;
            getseg();
            if ( v36 != get_segm_base() )
            {
              v43 = j__qalloc_or_throw();
              *(_QWORD *)(v43 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v43 + 40) = 0;
              *(_QWORD *)(v43 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v43 + 56) = 0;
              *(_QWORD *)(v43 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v43 + 72) = 0;
              sub_32B920(v43, v80);
              *(_DWORD *)v43 = 13;
              v44 = v74;
              v45 = *(_BYTE *)a1;
              if ( (v78 & 1) != 0 )
              {
                *(_BYTE *)a1 = *(_BYTE *)(v43 + 48);
                v46 = *(_BYTE *)(v43 + 49);
                *(_BYTE *)(v43 + 48) = v45;
                v47 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v46;
                v48 = *(_WORD *)(v43 + 50);
                *(_BYTE *)(v43 + 49) = v47;
                v49 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v48;
                v50 = *(_DWORD *)(v43 + 52);
                *(_WORD *)(v43 + 50) = v49;
                v51 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v50;
                v52 = *(_QWORD *)(v43 + 56);
                *(_DWORD *)(v43 + 52) = v51;
                v53 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v52;
                *(_QWORD *)(v43 + 56) = v53;
                sub_11C810(v43 + 32, v13, v44, a6, a3, *a4);
              }
              else
              {
                *(_BYTE *)a1 = *(_BYTE *)(v43 + 32);
                v56 = *(_BYTE *)(v43 + 33);
                *(_BYTE *)(v43 + 32) = v45;
                v57 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v56;
                v58 = *(_WORD *)(v43 + 34);
                *(_BYTE *)(v43 + 33) = v57;
                v59 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v58;
                v60 = *(_DWORD *)(v43 + 36);
                *(_WORD *)(v43 + 34) = v59;
                v61 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v60;
                v62 = *(_QWORD *)(v43 + 40);
                *(_DWORD *)(v43 + 36) = v61;
                v63 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v62;
                *(_QWORD *)(v43 + 40) = v63;
                sub_11C810(v43 + 48, v13, v44, a6, a3, *a4);
              }
              *(_DWORD *)(v43 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_BYTE *)(a1 + 1) |= 0x20u;
              *(_QWORD *)(a1 + 8) = v43;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v37 = v72;
            if ( v72 )
            {
              v38 = v71;
              if ( 2 * v71 < a6 )
              {
                sub_11C5E0((char *)a1, v13, 10, v80, 2 * v71);
                v38 = v71;
                v37 = v72;
              }
              sub_11C5E0((char *)a1, v13, v37, v80, v38);
              sub_11C5E0((char *)a1, v13, v67, v80, a6);
            }
            return 1;
          }
        }
        else
        {
          if ( (unsigned __int64)v54 > 0x3F )
            goto LABEL_92;
          v64 = 0;
        }
LABEL_98:
        v64 -= 1LL << v54;
        goto LABEL_99;
    }
  }
  return 0;
}

