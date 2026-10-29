__int64 __fastcall sub_32B350(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 i; // rbp

  if ( *a1 )
    result = get_func_ranges();
  v2 = a1[1];
  for ( i = v2 + 16LL * a1[2]; i != v2; result = rangeset_t_add() )
    v2 += 16;
  return result;
}

