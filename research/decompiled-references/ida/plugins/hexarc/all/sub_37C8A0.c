__int64 __fastcall sub_37C8A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 )
    return -1;
  if ( !*a2 )
    return 0;
  result = 0;
  while ( *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * result) != *a2 )
  {
    if ( v2 == ++result )
      return 0;
  }
  return result;
}

