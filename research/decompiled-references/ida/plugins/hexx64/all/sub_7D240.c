char *__fastcall sub_7D240(__int64 a1, char *a2, __int64 a3, double a4)
{
  char *result; // rax
  char *v5; // rdx
  char v6; // cl
  char *v7; // rcx

  result = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) < (unsigned __int64)(*(_QWORD *)a1 + a3) )
  {
    if ( !under_debugger )
      sub_383060(0xC59Bu, a4);
    BUG();
  }
  v5 = &a2[a3];
  if ( a2 < v5 )
  {
    *(_QWORD *)a1 = result + 1;
    v6 = *result;
    result = a2 + 1;
    *a2 = v6;
    if ( a2 + 1 < v5 )
    {
      do
      {
        v7 = *(char **)a1;
        ++result;
        ++*(_QWORD *)a1;
        *(result - 1) = *v7;
      }
      while ( v5 != result );
    }
  }
  return result;
}

