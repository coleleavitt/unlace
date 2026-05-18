__int64 __fastcall sub_1872A0(__int64 *a1, const char *a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 i; // rbx

  result = sub_187010(a1, a2);
  if ( (_DWORD)result == -1 )
  {
    if ( !a2 )
      return 0x7FFFFFFF;
    v3 = qword_241EE0[0];
    if ( !qword_241EE0[0] )
      return 0x7FFFFFFF;
    v4 = qword_241EE0[1];
    v5 = 0;
    for ( i = v4; strcmp(*(const char **)i, a2); i += 40 )
    {
      if ( ++v5 == v3 )
        return 0x7FFFFFFF;
    }
    if ( i && *(_QWORD *)(i + 8) )
      return 858993459 * (unsigned int)((i - v4) >> 3);
    else
      return 0x7FFFFFFF;
  }
  return result;
}
