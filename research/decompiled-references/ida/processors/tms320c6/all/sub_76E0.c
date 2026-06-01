__int64 __fastcall sub_76E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  char v5; // si
  __int16 v6; // dx
  __int16 v8; // cx
  __int16 v9; // dx

  result = a2;
  *(_BYTE *)(a2 + 41) = 5;
  v5 = (a4 & 1) + 1;
  *(_BYTE *)(result + 45) = 2;
  v6 = *((_WORD *)qword_F310 + ((a4 >> 14) & 3));
  *(_BYTE *)(result + 32) = v5;
  *(_BYTE *)(result + 81) = 1;
  *(_WORD *)(result + 24) = v6;
  *(_BYTE *)(result + 85) = 2;
  *(_QWORD *)(result + 48) = (a4 & 0x2000) != 0;
  v8 = (a4 >> 11) & 1;
  v9 = (a4 >> 7) & 7;
  if ( v5 == 2 )
  {
    v8 += 32;
    *(_BYTE *)(result + 121) = 1;
    *(_WORD *)(result + 86) = v9 + 32;
  }
  else
  {
    *(_WORD *)(result + 86) = v9;
    *(_BYTE *)(result + 121) = 1;
  }
  *(_BYTE *)(result + 125) = 2;
  *(_WORD *)(result + 126) = v8;
  return result;
}

