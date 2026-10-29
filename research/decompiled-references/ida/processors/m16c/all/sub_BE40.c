__int64 __fastcall sub_BE40(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  unsigned __int16 byte; // ax
  unsigned int v4; // edx
  __int16 v5; // ax
  int v6; // eax
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(_DWORD *)(a1 + 4360);
  byte = get_byte();
  v4 = 0;
  v5 = (byte >> 4) & 7;
  if ( (_BYTE)v5 )
  {
    v6 = *((_DWORD *)qword_1B620 + (v5 & 7));
    v7 = v1 + 40LL * v2;
    *(_BYTE *)(v7 + 41) = 1;
    *(_WORD *)(v7 + 46) = v6;
    *(_BYTE *)(v7 + 45) = 1;
    return 1;
  }
  return v4;
}

