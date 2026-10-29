__int64 __fastcall sub_3FBF90(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5, double a6)
{
  __int64 v8; // r15
  unsigned int v9; // ebp
  int *v10; // rdi
  int v11; // eax
  int v13; // eax
  int v14; // eax
  int dtype_size; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]

  v8 = *(int *)(*(_QWORD *)(a1 + 832) + 452LL);
  v9 = v8 + get_dtype_size();
  if ( !a5 )
  {
    if ( v9 == a3 )
    {
      if ( (_DWORD)v8 == a4 )
        goto LABEL_4;
    }
    else
    {
      dtype_size = get_dtype_size();
      sub_1D6310(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, (int)v9, a6, 0);
      if ( (_DWORD)v8 == a4 )
        goto LABEL_4;
    }
    v13 = get_dtype_size();
    sub_1D6310(a1, 4u, v13, a4, 0x3BEA45E214ADDC55LL, v8, a6, 0);
    goto LABEL_12;
  }
  if ( (_DWORD)v8 == a3 )
  {
    if ( v9 == a4 )
      goto LABEL_4;
    goto LABEL_16;
  }
  v17 = get_dtype_size();
  sub_1D6310(a1, 4u, v17, a3, 0x3BEA45E214ADDC55LL, v8, a6, 0);
  if ( v9 != a4 )
  {
LABEL_16:
    v16 = get_dtype_size();
    sub_1D6310(a1, 4u, v16, a4, 0x3BEA45E214ADDC55LL, (int)v9, a6, 0);
LABEL_12:
    v10 = *(int **)(a1 + 832);
    if ( *(_BYTE *)(a1 + 145) != 5 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_4:
  v10 = *(int **)(a1 + 832);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
LABEL_5:
    v18 = (*(int (__fastcall **)(int *, _QWORD))(*(_QWORD *)v10 + 168LL))(v10, *(unsigned __int16 *)(a1 + 150));
    goto LABEL_6;
  }
LABEL_13:
  v18 = v10[115];
  v20 = *(_QWORD *)(a1 + 152);
  v14 = get_dtype_size();
  sub_1D6310(a1, 3u, v14, v20, 0x3BEA45E214ADDC55LL, v18, a6, 2);
LABEL_6:
  v11 = get_dtype_size();
  sub_1D6310(a1, a5 + 22, v11, v8, v18, v8, a6, 0);
  if ( a5 )
    return (unsigned int)v8;
  return v9;
}

