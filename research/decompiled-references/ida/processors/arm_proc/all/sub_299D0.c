__int64 __fastcall sub_299D0(__int64 a1, _DWORD *a2, char a3)
{
  if ( (*(_QWORD *)(a1 + 24) & 0xD00000FFFFLL) != 0x1000000021LL
    || *(_BYTE *)(a1 + 41) != 1
    || *(_WORD *)(a1 + 46) != 11 )
  {
    return sub_29880(a1, a2, a3);
  }
  if ( a2 )
    *a2 = *(_QWORD *)(a1 + 104);
  return 1;
}

