__int64 __fastcall sub_E870(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a2 + 24) == 116 )
    return check_for_table_jump(a1, a2, off_1AD30, 2, 0, 0);
  else
    return 0;
}
