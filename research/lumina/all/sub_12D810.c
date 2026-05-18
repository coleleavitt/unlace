unsigned __int64 __fastcall sub_12D810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  char v13; // r15
  __int64 v14; // r12
  int v15; // r15d
  char v16; // dl
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int16 v21; // ax
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int16 v24; // di
  __int16 v25; // ax
  unsigned __int64 v26; // r13
  int v27; // esi
  int v28; // ecx
  unsigned __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // rax
  int v33; // ebp
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  _BOOL4 v37; // eax
  __int64 v38; // rdx
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rsi
  const char **v42; // rax
  const char *v43; // rdx
  __int64 v44; // r9
  int v45; // ebx
  __int64 v46; // rsi
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r9
  _WORD *v50; // rdx
  unsigned int v51; // edx
  __int64 v52; // r13
  __int64 v53; // r12
  int v54; // ebp
  unsigned int v55; // eax
  char v56; // al
  int v57; // r12d
  unsigned int v58; // r15d
  unsigned int v59; // edx
  __int64 v60; // rax
  int v61; // ebx
  _BYTE *v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  _BYTE *v65; // rdx
  int v66; // edx
  int v67; // eax
  int v68; // esi
  _BYTE *v69; // rax
  int v71; // eax
  unsigned int v72; // ebp
  int v73; // eax
  __int64 v74; // rdx
  unsigned int v75; // ecx
  unsigned __int8 v76; // al
  __int64 v78; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v79; // [rsp+8h] [rbp-E0h]
  __int64 v80; // [rsp+8h] [rbp-E0h]
  int v81; // [rsp+8h] [rbp-E0h]
  __int64 *v82; // [rsp+10h] [rbp-D8h]
  __int64 v83; // [rsp+18h] [rbp-D0h]
  __int64 *v84; // [rsp+20h] [rbp-C8h]
  int v85; // [rsp+20h] [rbp-C8h]
  __int64 v87; // [rsp+30h] [rbp-B8h]
  __int64 v88; // [rsp+38h] [rbp-B0h]
  __int64 v89; // [rsp+38h] [rbp-B0h]
  __int64 v90; // [rsp+38h] [rbp-B0h]
  __int64 v91; // [rsp+40h] [rbp-A8h]
  __int64 v93; // [rsp+50h] [rbp-98h]
  int v94; // [rsp+5Ch] [rbp-8Ch]
  int v95; // [rsp+60h] [rbp-88h]
  int v96; // [rsp+64h] [rbp-84h]
  unsigned __int64 v97; // [rsp+68h] [rbp-80h]
  _QWORD v98[4]; // [rsp+70h] [rbp-78h] BYREF
  __int16 v99; // [rsp+94h] [rbp-54h]
  int v100; // [rsp+98h] [rbp-50h]
  unsigned __int64 v101; // [rsp+A8h] [rbp-40h]

  v6 = a1;
  v101 = __readfsqword(0x28u);
  v83 = *(_QWORD *)(a1 + 16);
  v94 = sub_E1710(v83, 14, 0, 0, 0);
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_QWORD *)(a5 + 96);
  v87 = *(_QWORD *)(a3 + 32);
  v91 = v10;
  v79 = v9 + 56LL * *(int *)(a2 + 20);
  if ( v9 < v79 )
  {
    v84 = (__int64 *)v6;
    v82 = nullptr;
    v11 = *(_QWORD *)(a2 + 32);
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v16 = *(_BYTE *)(a3 + 60);
      if ( (*(_BYTE *)(v11 + 18) & 2) == 0 )
      {
        v17 = *(_QWORD *)v11;
        if ( (v16 & 0x48) == 0 || (*(_BYTE *)(v17 + 4) & 1) != 0 )
          break;
      }
LABEL_14:
      if ( !sub_D0CF0((__int64 *)v11, *(_QWORD *)(a3 + 32), v16, *(_DWORD *)(a3 + 64), a4) )
        goto LABEL_5;
      v19 = *(int *)(v11 + 32);
      v20 = 1LL << v19;
      if ( (int)v19 >= 64 )
        v20 = 0x8000000000000000LL;
      if ( !v13 )
      {
        v89 = v20;
        sub_E8BB0(
          0x11Cu,
          "automatic index on %s(%s)",
          *(const char **)v87,
          *(const char **)(*(_QWORD *)(v87 + 8) + 16 * v19));
        v20 = v89;
      }
      if ( (v12 & v20) != 0 )
      {
        v11 += 56LL;
        v13 = 1;
        if ( v79 <= v11 )
        {
LABEL_21:
          v6 = (__int64)v84;
          v21 = v14;
          v22 = ~v12 | 0x8000000000000000LL;
          goto LABEL_22;
        }
      }
      else
      {
        v15 = v14 + 1;
        if ( (int)v14 + 1 > *(unsigned __int16 *)(v10 + 56) )
        {
          v90 = v20;
          v71 = sub_DE610(*v84, v10, v15);
          v20 = v90;
          if ( v71 )
          {
            v6 = (__int64)v84;
            goto LABEL_78;
          }
        }
        v12 |= v20;
        *(_QWORD *)(*(_QWORD *)(v10 + 64) + 8 * v14) = v11;
        v14 = v15;
        v13 = 1;
LABEL_5:
        v11 += 56LL;
        if ( v79 <= v11 )
          goto LABEL_21;
      }
    }
    v18 = *(_DWORD *)(a3 + 64);
    v99 = 3;
    v98[1] = sub_CE7B0;
    v100 = v18;
    v98[2] = sub_C43E0;
    if ( v17 )
    {
      v88 = v17;
      sub_CDCD0((__int64)v98, v17);
      if ( !v99 )
      {
LABEL_13:
        v16 = *(_BYTE *)(a3 + 60);
        goto LABEL_14;
      }
      v17 = (__int64)sub_DD6E0(*v84, v88, 0, nullptr);
    }
    v82 = sub_F07D0((__int64)v84, (__int64)v82, v17);
    goto LABEL_13;
  }
  v22 = -1;
  v21 = 0;
  v82 = nullptr;
  LODWORD(v14) = 0;
