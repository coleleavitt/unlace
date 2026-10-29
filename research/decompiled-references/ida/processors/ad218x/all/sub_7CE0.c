__int64 __fastcall sub_7CE0(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  unsigned int v4; // esi
  __int16 v5; // ax

  v3 = *(_DWORD *)(a1 + 672);
  v4 = 0;
  if ( v3 <= 3 )
  {
    v5 = *((char *)&qword_F400[2 * v3] + (a3 & 0xF));
    if ( (_BYTE)v5 != 0xFF )
    {
      v4 = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v5;
      *(_QWORD *)(a1 + 248) += 40LL;
    }
  }
  return v4;
}

