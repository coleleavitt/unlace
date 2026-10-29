__int64 __fastcall sub_28DA50(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned int v3; // ebp
  int v5; // eax

  if ( (unsigned __int8)sub_29CC80((_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL))
    && (v3 = sub_29CC80((_QWORD *)(*(_QWORD *)(a2 + 32) + 48LL)), (_BYTE)v3)
    && !(unsigned __int8)sub_256590(*(_QWORD *)(a2 + 32)) )
  {
    v5 = 17;
    if ( *(_DWORD *)(a2 + 8) == 21 )
      v5 = 18;
    *(_DWORD *)(a2 + 8) = v5;
    sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
      *(_DWORD *)(a1 + 8) |= 8u;
  }
  else
  {
    return 0;
  }
  return v3;
}

