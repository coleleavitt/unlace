__int64 __fastcall sub_158E50(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx

  result = sub_11F7C0((char *)a1, a2, a3);
  if ( (_BYTE)result )
    return 1;
  if ( *(_BYTE *)a1 == 10 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)v4 == 6 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      v6 = 8 * *(_DWORD *)(a1 + 4);
      if ( (unsigned __int64)v6 <= 0x3F )
        v5 &= ~(-1LL << v6);
      *a2 = v5;
      return 1;
    }
  }
  return result;
}

