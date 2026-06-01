__int64 __fastcall sub_5DC20(__int64 a1, int *a2)
{
  __int16 v2; // dx
  int v3; // eax

  v2 = *(_WORD *)(a1 + 84);
  v3 = 1;
  if ( v2 != 5380 )
    v3 = 3 * (v2 != 5381);
  *a2 = v3;
  return 0;
}

