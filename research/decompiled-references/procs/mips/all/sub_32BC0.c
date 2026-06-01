__int64 __fastcall sub_32BC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax

  v3 = *(_WORD *)(a3 + 24);
  if ( v3 == 547 || v3 == 1757 || v3 == 116 )
    return check_for_table_jump(a2, a3, off_6A080, 4, 0, 0);
  else
    return 0;
}
