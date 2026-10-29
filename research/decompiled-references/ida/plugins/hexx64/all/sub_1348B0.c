__int64 __fastcall sub_1348B0(_QWORD *a1, __m128i a2)
{
  __int64 v2; // rdx
  int v3; // eax

  if ( (unsigned int)sub_15BC70(
                       (unsigned int *)a1[4],
                       *(unsigned __int64 **)(a1[1] + 1504LL),
                       0,
                       0,
                       nullptr,
                       nullptr,
                       a2,
                       0) )
  {
    v2 = a1[2];
    v3 = *(_DWORD *)(v2 + 24);
    BYTE1(v3) &= ~2u;
    LOBYTE(v3) = v3 | 0x80;
    *(_DWORD *)(v2 + 24) = v3;
  }
  return 0;
}

