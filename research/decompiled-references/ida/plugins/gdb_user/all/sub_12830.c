__int64 __fastcall sub_12830(unsigned int **a1, __int64 a2, char a3)
{
  unsigned int *v3; // rcx
  unsigned int *v4; // rbp
  __int64 result; // rax

  v3 = *a1;
  if ( a2 != 8 )
  {
    v4 = v3 + 1;
    result = _byteswap_ulong(*v3);
    if ( !a3 )
      result = *v3;
    goto LABEL_4;
  }
  result = *(_QWORD *)v3;
  v4 = v3 + 2;
  if ( !a3 )
  {
LABEL_4:
    *a1 = v4;
    return result;
  }
  result = swap64();
  *a1 = v4;
  return result;
}

