__int64 __fastcall sub_6DFF0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  v1 = *(unsigned int *)(a1 + 64);
  v2 = 8;
  result = 1;
  if ( (int)v1 - 1 > 1 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v2);
      if ( (*(_BYTE *)(v4 + 24) & 2) != 0 && !*(_DWORD *)(v4 + 76) )
      {
        *(_QWORD *)(v4 + 40) = -1;
        v1 = *(unsigned int *)(a1 + 64);
      }
      result = (unsigned int)(result + 1);
      if ( (int)v1 - 1 <= (int)result )
        break;
      v2 += 8;
      if ( (unsigned int)result >= (unsigned int)v1 )
      {
        if ( under_debugger )
          BUG();
        interr(52719);
        return sub_6E070(52719, v1, v5);
      }
    }
  }
  return result;
}

