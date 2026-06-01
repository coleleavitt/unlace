__int64 __fastcall sub_7D10(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx

  v2 = 0;
  if ( (*(_QWORD *)a2 & 0xFF000000FF00LL) == 0x200 )
    LOBYTE(v2) = *(_BYTE *)(a2 + 33) == 1;
  return v2;
}

