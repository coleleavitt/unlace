_QWORD *__fastcall sub_62630(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 520);
  do
    result = (_QWORD *)result[1];
  while ( result && (a2 < result[4] || a2 >= result[5]) );
  return result;
}

