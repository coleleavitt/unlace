__int64 __fastcall sub_42EF0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 *a4)
{
  int *v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 result; // rax

  v4 = (int *)(a4 + 10);
  v5 = a2 + 40;
  v6 = a3;
  do
  {
    if ( !*v4 )
      break;
    result = sub_41760(a1, a2, v5, v6, *a4, *v4);
    if ( !(_BYTE)result )
      return result;
    v5 += 40;
    ++v4;
  }
  while ( v5 != a2 + 240 );
  sub_405E0(a1, a2, v6, a4);
  return 1;
}
