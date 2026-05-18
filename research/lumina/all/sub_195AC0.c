bool __fastcall sub_195AC0(__int64 a1, int a2, bool a3)
{
  unsigned __int16 *v3; // rax
  int v4; // ecx
  bool result; // al
  int v6; // edx
  _DWORD *v7; // rdx

  v3 = *(unsigned __int16 **)(a1 + 24);
  if ( !v3 )
    return 0;
  v4 = *v3;
  result = 0;
  if ( v4 == a2 )
  {
    result = a3;
    if ( !a3 )
    {
      v6 = *(_DWORD *)(a1 + 16);
      if ( (~(_BYTE)v6 & 0x41) == 0 && (v6 & 8) == 0 )
      {
        v7 = *(_DWORD **)(a1 + 48);
        result = 1;
        if ( v7 )
        {
          result = 0;
          if ( *v7 )
            return v7[1] != 0;
        }
      }
    }
  }
  return result;
}
