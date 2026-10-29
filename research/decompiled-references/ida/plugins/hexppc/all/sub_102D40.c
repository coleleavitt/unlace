__int64 __fastcall sub_102D40(__int64 a1, __int64 *a2)
{
  char v2; // al
  __int64 v3; // rbp
  int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  char v21; // al
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int64 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 32);
  v3 = *(int *)(a1 + 40);
  v29 = __readfsqword(0x28u);
  if ( v2 == 5 )
  {
    v24 = *(_QWORD *)(a1 + 24);
    v25 = *(_QWORD *)(*(_QWORD *)(get_module_data() + 1344) + 1440LL) + v24;
    v28 = v3;
    v27 = v25;
    sub_1AFEA0(&v27, a2);
  }
  else
  {
    if ( v2 != 1 )
      sub_FE2D0();
    v5 = *(_DWORD *)(a1 + 24);
    v27 = 0;
    v28 = 0;
    sub_60440(&v27, v5, v3);
    sub_613B0((__int64)&v27, (__int64)a2);
    qfree();
  }
  v6 = a2[1];
  if ( v6 )
  {
    v9 = v6 + 1;
    v8 = a2[1];
    v7 = *a2;
    --v6;
    if ( a2[2] >= v9 )
      goto LABEL_6;
  }
  else
  {
    v7 = *a2;
    v8 = 1;
    v9 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_6;
  }
  v15 = qvector_reserve();
  *a2 = v15;
  v7 = v15;
LABEL_6:
  a2[1] = v9;
  *(_BYTE *)(v7 + v6) = 123;
  v10 = 0;
  *(_BYTE *)(*a2 + v8) = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      ++v10;
      sub_F7090(a2);
      if ( v10 >= *(_QWORD *)(a1 + 8) )
        break;
      v11 = a2[1];
      if ( v11 )
      {
        v12 = v11 + 1;
        v13 = a2[1];
        v14 = *a2;
        --v11;
        if ( a2[2] >= v12 )
          goto LABEL_10;
      }
      else
      {
        v14 = *a2;
        v13 = 1;
        v12 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_10;
      }
      v26 = v13;
      v16 = qvector_reserve();
      v13 = v26;
      *a2 = v16;
      v14 = v16;
LABEL_10:
      a2[1] = v12;
      *(_BYTE *)(v14 + v11) = 44;
      *(_BYTE *)(*a2 + v13) = 0;
    }
  }
  v17 = a2[1];
  if ( v17 )
  {
    v20 = v17 + 1;
    v19 = a2[1];
    v18 = *a2;
    --v17;
    if ( a2[2] >= v20 )
      goto LABEL_17;
  }
  else
  {
    v18 = *a2;
    v19 = 1;
    v20 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_17;
  }
  v23 = qvector_reserve();
  *a2 = v23;
  v18 = v23;
LABEL_17:
  a2[1] = v20;
  *(_BYTE *)(v18 + v17) = 125;
  *(_BYTE *)(*a2 + v19) = 0;
  if ( (*(_DWORD *)(a1 + 44) & 0x10000) == 0 )
    sub_F7090(a2);
  v21 = *(_BYTE *)(a1 + 48);
  if ( (v21 & 8) != 0 )
  {
    sub_FE450(a2, 70);
    v21 = *(_BYTE *)(a1 + 48);
    if ( (v21 & 4) == 0 )
    {
LABEL_21:
      if ( (v21 & 0x10) == 0 )
        goto LABEL_22;
LABEL_28:
      sub_FE450(a2, 80);
      if ( (*(_BYTE *)(a1 + 48) & 0x20) == 0 )
        return v29 - __readfsqword(0x28u);
      return sub_FE450(a2, 84);
    }
  }
  else if ( (v21 & 4) == 0 )
  {
    goto LABEL_21;
  }
  sub_FE450(a2, 79);
  v21 = *(_BYTE *)(a1 + 48);
  if ( (v21 & 0x10) != 0 )
    goto LABEL_28;
LABEL_22:
  if ( (v21 & 0x20) == 0 )
    return v29 - __readfsqword(0x28u);
  return sub_FE450(a2, 84);
}

