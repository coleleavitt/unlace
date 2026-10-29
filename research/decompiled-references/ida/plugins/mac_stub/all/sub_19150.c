__int64 __fastcall sub_19150(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // rbx

  if ( a4 )
  {
    v5 = operator new(0x38u);
    sub_19030(v5, a1, a2, a3);
  }
  else
  {
    v5 = operator new(0x38u);
    *(_QWORD *)(v5 + 8) = 0;
    *(_BYTE *)(v5 + 48) = 0;
    *(_OWORD *)(v5 + 16) = 0;
    *(_QWORD *)v5 = &off_467B0;
    *(_QWORD *)(v5 + 32) = a1;
    *(_QWORD *)(v5 + 40) = a2;
    sub_151F0((__int64 *)(v5 + 8), a3);
  }
  return v5;
}

