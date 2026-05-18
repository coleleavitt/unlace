__int64 __fastcall sub_E44D0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 result; // rax
  _BYTE *v4; // r10
  const char *i; // r9
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( !a2 )
    goto LABEL_10;
  result = a2;
  do
  {
    v4 = *(_BYTE **)result;
    for ( i = a3; ; ++i )
    {
      v6 = (unsigned __int8)*v4;
      v7 = *(unsigned __int8 *)i;
      if ( (_DWORD)v6 != (_DWORD)v7 )
        break;
      if ( !*v4 )
        return result;
LABEL_5:
      ++v4;
    }
    if ( byte_1BF000[v6] == byte_1BF000[v7] )
      goto LABEL_5;
    result = *(_QWORD *)(result + 64);
  }
  while ( result );
LABEL_10:
  sub_DBD10(a1, "no such window: %s", a3);
  return 0;
}
