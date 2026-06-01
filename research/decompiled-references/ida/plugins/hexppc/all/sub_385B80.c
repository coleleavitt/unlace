__int64 __fastcall sub_385B80(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  char *v4; // rdi
  char *v5; // rdx

  result = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(result + 1008);
  v4 = *(char **)(v3 + 40);
  v5 = &v4[8 * *(_QWORD *)(v3 + 48)];
  if ( v4 != v5 )
  {
    while ( *(_QWORD *)v4 != a1 )
    {
      v4 += 8;
      if ( v5 == v4 )
        goto LABEL_7;
    }
    if ( v4 != v5 )
    {
      memmove(v4, v4 + 8, v5 - v4 - 8);
      --*(_QWORD *)(v3 + 48);
      result = *(_QWORD *)(a1 + 128);
    }
  }
LABEL_7:
  *(_QWORD *)(result + 888) = 0;
  return result;
}

