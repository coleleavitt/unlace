__int64 __fastcall sub_A440(__int64 a1, __int64 a2)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 9 || v2 == 35 )
    return check_for_table_jump(a1, a2, &off_14278, 1, 0, 0);
  else
    return 0;
}

