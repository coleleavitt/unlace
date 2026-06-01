__int64 __fastcall sub_1E3540(__int64 *a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // edx

  result = *a1;
  if ( *(int *)(*a1 + 64) > 1 )
  {
    v3 = 8;
    v4 = 1;
    while ( 1 )
    {
      ++v4;
      v5 = *(_QWORD *)(*(_QWORD *)(result + 528) + v3);
      sub_13FCB0((unsigned __int64 **)(v5 + 424));
      *(_BYTE *)(v5 + 440) = 1;
      sub_13FCB0((unsigned __int64 **)(v5 + 456));
      *(_BYTE *)(v5 + 472) = 1;
      result = *a1;
      v6 = *(_DWORD *)(*a1 + 64);
      if ( v6 <= v4 )
        break;
      v3 += 8;
      if ( v4 >= (unsigned int)v6 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
        BUG();
      }
    }
  }
  return result;
}

