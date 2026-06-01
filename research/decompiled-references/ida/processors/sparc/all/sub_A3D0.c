__int64 __fastcall sub_A3D0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 40);
  if ( v2 == 77 || v2 == 186 )
    return set_moved_jpt(a1, a1 + 96, a1 + 56, a2, 10, 10);
  else
    return 0;
}

