_BOOL8 __fastcall sub_294AD0(__int64 a1, __int64 a2, __m128 a3)
{
  *(_DWORD *)(a1 + 80) += sub_294400(a1, a2, a3);
  return (*(_BYTE *)(a1 + 8) & 8) != 0;
}

