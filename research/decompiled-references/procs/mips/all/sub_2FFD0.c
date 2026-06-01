__int64 __fastcall sub_2FFD0(__int64 a1, _QWORD *a2, _WORD *a3, const char *a4)
{
  int v5; // eax
  unsigned int v6; // edx

  v5 = sub_2FF30(a1, a4);
  v6 = 0;
  if ( v5 != -1 )
  {
    if ( a3 )
    {
      a3[1] = (unsigned int)(v5 - 32) < 0x20 ? 32 : 64;
      *a3 = 0;
    }
    v6 = 1;
    *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v5);
  }
  return v6;
}
