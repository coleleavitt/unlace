__int64 __fastcall sub_F680(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 item_end; // rax

  v2 = ea2node(a2);
  netnode_supdel(*(_QWORD *)(a1 + 120), v2, 115);
  if ( (~(unsigned __int16)get_flags_ex(a2, 4) & 0x600) == 0 )
  {
    item_end = get_item_end(a2);
    netnode_supdel(*(_QWORD *)(a1 + 120), v2 - a2 + item_end, 115);
  }
  netnode_supdel(*(_QWORD *)(a1 + 120), a2, 321);
  return netnode_supdel(*(_QWORD *)(a1 + 120), a2, 356);
}

