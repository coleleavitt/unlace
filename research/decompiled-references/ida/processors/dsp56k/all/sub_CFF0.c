__int64 __fastcall sub_CFF0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ecx
  __int16 v4; // ax

  v3 = 0;
  if ( (unsigned __int64)a3 <= 0x3F )
  {
    v4 = *((char *)qword_178A0 + a3);
    if ( (_BYTE)v4 != 0xFF )
    {
      v3 = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
      *(_QWORD *)(a1 + 248) += 40LL;
    }
  }
  return v3;
}

