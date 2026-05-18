unsigned __int64 __fastcall sub_12C5D0(__int64 *a1, int a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r12
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // r9d
  unsigned int v23; // r12d
  unsigned __int64 v24; // rax
  unsigned int v25; // r9d
  unsigned int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rsi
  char v33; // al
  int v34; // ebp
  int v35; // eax
  int v36; // esi
  _BYTE *v37; // rdx
  int v38; // ecx
  unsigned __int8 *j; // rdx
  int v40; // edx
  int v41; // eax
  int v42; // edi
  _BYTE *v43; // rax
  int v45; // edx
  __int64 v46; // r12
  int v47; // ebx
  __int64 i; // r13
  __int64 v49; // rdi
  const char *v50; // r14
  int v51; // esi
  unsigned __int8 v52; // al
  unsigned int v53; // edi
  __int64 v54; // r9
  int v55; // r10d
  __int64 v56; // r15
  __int64 v57; // rbp
  __int64 v58; // r13
  unsigned int v59; // r8d
  int v60; // ecx
  __int64 v61; // [rsp+8h] [rbp-140h]
  __int64 v62; // [rsp+18h] [rbp-130h]
  __int64 v63; // [rsp+20h] [rbp-128h]
  unsigned int v64; // [rsp+20h] [rbp-128h]
  int v65; // [rsp+28h] [rbp-120h]
  __int64 v66; // [rsp+28h] [rbp-120h]
  __int64 *v67; // [rsp+30h] [rbp-118h]
  __int64 *v68; // [rsp+30h] [rbp-118h]
  int v69; // [rsp+30h] [rbp-118h]
  int v71; // [rsp+4Ch] [rbp-FCh]
  __int64 v72; // [rsp+50h] [rbp-F8h]
  int v73; // [rsp+68h] [rbp-E0h]
  int v74; // [rsp+6Ch] [rbp-DCh]
  __int64 v75; // [rsp+70h] [rbp-D8h] BYREF
  __int64 (__fastcall *v76)(__int64, __int64); // [rsp+78h] [rbp-D0h]
  __int64 v77; // [rsp+80h] [rbp-C8h]
  int v78; // [rsp+88h] [rbp-C0h]
  __int16 v79; // [rsp+8Ch] [rbp-BCh]
  __int16 v80; // [rsp+94h] [rbp-B4h]
  unsigned int v81; // [rsp+98h] [rbp-B0h]
  char v82; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned __int64 v83; // [rsp+108h] [rbp-40h]

  v6 = a1;
  v7 = *a1;
  v61 = a3;
  v8 = *(_QWORD *)(*a1 + 16);
  v9 = *(_QWORD *)(a3 + 96);
  v83 = __readfsqword(0x28u);
  v62 = v8;
  v74 = sub_E1710(v8, 14, 0, 0, 0);
  v10 = v6[1];
  v11 = *(_QWORD *)v7;
LABEL_2:
  v12 = *(_QWORD *)(v7 + 16);
  v75 = v11;
  v78 = 0;
  v13 = *(unsigned __int8 *)(v61 + 64);
  v63 = v12;
  v76 = (__int64 (__fastcall *)(__int64, __int64))&v82;
  v77 = 0x3B9ACA0000000064LL;
  v79 = 256;
  sub_DBBA0((__int64)&v75, "BLOOM FILTER ON %S (", (const wchar_t *)(v10 + 104 * v13 + 8));
  v14 = *(_QWORD *)(v61 + 96);
  if ( (*(_BYTE *)(v14 + 49) & 1) != 0 )
  {
    v15 = *(_QWORD *)(v10 + 104LL * (int)v13 + 40);
    v16 = *(__int16 *)(v15 + 52);
    if ( (v16 & 0x8000u) != 0LL )
      sub_DBBA0((__int64)&v75, "rowid=?");
    else
      sub_DBBA0((__int64)&v75, "%s=?", *(const char **)(*(_QWORD *)(v15 + 8) + 16 * v16));
  }
  else
  {
    v45 = *(unsigned __int16 *)(v14 + 54);
    if ( (unsigned __int16)v45 < *(_WORD *)(v14 + 24) )
    {
      v68 = v6;
      v71 = a2;
      v46 = 2LL * *(unsigned __int16 *)(v14 + 54);
      v66 = v7;
      v47 = *(unsigned __int16 *)(v14 + 54);
      for ( i = *(_QWORD *)(v61 + 96); ; v45 = *(unsigned __int16 *)(i + 54) )
      {
        v49 = *(_QWORD *)(i + 32);
        v50 = "<expr>";
        v51 = *(__int16 *)(*(_QWORD *)(v49 + 8) + v46);
        if ( v51 != -2 )
        {
          v50 = "rowid";
          if ( v51 != -1 )
            v50 = *(const char **)(*(_QWORD *)(*(_QWORD *)(v49 + 24) + 8LL)
                                 + 16LL * *(__int16 *)(*(_QWORD *)(v49 + 8) + v46));
        }
        if ( v47 > v45 )
          sub_DFD90((__int64)&v75, " AND ", 5);
        ++v47;
        v46 += 2;
        sub_DBBA0((__int64)&v75, "%s=?", v50);
        if ( v47 >= *(unsigned __int16 *)(i + 24) )
          break;
      }
      v7 = v66;
      v6 = v68;
      a2 = v71;
    }
  }
  sub_DFD90((__int64)&v75, ")", 1);
  v17 = sub_DC130((__int64)&v75);
  v18 = sub_E1710(v63, 184, *(_DWORD *)(v63 + 144), *(_DWORD *)(v7 + 304), 0);
  sub_DCC50(v63, v18, (__int64)v17, 4294967290LL, v19, v20);
  v21 = *(_DWORD *)(v7 + 68) - 1;
  v22 = *(_DWORD *)(v7 + 56) + 1;
  *(_DWORD *)(v7 + 68) = v21;
  v64 = v21;
  v23 = *(_DWORD *)(v61 + 4);
  *(_DWORD *)(v7 + 56) = v22;
  *(_DWORD *)(v61 + 52) = v22;
  v24 = sub_C2A40(*(__int16 *)(*(_QWORD *)(v6[1] + 104LL * *(unsigned __int8 *)(v61 + 64) + 40) + 58LL));
  if ( v24 > 0x989680 )
    v24 = 10000000;
  v26 = 10000;
  if ( v24 >= 0x2710 )
    v26 = v24;
  sub_E1710(v62, 77, v26, v25, 0);
  v27 = sub_E1710(v62, 35, v23, 0, 0);
  v28 = *((int *)v6 + 35);
  v29 = v6[19];
  v65 = v27;
  if ( v29 < v29 + 56 * v28 )
  {
    v67 = v6;
    v30 = v29 + 56 * v28;
    do
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v29 + 18) & 2) == 0 )
        {
          v31 = *(_QWORD *)v29;
          v81 = v23;
          v80 = 3;
          v76 = sub_CE7B0;
          v77 = (__int64)sub_C43E0;
          if ( !v31 )
            break;
          sub_CDCD0((__int64)&v75, v31);
          if ( v80 )
            break;
        }
        v29 += 56LL;
        if ( v30 <= v29 )
          goto LABEL_16;
      }
      v32 = *(_QWORD *)v29;
      v29 += 56LL;
      sub_1253C0(v7, v32, v64, 16, a5);
    }
    while ( v30 > v29 );
