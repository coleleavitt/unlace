__int64 __fastcall sub_11A880(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r15d
  unsigned __int8 *v8; // r14
  unsigned __int64 v10; // rsi
  int v11; // edi
  unsigned __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // r8
  unsigned __int8 *v20; // r12
  char v21; // al
  unsigned __int8 *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r10
  char v25; // al
  _DWORD *v26; // r10
  unsigned __int8 *v27; // rax
  __int128 v28; // rdi
  int v29; // ecx
  _DWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r12
  char v34; // cl
  bool v35; // al
  __int64 v36; // rbx
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rbx
  char v40; // al
  unsigned __int8 *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r12
  __int64 v44; // rax
  _BYTE *v45; // r12
  _BYTE *v46; // rax
  int v47; // r13d
  __int64 v48; // rax
  char v49; // al
  __int64 v50; // rcx
  char v51; // al
  __int64 v52; // r10
  char v53; // al
  char v54; // al
  __int128 v55; // rdi
  int v56; // ecx
  __int64 v57; // rcx
  char v58; // al
  __int64 v59; // [rsp+8h] [rbp-108h]
  int v60; // [rsp+1Ch] [rbp-F4h]
  __int64 v61; // [rsp+20h] [rbp-F0h]
  unsigned __int8 *v62; // [rsp+28h] [rbp-E8h]
  __int64 v63; // [rsp+38h] [rbp-D8h]
  __int64 v64; // [rsp+40h] [rbp-D0h]
  const __m128i *v65; // [rsp+40h] [rbp-D0h]
  bool v66; // [rsp+48h] [rbp-C8h]
  __int64 v67; // [rsp+48h] [rbp-C8h]
  unsigned __int8 *v68; // [rsp+50h] [rbp-C0h]
  __int64 v69; // [rsp+58h] [rbp-B8h]
  __int64 v70; // [rsp+58h] [rbp-B8h]
  _DWORD *v71; // [rsp+58h] [rbp-B8h]
  int v72; // [rsp+58h] [rbp-B8h]
  __int64 v73; // [rsp+58h] [rbp-B8h]
  __int64 v74; // [rsp+60h] [rbp-B0h]
  unsigned __int8 *v75; // [rsp+60h] [rbp-B0h]
  __int64 v76; // [rsp+60h] [rbp-B0h]
  _DWORD *v77; // [rsp+60h] [rbp-B0h]
  __int64 v78; // [rsp+60h] [rbp-B0h]
  __int64 v79; // [rsp+68h] [rbp-A8h]
  __int64 v80; // [rsp+68h] [rbp-A8h]
  __int64 v81; // [rsp+68h] [rbp-A8h]
  __int64 v83; // [rsp+70h] [rbp-A0h]
  unsigned __int8 *v84; // [rsp+70h] [rbp-A0h]
  unsigned __int8 *v85; // [rsp+70h] [rbp-A0h]
  __int64 v86; // [rsp+70h] [rbp-A0h]
  const __m128i *v87; // [rsp+78h] [rbp-98h]
  _BYTE *v88; // [rsp+78h] [rbp-98h]
  __int64 v89; // [rsp+78h] [rbp-98h]
  unsigned __int64 v90; // [rsp+88h] [rbp-88h] BYREF
  __int64 v91; // [rsp+90h] [rbp-80h] BYREF
  __int64 v92; // [rsp+98h] [rbp-78h] BYREF
  unsigned __int64 v93; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v94; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v95; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v96; // [rsp+B8h] [rbp-58h]
  _QWORD v97[10]; // [rsp+C0h] [rbp-50h]

  v87 = a2;
  v97[3] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v5 = a4;
  if ( *(_DWORD *)a4 != 17 )
    return 0;
  if ( *(_BYTE *)(a4 + 32) != 4 )
    return 0;
  if ( **(_DWORD **)(a4 + 40) != 12 )
    return 0;
  v8 = (unsigned __int8 *)(a4 + 48);
  v6 = sub_11FD80((char *)(a4 + 48), &v90, 0);
  if ( !(_BYTE)v6 )
    return 0;
  v10 = v90;
  if ( v90 <= 1 )
    return 0;
  v11 = 1;
  v12 = 2;
  if ( (v90 & 1) == 0 )
    return 0;
  v13 = a3;
  while ( v12 % v90 != 1 )
  {
    ++v11;
    v12 = 2 * v12 % v90;
    if ( v11 == 65 )
      goto LABEL_15;
  }
  if ( 30 % v11 )
    goto LABEL_15;
  if ( *(_BYTE *)(v5 + 32) != 4 )
    goto LABEL_15;
  v30 = *(_DWORD **)(v5 + 40);
  if ( *v30 != 12 )
    goto LABEL_15;
  v31 = sub_11C8E0((__int64)v30, &v91, 12);
  v13 = a3;
  if ( !v31 )
    goto LABEL_47;
  v97[1] = v31 + 48;
  v33 = v5;
  v32 = 0;
  v97[0] = v31 + 32;
  v97[2] = v91;
  v68 = nullptr;
  v72 = -1;
  do
  {
    v34 = sub_118E50(v97[v32], &v95);
    v35 = v72 == -1;
    if ( v34 && *(_DWORD *)(v95 + 4) == 4 && v72 == -1 )
    {
      v72 = v32;
      v35 = 0;
      v68 = (unsigned __int8 *)v95;
    }
    ++v32;
  }
  while ( v32 != 3 );
  v36 = v33;
  v13 = a3;
  v66 = v35;
  v37 = 0;
  v81 = v36;
  while ( 1 )
  {
    v38 = v97[v37];
    if ( *(_BYTE *)v38 == 4 )
    {
      v39 = *(_QWORD *)(v38 + 8);
      if ( *(_DWORD *)v39 == 23 )
      {
        v64 = v13;
        v40 = sub_11FD80((char *)(v39 + 48), &v95, 0);
        v13 = v64;
        if ( v40 )
        {
          if ( v95 == 28 )
            break;
        }
      }
    }
    if ( ++v37 == 3 )
    {
      v5 = v81;
      goto LABEL_47;
    }
  }
  v41 = (unsigned __int8 *)(v39 + 32);
  v5 = v81;
  v62 = v41;
  if ( v66 )
    goto LABEL_47;
  v60 = v37;
  v67 = a1;
  v65 = v87;
  v63 = v13;
  v42 = 0;
  while ( 1 )
  {
    if ( v72 == (_DWORD)v42 )
      goto LABEL_61;
    if ( v60 == (_DWORD)v42 )
      goto LABEL_61;
    if ( !(unsigned __int8)sub_118E50(v97[v42], &v92) )
      goto LABEL_61;
    v43 = v92;
    if ( *(_BYTE *)v92 != 4 )
      goto LABEL_61;
    v44 = *(_QWORD *)(v92 + 8);
    if ( *(_DWORD *)v44 != 10 )
      goto LABEL_65;
    if ( *(_BYTE *)(v44 + 32) != 4 )
      goto LABEL_61;
    v57 = *(_QWORD *)(v44 + 40);
    if ( (unsigned int)(*(_DWORD *)v57 - 23) > 1 )
      goto LABEL_61;
    v89 = *(_QWORD *)(v44 + 40);
    if ( (unsigned __int8)sub_11FD80((char *)(v57 + 48), &v95, 0) )
    {
      if ( v95 == 30 && *(_DWORD *)(v89 + 36) == 8 )
        break;
    }
    if ( *(_BYTE *)v43 != 4 )
      goto LABEL_61;
    v44 = *(_QWORD *)(v43 + 8);
LABEL_65:
    if ( *(_DWORD *)v44 == 19 )
    {
      v45 = (_BYTE *)(v44 + 48);
      v88 = (_BYTE *)(v44 + 32);
      if ( *(_BYTE *)(v44 + 32) == 4 )
      {
        v47 = 0;
LABEL_68:
        v48 = *((_QWORD *)v88 + 1);
        v61 = v48;
        if ( *(_DWORD *)v48 == 22 )
        {
          if ( (unsigned __int8)sub_11FD80((char *)(v48 + 48), &v93, 0) )
          {
            if ( v93 == 2 && *v45 == 4 )
            {
              v50 = *((_QWORD *)v45 + 1);
              if ( *(_DWORD *)v50 == 23 )
              {
                v59 = *((_QWORD *)v45 + 1);
                if ( (unsigned __int8)sub_11FD80((char *)(v50 + 48), &v95, 0) )
                {
                  if ( v95 == 30 )
                  {
                    v94 = 0;
                    v87 = v65;
                    v96 = 0;
                    v93 = 0xFFFFFFFF00000000LL;
                    a1 = v67;
                    v76 = v63;
                    v5 = v81;
                    v95 = 0xFFFFFFFF00000000LL;
                    sub_125180((__int64)&v93, (unsigned __int8 *)(v59 + 32));
                    sub_125180((__int64)&v95, (unsigned __int8 *)(v61 + 32));
                    v51 = sub_125B60(v68, (__int64)&v93, 1u);
                    v52 = v63;
                    if ( !v51 )
                      goto LABEL_91;
                    v53 = sub_125B60(v62, (__int64)&v95, 1u);
LABEL_83:
                    v52 = v76;
                    if ( !v53 )
                      goto LABEL_91;
                    goto LABEL_84;
                  }
                }
              }
            }
          }
        }
        if ( v47 == 1 )
          goto LABEL_61;
      }
      v46 = v45;
      v45 = v88;
      v47 = 1;
      v88 = v46;
      if ( *v46 == 4 )
        goto LABEL_68;
    }
LABEL_61:
    if ( ++v42 == 3 )
    {
      a1 = v67;
      v13 = v63;
      v5 = v81;
      v87 = v65;
      goto LABEL_47;
    }
  }
  v73 = v89;
  v94 = 0;
  v87 = v65;
  a1 = v67;
  v5 = v81;
  v93 = 0xFFFFFFFF00000000LL;
  v95 = 0xFFFFFFFF00000000LL;
  v96 = 0;
  sub_125180((__int64)&v93, v68);
  sub_125180((__int64)&v95, v62);
  v52 = v63;
  if ( *(_BYTE *)(v73 + 32) != 14 )
  {
    if ( (*(_QWORD *)(v73 + 32) & 0xFFFFFFFF000000FFLL) != 0x800000001LL )
      goto LABEL_91;
LABEL_84:
    v77 = (_DWORD *)v52;
    v54 = sub_130BC0(v87, v52, (__int64)&v93, v52, (__int64)&v95, 0);
    v52 = (__int64)v77;
    if ( !v54 )
      goto LABEL_91;
    *((_QWORD *)&v55 + 1) = v77;
    *(_QWORD *)&v55 = v87;
    sub_B1520(v55, v5 + 32, v77, (unsigned __int8 *)&v93, (__int64)v77, a5, (__int64)&v95, 0);
    if ( (unsigned __int8)sub_12AB50(v8, a1, 2 * *(_DWORD *)(v5 + 52), 1) )
    {
      v56 = *(_DWORD *)(v5 + 68);
      *(_DWORD *)(v5 + 68) = *(_DWORD *)(v5 + 52);
      if ( (unsigned __int8)sub_12B6F0(v5, a1, 10, v56, 1) )
      {
        sub_A2520((__int64)v87, "UMOD-30BIT");
        sub_11CDA0((__int64)&v95);
        sub_11CDA0((__int64)&v93);
        return v6;
      }
      if ( !under_debugger )
        sub_383060(0, a5);
    }
    else if ( !under_debugger )
    {
      sub_383060(0, a5);
    }
LABEL_105:
    BUG();
  }
  v76 = v63;
  v58 = sub_125B60(*(unsigned __int8 **)(v73 + 40), (__int64)&v93, 1u);
  v52 = v63;
  if ( v58 )
  {
    v53 = sub_125B60((unsigned __int8 *)(*(_QWORD *)(v73 + 40) + 16LL), (__int64)&v95, 1u);
    goto LABEL_83;
  }
LABEL_91:
  v78 = v52;
  sub_11CDA0((__int64)&v95);
  sub_11CDA0((__int64)&v93);
  v13 = v78;
LABEL_47:
  v10 = v90;
  if ( v90 <= 1 || (v90 & 1) == 0 )
    return 0;
LABEL_15:
  v14 = 1;
  v15 = 2;
  while ( v15 % v10 != 1 )
  {
    ++v14;
    v15 = 2 * v15 % v10;
    if ( v14 == 65 )
      return 0;
  }
  if ( 32 % v14 )
    return 0;
  v83 = v13;
  v16 = sub_11C8E0(*(_QWORD *)(v5 + 40), &v92, 12);
  if ( !v16 )
    return 0;
  v17 = v92;
  if ( *(_BYTE *)v92 != 4 )
    return 0;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    if ( (unsigned int)(*(_DWORD *)v18 - 8) > 1 )
      break;
    v17 = v18 + 32;
    if ( *(_BYTE *)(v18 + 32) != 4 )
      return 0;
  }
  if ( *(_DWORD *)v18 != 35 )
    return 0;
  if ( *(_BYTE *)(v18 + 32) != 4 )
    return 0;
  v19 = *(_DWORD **)(v18 + 40);
  if ( *v19 != 12 )
    return 0;
  v20 = (unsigned __int8 *)(v19 + 8);
  v69 = v83;
  v74 = v16;
  v79 = *(_QWORD *)(v18 + 40);
  v84 = (unsigned __int8 *)(v18 + 48);
  v21 = sub_125B60((unsigned __int8 *)(v18 + 48), (__int64)(v19 + 8), 1u);
  v22 = v84;
  v23 = v74;
  v24 = v69;
  if ( v21 )
  {
    v75 = v20;
    v20 = (unsigned __int8 *)(v79 + 48);
    goto LABEL_27;
  }
  v86 = v74;
  v75 = (unsigned __int8 *)(v79 + 48);
  v49 = sub_125B60(v22, v79 + 48, 1u);
  v23 = v86;
  v24 = v69;
  if ( v49 )
  {
LABEL_27:
    v80 = v23 + 48;
    v70 = v24;
    v85 = (unsigned __int8 *)(v23 + 32);
    v25 = sub_130BC0(v87, v24, v23 + 32, v24, v23 + 48, 0);
    v26 = (_DWORD *)v70;
    if ( !v25 )
    {
      if ( (unsigned __int8)sub_130BC0(v87, v70, v80, v70, (__int64)v85, 0) )
      {
        v27 = v85;
        v26 = (_DWORD *)v70;
        v85 = (unsigned __int8 *)v80;
        v80 = (__int64)v27;
        goto LABEL_30;
      }
      return 0;
    }
LABEL_30:
    v71 = v26;
    if ( !sub_125B60(v75, (__int64)v85, 0) || !sub_125B60(v20, v80, 0) )
      return 0;
    *(_QWORD *)&v28 = v87;
    *((_QWORD *)&v28 + 1) = v71;
    sub_B1520(v28, v5 + 32, v71, v85, (__int64)v71, a5, v80, 0);
    if ( !(unsigned __int8)sub_12AB50(v8, a1, 2 * *(_DWORD *)(v5 + 52), 1)
      || (v29 = *(_DWORD *)(v5 + 68),
          *(_DWORD *)(v5 + 68) = *(_DWORD *)(v5 + 52),
          !(unsigned __int8)sub_12B6F0(v5, a1, 10, v29, 1)) )
    {
      if ( !under_debugger )
        sub_383060(0, a5);
      goto LABEL_105;
    }
    sub_A2520((__int64)v87, "UMOD");
  }
  else
  {
    return 0;
  }
  return v6;
}

