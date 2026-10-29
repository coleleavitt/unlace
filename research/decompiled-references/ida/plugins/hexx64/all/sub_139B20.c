__int64 __fastcall sub_139B20(__int64 a1, double a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // edx

  v2 = 8;
  result = 1;
  if ( *(int *)(a1 + 64) > 1 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v2);
      if ( *(_DWORD *)(v4 + 76) != 1 )
      {
        v5 = *(_DWORD *)(v4 + 24);
        BYTE1(v5) &= ~2u;
        LOBYTE(v5) = v5 | 0x80;
        *(_DWORD *)(v4 + 24) = v5;
      }
      v6 = *(_DWORD *)(a1 + 64);
      result = (unsigned int)(result + 1);
      if ( v6 <= (int)result )
        break;
      v2 += 8;
      if ( (unsigned int)result >= v6 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
        BUG();
      }
    }
  }
  return result;
}

