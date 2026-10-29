char __fastcall sub_CAF70(unsigned __int8 *a1)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *a1;
  for ( result = 0; (_BYTE)v1; v1 = *a1 )
  {
    ++a1;
    result += byte_1BF000[v1];
  }
  return result;
}
