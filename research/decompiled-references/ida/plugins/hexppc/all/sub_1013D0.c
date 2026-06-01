__int64 __fastcall sub_1013D0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 <= 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(50162);
    BUG();
  }
  result = (unsigned int)(v1 - 1);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}

