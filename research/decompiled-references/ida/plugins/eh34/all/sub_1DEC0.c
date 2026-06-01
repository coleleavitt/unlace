__int64 __fastcall sub_1DEC0(__int64 *a1, unsigned __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rdi
  int v4; // ecx
  __int64 result; // rax
  unsigned __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 2) - 1;
  if ( v2 < 0 )
    return 0xFFFFFFFFLL;
  v3 = *a1;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      result = (unsigned int)(v4 + (v2 - v4) / 2);
      v6 = *(_QWORD *)(v3 + 16LL * (int)result);
      if ( a2 >= v6 )
        break;
      v2 = result - 1;
      if ( v4 > (int)result - 1 )
        goto LABEL_7;
    }
    if ( v6 >= a2 )
      goto LABEL_8;
    v4 = result + 1;
  }
  while ( (int)result + 1 <= v2 );
LABEL_7:
  result = (unsigned int)(v4 - 1);
LABEL_8:
  if ( (_DWORD)result != -1 )
    return *(unsigned int *)(v3 + 16LL * (int)result + 8);
  return result;
}

