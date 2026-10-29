__int64 __fastcall sub_B580(__int64 a1)
{
  __int16 v1; // ax
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = *(_WORD *)(a1 + 40);
  if ( (unsigned __int16)(v1 - 13) > 1u )
    return 0;
  v2 = *(_BYTE *)(a1 + 57) == 7;
  *(_WORD *)(a1 + 904) = v1;
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
  if ( v3 != v4 )
  {
    v4 &= v3;
    if ( v3 == -1 )
      v4 = -1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = v4;
  return 1;
}

