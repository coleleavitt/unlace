__int64 __fastcall sub_10D290(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  v2 = *(_DWORD **)(a1 + 40);
  if ( (*(_BYTE *)(a1 + 52) & 4) != 0 && v2[8] >= *(_DWORD *)(a1 + 48) )
  {
    result = (unsigned int)v2[32];
    if ( (_DWORD)result )
      return sub_D7190(a1);
  }
  else
  {
    result = (unsigned int)v2[12];
    if ( !(_DWORD)result )
    {
      if ( v2[46] > v2[50] )
        return sub_10D080(*(_QWORD *)(a1 + 40), (unsigned int *)(a1 + 48));
      else
        return sub_10CEA0(a1, a2);
    }
  }
  return result;
}
