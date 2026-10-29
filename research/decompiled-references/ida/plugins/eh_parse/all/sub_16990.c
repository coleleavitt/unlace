__int64 __fastcall sub_16990(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  int v5; // eax
  unsigned __int8 v9; // r13
  char *v10; // rsi
  __int64 flags_by_size; // rax
  __int64 v12; // rcx
  char *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 (__fastcall *v16)(__int64, __int64, unsigned __int8); // rax
  __int64 v17; // rax

  if ( !*(_BYTE *)(a1 + 81) )
    return 1;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    return 1;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 != 3 )
  {
    if ( v5 == 5 )
    {
      v9 = a3 - a2;
      v10 = off_2E860[a4];
    }
    else
    {
      if ( v5 != 2 )
        return 1;
      v9 = a3 - a2;
      v10 = off_2E7A0[a4];
    }
    set_cmt(a2, v10, 0);
    flags_by_size = get_flags_by_size(v9);
    create_data(a2, flags_by_size, v9, -1);
    return 1;
  }
  result = 0;
  if ( a4 <= 0xFu )
  {
    sub_13520(*(_QWORD *)(a1 + 8), a2, 2, 2, 0);
    v12 = a4;
    if ( *(_BYTE *)(a1 + 80) == 2 )
      v13 = off_2E920[a4];
    else
      v13 = off_2E9A0[a4];
    if ( v13 )
      set_cmt(a2, v13, 0);
    v14 = a2 + 2;
    v15 = a3 - v14;
    if ( v15 )
    {
      v16 = sub_15E10;
      if ( (v15 & 2) != 0 )
        v16 = sub_15E30;
      ((void (__fastcall *)(__int64, __int64, _QWORD, __int64))v16)(v14, v15, 0, v12);
      v17 = num_flag();
      set_op_type(v14, v17, 0);
    }
    return 1;
  }
  return result;
}

