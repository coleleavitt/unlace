__int64 __fastcall sub_434D0(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  set_debug_event_code();
  if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_43540(3296, 2);
  }
  else
  {
    v2 = qword_753F8;
    *(_DWORD *)(a1 + 24) = a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v2 + 316);
    result = *(unsigned int *)(v2 + 312);
    *(_BYTE *)(a1 + 16) = 1;
    *(_DWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = -1;
  }
  return result;
}

