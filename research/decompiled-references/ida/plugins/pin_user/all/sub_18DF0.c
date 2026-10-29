__int64 __fastcall sub_18DF0(__int64 a1, int *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v6 = sub_18B00(a1, a3, a4, a5);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  if ( a2 )
  {
    if ( !(unsigned __int8)sub_18D10(a1, a2) )
      return 0;
  }
  if ( *a2 )
  {
    if ( *a2 != 1 && !*(_BYTE *)(a1 + 1289) )
    {
      v7 = 0;
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", a3);
      return v7;
    }
    return 0;
  }
  return v7;
}

