unsigned __int64 __fastcall sub_AD50(__int64 a1, double a2, double a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 244) = netnode_altval();
  netnode_altval();
  *(_QWORD *)(a1 + 232) = node2ea();
  if ( netnode_qsupstr() >= 0 )
  {
    netnode_supset();
    netnode_supdel();
  }
  netnode_qsupstr();
  sub_A4C0(a1, 1, (__m128)0LL, a3);
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 240);
  return v4 - __readfsqword(0x28u);
}

