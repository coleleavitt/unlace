__int64 __fastcall sub_1AAA0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // ebp
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 12) == *(_DWORD *)(a1 + 96) && v2 == 70 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v4 - 8);
      if ( !v5 || (v6 = *(_DWORD *)(v5 + 8), v6 <= 69) )
      {
        v6 = 0;
        v5 = 0;
      }
      if ( v6 == 71 || v6 == 83 )
      {
        v7 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 16LL * *(_QWORD *)(a1 + 48) - 8);
        if ( v7 == *(_QWORD *)(v5 + 24) || *(_DWORD *)(v7 + 24) != 80 )
          *(_QWORD *)(a1 + 88) = a2;
      }
    }
    return 0;
  }
  else if ( v2 == 72 )
  {
    sub_1A800((_QWORD *)a1, *(_QWORD *)(a2 + 24));
    return 0;
  }
  else
  {
    if ( v2 == 81 )
    {
      v8 = **(_DWORD **)(a2 + 24);
      hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
      hexdsp(205, a1 + 104, v8);
    }
    return 0;
  }
}

