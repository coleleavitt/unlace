__int64 __fastcall sub_8880(__int64 a1, unsigned int a2)
{
  __int64 flags; // rax
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax

  set_immd(*(_QWORD *)(a1 + 16));
  flags = get_flags_ex(*(_QWORD *)(a1 + 16), 0);
  result = is_defarg(flags, a2);
  if ( !(_BYTE)result )
  {
    v4 = *(unsigned __int16 *)(a1 + 24);
    if ( (unsigned __int16)v4 > 0x43u )
    {
      result = (unsigned int)(v4 - 101);
      if ( (unsigned __int16)result > 3u )
        return result;
    }
    else if ( (unsigned __int16)v4 <= 0x41u )
    {
      result = (unsigned int)(v4 - 4);
      if ( (unsigned __int16)result > 1u )
        return result;
    }
    v5 = *(_QWORD *)(a1 + 16);
    v6 = num_flag();
    return set_op_type(v5, v6, a2);
  }
  return result;
}

