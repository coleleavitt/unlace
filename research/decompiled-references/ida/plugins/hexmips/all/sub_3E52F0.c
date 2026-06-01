__int64 __fastcall sub_3E52F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  bool v8; // al
  __int64 v9; // rdx
  __int64 v10; // rax

  if ( *(_BYTE *)a3 == 1 )
  {
    result = 0;
    if ( *(_DWORD *)(a3 + 8) == **(_DWORD **)(*(_QWORD *)(a1 + 56) + 728LL) )
      return (unsigned int)((*(_BYTE *)(a1 + 128) & 2) == 0) + 1;
  }
  else if ( *(_BYTE *)a3 == 5 )
  {
    v4 = *(_DWORD *)(a1 + 128);
    result = 0;
    if ( (v4 & 1) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      v6 = *(_QWORD *)(a1 + 120);
      v7 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 96) + 145LL) )
      {
        v9 = v7 + *(int *)(a3 + 4);
        v10 = 4;
        if ( (v4 & 8) == 0 )
          v10 = *(int *)(v5 + 80);
        v8 = v6 + v10 == v9;
      }
      else
      {
        v8 = v7 == v6;
      }
      return 2 * (unsigned int)v8;
    }
  }
  else
  {
    return 0;
  }
  return result;
}

