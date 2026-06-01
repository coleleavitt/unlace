__int64 __fastcall sub_3E5930(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  int v7; // r13d
  unsigned __int8 v8; // al
  int v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, int); // rax
  __int64 v18; // rbx
  int v19; // eax
  int dtype_size; // eax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(__int64, int); // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+10h] [rbp-48h]

  v6 = a2;
  v7 = sub_3E57E0(a1, a2, 0x120u, a4, a5);
  v8 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  v9 = a2 == 0 ? 272 : 280;
  if ( v8 == 4 )
  {
    v10 = *(unsigned __int16 *)(a1 + 48);
    if ( (unsigned __int16)v10 <= 0x12u )
    {
      v22 = 393236;
      if ( _bittest64(&v22, v10) )
        return (unsigned int)v7;
    }
    goto LABEL_6;
  }
  if ( v8 > 4u )
  {
    if ( v8 == 7 )
      return (unsigned int)v7;
LABEL_16:
    if ( v7 != -1 )
    {
      dtype_size = get_dtype_size();
      sub_1CF210(a1, 4u, dtype_size, v7, 0x3BEA45E214ADDC55LL, v9, 0);
      return (unsigned int)v9;
    }
    return (unsigned int)v7;
  }
  if ( v8 == 1 )
    return (unsigned int)v7;
  if ( (unsigned __int8)(v8 - 2) > 1u )
    goto LABEL_16;
  LOWORD(v10) = *(_WORD *)(a1 + 48);
LABEL_6:
  if ( (((_WORD)v10 - 2) & 0xFFFD) != 0 )
  {
    v11 = v9;
    v12 = *(_DWORD *)(a1 + 52) & 0x18;
    if ( v12 == 16 )
    {
      v23 = *(_QWORD *)(a1 + 832);
      v24 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      v25 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v23 + 168LL);
      if ( v25 == sub_3E21C0 )
      {
        if ( (int)v24 <= 63 )
        {
          v27 = 4 * (int)v24 + 8;
        }
        else
        {
          v26 = -1;
          if ( (int)v24 < 68 )
            v26 = (int)v24 - 64;
          v27 = v26;
        }
      }
      else
      {
        v31 = v25(v23, v24);
        v11 = v9;
        v27 = v31;
      }
      v33 = v11;
      v32 = v27;
      v28 = get_dtype_size();
      sub_1CF210(a1, 2u, v28, 296, v32, v33, 4);
      if ( *(_WORD *)(a1 + 48) != 1 )
        goto LABEL_35;
      v30 = *(unsigned __int8 *)(a1 + 40 * v6 + 69);
      if ( (unsigned __int8)v30 > 1u )
        goto LABEL_35;
    }
    else
    {
      v13 = v7;
      v14 = get_dtype_size();
      sub_1CF210(a1, 2u, v14, 296, v7, v9, 4);
      if ( *(_WORD *)(a1 + 48) != 1 || (v30 = *(unsigned __int8 *)(a1 + 40LL * a2 + 69), (unsigned __int8)v30 > 1u) )
      {
        if ( ((v12 - 8) & 0xFFFFFFF0) == 0 )
        {
LABEL_10:
          v15 = *(_QWORD *)(a1 + 832);
          v16 = *(unsigned __int16 *)(a1 + 40 * v6 + 70);
          v17 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 168LL);
          if ( v17 == sub_3E21C0 )
          {
            if ( *(unsigned __int16 *)(a1 + 40 * v6 + 70) <= 0x3Fu )
            {
              v18 = 4 * (int)v16 + 8;
            }
            else
            {
              v18 = (int)v16 - 64;
              if ( (int)v16 >= 68 )
                v18 = -1;
            }
          }
          else
          {
            v18 = (int)v17(v15, v16);
          }
          v19 = get_dtype_size();
          sub_1CF210(a1, 4u, v19, v13, 0x3BEA45E214ADDC55LL, v18, 0);
          return (unsigned int)v9;
        }
        return (unsigned int)v9;
      }
    }
    sub_1CF640(a1, v30, 2, v9, v9, *(_BYTE *)(a1 + 52) & 1);
    if ( ((v12 - 8) & 0xFFFFFFF0) == 0 )
    {
      if ( v12 != 16 )
      {
        v13 = v7;
        goto LABEL_10;
      }
LABEL_35:
      v13 = v7;
      sub_3E5520(a1, a1 + 40 * v6 + 64, v7, 1, v29);
      goto LABEL_10;
    }
    return (unsigned int)v9;
  }
  return (unsigned int)v7;
}

