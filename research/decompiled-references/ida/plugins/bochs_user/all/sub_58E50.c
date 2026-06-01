__int64 __fastcall sub_58E50(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 current_extlang; // rbx

  if ( a2 == 1 )
  {
    qsnprintf();
    v2 = 4;
    if ( *(_BYTE *)(a1 + 27) )
      v2 = 6;
  }
  else
  {
    qsnprintf();
    v2 = 7;
    if ( *(_BYTE *)(a1 + 27) )
      v2 = 9;
  }
  current_extlang = get_current_extlang();
  qstrncat();
  if ( current_extlang )
    --*(_DWORD *)(current_extlang + 12);
  return v2;
}

