__int64 __fastcall sub_D1A60(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rbx
  __int64 result; // rax
  unsigned int v3; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v1 = *a1;
  v4 = __readfsqword(0x28u);
  do
  {
    v1 += (int)sub_D1270(v1, (int *)&v3);
    result = v3;
  }
  while ( v3 == 183 );
  if ( v3 - 164 <= 1 || v3 - 117 <= 1 || v3 == 59 )
  {
    result = 59;
  }
  else if ( word_1BBB40[v3] == 59 )
  {
    result = 59;
  }
  *a1 = v1;
  return result;
}
