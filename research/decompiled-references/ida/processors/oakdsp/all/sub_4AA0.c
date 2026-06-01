__int64 __fastcall sub_4AA0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = a3;
  v3 = *(unsigned __int16 *)(a2 + 24);
  ++*(_WORD *)(a2 + 26);
  if ( (unsigned __int16)v3 <= 0x39u )
  {
    v4 = 0x21D000000000000LL;
    if ( _bittest64(&v4, v3) )
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  }
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

