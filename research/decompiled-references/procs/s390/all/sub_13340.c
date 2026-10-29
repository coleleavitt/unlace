__int64 __fastcall sub_13340(__int64 a1, __int64 a2)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 66 || v2 == 125 )
    return check_for_table_jump(a1, a2, off_2D5B0, 2, 0, 0);
  else
    return 0;
}
