__int64 __fastcall sub_4140(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 v3; // al
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v3 = a3[1];
  v8 = __readfsqword(0x28u);
  if ( v3 != 7 )
  {
    if ( v3 > 7u )
    {
      if ( (unsigned __int8)(v3 - 8) > 1u )
        return v8 - __readfsqword(0x28u);
    }
    else
    {
      if ( v3 > 2u )
      {
        if ( (unsigned __int8)(v3 - 4) <= 1u )
        {
          get_flags_ex();
          if ( (unsigned __int8)op_adds_xrefs() )
            return insn_add_off_drefs();
        }
        return v8 - __readfsqword(0x28u);
      }
      if ( !v3 )
        return v8 - __readfsqword(0x28u);
    }
    v5 = *a3;
    if ( v3 == 2 || v3 == 8 )
    {
      v6 = *((_QWORD *)a3 + 2);
    }
    else
    {
      v6 = *((unsigned __int16 *)a3 + 3);
      if ( (unsigned __int16)v6 > 0xFu )
        v6 = (int)v6 - 16;
    }
    v7 = sub_4070(a1, a2, v6, v5, 1);
    insn_create_op_data();
    insn_add_dref();
    if ( (get_flags_ex() & 0xC000) != 0x4000 && *(_QWORD *)(a1 + 224) < v7 )
    {
      qsnprintf();
      set_name();
    }
    return v8 - __readfsqword(0x28u);
  }
  map_code_ea();
  if ( (unsigned __int8)has_insn_feature() )
  {
    insn_add_cref();
    if ( *(_BYTE *)(a1 + 232) )
      *(_BYTE *)(a1 + 232) = func_does_return();
    return v8 - __readfsqword(0x28u);
  }
  return insn_add_cref();
}

