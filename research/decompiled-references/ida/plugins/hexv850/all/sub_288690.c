__int64 __fastcall sub_288690(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v4; // eax

  if ( (unsigned __int8)sub_2978C0(*(_QWORD *)(a2 + 24) + 48LL)
    && (v2 = sub_2978C0(*(_QWORD *)(a2 + 32) + 48LL), (_BYTE)v2)
    && !(unsigned __int8)sub_2511D0(*(_QWORD *)(a2 + 32)) )
  {
    v4 = 17;
    if ( *(_DWORD *)(a2 + 8) == 21 )
      v4 = 18;
    *(_DWORD *)(a2 + 8) = v4;
    sub_23EE00(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
  }
  else
  {
    return 0;
  }
  return v2;
}

