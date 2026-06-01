__int64 __fastcall sub_5120(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  __int16 v4; // dx

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 8u;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = a3;
  ++*(_WORD *)(a2 + 26);
  v3 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(v3 + 33) & 4) != 0 || (v4 = *(_WORD *)(a2 + 24), v4 != 73) && (unsigned __int16)(v4 - 75) > 5u )
  {
    *(_BYTE *)(v3 + 1) = 2;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  else
  {
    *(_BYTE *)(v3 + 1) = 7;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
}

