__int64 __fastcall sub_11D460(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // rsi

  result = *(unsigned int *)(a1 + 40);
  if ( (int)result > 0 )
  {
    v2 = 0;
    do
    {
      result = *(_QWORD *)(a1 + 120);
      v3 = *(_QWORD *)(result + 8LL * v2);
      if ( v3 )
      {
        sub_11D2F0((__int64 *)a1, v3);
        result = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(result + 8LL * v2) = 0;
      }
      ++v2;
    }
    while ( *(_DWORD *)(a1 + 40) > v2 );
  }
  return result;
}
