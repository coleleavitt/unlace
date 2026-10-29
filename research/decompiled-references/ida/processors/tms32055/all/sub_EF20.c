__int64 __fastcall sub_EF20(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // edx
  unsigned int v7; // eax
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 7;
  v5 = sub_ED80(a4);
  *(_BYTE *)(a3 + 5) = 9;
  v6 = v5;
  v7 = a2;
  if ( (a2 & 0x8000) != 0 )
    v7 = a2 | 0xFFFF8000;
  result = (v6 + v7) & 0xFFFFFF;
  *(_QWORD *)(a3 + 16) = (unsigned int)result;
  return result;
}

