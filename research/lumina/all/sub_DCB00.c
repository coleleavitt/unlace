__int64 *__fastcall sub_DCB00(__int64 a1)
{
  __int64 *result; // rax

  result = sub_DBFF0(*(_QWORD *)(a1 + 16), 56 * ((unsigned int)*(unsigned __int16 *)(a1 + 6) + 1) + 40);
  if ( result )
  {
    *result = a1;
    result[1] = (__int64)(result + 5);
    *((_WORD *)result + 14) = *(_WORD *)(a1 + 6) + 1;
  }
  return result;
}
