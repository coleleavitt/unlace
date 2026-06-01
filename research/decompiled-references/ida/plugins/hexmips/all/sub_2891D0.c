__int64 __fastcall sub_2891D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v4; // eax

  if ( (unsigned __int8)sub_298400(*(_QWORD *)(a2 + 24) + 48LL)
    && (v2 = sub_298400(*(_QWORD *)(a2 + 32) + 48LL), (_BYTE)v2)
    && !(unsigned __int8)sub_251D10(*(_QWORD *)(a2 + 32)) )
  {
    v4 = 17;
    if ( *(_DWORD *)(a2 + 8) == 21 )
      v4 = 18;
    *(_DWORD *)(a2 + 8) = v4;
    sub_23F940(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
  }
  else
  {
    return 0;
  }
  return v2;
}

