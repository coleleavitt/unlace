__int64 __fastcall sub_D7B0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a2 + 24);
  if ( (unsigned __int16)(v2 - 138) <= 1u || v2 == 17 )
    return check_for_table_jump(a1, a2, &off_28E48, 1, 0, 0);
  else
    return 0;
}

