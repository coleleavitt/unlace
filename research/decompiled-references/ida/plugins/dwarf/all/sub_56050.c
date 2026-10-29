__int64 __fastcall sub_56050(__int64 a1, __int64 a2)
{
  char *v3; // rdi
  __int64 result; // rax
  char *v5; // rdx

  v3 = *(char **)a1;
  result = *(_QWORD *)(a1 + 8);
  v5 = &v3[8 * result];
  if ( v3 != v5 )
  {
    result = (__int64)v3;
    while ( *(_QWORD *)result != a2 )
    {
      result += 8;
      if ( v5 == (char *)result )
        return result;
    }
    if ( (char *)result != v5 )
    {
      while ( *(_QWORD *)v3 != a2 )
      {
        v3 += 8;
        if ( v5 == v3 )
          goto LABEL_11;
      }
      if ( v5 != v3 )
      {
        result = (__int64)memmove(v3, v3 + 8, v5 - v3 - 8);
        --*(_QWORD *)(a1 + 8);
      }
LABEL_11:
      if ( a2 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    }
  }
  return result;
}

