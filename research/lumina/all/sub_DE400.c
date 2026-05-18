__int64 __fastcall sub_DE400(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 4) & 0x4200000) != 0 )
    return 1;
  sub_DE0F0(a1, *(_QWORD *)(a2 + 104));
  return 0;
}
