__int64 __fastcall sub_1732B0(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax

  if ( sub_125B90(
         *(unsigned __int8 **)(a1 + 40),
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL),
         *(unsigned int **)(a1 + 32),
         0,
         a2) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_DWORD *)(v3 + 68);
    if ( *(_DWORD *)(v4 + 68) >= v5 )
    {
      if ( *(_DWORD *)(v4 + 68) == v5 )
      {
        *(_DWORD *)v3 = 4;
        v4 = *(_QWORD *)(a1 + 40);
        v3 = *(_QWORD *)(a1 + 32);
      }
      else if ( (unsigned int)(*(_DWORD *)v3 - 10) > 1 )
      {
        if ( !under_debugger )
          sub_383060(0xC9DBu, a2);
        BUG();
      }
      sub_125180((unsigned __int8 *)(v3 + 32), (unsigned __int8 *)(v4 + 64));
      sub_11CDA0(*(_QWORD *)(a1 + 32) + 48LL);
      ++*(_DWORD *)(a1 + 48);
    }
  }
  return 0;
}

