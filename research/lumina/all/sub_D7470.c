__int64 __fastcall sub_D7470(__int64 a1, const char *a2)
{
  int v2; // eax

  if ( !a2 )
    return 0;
  v2 = strlen(a2);
  if ( a1 )
    return sub_C8320(*(_QWORD *)(a1 + 176), a2, v2 & 0x3FFFFFFF);
  else
    return 0;
}
