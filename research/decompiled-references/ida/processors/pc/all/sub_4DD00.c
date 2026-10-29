__int64 __fastcall sub_4DD00(__int64 a1, int *a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // r13d
  unsigned __int16 v7; // dx
  unsigned __int64 v10; // r14
  __int16 v11; // cx
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  __int64 *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rdi
  _DWORD *v21; // rsi
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  __int16 v24; // ax
  __int64 v25; // r9
  char v26; // al
  __int64 *v27; // rdi
  _DWORD *v28; // rsi
  __int64 i; // rcx
  __int64 v30; // rax
  unsigned __int16 v31; // ax
  int v32; // r10d
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // [rsp+0h] [rbp-150h]
  unsigned __int64 v42; // [rsp+0h] [rbp-150h]
  int v43; // [rsp+8h] [rbp-148h]
  __int64 v44; // [rsp+10h] [rbp-140h]
  __int64 v45; // [rsp+10h] [rbp-140h]
  __int16 v46; // [rsp+1Eh] [rbp-132h]
  __int64 v47; // [rsp+20h] [rbp-130h]
  __int64 v48; // [rsp+28h] [rbp-128h]
  __int64 v49; // [rsp+28h] [rbp-128h]
  unsigned __int16 v50; // [rsp+38h] [rbp-118h]
  __int64 insn; // [rsp+40h] [rbp-110h]
  char v52; // [rsp+50h] [rbp-100h]
  __int64 v53; // [rsp+58h] [rbp-F8h] BYREF
  __int128 v54; // [rsp+60h] [rbp-F0h]
  __int64 v55; // [rsp+70h] [rbp-E0h]
  int v56; // [rsp+78h] [rbp-D8h]
  __int64 v57; // [rsp+88h] [rbp-C8h] BYREF
  __int128 v58; // [rsp+90h] [rbp-C0h]
  __int64 v59; // [rsp+A0h] [rbp-B0h]
  int v60; // [rsp+A8h] [rbp-A8h]
  __int64 v61; // [rsp+B8h] [rbp-98h] BYREF
  __int128 v62; // [rsp+C0h] [rbp-90h]
  __int64 v63; // [rsp+D0h] [rbp-80h]
  int v64; // [rsp+D8h] [rbp-78h]
  __int64 v65; // [rsp+E8h] [rbp-68h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-60h]
  __int64 v67; // [rsp+100h] [rbp-50h]
  int v68; // [rsp+108h] [rbp-48h]
  unsigned __int64 v69; // [rsp+110h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v54 = 0;
  v53 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v67 = 0;
  v68 = 0;
  v58 = 0;
  v62 = 0;
  v66 = 0;
  v4 = *a2;
  *a2 |= 1u;
  if ( *(_BYTE *)(a3 + 32) != 30 || *(_BYTE *)(a3 + 41) != 4 )
    return 0;
  v7 = *(_WORD *)(a3 + 46);
  BYTE1(v53) = 1;
  BYTE5(v53) = 1;
  v10 = *(_QWORD *)(a3 + 16);
  if ( v7 == 6 )
  {
    v11 = 5;
  }
  else if ( v7 > 6u )
  {
    v11 = 3;
    if ( v7 != 7 )
      return 0;
  }
  else if ( v7 == 4 )
  {
    v11 = 6;
  }
  else
  {
    v11 = 7;
    if ( v7 != 5 )
      return 0;
  }
  HIWORD(v53) = v11;
  v12 = *(_QWORD *)(a3 + 56);
  *a2 = v4 | 0xB;
  v41 = v12;
  if ( decode_prev_insn() == -1 )
    return 0;
  v13 = *(_WORD *)(a3 + 24);
  if ( v13 == 6 )
  {
    if ( (*(_WORD *)(a3 + 28) & 0x387) != 0
      || !(unsigned __int8)sub_4D570(a3 + 40, (__int64)&v53)
      || (*(_QWORD *)(a3 + 80) & 0xFFFF00000000FF00LL) != 0x1000000000100LL
      || decode_prev_insn() == -1
      || *(_WORD *)(a3 + 24) != 6
      || (*(_WORD *)(a3 + 28) & 0x387) != 0
      || *(_BYTE *)(a3 + 41) != 1
      || *(_WORD *)(a3 + 46) != 1
      || !(unsigned __int8)sub_4D570(a3 + 40, a3 + 80)
      || decode_prev_insn() == -1 )
    {
      return 0;
    }
    *a2 &= 0xFFFFFFF5;
    v13 = *(_WORD *)(a3 + 24);
  }
  if ( v13 != 86 )
    return 0;
  if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
    return 0;
  *((_QWORD *)a2 + 3) = sub_7F350(a1, a3, a3 + 40);
  if ( decode_prev_insn() == -1 )
    return 0;
  if ( *(_WORD *)(a3 + 24) != 109 )
    return 0;
  if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
    return 0;
  v48 = sub_7F350(a1, a3, a3 + 40);
  insn = decode_prev_insn();
  if ( insn == -1 )
    return 0;
  v46 = *(_WORD *)(a3 + 24);
  if ( v46 != 6 )
    return 0;
  if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
    return 0;
  if ( !(unsigned __int8)sub_4D570(a3 + 40, (__int64)&v53) )
    return 0;
  if ( *(_BYTE *)(a3 + 81) != 5 )
    return 0;
  v44 = v14;
  v47 = *(_QWORD *)(a3 + 88);
  if ( decode_prev_insn() == -1 )
    return 0;
  if ( *(_WORD *)(a3 + 24) != 85 )
    return 0;
  if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
    return 0;
  if ( v44 != sub_7F350(a1, a3, a3 + 40) )
    return 0;
  if ( decode_prev_insn() == -1 )
    return 0;
  if ( *(_WORD *)(a3 + 24) != 27 )
    return 0;
  if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
    return 0;
  if ( *(_BYTE *)(a3 + 41) != 1 )
    return 0;
  v15 = 9;
  v16 = (_DWORD *)(a3 + 40);
  v17 = &v57;
  while ( v15 )
  {
    *(_DWORD *)v17 = *v16++;
    v17 = (__int64 *)((char *)v17 + 4);
    --v15;
  }
  if ( (unsigned __int8)sub_4D570((__int64)&v57, (__int64)&v53) )
    return 0;
  v19 = 9;
  v20 = &v61;
  v21 = (_DWORD *)(a3 + 80);
  while ( v19 )
  {
    *(_DWORD *)v20 = *v21++;
    v20 = (__int64 *)((char *)v20 + 4);
    --v19;
  }
  if ( (unsigned __int8)sub_4D570((__int64)&v61, v18) )
    return 0;
  v52 = *(_BYTE *)(a3 + 85);
  v50 = *(_WORD *)(a3 + 86);
  v22 = decode_prev_insn();
  v45 = v22;
  if ( v22 == -1 )
    return 0;
  if ( v48 == v22 )
  {
    v40 = *a2 & 0xFFFFFFF5;
    *a2 = v40;
    if ( v52 == 2 )
    {
      if ( v47 != 4 )
        return 0;
      v49 = -1;
      *a2 = v40 | 2;
    }
    else
    {
      if ( v47 != 2 )
        return 0;
      v49 = -1;
    }
  }
  else
  {
    if ( v47 != 2
      || *(_WORD *)(a3 + 24) != 122
      || (*(_WORD *)(a3 + 28) & 0x387) != 0
      || *(_BYTE *)(a3 + 32) != 30
      || !(unsigned __int8)sub_4D570((__int64)&v57, a3 + 40)
      || *(_BYTE *)(a3 + 81) != 4 )
    {
      return 0;
    }
    v23 = *(_WORD *)(a3 + 86);
    BYTE1(v65) = 1;
    BYTE5(v65) = 1;
    if ( v23 == 6 )
    {
      v24 = 5;
    }
    else if ( v23 > 6u )
    {
      if ( v23 != 7 )
        return 0;
      v24 = 3;
    }
    else if ( v23 == 4 )
    {
      v24 = 6;
    }
    else
    {
      v24 = 7;
      if ( v23 != 5 )
        return 0;
    }
    HIWORD(v65) = v24;
    if ( !(unsigned __int8)sub_4D570((__int64)&v65, (__int64)&v53) )
      return 0;
    *((_WORD *)a2 + 2) = *(_QWORD *)(a3 + 96) >> 1;
    if ( decode_prev_insn() == -1 )
      return 0;
    if ( *(_WORD *)(a3 + 24) != 79 )
      return 0;
    if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
      return 0;
    if ( insn != sub_7F350(a1, a3, a3 + 40) )
      return 0;
    if ( decode_prev_insn() == -1 )
      return 0;
    if ( *(_WORD *)(a3 + 24) != 27 )
      return 0;
    if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
      return 0;
    if ( !(unsigned __int8)sub_4D570(a3 + 40, (__int64)&v57) )
      return 0;
    v26 = *(_BYTE *)(a3 + 85);
    v27 = &v61;
    v28 = (_DWORD *)(a3 + 80);
    for ( i = 9; i; --i )
    {
      *(_DWORD *)v27 = *v28++;
      v27 = (__int64 *)((char *)v27 + 4);
    }
    v52 = v26;
    v50 = *(_WORD *)(a3 + 86);
    if ( (unsigned __int8)sub_4D570((__int64)&v61, v25) )
      return 0;
    if ( (unsigned __int8)sub_4D570((__int64)&v61, (__int64)&v53) )
      return 0;
    v30 = decode_prev_insn();
    if ( v48 != v30 || v30 == -1 )
      return 0;
    v49 = v45;
  }
  if ( *(_WORD *)(a3 + 24) != 122
    || (*(_WORD *)(a3 + 28) & 0x387) != 0
    || !(unsigned __int8)sub_4D570((__int64)&v57, a3 + 40)
    || *(_BYTE *)(a3 + 32) != 30
    || *(_BYTE *)(a3 + 81) != 3 )
  {
    return 0;
  }
  v31 = *(_WORD *)(a3 + 86);
  BYTE1(v65) = 1;
  BYTE5(v65) = 1;
  if ( v31 == 6 )
  {
    v46 = 5;
  }
  else
  {
    if ( v31 <= 6u )
    {
      if ( v31 == 4 )
        goto LABEL_75;
      v46 = 7;
      if ( v31 == 5 )
        goto LABEL_75;
      return 0;
    }
    if ( v31 != 7 )
      return 0;
    v46 = 3;
  }
LABEL_75:
  HIWORD(v65) = v46;
  if ( !(unsigned __int8)sub_4D570((__int64)&v65, (__int64)&v53) )
    return 0;
  if ( decode_prev_insn() == -1 )
    return 0;
  if ( *(_WORD *)(a3 + 24) != 122 )
    return 0;
  if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
    return 0;
  v5 = sub_4D570(a3 + 40, (__int64)&v53);
  if ( !(_BYTE)v5 || *(_BYTE *)(a3 + 81) != 5 )
    return 0;
  v33 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v34 = *(_QWORD *)(a3 + 88) + 16LL * *(_QWORD *)a3;
  if ( v34 != v33 )
  {
    if ( v34 == -1 )
      v33 = -1;
    else
      v33 &= v34;
  }
  *((_QWORD *)a2 + 2) = v33;
  v43 = v32;
  v35 = decode_prev_insn();
  if ( v35 == -1 )
    return 0;
  if ( *(_WORD *)(a3 + 24) != 122 )
    return 0;
  if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
    return 0;
  if ( *(_BYTE *)(a3 + 81) != 5 )
    return 0;
  if ( (*(_QWORD *)(a3 + 40) & 0xFFFF00000000FF00LL) != 0x1000000000100LL )
    return 0;
  v36 = *(_QWORD *)(a3 + 88);
  if ( v43 )
  {
    if ( *((unsigned __int16 *)a2 + 2) != v36 )
      return 0;
  }
  v37 = *((_QWORD *)a2 + 2);
  *((_WORD *)a2 + 2) = v36;
  v38 = 1;
  *((_QWORD *)a2 + 4) = v35;
  if ( v47 == 4 )
    v38 = 2;
  v39 = v41;
  v42 = v35;
  *((_QWORD *)a2 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v37 + v39 * v38);
  a2[16] = v50;
  *((_BYTE *)a2 + 68) = v52;
  sub_47340(a1, v35, v10);
  sub_47740(v42, 1);
  sub_47740(v10, 0);
  sub_47740(v49, 1);
  get_default_reftype();
  op_offset();
  return v5;
}
