__int64 __fastcall sub_323030(__int64 a1, __int64 a2, double a3)
{
  int v4; // esi

  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 != -1 && !(unsigned __int8)sub_64190((__int64 *)(a1 + 72), v4, a3) )
    sub_322FF0(a3);
  if ( *(_DWORD *)(a2 + 8) == 81 )
    sub_64190((__int64 *)(a1 + 88), **(_DWORD **)(a2 + 24), a3);
  return 0;
}

