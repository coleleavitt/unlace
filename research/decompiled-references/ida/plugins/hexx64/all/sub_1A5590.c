void __fastcall sub_1A5590(__int64 a1, int a2, int a3, double a4)
{
  int v4; // r12d
  unsigned __int64 v5; // r14
  bool v6; // zf

  if ( *(_DWORD *)(a1 + 8) == 3 )
    a3 = a2;
  if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)a2 )
  {
    if ( !under_debugger )
      sub_383060(0xCB55u, a4);
LABEL_15:
    BUG();
  }
  v4 = a3;
  v5 = a3;
  if ( *(_QWORD *)(a1 + 128) < (unsigned __int64)a3 )
  {
    if ( !under_debugger )
      sub_383060(0xCB56u, a4);
    goto LABEL_15;
  }
  sub_81FC0((__int64 *)(a1 + 96), a2);
  sub_81FC0((__int64 *)(a1 + 16), a2);
  sub_81FC0((__int64 *)(a1 + 120), v5);
  sub_81FC0((__int64 *)(a1 + 40), v5);
  v6 = *(_DWORD *)(a1 + 8) == 3;
  *(_DWORD *)(a1 + 12) = a2;
  if ( !v6 )
    *(_DWORD *)(a1 + 12) = v4 + a2;
  if ( (*(_BYTE *)(a1 + 288) & 2) != 0 )
  {
    sub_81FC0((__int64 *)(a1 + 232), a2 + 1);
    sub_81FC0((__int64 *)(a1 + 152), a2 + 1);
    sub_81FC0((__int64 *)(a1 + 256), v5);
    sub_81FC0((__int64 *)(a1 + 176), v5);
    v6 = *(_DWORD *)(a1 + 144) == 3;
    *(_DWORD *)(a1 + 148) = a2 + 1;
    if ( !v6 )
      *(_DWORD *)(a1 + 148) = v4 + a2 + 1;
  }
}

