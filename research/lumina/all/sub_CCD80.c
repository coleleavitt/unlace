__int64 *__fastcall sub_CCD80(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  __int64 *result; // rax

  if ( *(char *)(a1 + 84) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = v1++;
      sub_C36A0(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v2 + 144) + 112LL));
    }
    while ( v1 < *(char *)(a1 + 84) );
  }
  result = sub_C36A0(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 112LL));
  *(_BYTE *)(a1 + 84) = -1;
  return result;
}
