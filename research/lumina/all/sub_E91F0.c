__int64 __fastcall sub_E91F0(__int64 a1, _BOOL8 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v8; // r12d
  __int64 v9; // rdx
  unsigned int v11; // [rsp+0h] [rbp-2Ch]

  if ( !*(_BYTE *)(a1 + 17) )
    return sub_E9110(a1, a2, a3, a4, a5);
  v8 = a3;
  sub_CC740(a1);
  result = sub_E9110(a1, a2, v8, a4, a5);
  if ( *(_BYTE *)(a1 + 17) )
  {
    if ( (*(_DWORD *)(a1 + 20))-- == 1 )
    {
      v11 = result;
      sub_CC7D0(a1, a2, v9);
      return v11;
    }
  }
  return result;
}
