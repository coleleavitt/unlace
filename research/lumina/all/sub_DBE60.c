__int64 __fastcall sub_DBE60(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 220);
  *(_BYTE *)(a1 + 103) = 1;
  if ( v1 > 0 )
    *(_DWORD *)(a1 + 400) = 1;
  ++*(_DWORD *)(a1 + 408);
  *(_WORD *)(a1 + 412) = 0;
  result = *(_QWORD *)(a1 + 344);
  if ( result )
  {
    sub_DBD10(result, "out of memory");
    result = *(_QWORD *)(a1 + 344);
    *(_DWORD *)(result + 24) = 7;
  }
  return result;
}
