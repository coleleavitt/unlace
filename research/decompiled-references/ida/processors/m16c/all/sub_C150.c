__int64 __fastcall sub_C150(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = (int)(unsigned __int8)get_byte() >> 4;
  if ( v1 > 7 )
    v1 -= 16;
  v2 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_QWORD *)(v2 + 48) = v1;
  *(_WORD *)(v2 + 64) |= 1u;
  *(_BYTE *)(v2 + 41) = 5;
  *(_BYTE *)(v2 + 45) = 0;
  return 1;
}

