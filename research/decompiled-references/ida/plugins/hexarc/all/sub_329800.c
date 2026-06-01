__int64 __fastcall sub_329800(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edx

  result = *(_QWORD *)(a1 + 48);
  if ( a2 > 0 && result )
  {
    v3 = 0;
    do
    {
      ++v3;
      result = *(_QWORD *)(result + 8);
    }
    while ( a2 > v3 && result );
  }
  return result;
}