LABEL_16:
    v6 = v67;
  }
  if ( (*(_BYTE *)(v9 + 49) & 1) != 0 )
  {
    v33 = *(_BYTE *)(v7 + 31);
    if ( v33 )
    {
      v52 = v33 - 1;
      *(_BYTE *)(v7 + 31) = v52;
      v34 = *(_DWORD *)(v7 + 4LL * v52 + 216);
    }
    else
    {
      v34 = *(_DWORD *)(v7 + 56) + 1;
      *(_DWORD *)(v7 + 56) = v34;
    }
    sub_E1710(v62, 135, v23, v34, 0);
    sub_E1770((_QWORD *)v62, 179, *(_DWORD *)(v61 + 52), 0, v34, 1);
    if ( v34 )
      sub_CEFE0(v7, v34);
  }
  else
  {
    v69 = *(unsigned __int16 *)(v9 + 24);
    v53 = sub_CF000(v7, v69);
    if ( v55 )
    {
      v72 = v9;
      v56 = 0;
      v73 = a2;
      v57 = (unsigned int)(v55 - 1) + 1LL;
      v58 = v54;
      do
      {
        v59 = v53 + v56;
        v60 = *(__int16 *)(*(_QWORD *)(v58 + 8) + 2 * v56++);
        sub_127530((__int64 *)v62, *(_QWORD *)(v58 + 24), v23, v60, v59, a5);
      }
      while ( v57 != v56 );
      v9 = v72;
      a2 = v73;
      sub_E1770((_QWORD *)v62, 179, *(_DWORD *)(v61 + 52), 0, v53, v69);
      if ( v69 == 1 )
      {
        sub_CF060(v7, v53);
        goto LABEL_22;
      }
    }
    else
    {
      sub_E1770((_QWORD *)v62, 179, *(_DWORD *)(v61 + 52), 0, v53, 0);
    }
    if ( v69 > *(_DWORD *)(v7 + 40) )
    {
      *(_DWORD *)(v7 + 40) = v69;
      *(_DWORD *)(v7 + 44) = v53;
    }
  }
LABEL_22:
  sub_E0BB0(v62, v64);
  sub_E1710(v62, 38, *(_DWORD *)(v61 + 4), v65 + 1, 0);
  v35 = *(_DWORD *)(v62 + 144);
  v36 = v35 - 1;
  v37 = byte_241F50;
  if ( v65 >= 0 )
    v36 = v65;
  if ( !*(_BYTE *)(*(_QWORD *)v62 + 103LL) )
    v37 = (_BYTE *)(*(_QWORD *)(v62 + 136) + 24LL * v36);
  *((_DWORD *)v37 + 2) = v35;
  *(_DWORD *)(v9 + 48) &= ~0x400000u;
  v11 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(*(_QWORD *)v7 + 98LL) & 0x10) == 0 )
  {
    v38 = a2 + 1;
    for ( j = (unsigned __int8 *)&v6[14 * a2 + 131]; ; j += 112 )
    {
      a2 = v38;
      if ( *((unsigned __int8 *)v6 + 72) <= v38 )
        break;
      v10 = v6[1];
      if ( (*(_BYTE *)(v10 + 104LL * *j + 68) & 0x48) == 0 )
      {
        v9 = *((_QWORD *)j + 4);
        if ( v9 )
        {
          if ( (a4 & *(_QWORD *)v9) == 0 && (*(_DWORD *)(v9 + 48) & 0x400004) == 0x400000 )
          {
            v61 = (__int64)&v6[14 * v38 + 109];
            goto LABEL_2;
          }
        }
      }
      ++v38;
    }
  }
  v40 = *(_DWORD *)(v62 + 144);
  v41 = v40 - 1;
  if ( v74 >= 0 )
    v41 = v74;
  v42 = v41;
  v43 = byte_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v62 + 103LL) )
    v43 = (_BYTE *)(*(_QWORD *)(v62 + 136) + 24LL * v42);
  *((_DWORD *)v43 + 2) = v40;
  return __readfsqword(0x28u) ^ v83;
}
