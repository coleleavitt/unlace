__int64 __fastcall sub_20F90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4, a3) & 0x600) == 0 )
    create_insn(*(_QWORD *)(a2 + 16), 0);
  result = is_ret_insn(a2, 2);
  if ( (_BYTE)result )
    return add_cref(*(_QWORD *)(a2 + 16), a3 & 0xFFFFFFFFFFFFFFFELL, 19);
  return result;
}

