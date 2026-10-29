__int64 __fastcall sub_993D0(__int128 a1, double a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 24);
  BYTE1(v2) &= ~2u;
  LOBYTE(v2) = v2 | 0x80;
  *(_DWORD *)(a1 + 24) = v2;
  sub_11D5D0(*((__int64 *)&a1 + 1), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
  return sub_992D0(a1, a2);
}

