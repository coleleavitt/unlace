__int64 __fastcall sub_1B4E0(__int64 a1)
{
  unsigned __int16 v1; // si

  v1 = *(_WORD *)(a1 + 33025);
  if ( !v1 )
    return 0;
  if ( !sub_1B440(a1, v1, (_BYTE *)(a1 + 33386), 0x8000, 12)
    || *(_QWORD *)(a1 + 33394) ^ 0x7463656A624F2E67LL | *(_QWORD *)(a1 + 33386) ^ 0x6E616C2E6176616ALL
    || *(_BYTE *)(a1 + 33402) )
  {
    return 0;
  }
  *(_BYTE *)(a1 + 33087) |= 0x10u;
  return 1;
}

