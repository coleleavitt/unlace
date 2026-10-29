__int64 __fastcall sub_36EC70(__int64 a1, double a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = sub_36EBC0((_QWORD *)a1, a2);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( !(unsigned __int8)sub_369E00((__int64)v2, a2) )
  {
    if ( !under_debugger )
      sub_383060(0xC76Cu, a2);
    BUG();
  }
  return ((unsigned int)sub_1C3500(v3, a2)
        + v3[22]
        + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL)
        - 1
        - *(_DWORD *)(a1 + 144))
       & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
}

