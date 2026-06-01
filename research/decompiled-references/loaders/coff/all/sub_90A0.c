__int64 __fastcall sub_90A0(_QWORD *a1, unsigned int *a2, size_t a3, char *a4, unsigned __int64 a5, __int16 a6)
{
  unsigned int v11; // eax

  if ( a3 >= a5 )
  {
    if ( under_debugger )
      BUG();
    interr(20018);
    return sub_9170();
  }
  else
  {
    memcpy(a4, a2, a3);
    a4[a3] = 0;
    if ( *a4 == 47 )
    {
      v11 = strtol(a4 + 1, nullptr, 10);
      sub_9030(a1, a4, a5, v11, 0);
    }
    if ( ((unsigned __int16)(a6 - 193) <= 1u || a6 == 147) && a3 > 7 && !*a2 )
      sub_9030(a1, a4, a5, a2[1], 0);
    return (__int64)a4;
  }
}
