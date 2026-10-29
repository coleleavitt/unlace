__int64 __fastcall sub_21DEB(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  char v11; // al
  unsigned int v12; // r12d
  unsigned __int8 v13; // al
  char v14; // al
  unsigned __int8 v15; // al
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r15d
  char v19; // al
  int v20; // r14d
  int v21; // edx
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  unsigned int v24; // eax
  int v25; // r14d
  int v26; // edx
  _DWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // rdx
  unsigned int v32; // [rsp+4h] [rbp-54h]
  unsigned int v33; // [rsp+4h] [rbp-54h]
  unsigned int v35; // [rsp+Ch] [rbp-4Ch]
  __int64 v36; // [rsp+10h] [rbp-48h]
  unsigned int v37; // [rsp+18h] [rbp-40h]

  v7 = a2;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 16);
  if ( !v9 )
  {
    v32 = a3;
    v10 = sub_E2050(v8);
    a3 = v32;
    v9 = v10;
  }
  v36 = *(_QWORD *)(a1[1] + 24);
  v11 = *(_BYTE *)(v8 + 31);
  if ( v11 )
  {
    v13 = v11 - 1;
    *(_BYTE *)(v8 + 31) = v13;
    v12 = *(_DWORD *)(v8 + 4LL * v13 + 216);
  }
  else
  {
    v12 = *(_DWORD *)(v8 + 56) + 1;
    *(_DWORD *)(v8 + 56) = v12;
  }
  v14 = *(_BYTE *)(v8 + 31);
  if ( v14 )
  {
    v15 = v14 - 1;
    *(_BYTE *)(v8 + 31) = v15;
    v33 = *(_DWORD *)(v8 + 4LL * v15 + 216);
  }
  else
  {
    v33 = *(_DWORD *)(v8 + 56) + 1;
    *(_DWORD *)(v8 + 56) = v33;
  }
  v16 = *(_DWORD *)(v8 + 56) + 1;
  *(_DWORD *)(v8 + 56) = v16;
  v37 = v16;
  v17 = *(_DWORD *)(v8 + 68) - 1;
  *(_DWORD *)(v8 + 68) = v17;
  v35 = v17;
  sub_21AB0(*a1, a1[1], a3, v12);
  v18 = 106;
  sub_21AB0(*a1, a1[1], a5, v33);
  v19 = *(_BYTE *)(v36 + 24);
  if ( (v19 & 1) != 0 )
  {
    v18 = 107;
    if ( a2 == 54 )
    {
      v7 = 56;
    }
    else if ( a2 == 57 )
    {
      v7 = 55;
    }
    else
    {
      v7 = 57;
    }
  }
  if ( (v19 & 2) != 0 )
  {
    v20 = sub_E1710(v9, 51, v12, 0, 0);
    switch ( v7 )
    {
      case '7':
        sub_E1710(v9, 50, v33, a6, 0);
        break;
      case '9':
        sub_E1710(v9, 8, 0, a6, 0);
        break;
      case '6':
        sub_E1710(v9, 51, v33, a6, 0);
        break;
    }
    sub_E1710(v9, 8, 0, v35, 0);
    v21 = *(_DWORD *)(v9 + 144);
    if ( v20 < 0 )
      v20 = v21 - 1;
    v22 = &unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v9 + 103LL) )
      v22 = (_DWORD *)(24LL * v20 + *(_QWORD *)(v9 + 136));
    v22[2] = v21;
    sub_E1710(v9, 50, v33, a6, 0);
    if ( v7 == 54 || v7 == 57 )
    {
      v23 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v9 + 103LL) )
        v23 = (_DWORD *)(*(_QWORD *)(v9 + 136) + 24LL * (*(_DWORD *)(v9 + 144) - 1));
      v23[2] = v35;
    }
  }
  v24 = sub_E1710(v9, 117, 0, v37, 0);
  sub_DCC50(v9, v24, "", 0xFFFFFFFFLL);
  v25 = sub_E1710(v9, 57, v37, 0, v12);
  if ( v7 == 57 && v18 == 106 || v7 == 55 && v18 == 107 )
    sub_E1710(v9, v7, v33, a6, v12);
  sub_E1710(v9, v18, a4, v12, v12);
  v26 = *(_DWORD *)(v9 + 144);
  if ( v25 < 0 )
    v25 = v26 - 1;
  v27 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v9 + 103LL) )
    v27 = (_DWORD *)(24LL * v25 + *(_QWORD *)(v9 + 136));
  v27[2] = v26;
  sub_E1710(v9, v7, v33, a6, v12);
  v28 = sub_F3950(v8, *(_QWORD *)(v36 + 8));
  if ( !v28 )
    v28 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
  sub_D04B0(v9, v28, 4294967294LL);
  v29 = *(int *)(v9 + 144);
  if ( (int)v29 > 0 )
    *(_WORD *)(*(_QWORD *)(v9 + 136) + 24 * v29 - 22) = 128;
  result = sub_E0BB0(v9, v35);
  if ( v12 )
    result = sub_CEFE0(v8, v12, v31);
  if ( v33 )
    return sub_CEFE0(v8, v33, v31);
  return result;
}
