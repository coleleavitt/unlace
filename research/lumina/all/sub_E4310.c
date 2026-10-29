__int64 __fastcall sub_E4310(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r11
  _BYTE *v3; // r9
  unsigned __int8 *i; // r8
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a2[4] + 16LL);
  if ( !v2 )
    goto LABEL_9;
  do
  {
    v3 = *(_BYTE **)v2;
    for ( i = (unsigned __int8 *)a2[11]; ; ++i )
    {
      result = (unsigned __int8)*v3;
      v6 = *i;
      if ( (_DWORD)result != (_DWORD)v6 )
        break;
      if ( !*v3 )
      {
        a2[12] = v2;
        return result;
      }
LABEL_4:
      ++v3;
    }
    if ( byte_1BF000[result] == byte_1BF000[v6] )
      goto LABEL_4;
    v2 = *(_QWORD *)(v2 + 40);
  }
  while ( v2 );
LABEL_9:
  sub_DBD10(a1, "no such index: %s", (const char *)a2[11]);
  *(_BYTE *)(a1 + 29) = 1;
  return 1;
}
