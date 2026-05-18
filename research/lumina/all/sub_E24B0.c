__int64 __fastcall sub_E24B0(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int a8,
        _DWORD *a9,
        unsigned int a10)
{
  __int64 v12; // rbx
  int v13; // ebp
  char v14; // al
  bool v15; // cc
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  int v19; // r15d
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  _DWORD *v23; // rdx
  char v24; // al
  int v25; // r14d
  unsigned int v26; // r15d
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // al
  int v31; // r15d
  int v32; // r14d
  unsigned int v33; // r14d
  __int64 v34; // rax
  unsigned __int8 v35; // al
  unsigned __int8 v36; // al
  unsigned int v37; // eax
  unsigned int v38; // [rsp+4h] [rbp-64h]
  _BYTE *v40; // [rsp+18h] [rbp-50h]
  _BYTE *v41; // [rsp+18h] [rbp-50h]
  _BYTE *v42; // [rsp+18h] [rbp-50h]
  int v43; // [rsp+18h] [rbp-50h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  _BYTE *v45; // [rsp+18h] [rbp-50h]
  _BYTE *v46; // [rsp+18h] [rbp-50h]
  _BYTE *v47; // [rsp+20h] [rbp-48h]
  _BYTE *v48; // [rsp+28h] [rbp-40h]

  v12 = *(_QWORD *)(a1 + 16);
  v38 = *(_DWORD *)(v12 + 144);
  v13 = *(_DWORD *)(a1 + 68) - 1;
  *(_DWORD *)(a1 + 68) = v13;
  if ( a8 )
  {
    v42 = a6;
    v19 = sub_E1710(v12, 16, a8, 0, 0);
    if ( a9 )
      ++*a9;
    v48 = v42;
    v43 = sub_E1710(v12, 90, *a4, a8 + 1, *a5);
    sub_DCC50(v12, v43, (__int64)a9, 4294967288LL, v20, v21);
    sub_E1710(v12, 13, v43 + 2, v13, v43 + 2);
    v22 = *(_DWORD *)(v12 + 144);
    if ( v19 < 0 )
      v19 = v22 - 1;
    v23 = &unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v12 + 103LL) )
      v23 = (_DWORD *)(*(_QWORD *)(v12 + 136) + 24LL * v19);
    v23[2] = v22;
    sub_E1710(v12, 80, *a4, a8 + 1, *a5 - 1);
    sub_E1710(v12, 71, 1u, a8, 0);
    a6 = v48;
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
    return 0;
  if ( (int)*a3 <= 0 )
  {
    v14 = *a6;
    v15 = *a6 <= 0xBu;
    if ( *a6 != 11 )
      goto LABEL_5;
LABEL_25:
    v24 = *(_BYTE *)(a1 + 31);
    if ( v24 )
    {
      v35 = v24 - 1;
      *(_BYTE *)(a1 + 31) = v35;
      v25 = *(_DWORD *)(a1 + 4LL * v35 + 216);
    }
    else
    {
      v25 = *(_DWORD *)(a1 + 56) + 1;
      *(_DWORD *)(a1 + 56) = v25;
    }
    v26 = *a5;
    v47 = a6;
    v44 = *((_QWORD *)a6 + 3);
    v27 = sub_E1710(v12, 97, *a4, *a5, v25);
    sub_DCC50(v12, v27, v44, v26, v28, v29);
    sub_E1770((_QWORD *)v12, 138, *((_DWORD *)v47 + 1), v25, *a4, *a5);
    if ( v25 )
      sub_CEFE0(a1, v25);
    goto LABEL_11;
  }
  v41 = a6;
  sub_E2490(v12, *a3, v13);
  a6 = v41;
  v14 = *v41;
  v15 = *v41 <= 0xBu;
  if ( *v41 == 11 )
    goto LABEL_25;
LABEL_5:
  if ( !v15 )
  {
    if ( v14 != 12 )
    {
      if ( v14 == 13 )
      {
        v16 = *((_DWORD *)a6 + 3);
        v17 = *a5;
        if ( !v16 )
        {
          v46 = a6;
          v37 = sub_CF000(a1, v17);
          a6 = v46;
          v16 = v37;
          *((_DWORD *)v46 + 3) = v37;
          *((_DWORD *)v46 + 4) = *a5;
          v17 = *a5;
        }
        v40 = a6;
        sub_E1710(*(_QWORD *)(a1 + 16), 79, *a4, v16, v17);
        sub_E1710(v12, 11, *((_DWORD *)v40 + 1), 0, 0);
        goto LABEL_11;
      }
      goto LABEL_40;
    }
    v30 = *(_BYTE *)(a1 + 31);
    if ( v30 )
    {
      *(_BYTE *)(a1 + 31) = v30 - 1;
      v31 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)(v30 - 1) + 216);
      if ( v30 != 1 )
      {
        v36 = v30 - 2;
        *(_BYTE *)(a1 + 31) = v36;
        v33 = *(_DWORD *)(a1 + 4LL * v36 + 216);
        goto LABEL_32;
      }
      v32 = *(_DWORD *)(a1 + 56);
    }
    else
    {
      v31 = *(_DWORD *)(a1 + 56) + 1;
      v32 = v31;
    }
    v33 = v32 + 1;
    *(_DWORD *)(a1 + 56) = v33;
LABEL_32:
    v45 = a6;
    sub_E1710(v12, 97, *a4, *a5, v31);
    sub_E1710(v12, 127, *((_DWORD *)v45 + 1), v33, 0);
    sub_E1710(v12, 128, *((_DWORD *)v45 + 1), v31, v33);
    v34 = *(int *)(v12 + 144);
    if ( (int)v34 > 0 )
      *(_WORD *)(*(_QWORD *)(v12 + 136) + 24 * v34 - 22) = 8;
    if ( v33 )
      sub_CEFE0(a1, v33);
    if ( v31 )
      sub_CEFE0(a1, v31);
    goto LABEL_11;
  }
  if ( v14 != 10 )
  {
LABEL_40:
    sub_E1710(v12, 84, *a4, *a5, 0);
    goto LABEL_11;
  }
  sub_E1710(*(_QWORD *)(a1 + 16), 79, *a4, *((_DWORD *)a6 + 1), *a5);
LABEL_11:
  if ( *a2 )
    sub_E1710(v12, 60, *a2, a10, 0);
  sub_E0BB0(v12, v13);
  sub_E1710(v12, 67, a7, 0, 0);
  return v38;
}