LABEL_22:
  *(_WORD *)(v10 + 52) = v21;
  *(_WORD *)(v10 + 24) = v21;
  *(_DWORD *)(v10 + 48) = 16961;
  v23 = *(_QWORD *)(a3 + 80);
  v24 = *(_WORD *)(v87 + 54);
  v25 = 63;
  v26 = v23 & v22;
  if ( v24 <= 63 )
    v25 = *(_WORD *)(v87 + 54);
  v27 = v25;
  v95 = v25;
  if ( v24 > 0 )
  {
    v28 = 0;
    do
    {
      v29 = v26 >> v28++;
      LODWORD(v14) = (v29 & 1) + v14;
    }
    while ( v27 != v28 );
  }
  if ( v23 < 0 )
    LODWORD(v14) = v14 + v24 - 63;
  v30 = sub_DC4A0(*(_QWORD *)v6, (unsigned __int16)v14 + 1, 0, v98);
  v31 = (__int64)v30;
  if ( v30 )
  {
    *(_QWORD *)(v91 + 32) = v30;
    *v30 = (__int64)"auto-index";
    v30[3] = v87;
    v32 = v79;
    if ( v79 <= *(_QWORD *)(a2 + 32) )
    {
      v46 = 0;
      v38 = 0;
      v45 = 0;
    }
    else
    {
      v96 = v14;
      v97 = v26;
      v14 = a3;
      v93 = v6;
      v33 = 0;
      v80 = 0;
      v34 = v32;
      v35 = *(_QWORD *)(a2 + 32);
      v36 = 0;
      do
      {
        while ( 1 )
        {
          v37 = sub_D0CF0((__int64 *)v35, *(_QWORD *)(v14 + 32), *(_BYTE *)(v14 + 60), *(_DWORD *)(v14 + 64), a4);
          v38 = 2 * v36;
          if ( v37 )
          {
            v39 = *(_DWORD *)(v35 + 32);
            v40 = 1LL << v39;
            if ( v39 >= 64 )
              v40 = 0x8000000000000000LL;
            if ( (v40 & v80) == 0 )
              break;
          }
          v35 += 56LL;
          if ( v34 <= v35 )
            goto LABEL_40;
        }
        v80 |= v40;
        v41 = *(_QWORD *)v35;
        *(_WORD *)(*(_QWORD *)(v31 + 8) + 2 * v36) = v39;
        v42 = (const char **)sub_F3C70(v93, v41, a6);
        v43 = "BINARY";
        if ( v42 )
          v43 = *v42;
        ++v33;
        v35 += 56LL;
        *(_QWORD *)(*(_QWORD *)(v31 + 64) + 8 * v36) = v43;
        v36 = v33;
        v38 = 2LL * v33;
      }
      while ( v34 > v35 );
LABEL_40:
      v44 = v36;
      v26 = v97;
      v45 = v33;
      v6 = v93;
      a3 = v14;
      LODWORD(v14) = v96;
      v46 = 8 * v44;
    }
    v47 = *(_QWORD *)(v31 + 8);
    if ( v24 <= 0 )
    {
      v50 = (_WORD *)(v47 + v38);
    }
    else
    {
      v48 = 0;
      v49 = v45;
      do
      {
        v50 = (_WORD *)(v47 + 2 * v49);
        v46 = 8 * v49;
        if ( _bittest64((const __int64 *)&v26, v48) )
        {
          *v50 = v48;
          ++v45;
          *(_QWORD *)(*(_QWORD *)(v31 + 64) + 8 * v49) = "BINARY";
          v47 = *(_QWORD *)(v31 + 8);
          v49 = v45;
          v46 = 8LL * v45;
          v50 = (_WORD *)(v47 + 2LL * v45);
        }
        v48 = (unsigned int)(v48 + 1);
      }
      while ( v95 != (_DWORD)v48 );
    }
    if ( *(__int64 *)(a3 + 80) < 0 && *(__int16 *)(v87 + 54) > 63 )
    {
      v73 = 63;
      while ( 1 )
      {
        v74 = v45++;
        *(_WORD *)(v47 + 2 * v74) = v73++;
        *(_QWORD *)(*(_QWORD *)(v31 + 64) + 8 * v74) = "BINARY";
        if ( *(__int16 *)(v87 + 54) <= v73 )
          break;
        v47 = *(_QWORD *)(v31 + 8);
      }
      v46 = 8LL * v45;
      v50 = (_WORD *)(*(_QWORD *)(v31 + 8) + 2LL * v45);
    }
    *v50 = -1;
    *(_QWORD *)(*(_QWORD *)(v31 + 64) + v46) = "BINARY";
    v51 = *(_DWORD *)(v6 + 52);
    *(_DWORD *)(v6 + 52) = v51 + 1;
    *(_DWORD *)(a5 + 8) = v51;
    sub_E1710(v83, 116, v51, v14 + 1, 0);
    sub_F2600(v6, v31, a6);
    if ( (*(_BYTE *)(*(_QWORD *)v6 + 98LL) & 8) == 0 )
    {
      v75 = *(_DWORD *)(v6 + 56) + 1;
      *(_DWORD *)(v6 + 56) = v75;
      *(_DWORD *)(a5 + 52) = v75;
      sub_E1710(v83, 77, 0x2710u, v75, 0);
    }
    v52 = *(unsigned __int8 *)(a5 + 64);
    v78 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
    v53 = v78 + 104 * v52;
    if ( (*(_BYTE *)(v53 + 69) & 0x10) != 0 )
    {
      v72 = *(_DWORD *)(v53 + 60);
      v81 = sub_E1710(v83, 71, 0, 0, 0);
      sub_E1710(v83, 10, v72, 0, *(_DWORD *)(v53 + 56));
      v54 = sub_E1710(v83, 11, v72, 0, 0);
    }
    else
    {
      v81 = 0;
      v54 = sub_E1710(v83, 35, *(_DWORD *)(a5 + 4), 0, 0);
    }
    v85 = 0;
    if ( v82 )
    {
      v55 = *(_DWORD *)(v6 + 68) - 1;
      *(_DWORD *)(v6 + 68) = v55;
      v85 = v55;
      sub_1253C0(v6, (__int64)v82, v55, 16, a6);
      *(_DWORD *)(v91 + 48) |= 0x20000u;
    }
    v56 = *(_BYTE *)(v6 + 31);
    if ( v56 )
    {
      v76 = v56 - 1;
      *(_BYTE *)(v6 + 31) = v76;
      v57 = *(_DWORD *)(v6 + 4LL * v76 + 216);
    }
    else
    {
      v57 = *(_DWORD *)(v6 + 56) + 1;
      *(_DWORD *)(v6 + 56) = v57;
    }
    v58 = sub_12CD50(v6, v31, *(_DWORD *)(a5 + 4), v57, 0, nullptr, a6, 0, 0);
    v59 = *(_DWORD *)(a5 + 52);
    if ( v59 )
      sub_E1770((_QWORD *)v83, 179, v59, 0, v58, *(unsigned __int16 *)(v91 + 24));
    sub_E1710(v83, 138, *(_DWORD *)(a5 + 8), v57, 0);
    v60 = *(int *)(v83 + 144);
    if ( (int)v60 > 0 )
      *(_WORD *)(*(_QWORD *)(v83 + 136) + 24 * v60 - 22) = 16;
    if ( v82 )
      sub_E0BB0(v83, v85);
    if ( (*(_BYTE *)(v78 + 104 * v52 + 69) & 0x10) != 0 )
    {
      v61 = v58 + v45;
      if ( v81 < 0 )
        v81 = *(_DWORD *)(v83 + 144) - 1;
      v62 = byte_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v83 + 103LL) )
        v62 = (_BYTE *)(*(_QWORD *)(v83 + 136) + 24LL * v81);
      *((_DWORD *)v62 + 2) = v61;
      v63 = v78 + 104 * v52;
      sub_D0C40(
        *(_QWORD *)v6,
        *(_QWORD *)(v6 + 16),
        v54,
        *(_DWORD *)(a5 + 4),
        *(_DWORD *)(v63 + 64),
        *(_DWORD *)(a5 + 8));
      sub_E1710(v83, 8, 0, v54, 0);
      *(_BYTE *)(v63 + 69) &= ~0x10u;
      LODWORD(v64) = *(_DWORD *)(v83 + 144);
    }
    else
    {
      sub_E1710(v83, 38, *(_DWORD *)(a5 + 4), v54 + 1, 0);
      v64 = *(int *)(v83 + 144);
      if ( (int)v64 > 0 )
      {
        *(_WORD *)(*(_QWORD *)(v83 + 136) + 24 * v64 - 22) = 3;
        LODWORD(v64) = *(_DWORD *)(v83 + 144);
      }
    }
    if ( v54 < 0 )
      v54 = v64 - 1;
    v65 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v83 + 103LL) )
      v65 = (_BYTE *)(*(_QWORD *)(v83 + 136) + 24LL * v54);
    *((_DWORD *)v65 + 2) = v64;
    if ( v57 )
      sub_CEFE0(v6, v57);
    v66 = *(_DWORD *)(v83 + 144);
    v67 = v66 - 1;
    if ( v94 >= 0 )
      v67 = v94;
    v68 = v67;
    v69 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v83 + 103LL) )
      v69 = (_BYTE *)(*(_QWORD *)(v83 + 136) + 24LL * v68);
    *((_DWORD *)v69 + 2) = v66;
  }
LABEL_78:
  if ( v82 )
    sub_D7720(*(_QWORD *)v6, (__int64)v82);
  return __readfsqword(0x28u) ^ v101;
}
