__int64 __fastcall sub_106780(__int64 a1, __int64 *a2, double a3)
{
  char v3; // al
  __int64 v4; // rbp
  int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v21; // r13
  char v22; // al
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r13
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  __int64 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 32);
  v4 = *(int *)(a1 + 40);
  v30 = __readfsqword(0x28u);
  if ( v3 == 5 )
  {
    v25 = *(_QWORD *)(a1 + 24);
    v26 = *(_QWORD *)(*(_QWORD *)(get_module_data() + 1344) + 1440LL) + v25;
    v29 = v4;
    v28 = v26;
    sub_1B38E0((unsigned __int64 *)&v28, a2);
  }
  else
  {
    if ( v3 != 1 )
      sub_101D10(a3);
    v6 = *(_DWORD *)(a1 + 24);
    v28 = 0;
    v29 = 0;
    sub_63E80(&v28, v6, v4, a3);
    sub_64DF0(&v28, a2);
    qfree(v28);
  }
  v7 = a2[1];
  if ( v7 )
  {
    v10 = v7 + 1;
    v9 = a2[1];
    v8 = *a2;
    --v7;
    if ( a2[2] >= v10 )
      goto LABEL_6;
  }
  else
  {
    v8 = *a2;
    v9 = 1;
    v10 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_6;
  }
  v16 = qvector_reserve((__int64)a2, v8, v10, 1);
  *a2 = v16;
  v8 = v16;
LABEL_6:
  a2[1] = v10;
  *(_BYTE *)(v8 + v7) = 123;
  v11 = 0;
  *(_BYTE *)(*a2 + v9) = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      ++v11;
      sub_FAAD0(a2);
      if ( v11 >= *(_QWORD *)(a1 + 8) )
        break;
      v12 = a2[1];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = a2[1];
        v15 = *a2;
        --v12;
        if ( a2[2] >= v13 )
          goto LABEL_10;
      }
      else
      {
        v15 = *a2;
        v14 = 1;
        v13 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_10;
      }
      v27 = v14;
      v17 = qvector_reserve((__int64)a2, v15, v13, 1);
      v14 = v27;
      *a2 = v17;
      v15 = v17;
LABEL_10:
      a2[1] = v13;
      *(_BYTE *)(v15 + v12) = 44;
      *(_BYTE *)(*a2 + v14) = 0;
    }
  }
  v18 = a2[1];
  if ( v18 )
  {
    v21 = v18 + 1;
    v20 = a2[1];
    v19 = *a2;
    --v18;
    if ( a2[2] >= v21 )
      goto LABEL_17;
  }
  else
  {
    v19 = *a2;
    v20 = 1;
    v21 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_17;
  }
  v24 = qvector_reserve((__int64)a2, v19, v21, 1);
  *a2 = v24;
  v19 = v24;
LABEL_17:
  a2[1] = v21;
  *(_BYTE *)(v19 + v18) = 125;
  *(_BYTE *)(*a2 + v20) = 0;
  if ( (*(_DWORD *)(a1 + 44) & 0x10000) == 0 )
    sub_FAAD0(a2);
  v22 = *(_BYTE *)(a1 + 48);
  if ( (v22 & 8) != 0 )
  {
    sub_101E90(a2, 70);
    v22 = *(_BYTE *)(a1 + 48);
    if ( (v22 & 4) == 0 )
    {
LABEL_21:
      if ( (v22 & 0x10) == 0 )
        goto LABEL_22;
LABEL_28:
      sub_101E90(a2, 80);
      if ( (*(_BYTE *)(a1 + 48) & 0x20) == 0 )
        return v30 - __readfsqword(0x28u);
      return sub_101E90(a2, 84);
    }
  }
  else if ( (v22 & 4) == 0 )
  {
    goto LABEL_21;
  }
  sub_101E90(a2, 79);
  v22 = *(_BYTE *)(a1 + 48);
  if ( (v22 & 0x10) != 0 )
    goto LABEL_28;
LABEL_22:
  if ( (v22 & 0x20) == 0 )
    return v30 - __readfsqword(0x28u);
  return sub_101E90(a2, 84);
}

