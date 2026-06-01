__int64 __fastcall sub_CED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax

  v3 = *(_WORD *)(a3 + 24);
  if ( v3 == 61 || v3 == 5 && *(_BYTE *)(a3 + 33) == 3 )
    return check_for_table_jump();
  else
    return 0;
}

