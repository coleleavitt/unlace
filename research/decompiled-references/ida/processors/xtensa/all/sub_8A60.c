__int64 __fastcall sub_8A60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int16 v4; // cx
  __int16 v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  *(_BYTE *)(a2 + 41) = 1;
  result = a2;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
  v4 = a3;
  v5 = *(_WORD *)(a2 + 24);
  v6 = SBYTE2(a3);
  v7 = v4 >> 12;
  if ( v5 == 26 || v5 == 21 )
    v8 = dword_134E0[v7];
  else
    v8 = dword_13520[v7];
  v9 = *(_QWORD *)(result + 16) + v6;
  *(_BYTE *)(result + 81) = 5;
  *(_BYTE *)(result + 85) = 2;
  *(_QWORD *)(result + 88) = v8;
  *(_BYTE *)(result + 121) = 7;
  *(_BYTE *)(result + 125) = 0;
  *(_QWORD *)(result + 136) = *(_QWORD *)(a1 + 16) & (v9 + 4);
  return result;
}

