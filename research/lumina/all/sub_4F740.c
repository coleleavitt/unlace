__int64 __fastcall sub_4F740(__int64 a1, const char *a2, int a3)
{
  time_t v4; // rbp
  time_t v5; // rax
  int v7; // ecx
  int v8; // r12d

  v4 = time(nullptr);
  v5 = *(_QWORD *)(a1 + 544);
  if ( v5 < v4 && v5 )
  {
    *(_QWORD *)(a1 + 560) = 0;
    *(_DWORD *)(a1 + 552) = 0;
    *(_QWORD *)(a1 + 544) = 0;
    return 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 560) > v4 )
      return 1;
    if ( !(unsigned __int8)sub_4F560(a1, a2, a3) )
    {
      if ( !*(_QWORD *)(a1 + 544) )
        *(_QWORD *)(a1 + 544) = v4 + 180;
      v7 = *(_DWORD *)(a1 + 552) + 1;
      v8 = 2 << (*(_BYTE *)(a1 + 552) + 1);
      *(_DWORD *)(a1 + 552) = v7;
      if ( v8 > 32 )
        v8 = 32;
      if ( *(_QWORD *)(a1 + 488) < v4 && !*(_BYTE *)(a1 + 504) )
        sub_4BC40(
          (__int64 (__fastcall ***)(_QWORD))"Reconnect attempt %d failed, IDA may go into locked mode; trying again in %d seconds...\n",
          v7,
          v8);
      *(_QWORD *)(a1 + 560) = v4 + v8;
      return 1;
    }
    *(_QWORD *)(a1 + 560) = 0;
    *(_DWORD *)(a1 + 552) = 0;
    *(_QWORD *)(a1 + 544) = 0;
    return 2;
  }
}
