__int64 __fastcall sub_CF570(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rdx
  __int64 v4; // rdx
  __int16 v5; // si
  int v6; // ecx
  _WORD *v7; // rdx
  _WORD *v8; // rax
  int v9; // edx

  result = 0;
  if ( *(_BYTE *)a2 == 0xA7 )
  {
    v3 = *(__int64 **)(a1 + 40);
    if ( *(_DWORD *)(a2 + 44) == *((_DWORD *)v3 + 2) )
    {
      v4 = *v3;
      v5 = *(_WORD *)(a2 + 48);
      v6 = *(unsigned __int16 *)(v4 + 96);
      if ( *(_WORD *)(v4 + 96) )
      {
        v7 = *(_WORD **)(v4 + 8);
        if ( v5 == *v7 )
          return result;
        v8 = v7 + 1;
        v9 = 0;
        while ( v6 != ++v9 )
        {
          if ( v5 == *v8++ )
          {
            if ( (v9 & 0x8000u) != 0 )
              break;
            return 0;
          }
        }
      }
      *(_WORD *)(a1 + 36) = 1;
      return 2;
    }
  }
  return result;
}
