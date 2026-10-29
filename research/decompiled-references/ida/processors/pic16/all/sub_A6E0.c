char *__fastcall sub_A6E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  int v3; // ecx
  __int64 v4; // rax
  char *result; // rax

  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16 * v4) )
        break;
      v4 = ++v3;
    }
    while ( v3 < v2 );
  }
  result = (char *)find_ioport_bit();
  if ( result )
  {
    if ( *((_QWORD *)result + 1) )
      return *(char **)result;
    else
      return &byte_D9A4;
  }
  return result;
}

