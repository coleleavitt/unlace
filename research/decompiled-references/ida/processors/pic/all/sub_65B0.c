__int64 __fastcall sub_65B0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rsi
  const char *v4; // r12
  unsigned int v5; // ebx

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 12 )
  {
    v3 = *(_QWORD *)(a2 + 56);
    v4 = "tris";
  }
  else
  {
    if ( v2 != 37 )
      return 0;
    v3 = *(_QWORD *)(a2 + 48);
    v4 = "port";
  }
  sub_7740(a1, v3);
  v5 = 0;
  if ( get_ea_name() > 0 )
    LOBYTE(v5) = strncasecmp(nullptr, v4, 4u) == 0;
  return v5;
}

