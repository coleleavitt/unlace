__int64 __fastcall sub_19A50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int16 v5; // ax
  unsigned int v6; // r12d
  __int64 v7; // rbx
  unsigned __int8 default_reftype; // al

  v4 = sub_14FA0((_QWORD *)a1, a2, a3);
  if ( !(_BYTE)v4 )
    return v4;
  v5 = *(_WORD *)(a3 + 12);
  if ( v5 != 82 )
  {
    if ( v5 <= 0x52u )
    {
      if ( v5 == 80 )
      {
        set_fixup(*(_QWORD *)(a1 + 32), a2);
        create_insn(*(_QWORD *)(a1 + 32), 0);
        v6 = *(unsigned __int8 *)(a1 + 66);
        v7 = *(_QWORD *)(a1 + 32);
        default_reftype = get_default_reftype(v7);
        op_offset(v7, v6, default_reftype, -1, 0, 0);
      }
      return v4;
    }
    if ( (unsigned __int16)(v5 - 84) > 1u )
      return v4;
    set_fixup(*(_QWORD *)(a1 + 32), a2);
  }
  create_insn(*(_QWORD *)(a1 + 32), 0);
  return v4;
}
