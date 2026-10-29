__int64 __fastcall sub_D4260(__int64 a1)
{
  __int16 v1; // dx
  __int64 result; // rax
  bool v3; // zf

  *(_BYTE *)(a1 + 103) = 0;
  v1 = 0;
  *(_DWORD *)(a1 + 400) = 0;
  result = (unsigned int)(*(_DWORD *)(a1 + 408) - 1);
  v3 = *(_DWORD *)(a1 + 408) == 1;
  *(_DWORD *)(a1 + 408) = result;
  if ( v3 )
    v1 = *(_WORD *)(a1 + 414);
  *(_WORD *)(a1 + 412) = v1;
  return result;
}
