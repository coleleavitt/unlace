__int64 __fastcall sub_55440(_BYTE *a1, _QWORD *a2)
{
  if ( a2[1] ^ 0x202B2B432F432074LL | *a2 ^ 0x666F736F7263694DLL
    || a2[3] ^ 0x53441A0A0DLL | a2[2] ^ 0x30302E372046534DLL )
  {
    if ( a2[1] ^ 0x202B2B432F432074LL | *a2 ^ 0x666F736F7263694DLL
      || a2[3] ^ 0x6573616261746164LL | a2[2] ^ 0x206D6172676F7270LL
      || *(_QWORD *)((char *)a2 + 36) ^ 0x474A1A0A0D30LL | *(_QWORD *)((char *)a2 + 28) ^ 0x302E322065736162LL )
    {
      return 0;
    }
    *a1 = 0;
  }
  else
  {
    *a1 = 1;
  }
  return 1;
}

