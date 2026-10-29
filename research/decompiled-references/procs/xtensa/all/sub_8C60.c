void __fastcall sub_8C60(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 0;
  *(_QWORD *)(a2 + 48) = (a3 >> 8) & 0xF;
}
