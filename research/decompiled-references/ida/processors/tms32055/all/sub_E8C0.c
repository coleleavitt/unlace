_BYTE *__fastcall sub_E8C0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *result; // rax

  a4[32] = 0;
  result = a4 + 41;
  do
  {
    if ( !*result )
      break;
    result += 40;
    ++a4[32];
  }
  while ( result != a4 + 361 );
  return result;
}

