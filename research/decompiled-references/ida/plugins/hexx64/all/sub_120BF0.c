__int64 __fastcall sub_120BF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        __m128i a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  _BYTE *v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE *v22; // rax
  _BYTE *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r13
  unsigned __int8 v35; // al
  char v36; // dl
  char v37; // al
  __int16 v38; // dx
  __int16 v39; // ax
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  int v45; // r8d
  __int64 (*v46)(); // rax
  int v47; // ecx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r13
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  char v53; // cl
  char v54; // al
  __int16 v55; // cx
  __int16 v56; // ax
  int v57; // ecx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  unsigned __int64 v62; // rsi
  char v63; // cl
  char v64; // al
  __int16 v65; // cx
  __int16 v66; // ax
  int v67; // ecx
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  unsigned int v74; // [rsp+0h] [rbp-A8h]
  __int64 name_base_ea; // [rsp+8h] [rbp-A0h]
  __int64 v76; // [rsp+8h] [rbp-A0h]
  __int64 v77; // [rsp+18h] [rbp-90h]
  int v78; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v79; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v80; // [rsp+30h] [rbp-78h]
  __int64 v81; // [rsp+38h] [rbp-70h]
  char v82[16]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v83; // [rsp+50h] [rbp-58h]
  char v84; // [rsp+58h] [rbp-50h]
  char v85; // [rsp+59h] [rbp-4Fh]
  unsigned __int64 v86; // [rsp+68h] [rbp-40h]
  __int64 v87; // [rsp+B8h] [rbp+10h]

  v12 = a5;
  v13 = a3;
  v14 = *(_QWORD *)(a2 + 112);
  if ( a9 != -1 )
    v13 = a9;
  v86 = __readfsqword(0x28u);
  v87 = v13;
  if ( a6 == 8 && a5 > 0 && (int)a5 != a5 && *(_DWORD *)(v14 + 84) == 8 )
  {
    v26 = getinf();
    v12 = a5;
    if ( a5 == v26 )
    {
      *(_BYTE *)a1 = 6;
      v27 = (unsigned int)(8 * *(_DWORD *)(v14 + 84));
      if ( (unsigned __int64)(int)v27 <= 0x3F )
        v12 = ~(-1LL << (8 * *(_BYTE *)(v14 + 84))) & a5;
      *(_QWORD *)(a1 + 8) = v12;
      sub_11C950((unsigned __int8 *)a1, v14, v12, v27, *(double *)a7.m128i_i64);
      return 1;
    }
  }
  sub_120A10(a1, (unsigned __int64 *)v14, v12, a6, a3, *a4);
  if ( (unsigned __int8)get_item_refinfo() )
  {
    if ( (a8 & 1) != 0 )
    {
      v16 = *(_BYTE **)(v14 + 304);
      v17 = &v16[*(_QWORD *)(v14 + 312)];
      if ( v17 != v16 )
      {
        while ( *v16 != (v84 & 0x4F) )
        {
          if ( v17 == ++v16 )
            goto LABEL_18;
        }
        if ( v16 != v17 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          sub_11CDA0(a1);
          *(_BYTE *)a1 = 6;
          v20 = (unsigned int)(8 * *(_DWORD *)(v14 + 84));
          if ( (unsigned __int64)(int)v20 <= 0x3F )
            v18 &= ~(-1LL << (8 * *(_BYTE *)(v14 + 84)));
          *(_QWORD *)(a1 + 8) = v18;
          sub_11C950((unsigned __int8 *)a1, v14, v19, v20, *(double *)a7.m128i_i64);
          sub_1207E0((char *)a1, (unsigned __int64 *)v14, 9, a3, a6, a7);
          return 1;
        }
      }
    }
LABEL_18:
    if ( (v84 & 0x10) != 0 )
      goto LABEL_25;
    if ( (a8 & 4) != 0 )
    {
      v22 = *(_BYTE **)(v14 + 328);
      v23 = &v22[*(_QWORD *)(v14 + 336)];
      if ( v22 != v23 )
      {
        while ( *v22 != (v84 & 0x4F) )
        {
          if ( v23 == ++v22 )
            goto LABEL_27;
        }
        if ( v23 != v22 )
        {
LABEL_25:
          *(_BYTE *)(a1 + 1) |= 0x20u;
          return 0;
        }
      }
    }
LABEL_27:
    if ( *(_DWORD *)(v14 + 80) == 8 && *(_DWORD *)(a2 + 152) == 18 && (unsigned __int64)getinf() <= 0x294 )
      v83 = (unsigned int)v83;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 8 )
      v24 = (int)v24;
    v77 = v24;
    if ( !(unsigned __int8)calc_reference_data() )
      return 0;
    name_base_ea = get_name_base_ea();
    if ( !(unsigned __int8)is_mapped() )
      return 0;
    v78 = 0;
    v79 = 0;
    v25 = v77;
    switch ( v84 & 0x4F )
    {
      case 1:
        v28 = 2;
        goto LABEL_41;
      case 2:
      case 9:
        v28 = 4;
        goto LABEL_41;
      case 3:
        v79 = 10;
        v78 = 1;
        if ( a6 <= 1 )
          return 0;
        v47 = 8 * a6;
        if ( (a8 & 4) == 0 )
        {
          LOBYTE(v48) = 8;
          if ( (unsigned __int64)v47 <= 0x3F )
            v49 = 1LL << v47;
          else
            v49 = 0;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v47 > 0x3F )
        {
          LOBYTE(v61) = 7;
          v71 = 0;
          goto LABEL_98;
        }
        v62 = 7;
        LOBYTE(v61) = 7;
        goto LABEL_97;
      case 4:
        v79 = 10;
        v78 = 2;
        if ( a6 <= 3 )
          return 0;
        v47 = 8 * a6;
        if ( (a8 & 4) == 0 )
        {
          LOBYTE(v48) = 16;
          if ( (unsigned __int64)v47 > 0x3F )
            v49 = 0;
          else
            v49 = 1LL << v47;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v47 <= 0x3F )
        {
          v62 = 15;
          LOBYTE(v61) = 15;
          goto LABEL_97;
        }
        LOBYTE(v61) = 15;
        v71 = 0;
        goto LABEL_98;
      case 5:
        v79 = 11;
        v78 = 1;
        if ( a6 <= 1 )
          return 0;
        goto LABEL_43;
      case 6:
        v79 = 11;
        v78 = 2;
        if ( a6 <= 3 )
          return 0;
        goto LABEL_43;
      case 0xA:
        v28 = 1;
LABEL_41:
        v78 = v28;
        goto LABEL_42;
      case 0xB:
        v79 = 10;
        v78 = 4;
        if ( a6 <= 7 )
          return 0;
        v47 = 8 * a6;
        if ( (a8 & 4) == 0 )
        {
          LOBYTE(v48) = 32;
          if ( (unsigned __int64)v47 > 0x3F )
            v49 = 0;
          else
            v49 = 1LL << v47;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v47 > 0x3F )
        {
          LOBYTE(v61) = 31;
          v71 = 0;
          goto LABEL_98;
        }
        v62 = 31;
        LOBYTE(v61) = 31;
        goto LABEL_97;
      case 0xC:
        v79 = 11;
        v78 = 4;
        if ( a6 <= 7 )
          return 0;
        goto LABEL_43;
      default:
        v46 = *(__int64 (**)())(*(_QWORD *)v14 + 400LL);
        if ( v46 == sub_11B430
          || !((unsigned __int8 (__fastcall *)(__int64, int *, unsigned int *, char *))v46)(v14, &v78, &v79, v82) )
        {
          return 0;
        }
        v28 = v78;
        v25 = v77;
        if ( !v79 )
        {
LABEL_42:
          if ( a6 < v28 )
            return 0;
          goto LABEL_43;
        }
        if ( a6 < 2 * v78 )
          return 0;
        if ( v79 != 10 )
          goto LABEL_43;
        v47 = 8 * a6;
        v48 = 8 * v78;
        if ( (a8 & 4) == 0 )
        {
          if ( (unsigned __int64)v47 <= 0x3F )
          {
            v49 = 1LL << v47;
            if ( (unsigned __int64)v48 > 0x3F )
            {
LABEL_75:
              if ( (v25 & v49) != 0 )
                return 0;
              goto LABEL_43;
            }
LABEL_74:
            v49 -= 1LL << v48;
            goto LABEL_75;
          }
          if ( (unsigned __int64)v48 <= 0x3F )
          {
            v49 = 0;
            goto LABEL_74;
          }
LABEL_43:
          v74 = 9;
          goto LABEL_44;
        }
        v61 = v48 - 1;
        v62 = v61;
        if ( (unsigned __int64)v47 <= 0x3F )
        {
LABEL_97:
          v71 = 1LL << v47;
          if ( v62 > 0x3F )
          {
LABEL_99:
            v72 = v71 & v25;
            if ( v72 && v72 != v71 )
              return 0;
LABEL_92:
            v74 = 8;
LABEL_44:
            sub_11CDA0(a1);
            *(_BYTE *)a1 = 6;
            v29 = (unsigned int)(8 * *(_DWORD *)(v14 + 84));
            v30 = name_base_ea;
            if ( (unsigned __int64)(int)v29 <= 0x3F )
              v30 = name_base_ea & ~(-1LL << (8 * *(_BYTE *)(v14 + 84)));
            *(_QWORD *)(a1 + 8) = v30;
            sub_11C950((unsigned __int8 *)a1, v14, (int)v29, v29, *(double *)a7.m128i_i64);
            if ( (unsigned __int8)get_fixup() && *(_BYTE *)a1 == 10 && **(_BYTE **)(a1 + 8) == 6 )
              *(_BYTE *)(a1 + 1) |= 8u;
            v31 = v14;
            sub_1207E0((char *)a1, (unsigned __int64 *)v14, 9, a3, a6, a7);
            v32 = name_base_ea;
            if ( v80 + v83 != name_base_ea )
            {
              v33 = *(_QWORD *)(a2 + 24);
              v76 = *(_QWORD *)(v33 + 16) & (v80 + v83 - name_base_ea);
              v34 = j__qalloc_or_throw(80, v14, v33, v32);
              *(_QWORD *)(v34 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v34 + 40) = 0;
              *(_QWORD *)(v34 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v34 + 56) = 0;
              *(_QWORD *)(v34 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v34 + 72) = 0;
              sub_330970(v34, v87);
              v31 = v14;
              sub_120A10(v34 + 48, (unsigned __int64 *)v14, v76, a6, a3, *a4);
              v35 = *(_BYTE *)a1;
              *(_BYTE *)a1 = *(_BYTE *)(v34 + 32);
              v36 = *(_BYTE *)(v34 + 33);
              *(_BYTE *)(v34 + 32) = v35;
              v37 = *(_BYTE *)(a1 + 1);
              *(_BYTE *)(a1 + 1) = v36;
              v38 = *(_WORD *)(v34 + 34);
              *(_BYTE *)(v34 + 33) = v37;
              v39 = *(_WORD *)(a1 + 2);
              *(_WORD *)(a1 + 2) = v38;
              *(_WORD *)(v34 + 34) = v39;
              *(_DWORD *)(v34 + 36) = *(_DWORD *)(a1 + 4);
              v40 = *(_QWORD *)(a1 + 8);
              *(_DWORD *)v34 = 12;
              *(_QWORD *)(v34 + 40) = v40;
              *(_DWORD *)(v34 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_QWORD *)(a1 + 8) = v34;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v41 = v81;
            getseg();
            if ( v41 != get_segm_base() )
            {
              v50 = j__qalloc_or_throw(80, v31, v42, v43);
              *(_QWORD *)(v50 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v50 + 40) = 0;
              *(_QWORD *)(v50 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v50 + 56) = 0;
              *(_QWORD *)(v50 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v50 + 72) = 0;
              sub_330970(v50, v87);
              *(_DWORD *)v50 = 13;
              v51 = v81;
              v52 = *(_BYTE *)a1;
              if ( (v85 & 1) != 0 )
              {
                *(_BYTE *)a1 = *(_BYTE *)(v50 + 48);
                v53 = *(_BYTE *)(v50 + 49);
                *(_BYTE *)(v50 + 48) = v52;
                v54 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v53;
                v55 = *(_WORD *)(v50 + 50);
                *(_BYTE *)(v50 + 49) = v54;
                v56 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v55;
                v57 = *(_DWORD *)(v50 + 52);
                *(_WORD *)(v50 + 50) = v56;
                v58 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v57;
                v59 = *(_QWORD *)(v50 + 56);
                *(_DWORD *)(v50 + 52) = v58;
                v60 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v59;
                *(_QWORD *)(v50 + 56) = v60;
                sub_120A10(v50 + 32, (unsigned __int64 *)v14, v51, a6, a3, *a4);
              }
              else
              {
                *(_BYTE *)a1 = *(_BYTE *)(v50 + 32);
                v63 = *(_BYTE *)(v50 + 33);
                *(_BYTE *)(v50 + 32) = v52;
                v64 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v63;
                v65 = *(_WORD *)(v50 + 34);
                *(_BYTE *)(v50 + 33) = v64;
                v66 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v65;
                v67 = *(_DWORD *)(v50 + 36);
                *(_WORD *)(v50 + 34) = v66;
                v68 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v67;
                v69 = *(_QWORD *)(v50 + 40);
                *(_DWORD *)(v50 + 36) = v68;
                v70 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v69;
                *(_QWORD *)(v50 + 40) = v70;
                sub_120A10(v50 + 48, (unsigned __int64 *)v14, v51, a6, a3, *a4);
              }
              *(_DWORD *)(v50 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_BYTE *)(a1 + 1) |= 0x20u;
              *(_QWORD *)(a1 + 8) = v50;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v44 = v79;
            if ( v79 )
            {
              v45 = v78;
              if ( 2 * v78 < a6 )
              {
                sub_1207E0((char *)a1, (unsigned __int64 *)v14, 10, v87, 2 * v78, a7);
                v45 = v78;
                v44 = v79;
              }
              sub_1207E0((char *)a1, (unsigned __int64 *)v14, v44, v87, v45, a7);
              sub_1207E0((char *)a1, (unsigned __int64 *)v14, v74, v87, a6, a7);
            }
            return 1;
          }
        }
        else
        {
          if ( (unsigned __int64)v61 > 0x3F )
            goto LABEL_92;
          v71 = 0;
        }
LABEL_98:
        v71 -= 1LL << v61;
        goto LABEL_99;
    }
  }
  return 0;
}

