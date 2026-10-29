unsigned __int64 __fastcall sub_251C00(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rax
  bool v11; // zf
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 40);
  v17 = __readfsqword(0x28u);
  a1[2] = -1;
  *a1 = v2;
  a1[3] = -4294967226LL;
  a1[4] = 0xFFFFFFFFLL;
  a1[5] = 0;
  a1[6] = a2 + 456;
  v3 = *(_QWORD *)(a2 + 1328);
  a1[1] = a2;
  *((_DWORD *)a1 + 14) = 0;
  a1[10] = v3;
  *((_DWORD *)a1 + 26) = 1;
  v4 = (_QWORD *)qalloc();
  if ( !v4 )
    sub_47534(16);
  *v4 = 0;
  v4[1] = 0;
  a1[14] = (__int64)v4;
  v5 = (_QWORD *)qalloc();
  if ( !v5 )
    sub_47534(16);
  *v5 = 0;
  v5[1] = 0;
  v6 = a1[1];
  a1[15] = (__int64)v5;
  a1[16] = 0;
  *((_DWORD *)a1 + 38) = 0;
  a1[20] = 0;
  a1[23] = 0;
  *((_BYTE *)a1 + 208) = 0;
  *(_OWORD *)(a1 + 17) = 0;
  *(_OWORD *)(a1 + 21) = 0;
  *((_OWORD *)a1 + 12) = 0;
  v7 = *(_QWORD *)(v6 + 1496);
  a1[27] = v7;
  v8 = *(_QWORD *)(v6 + 1504);
  ++*(_DWORD *)(v7 + 896);
  *(_QWORD *)(a1[27] + 1352) = a1;
  v9 = *a1;
  a1[9] = sub_2B12F0(v8, *a1);
  a1[11] = sub_2B1520(v8, v9);
  a1[8] = sub_2B1220(v8, v9, a1);
  v10 = sub_2B2930(v8, v9);
  v11 = a1[8] == 0;
  a1[12] = v10;
  if ( !v11 )
  {
    if ( a1[9] )
      goto LABEL_5;
    goto LABEL_14;
  }
  v15 = (_QWORD *)qalloc();
  if ( !v15 )
    sub_47534(16);
  *v15 = 0;
  v15[1] = 0;
  v11 = a1[9] == 0;
  a1[8] = (__int64)v15;
  if ( v11 )
  {
LABEL_14:
    v16 = (_QWORD *)qalloc();
    if ( !v16 )
      sub_47534(16);
    *v16 = 0;
    v16[1] = 0;
    a1[9] = (__int64)v16;
  }
LABEL_5:
  if ( !a1[11] )
  {
    v14 = (_QWORD *)qalloc();
    if ( !v14 )
      sub_47534(16);
    *v14 = 0;
    v14[1] = 0;
    a1[11] = (__int64)v14;
  }
  if ( !a1[12] )
  {
    v13 = (_QWORD *)qalloc();
    if ( !v13 )
      sub_47534(16);
    *v13 = 0;
    v13[1] = 0;
    a1[12] = (__int64)v13;
  }
  sub_2B0DF0(a1[27], v9, 0);
  netnode_valobj();
  *((_DWORD *)a1 + 27) = 0;
  return v17 - __readfsqword(0x28u);
}

