__int64 __fastcall sub_32CA00(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 that; // rbx

  if ( !a1[1] )
    return 0;
  while ( 1 )
  {
    that = next_that();
    if ( that != -1 )
    {
LABEL_6:
      a1[2] = that;
      return 1;
    }
    v1 = a1[1];
    if ( v1 + 16 == *(_QWORD *)*a1 + 16LL * *(_QWORD *)(*a1 + 8LL) )
      return 0;
    a1[1] = v1 + 16;
    that = *(_QWORD *)(v1 + 16);
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
      goto LABEL_6;
  }
}

