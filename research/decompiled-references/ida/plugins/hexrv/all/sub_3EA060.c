__int64 __fastcall sub_3EA060(__int64 a1, __int32 a2, double a3)
{
  char v3; // al

  v3 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  if ( (unsigned __int8)(v3 - 2) > 2u && (unsigned __int8)(v3 - 6) > 1u )
    return 0xFFFFFFFFLL;
  else
    return sub_3E9CC0(a1, a2, 1, a3);
}

