__int64 __fastcall sub_D2B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v3 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v3 == 18 )
  {
    LOBYTE(v2) = (unsigned __int16)(*(_WORD *)(a2 + 46) - 29) > 2u;
  }
  else
  {
    LOBYTE(v2) = (_WORD)v3 == 15;
    LOBYTE(v3) = (_WORD)v3 == 308;
    v2 |= v3;
  }
  sub_BEC0(nullptr);
  return v2;
}

