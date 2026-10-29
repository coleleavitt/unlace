__int64 __fastcall sub_6AC0(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+8h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  if ( sub_67C0(a1, a2, a3) == -1 )
    return v4 - __readfsqword(0x28u);
  netnode_supset();
  insn_add_dref();
  get_flags_ex();
  if ( (unsigned __int8)is_defarg() )
    return v4 - __readfsqword(0x28u);
  else
    return op_offset();
}

