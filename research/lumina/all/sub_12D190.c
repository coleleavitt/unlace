unsigned __int64 __fastcall sub_12D190(__int64 a1, __int64 a2, int a3, double a4)
{
  unsigned int v6; // r13d
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rsi
  signed int v10; // r14d
  __int64 v11; // r8
  __int64 *v12; // rbp
  __int64 *v13; // rdi
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r15d
  char v18; // al
  unsigned __int8 v19; // al
  __int64 v20; // rax
  int v21; // eax
  _BYTE *v22; // rdx
  unsigned int v23; // r15d
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int16 v27; // dx
  __int64 v28; // rax
  int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  _BYTE *v33; // rdx
  __int64 v35; // r8
  int v36; // edx
  int v37; // eax
  signed int v38; // r10d
  _BYTE *v39; // rdx
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // [rsp+8h] [rbp-60h]
  int v44; // [rsp+Ch] [rbp-5Ch]
  signed int v45; // [rsp+10h] [rbp-58h]
  unsigned int v47; // [rsp+18h] [rbp-50h]
  unsigned int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 52);
  v7 = *(_QWORD *)(a2 + 24);
  v50 = __readfsqword(0x28u);
  v8 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 52) = v6 + 2;
  v9 = *(_QWORD *)(a2 + 48);
  if ( !v9 )
  {
    if ( (unsigned int)sub_E4020(a1, 27, *(_QWORD *)a2, 0, *(_QWORD *)(*(_QWORD *)(v8 + 32) - 0x100000LL)) )
      return __readfsqword(0x28u) ^ v50;
    v35 = *(_QWORD *)v7;
    v36 = *(_DWORD *)(v7 + 40);
    v10 = -32768;
    goto LABEL_41;
  }
  v10 = sub_CFB20(v8, v9);
  if ( (unsigned int)sub_E4020(a1, 27, *(_QWORD *)a2, 0, *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL * v10)) )
    return __readfsqword(0x28u) ^ v50;
  if ( v10 != 1 )
  {
    v35 = *(_QWORD *)v7;
    v36 = *(_DWORD *)(v7 + 40);
LABEL_41:
    sub_E30E0(a1, v10, v36, 1u, v35);
  }
  v12 = *(__int64 **)(a1 + 16);
  if ( v12 || (v12 = sub_E2050((__int64 *)a1)) != nullptr )
  {
    v48 = a3;
    if ( a3 < 0 )
      v48 = *(_DWORD *)(a2 + 88);
    v13 = sub_F2500(a1, a2, a4);
    v43 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = v43 + 1;
    if ( v13 )
      ++*(_DWORD *)v13;
    v14 = sub_E1710((__int64)v12, 119, v43, 0, *(unsigned __int16 *)(a2 + 94));
    sub_DCC50((__int64)v12, v14, (__int64)v13, 4294967288LL, v15, v16);
    sub_F2630(a1, v6, v10, v7, 112, a4);
    v17 = sub_E1710((__int64)v12, 35, v6, 0, 0);
    v18 = *(_BYTE *)(a1 + 31);
    if ( v18 )
    {
      v19 = v18 - 1;
      *(_BYTE *)(a1 + 31) = v19;
      v44 = *(_DWORD *)(a1 + 4LL * v19 + 216);
    }
    else
    {
      v44 = *(_DWORD *)(a1 + 56) + 1;
      *(_DWORD *)(a1 + 56) = v44;
    }
    v20 = *(_QWORD *)(a1 + 160);
    if ( !v20 )
      v20 = a1;
    *(_BYTE *)(v20 + 32) = 1;
    sub_12CD50(a1, a2, v6, v44, 0, &v49, a4, 0, 0);
    sub_E1710((__int64)v12, 139, v43, v44, 0);
    if ( v49 )
      sub_E0BB0(*(_QWORD *)(a1 + 16), v49);
    sub_E1710((__int64)v12, 38, v6, v17 + 1, 0);
    v21 = *((_DWORD *)v12 + 36);
    if ( v17 < 0 )
      v17 = v21 - 1;
    v22 = byte_241F50;
    if ( !*(_BYTE *)(*v12 + 103) )
      v22 = (_BYTE *)(v12[17] + 24LL * v17);
    v23 = v6 + 1;
    *((_DWORD *)v22 + 2) = v21;
    if ( a3 < 0 )
    {
      sub_E1710((__int64)v12, 145, v48, v10, 0);
      v40 = sub_E1710((__int64)v12, 113, v23, v48, v10);
      sub_DCC50((__int64)v12, v40, (__int64)v13, 4294967288LL, v41, v42);
      v27 = 1;
    }
    else
    {
      v24 = sub_E1710((__int64)v12, 113, v23, v48, v10);
      sub_DCC50((__int64)v12, v24, (__int64)v13, 4294967288LL, v25, v26);
      v27 = 17;
    }
    v28 = *((int *)v12 + 36);
    if ( (int)v28 > 0 )
      *(_WORD *)(v12[17] + 24 * v28 - 22) = v27;
    v29 = sub_E1710((__int64)v12, 33, v43, 0, 0);
    if ( *(_BYTE *)(a2 + 98) )
    {
      v45 = sub_E1710((__int64)v12, 8, 0, 1u, 0);
      v47 = *((_DWORD *)v12 + 36);
      sub_E1770(v12, 132, v43, v45, v44, *(unsigned __int16 *)(a2 + 94));
      sub_E2130((__int64 *)a1, 2u, a2);
      v37 = *((_DWORD *)v12 + 36);
      v38 = v45;
      if ( v45 < 0 )
        v38 = v37 - 1;
      v39 = byte_241F50;
      if ( !*(_BYTE *)(*v12 + 103) )
        v39 = (_BYTE *)(v12[17] + 24LL * v38);
      *((_DWORD *)v39 + 2) = v37;
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 160);
      if ( !v30 )
        v30 = a1;
      *(_BYTE *)(v30 + 33) = 1;
      v47 = *((_DWORD *)v12 + 36);
    }
    sub_E1710((__int64)v12, 133, v43, v44, v23);
    if ( (*(_BYTE *)(a2 + 100) & 2) == 0 )
      sub_E1710((__int64)v12, 137, v23, 0, 0);
    sub_E1710((__int64)v12, 138, v23, v44, 0);
    v31 = *((int *)v12 + 36);
    if ( (int)v31 > 0 )
      *(_WORD *)(v12[17] + 24 * v31 - 22) = 16;
    if ( v44 )
      sub_CEFE0(a1, v44);
    sub_E1710((__int64)v12, 36, v43, v47, 0);
    v32 = *((_DWORD *)v12 + 36);
    if ( v29 < 0 )
      v29 = v32 - 1;
    v33 = byte_241F50;
    if ( !*(_BYTE *)(*v12 + 103) )
      v33 = (_BYTE *)(v12[17] + 24LL * v29);
    *((_DWORD *)v33 + 2) = v32;
    sub_E1710((__int64)v12, 122, v6, 0, 0);
    sub_E1710((__int64)v12, 122, v23, 0, 0);
    sub_E1710((__int64)v12, 122, v43, 0, 0);
  }
  return __readfsqword(0x28u) ^ v50;
}
