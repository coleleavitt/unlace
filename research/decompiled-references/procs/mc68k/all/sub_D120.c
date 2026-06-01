__int64 __fastcall sub_D120(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int8 v4; // r12
  __int64 flags; // rbp
  __int64 result; // rax
  unsigned int v8; // eax

  v4 = a4;
  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0, a3, a4);
  result = is_off(flags, *a3);
  if ( !(_BYTE)result )
  {
    result = op_adds_xrefs(flags, *a3);
    if ( (_BYTE)result )
    {
      v8 = sub_11640(a1, a2, a3, 0);
      return insn_add_off_drefs(a2, a3, (unsigned int)v4 + 2, v8);
    }
  }
  return result;
}
