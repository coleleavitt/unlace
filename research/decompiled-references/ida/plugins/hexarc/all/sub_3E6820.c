__int64 __fastcall sub_3E6820(__int64 a1, int a2, int a3, char a4)
{
  unsigned int v4; // r13d
  int v8; // r15d
  int dtype_size; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, int); // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  int v16; // eax
  int v17; // eax
  __int64 result; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, int); // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax

  v4 = a4 & 0x80;
  v8 = a4 & 0x10;
  if ( (a4 & 0x10) != 0 )
  {
    dtype_size = get_dtype_size();
    LOBYTE(v4) = v4 ^ 0x80;
    sub_1CF210(a1, 3u, dtype_size, v4 >> 5, 0x3BEA45E214ADDC55LL, 280, 0);
    v10 = get_dtype_size();
    sub_1CF210(a1, 0xDu, v10, a2, 280, 272, 0);
  }
  else if ( a4 < 0 )
  {
    v26 = get_dtype_size();
    sub_1CF210(a1, 4u, v26, a2, 0x3BEA45E214ADDC55LL, 272, 0);
  }
  else
  {
    v19 = get_dtype_size();
    sub_1CF210(a1, 3u, v19, 4, 0x3BEA45E214ADDC55LL, 272, 0);
    v20 = get_dtype_size();
    sub_1CF210(a1, 0xCu, v20, a2, 272, 272, 0);
  }
  v11 = get_dtype_size();
  sub_1CF210(a1, 3u, v11, 4, 0x3BEA45E214ADDC55LL, 280, 0);
  if ( (a4 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 384) )
    {
      if ( a3 > 7 )
        goto LABEL_10;
      v21 = *(_QWORD *)(a1 + 832);
      v22 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v21 + 168LL);
      if ( v22 == sub_3E21C0 )
      {
LABEL_23:
        v24 = 4 * a3 + 8;
LABEL_20:
        v25 = get_dtype_size();
        sub_1CF210(a1, 1u, v25, v24, 296, 272, 4);
        goto LABEL_10;
      }
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 832);
      v22 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v21 + 168LL);
      if ( v22 == sub_3E21C0 )
      {
        if ( a3 > 63 )
        {
          v23 = -1;
          if ( a3 < 68 )
            v23 = a3 - 64;
          v24 = v23;
          goto LABEL_20;
        }
        goto LABEL_23;
      }
    }
    v24 = (int)v22(v21, a3);
    goto LABEL_20;
  }
  v12 = *(_QWORD *)(a1 + 832);
  v13 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
  if ( v13 == sub_3E21C0 )
  {
    if ( a3 <= 63 )
    {
      v15 = 4 * a3 + 8;
    }
    else
    {
      v14 = -1;
      if ( a3 < 68 )
        v14 = a3 - 64;
      v15 = v14;
    }
  }
  else
  {
    v15 = (int)v13(v12, a3);
  }
  v16 = get_dtype_size();
  sub_1CF210(a1, 2u, v16, 296, 272, v15, 4);
LABEL_10:
  v17 = get_dtype_size();
  result = sub_1CF210(a1, 0xCu, v17, 272, 280, 272, 0);
  if ( (a4 & 0x40) != 0 )
  {
    v27 = get_dtype_size();
    sub_1CF210(a1, 3u, v27, 4, 0x3BEA45E214ADDC55LL, 280, 0);
    v28 = get_dtype_size();
    sub_1CF210(a1, 12 - ((v8 == 0) - 1), v28, a2, 280, 272, 0);
    v29 = get_dtype_size();
    return sub_1CF210(a1, 4u, v29, 272, 0x3BEA45E214ADDC55LL, a2, 0);
  }
  return result;
}

