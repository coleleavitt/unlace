__int64 __fastcall sub_12D8B0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
    return 0;
  if ( (unsigned int)sub_129DC0(
                       *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 480LL) + 112LL),
                       *(const __m128i **)(a1 + 48),
                       *(_QWORD *)(a1 + 56),
                       *(_DWORD **)(a1 + 16),
                       *(_QWORD *)(a1 + 56),
                       *(_QWORD *)(a1 + 64) + 32LL,
                       *(_QWORD *)(a1 + 64) + 48LL,
                       *(_DWORD *)(a1 + 80)) )
    sub_12D670(a1);
  return 0;
}

