__int64 __fastcall sub_16150(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, __int64 a5)
{
  __int64 flags; // r13
  int v9; // ebp
  __int64 func; // rax
  __int64 result; // rax
  __int16 v12; // ax
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // ebp

  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  v9 = is_stkvar(flags, *a3);
  if ( (unsigned __int8)is_defarg(flags, *a3) == 1 && !(_BYTE)v9 )
    return 0;
  func = get_func(*(_QWORD *)(a2 + 16));
  if ( !func || a4 != 2 && ((*(_BYTE *)(func + 16) & 0x10) == 0 || a4 != 8) )
    return 0;
  v12 = *(_WORD *)(a2 + 24);
  if ( v12 == 3 )
    a5 = 0;
  v13 = v12 == 19;
  v14 = 2 * (unsigned __int8)v9;
  v15 = v9 ^ 1;
  result = insn_create_stkvar(a2, a3, a5, v14 | (unsigned int)!v13);
  LOBYTE(v15) = result & v15;
  if ( (_BYTE)v15 )
  {
    op_stkvar(*(_QWORD *)(a2 + 16), *a3);
    return v15;
  }
  return result;
}

