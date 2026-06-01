unsigned __int64 __fastcall sub_47620(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int16 v6; // ax

  sub_393C0(a1, a3);
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 != 13 && v6 != 320 )
    insn_add_cref(a2, a3, a4, 17);
  auto_apply_type(*(_QWORD *)(a2 + 16), a3);
  return sub_47140(a1, a3);
}

