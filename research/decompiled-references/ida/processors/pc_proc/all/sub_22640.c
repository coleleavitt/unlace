__int64 __fastcall sub_22640(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  unsigned int v6; // edi
  unsigned __int64 *i; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a3 + 80);
  v6 = v4;
  if ( (int)v4 <= 0 )
    return 0;
  for ( i = (unsigned __int64 *)(*(_QWORD *)(a3 + 72) + ((__int64)((int)v4 - 1) << 6)); ; i -= 8 )
  {
    --v6;
    if ( a4 >= *i && a4 < i[1] )
      break;
    if ( !v6 )
      return 0;
  }
  result = 1;
  if ( v6 )
    return sub_79340(a1, a2, a3, v6);
  return result;
}

