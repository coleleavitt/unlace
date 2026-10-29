__int64 __fastcall sub_1D0250(_QWORD *a1, __m128i *a2, __int64 a3, _QWORD *a4, _QWORD *a5, double a6)
{
  __int64 v8; // rdi
  __int64 v9; // rdx

  if ( a3 < 0 )
    return -1;
  v8 = a1[184];
  v9 = v8 + 40LL * a1[185];
  if ( !(40LL * a1[185]) )
  {
LABEL_8:
    if ( !under_debugger )
      sub_383060(0xCDDCu, a6);
    BUG();
  }
  while ( a3 < *(_QWORD *)(v8 + 8) )
  {
    v8 += 40;
    if ( v9 == v8 )
      goto LABEL_8;
  }
  return sub_1CFF80(v8, a1[187], a2, a3, a4, a5);
}

