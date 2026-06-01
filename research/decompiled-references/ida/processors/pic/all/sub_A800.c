_QWORD *__fastcall sub_A800(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  int v3; // ecx
  __int64 v4; // rax
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 272);
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 264) + 16 * v4) )
        break;
      v4 = ++v3;
    }
    while ( v3 < v2 );
  }
  result = (_QWORD *)find_ioport_bit();
  if ( result )
  {
    if ( result[1] )
      return (_QWORD *)*result;
    else
      return &unk_D8B0;
  }
  return result;
}

