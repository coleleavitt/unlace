char *__fastcall sub_66220(__int64 a1, int a2, int a3, double a4)
{
  char *v5; // rdi
  char *v6; // rcx
  char *result; // rax
  char *v8; // rdx

  v5 = *(char **)a1;
  v6 = &v5[4 * *(_QWORD *)(a1 + 8)];
  if ( v5 == v6 )
    goto LABEL_14;
  result = v5;
  while ( *(_DWORD *)result != a3 )
  {
    result += 4;
    if ( v6 == result )
      goto LABEL_7;
  }
  if ( *(_DWORD *)v5 != a2 )
  {
    while ( 1 )
    {
      v5 += 4;
      if ( v5 == v6 )
        break;
LABEL_7:
      if ( *(_DWORD *)v5 == a2 )
        goto LABEL_8;
    }
LABEL_14:
    if ( !under_debugger )
      sub_383060(0xCACEu, a4);
    BUG();
  }
LABEL_8:
  if ( v6 == v5 )
    goto LABEL_14;
  if ( result < v5 )
  {
    result = (char *)memmove(v5, v5 + 4, v6 - v5 - 4);
    --*(_QWORD *)(a1 + 8);
  }
  else
  {
    *(_DWORD *)v5 = a3;
    v8 = (char *)(*(_QWORD *)a1 + 4LL * *(_QWORD *)(a1 + 8));
    if ( v8 != result )
    {
      result = (char *)memmove(result, result + 4, v8 - result - 4);
      --*(_QWORD *)(a1 + 8);
    }
  }
  return result;
}

