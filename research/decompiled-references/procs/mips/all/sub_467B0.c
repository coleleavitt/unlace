__int64 __fastcall sub_467B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int8 v4; // al

  v3 = *(_QWORD *)(a3 + 24) + *(_QWORD *)(a3 + 32) + 0x8000LL;
  v4 = getinf_flag(3, 32);
  put_word(a2 + 2LL * v4, v3 >> 16);
  return 1;
}
