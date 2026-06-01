__int64 __fastcall sub_6E220(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 76) == 3 )
    {
      v2 = *(_QWORD *)(a1 + 56);
      if ( v2 )
      {
        if ( *(_DWORD *)v2 == 55 && *(_BYTE *)(v2 + 32) == 7 )
        {
          v3 = *(_QWORD *)(v2 + 16);
          result = 1;
          if ( v3 )
            return *(_BYTE *)(v3 + 4) >> 7;
        }
      }
    }
  }
  return result;
}

