__int64 __fastcall sub_D170(__int64 a1, __int64 a2, char a3)
{
  __int16 v3; // ax
  unsigned int v4; // edx

  v3 = *((char *)qword_178A0 + (a3 & 0xF));
  v4 = 0;
  if ( (_BYTE)v3 != 0xFF )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3;
    return 1;
  }
  return v4;
}

