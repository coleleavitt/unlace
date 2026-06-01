__int64 __fastcall sub_1EF7C0(__int64 a1, __int64 a2, int a3, double a4)
{
  unsigned int v6; // r13d
  __int64 v7; // rdx
  int v8; // eax
  signed int v10; // eax
  int v11; // r12d
  unsigned __int64 v12; // rsi

  if ( (get_tinfo_property() & 0xF) != 9
    || !(unsigned __int8)sub_1EF5A0((_DWORD *)a2, *(_QWORD **)(a1 + 1504), a3, *(_DWORD *)(a1 + 72), 3, a4) )
  {
    v6 = sub_1EF5A0((_DWORD *)a2, *(_QWORD **)(a1 + 1504), a3, *(_DWORD *)(a1 + 72), 2, a4);
    if ( !(_BYTE)v6 )
    {
      v7 = *(_QWORD *)(a1 + 1504);
      v8 = 16;
      if ( (*(_BYTE *)(v7 + 50) & 8) == 0 )
        v8 = 2 * *(_DWORD *)(v7 + 80);
      if ( a3 > v8 )
        return v6;
      v10 = sub_11CA90(a3, a4);
      v11 = v10;
      if ( *(_DWORD *)a2 == 1 )
        v12 = *(_QWORD *)(a2 + 8);
      else
        v12 = -1;
      if ( !(unsigned __int8)sub_2288F0((_QWORD *)a1, v12, v10, nullptr) )
      {
        if ( (*(_BYTE *)(a2 + 25) & 4) == 0 )
        {
          if ( !under_debugger )
            sub_383060(0xCBECu, a4);
          BUG();
        }
        return v6;
      }
      sub_1EF5A0((_DWORD *)a2, *(_QWORD **)(a1 + 1504), v11, *(_DWORD *)(a1 + 72), 0, a4);
    }
  }
  return 1;
}

