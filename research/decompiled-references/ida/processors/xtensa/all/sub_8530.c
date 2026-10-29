_BYTE *__fastcall sub_8530(__int64 a1, _BYTE *a2, unsigned int a3)
{
  _BYTE *result; // rax
  int v4; // esi
  unsigned __int8 v5; // cl
  __int64 v6; // rdx

  a2[41] = 1;
  result = a2;
  a2[45] = 0;
  a2[81] = 5;
  v4 = (a3 >> 8) & 0x10;
  result[85] = 0;
  result[121] = 7;
  *((_WORD *)result + 23) = BYTE1(a3) & 0xF;
  v5 = a3;
  v6 = *((_QWORD *)result + 2) + SBYTE2(a3);
  result[125] = 0;
  *((_QWORD *)result + 11) = (unsigned __int8)(v4 | (v5 >> 4));
  *((_QWORD *)result + 17) = *(_QWORD *)(a1 + 16) & (v6 + 4);
  return result;
}

