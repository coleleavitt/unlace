__int64 __fastcall sub_125B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0;
  if ( (*(_BYTE *)(a2 + 68) & 8) != 0 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v3 = *(_QWORD *)(a2 + 40);
      if ( v3 > 0x3000 || *(_QWORD *)(a2 + 48) + v3 > 0x3000 )
      {
        *(_DWORD *)(a1 + 8) = 1;
        return 1;
      }
    }
  }
  return result;
}

