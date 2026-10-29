__int64 __fastcall sub_1EFB80(__int64 a1, __int64 a2, signed int a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rsi

  if ( (get_tinfo_property() & 0xF) != 9
    || !(unsigned __int8)sub_1EF960((_DWORD *)a2, *(_QWORD **)(a1 + 1504), a3, *(_DWORD *)(a1 + 72), 3) )
  {
    v5 = sub_1EF960((_DWORD *)a2, *(_QWORD **)(a1 + 1504), a3, *(_DWORD *)(a1 + 72), 2);
    if ( !(_BYTE)v5 )
    {
      v6 = *(_QWORD *)(a1 + 1504);
      v7 = 16;
      if ( (*(_BYTE *)(v6 + 50) & 8) == 0 )
        v7 = 2 * *(_DWORD *)(v6 + 80);
      if ( a3 > v7 )
        return v5;
      v9 = sub_11C4D0(a3);
      v10 = v9;
      if ( *(_DWORD *)a2 == 1 )
        v11 = *(_QWORD *)(a2 + 8);
      else
        v11 = -1;
      if ( !(unsigned __int8)sub_228CB0(a1, v11, v9, 0) )
      {
        if ( (*(_BYTE *)(a2 + 25) & 4) == 0 )
        {
          if ( !under_debugger )
            sub_3835A0(52204);
          BUG();
        }
        return v5;
      }
      sub_1EF960((_DWORD *)a2, *(_QWORD **)(a1 + 1504), v10, *(_DWORD *)(a1 + 72), 0);
    }
  }
  return 1;
}

