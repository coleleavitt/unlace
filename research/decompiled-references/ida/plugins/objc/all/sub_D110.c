__int64 __fastcall sub_D110(__int64 a1)
{
  __int64 result; // rax
  __int64 name_ea; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  result = *(unsigned int *)(a1 + 2212);
  if ( (int)result < 0 )
  {
    name_ea = get_name_ea();
    if ( name_ea == -1 || !(unsigned __int8)sub_15860(a1 + 2212, name_ea) )
    {
      *(_DWORD *)(a1 + 2212) = 0;
      result = 0;
    }
    else
    {
      result = *(unsigned int *)(a1 + 2212);
    }
    if ( *(_BYTE *)(a1 + 2216) )
    {
      sub_EC40((unsigned int)"detected class abi version %d\n", result, v3, v4, v5, v6);
      return *(unsigned int *)(a1 + 2212);
    }
  }
  return result;
}
