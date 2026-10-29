__int64 __fastcall sub_114C0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 7 || v2 == 48 )
    return check_for_table_jump();
  else
    return 0;
}

