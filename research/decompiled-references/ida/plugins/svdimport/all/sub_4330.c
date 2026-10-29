_QWORD *__fastcall sub_4330(__int64 a1)
{
  _QWORD *result; // rax
  int v2; // ebx

  result = (_QWORD *)get_segm_qty();
  if ( (int)result > 0 )
  {
    v2 = (int)result;
    do
    {
      --v2;
      result = (_QWORD *)getnseg();
      if ( result )
        result = (_QWORD *)sub_10690(a1, *result, result[1]);
    }
    while ( v2 );
  }
  return result;
}

