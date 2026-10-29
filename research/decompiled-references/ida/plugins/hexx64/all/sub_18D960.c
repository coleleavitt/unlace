unsigned __int64 __fastcall sub_18D960(__int64 a1, double a2)
{
  __int64 v2; // r13
  char v3; // r12
  unsigned __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  char v7; // al
  int v8; // edx
  __int64 v9; // rdx

  v2 = 8;
  v3 = 0;
  result = *(unsigned int *)(a1 + 64);
  v5 = 1;
  if ( (int)result > 1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v2);
      v7 = sub_11F370(v6);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v6 + 24);
        v3 = v7;
        BYTE1(v8) &= ~2u;
        LOBYTE(v8) = v8 | 0x80;
        *(_DWORD *)(v6 + 24) = v8;
      }
      result = *(unsigned int *)(a1 + 64);
      if ( (int)result <= (int)++v5 )
        break;
      v2 += 8;
      if ( v5 >= (unsigned int)result )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
        BUG();
      }
    }
    if ( v3 )
    {
      v9 = *(_QWORD *)(a1 + 784);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 48) = 63;
        result = *(unsigned int *)(a1 + 64);
      }
    }
  }
  *(_DWORD *)a1 &= ~0x10000u;
  if ( (int)result > 0 )
    return sub_66FA0(a1, 1);
  return result;
}

