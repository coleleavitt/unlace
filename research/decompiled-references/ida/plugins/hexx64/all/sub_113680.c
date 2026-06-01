char __fastcall sub_113680(__int64 a1, int a2, double a3)
{
  bool v3; // zf
  __int64 v4; // rdi

  v3 = *(_BYTE *)(a1 + a2 + 56) == 0;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 8);
  if ( v3 )
    return sub_112660(v4, a3);
  else
    return sub_1127B0(v4, a3);
}

