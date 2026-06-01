__int64 __fastcall sub_7A90(__int64 a1, __int64 a2, char a3)
{
  __int16 v3; // ax
  unsigned int v4; // edx

  v3 = *((unsigned __int8 *)&qword_F448 + (a3 & 7));
  v4 = 0;
  if ( (_BYTE)v3 != 0xFF )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3;
    v4 = 1;
    *(_QWORD *)(a1 + 248) += 40LL;
  }
  return v4;
}

