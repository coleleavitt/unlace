_QWORD *__fastcall sub_D25B0(int a1, __int64 a2)
{
  int i; // ebx
  __int64 v3; // r12
  int v4; // ebp
  _QWORD *result; // rax

  if ( a1 <= 2 )
  {
    v4 = 200;
    v3 = 2;
    i = 2;
  }
  else
  {
    for ( i = 2; i < a1; i *= 2 )
      ;
    v3 = i;
    v4 = 84 * i + 32;
  }
  if ( qword_241610 && (unsigned int)qword_241610(100) )
    return nullptr;
  result = sub_D2260(v4, a2);
  if ( result )
  {
    *(_DWORD *)result = i;
    result[1] = 0;
    result[3] = result + 4;
    result[2] = &result[10 * v3 + 4];
  }
  return result;
}
