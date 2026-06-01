__int64 __fastcall sub_4870(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v7; // rsi

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_47B0(a1, 1, a3, a4, a5, a6);
      sub_3A10(a1);
    }
  }
  else
  {
    sub_47B0(a1, *(_BYTE *)(a1 + 264) ^ 1, a3, a4, a5, a6);
    v7 = "OFF";
    if ( *(_BYTE *)(a1 + 264) )
      v7 = "ON";
    sub_3210(
      (__int64)"This is a COM HELPER plugin\n"
               "\n"
               "It watches for the GUID variables and renames them\n"
               "depending on their values. As soon as a GUID is seen,\n"
               "it adds the corresponding vtable to the list of structures.\n"
               "\n"
               "You have just changed the plugin state to: %s.",
      v7);
  }
  netnode_check();
  netnode_supset();
  return 1;
}

