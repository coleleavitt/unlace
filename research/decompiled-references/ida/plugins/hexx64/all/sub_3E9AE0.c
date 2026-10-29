__int64 __fastcall sub_3E9AE0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *a1;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = (v4 + v2) >> 1;
      v6 = v3 + 16 * v5;
      if ( *(_QWORD *)v6 >= a2 )
        break;
      v4 = v5 + 1;
      if ( v5 + 1 >= v2 )
        goto LABEL_7;
    }
    if ( *(_QWORD *)v6 == a2 )
      return *(unsigned int *)(v6 + 8);
    v2 = (v4 + v2) >> 1;
  }
  while ( v4 < v5 );
LABEL_7:
  result = 0;
  if ( v4 )
    return *(unsigned int *)(v3 + 16 * v4 - 8);
  return result;
}

