__int64 __fastcall sub_48680(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 1);
  if ( v1 == 4 )
    return (unsigned __int8)getinf_flag(3, 4) == 0 ? 196 : 212;
  else
    return 4 * (unsigned int)(v1 == 5);
}

