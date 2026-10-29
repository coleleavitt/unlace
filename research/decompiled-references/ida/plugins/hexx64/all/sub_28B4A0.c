__int64 __fastcall sub_28B4A0(__int64 a1, __int64 a2, __m128 a3)
{
  if ( *(_DWORD *)(a2 + 8) != 16 )
    return 0;
  if ( (unsigned __int8)sub_28B250(a1, (_QWORD *)a2, a3) )
    ++*(_DWORD *)(a1 + 80);
  return 0;
}

