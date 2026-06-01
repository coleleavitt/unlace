char *__fastcall sub_61EA0(__int64 a1, int a2, int a3)
{
  char *v4; // rdi
  char *v5; // rcx
  char *result; // rax
  __int64 v7; // rdx

  v4 = *(char **)a1;
  v5 = &v4[4 * *(_QWORD *)(a1 + 8)];
  if ( v4 == v5 )
    goto LABEL_14;
  result = v4;
  while ( *(_DWORD *)result != a3 )
  {
    result += 4;
    if ( v5 == result )
      goto LABEL_7;
  }
  if ( *(_DWORD *)v4 != a2 )
  {
    while ( 1 )
    {
      v4 += 4;
      if ( v4 == v5 )
        break;
LABEL_7:
      if ( *(_DWORD *)v4 == a2 )
        goto LABEL_8;
    }
LABEL_14:
    if ( !under_debugger )
      sub_37DDE0(51918);
    BUG();
  }
LABEL_8:
  if ( v5 == v4 )
    goto LABEL_14;
  if ( result < v4 )
  {
    result = (char *)memmove(v4, v4 + 4, v5 - v4 - 4);
    --*(_QWORD *)(a1 + 8);
  }
  else
  {
    *(_DWORD *)v4 = a3;
    v7 = *(_QWORD *)a1 + 4LL * *(_QWORD *)(a1 + 8);
    if ( (char *)v7 != result )
    {
      result = (char *)memmove(result, result + 4, v7 - (_QWORD)result - 4);
      --*(_QWORD *)(a1 + 8);
    }
  }
  return result;
}

