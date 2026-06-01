__int64 __fastcall sub_288FF0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // r13d
  int v4; // eax

  v2 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL) )
    return v2;
  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL);
  LOBYTE(v2) = v3 == 50 || (unsigned int)(v3 - 19) <= 2;
  if ( (_BYTE)v2 && (!(unsigned __int8)is_numop() || (unsigned int)get_radix() != 16) )
  {
    sub_324B80(*(_QWORD *)(a2 + 24) + 8LL, 0x11111101100000LL);
    if ( (unsigned int)(v3 - 1) > 0x2C )
      goto LABEL_4;
    return v2;
  }
  v4 = v3 - 1;
  LOBYTE(v2) = (unsigned int)(v3 - 1) <= 0x2C;
  LOBYTE(v4) = v3 == 58;
  v2 |= v4;
  LOBYTE(v2) = (v3 != 16) & v2;
  if ( !(_BYTE)v2 )
  {
LABEL_4:
    if ( !**(_QWORD **)(a2 + 24) && (unsigned int)get_tinfo_property() == 2 )
    {
      sub_27CE80(a2, *(_QWORD *)(a1 + 72), 1u, 0);
      if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        *(_DWORD *)(a1 + 8) |= 8u;
      return 1;
    }
    return v2;
  }
  return 0;
}

