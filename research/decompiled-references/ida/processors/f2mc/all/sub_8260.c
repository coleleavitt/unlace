__int64 __fastcall sub_8260(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 sreg; // rax
  __int64 v8; // rdx
  bool v9; // zf
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-8h]

  LODWORD(v6) = a1[29];
  if ( !(_BYTE)v6 )
  {
    v6 = (unsigned int)(char)a1[32];
    if ( !a1[32] )
      sub_81B0((__int64)"interr: emu: get_insn_bank_value()", v6, a3, a4, a5, a6, v11);
  }
  if ( (_DWORD)v6 == 25 )
    return *a1;
  if ( (_DWORD)v6 == 34 )
    get_sreg();
  sreg = get_sreg();
  v8 = (unsigned __int8)sreg;
  v9 = sreg == -1;
  result = 0;
  if ( !v9 )
    return v8;
  return result;
}

