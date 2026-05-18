__int64 __fastcall sub_11C860(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edi

  result = *(_QWORD *)(a1 + 160);
  if ( !result )
    result = a1;
  v3 = *(_DWORD *)(result + 116);
  if ( ((1 << a2) & v3) == 0 )
  {
    *(_DWORD *)(result + 116) = v3 | (1 << a2);
    if ( a2 == 1 )
      return sub_11C510(result);
  }
  return result;
}
