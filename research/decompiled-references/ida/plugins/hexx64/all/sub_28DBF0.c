__int64 __fastcall sub_28DBF0(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned int v3; // ebx
  int v4; // r13d
  int v5; // eax

  v3 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL) )
    return v3;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL);
  LOBYTE(v3) = v4 == 50 || (unsigned int)(v4 - 19) <= 2;
  if ( (_BYTE)v3 && (!(unsigned __int8)is_numop() || (unsigned int)get_radix() != 16) )
  {
    sub_329C80(*(_QWORD *)(a2 + 24) + 8LL, 0x11111101100000uLL);
    if ( (unsigned int)(v4 - 1) > 0x2C )
      goto LABEL_4;
    return v3;
  }
  v5 = v4 - 1;
  LOBYTE(v3) = (unsigned int)(v4 - 1) <= 0x2C;
  LOBYTE(v5) = v4 == 58;
  v3 |= v5;
  LOBYTE(v3) = (v4 != 16) & v3;
  if ( !(_BYTE)v3 )
  {
LABEL_4:
    if ( !**(_QWORD **)(a2 + 24) && (unsigned int)get_tinfo_property() == 2 )
    {
      sub_281A80(a2, *(_QWORD *)(a1 + 72), 1, 0, *(double *)a3.m128_u64);
      if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
        *(_DWORD *)(a1 + 8) |= 8u;
      return 1;
    }
    return v3;
  }
  return 0;
}

