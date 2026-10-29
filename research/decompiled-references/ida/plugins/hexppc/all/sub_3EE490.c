__int64 __fastcall sub_3EE490(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int16 v10; // ax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // r13d
  __int64 v15; // r15
  int v16; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r13
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int dtype_size; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax

  v6 = a3;
  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(_QWORD *)(v7 + 4464);
  if ( !v8 )
    sub_3E6800(a5);
  v9 = *(int *)(*(_QWORD *)(v7 + 4456) + 4 * v8 - 4);
  *(_QWORD *)(v7 + 4464) = v8 - 1;
  v10 = *(_WORD *)(a1 + 48);
  if ( v10 == 153 )
  {
    v20 = a2;
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 0x13u, dtype_size, (int)v6, a4, a2, 0);
    goto LABEL_22;
  }
  if ( v10 <= 0x99u )
  {
    if ( v10 == 45 )
    {
      v20 = a2;
      v26 = get_dtype_size();
      sub_1D2710(a1, 0x15u, v26, (int)v6, a4, a2, 0);
    }
    else
    {
      if ( v10 <= 0x2Du )
      {
        if ( v10 != 9 )
        {
          if ( v10 == 10 )
          {
            if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
            {
              v11 = get_dtype_size();
              sub_1D2710(a1, 7u, v11, (int)v6, 0x3BEA45E214ADDC55LL, v9, 0);
              v12 = get_dtype_size();
              sub_1D2710(a1, 0x14u, v12, a2, v9, a2, 0);
            }
            else
            {
              v27 = get_dtype_size();
              sub_1D2710(a1, 7u, v27, a4, 0x3BEA45E214ADDC55LL, v9, 0);
              v28 = get_dtype_size();
              sub_1D2710(a1, 0x14u, v28, (int)v6, v9, a2, 0);
            }
            goto LABEL_15;
          }
          return 0;
        }
        v14 = 20;
        v15 = a2;
        if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 )
          goto LABEL_18;
        goto LABEL_14;
      }
      if ( v10 != 151 )
        return 0;
      v20 = a2;
      v21 = get_dtype_size();
      sub_1D2710(a1, 0x14u, v21, (int)v6, a4, a2, 0);
    }
LABEL_22:
    v22 = get_dtype_size();
    sub_1D2710(a1, 7u, v22, v20, 0x3BEA45E214ADDC55LL, v20, 0);
    goto LABEL_15;
  }
  if ( v10 == 155 )
  {
    v23 = get_dtype_size();
    sub_1D2710(a1, 7u, v23, a4, 0x3BEA45E214ADDC55LL, v9, 0);
    v24 = get_dtype_size();
    sub_1D2710(a1, 0x13u, v24, (int)v6, v9, a2, 0);
    goto LABEL_15;
  }
  if ( v10 == 226 )
  {
    v19 = get_dtype_size();
    sub_1D2710(a1, 0x15u, v19, (int)v6, a4, a2, 0);
    goto LABEL_15;
  }
  v13 = 0;
  v14 = 19;
  if ( v10 == 154 )
  {
    v15 = a2;
    if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 )
    {
LABEL_18:
      v18 = get_dtype_size();
      sub_1D2710(a1, v14, v18, v6, a4, v15, 0);
      goto LABEL_15;
    }
LABEL_14:
    v16 = get_dtype_size();
    sub_1D2710(a1, v14, v16, v15, v6, v15, 0);
LABEL_15:
    sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
    return 1;
  }
  return v13;
}

