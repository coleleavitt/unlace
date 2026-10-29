unsigned __int8 *__fastcall sub_C5C00(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int8 *v3; // rbx
  unsigned __int8 *result; // rax
  unsigned int i; // r13d
  int v6; // edx
  unsigned int v7; // r13d
  int v8; // edx

  v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 16LL * a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * a2) = a3;
  result = (unsigned __int8 *)*v3;
  if ( (_BYTE)result == 6 )
  {
    result = (unsigned __int8 *)*((unsigned int *)v3 + 1);
    if ( (_DWORD)result )
    {
      v7 = 1;
      do
      {
        sub_C5C00(a1, a2 + v7, a2);
        v8 = 1;
        result = &v3[16 * v7];
        if ( *result > 5u )
          v8 = *((_DWORD *)result + 1) + 1;
        v7 += v8;
      }
      while ( *((_DWORD *)v3 + 1) >= v7 );
    }
  }
  else if ( (_BYTE)result == 7 )
  {
    for ( i = 1; *((_DWORD *)v3 + 1) >= i; i += v6 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * (a2 + i)) = a2;
      sub_C5C00(a1, a2 + i + 1, a2);
      v6 = 2;
      result = &v3[16 * i + 16];
      if ( *result > 5u )
        v6 = *((_DWORD *)result + 1) + 2;
    }
  }
  return result;
}
