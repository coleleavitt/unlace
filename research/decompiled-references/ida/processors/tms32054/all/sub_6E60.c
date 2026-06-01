__int64 __fastcall sub_6E60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi

  result = 255;
  if ( (*(_BYTE *)(a1 + 232) & 2) != 0 )
  {
    v3 = a2 - *(_QWORD *)(a1 + 224);
    if ( v3 <= 0x1E )
      return *((unsigned int *)qword_C900 + v3);
  }
  return result;
}

