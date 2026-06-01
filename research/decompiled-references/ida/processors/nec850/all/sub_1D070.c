__int64 __fastcall sub_1D070(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *(_WORD *)(a1 + 40) != 20 || *(_BYTE *)(a1 + 57) != 5 )
    return 0;
  result = same_value_jpt(a1, a1 + 96, 0);
  if ( (_BYTE)result )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 == 1 )
    {
      **(_DWORD **)(a1 + 376) &= 0xFFFFFBFB;
      return result;
    }
    if ( v2 == 2 )
    {
      **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
      return result;
    }
  }
  return 0;
}

