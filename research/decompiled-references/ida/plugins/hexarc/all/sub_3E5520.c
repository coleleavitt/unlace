__int64 __fastcall sub_3E5520(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  char v5; // r13
  unsigned __int16 v9; // ax
  int v10; // esi
  __int64 sreg; // rax
  int v12; // r14d
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, int); // rax
  __int64 v17; // r13
  int dtype_size; // eax
  int v20; // eax
  int v21; // eax
  __int64 (*v22)(void); // rax
  __int64 v23; // [rsp-10h] [rbp-48h]
  __int64 v24; // [rsp-8h] [rbp-40h]

  v5 = a4;
  v9 = *(_WORD *)(a2 + 6);
  if ( v9 == 68 )
  {
    sub_3E5360(
      a1,
      (unsigned __int8 *)a2,
      (unsigned int)*(char *)(*(_QWORD *)(a1 + 832) + 84LL),
      *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50),
      280);
LABEL_6:
    v12 = 280;
    goto LABEL_7;
  }
  v10 = v9;
  if ( v9 == 26 || (unsigned int)v9 - 69 <= 3 )
  {
    sreg = get_sreg();
    if ( sreg == -1 )
    {
      sub_1CF210(
        a1,
        0x3Du,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
        0x3BEA45E214ADDC55LL,
        0x3BEA45E214ADDC55LL,
        280,
        0);
      a5 = v24;
    }
    else
    {
      sub_3E5360(a1, (unsigned __int8 *)a2, 2, sreg, 280);
    }
    goto LABEL_6;
  }
  v22 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 832) + 168LL);
  if ( (char *)v22 == (char *)sub_3E21C0 )
  {
    v12 = 4 * v10 + 8;
    if ( v10 > 63 )
    {
      v12 = v10 - 64;
      if ( v10 >= 68 )
        v12 = -1;
    }
  }
  else
  {
    v12 = v22();
  }
LABEL_7:
  v13 = a3;
  if ( v5 )
  {
    if ( *(_BYTE *)(a2 + 1) == 4 )
    {
      v17 = a3;
      sub_3E5360(a1, (unsigned __int8 *)a2, 2, *(_QWORD *)(a2 + 16), a3);
      if ( (~*(_BYTE *)(a1 + 52) & 0x18) == 0 )
      {
        if ( *(_BYTE *)(a2 + 32) == 1 )
        {
          v21 = v12;
          v12 = a3;
          a3 = v21;
        }
        v17 = a3;
        if ( (unsigned __int8)sub_3E5490(a1, (unsigned __int8 *)a2, a3, 280) )
          v17 = 280;
      }
      goto LABEL_15;
    }
    v14 = *(_QWORD *)(a1 + 832);
    v15 = (unsigned int)*(char *)(a2 + 32);
    v16 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 168LL);
    if ( v16 == sub_3E21C0 )
    {
      LODWORD(v17) = 4 * v15 + 8;
      if ( (int)v15 > 63 )
      {
        LODWORD(v17) = v15 - 64;
        if ( (int)v15 >= 68 )
          LODWORD(v17) = -1;
      }
      if ( (~*(_BYTE *)(a1 + 52) & 0x18) != 0 )
        goto LABEL_14;
    }
    else
    {
      LODWORD(v17) = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64, int), __int64, __int64))v16)(
                       v14,
                       v15,
                       sub_3E21C0,
                       a4,
                       a5);
      if ( (~*(_BYTE *)(a1 + 52) & 0x18) != 0 )
      {
LABEL_14:
        v17 = (int)v17;
LABEL_15:
        dtype_size = get_dtype_size();
        return sub_1CF210(a1, 0xCu, dtype_size, v12, v17, v13, 0);
      }
    }
    v17 = (int)v17;
    if ( (unsigned __int8)sub_3E5490(a1, (unsigned __int8 *)a2, v17, a3) )
      v17 = a3;
    goto LABEL_15;
  }
  v20 = get_dtype_size();
  sub_1CF210(a1, 4u, v20, v12, 0x3BEA45E214ADDC55LL, a3, 0);
  return v23;
}

