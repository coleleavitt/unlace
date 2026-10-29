__int64 __fastcall sub_23050(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebp
  int v8; // ecx
  __int64 v10; // rdi

  v5 = a2;
  v6 = a3;
  if ( (a3 & 0xFE00001) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 4);
    a2 = a3;
    sub_40E00(v10, a3, a3, a4, a5);
  }
  v8 = (v6 >> 9) & 0xF00 | (v6 >> 1 << 16) | get_dword(*(_QWORD *)(v5 + 4), a2, a3, a4, a5) & 0xF0FF;
  BYTE1(v8) &= 0xFu;
  return sub_42050(
           a1,
           *(_QWORD *)(v5 + 4),
           *(_QWORD *)(v5 + 12),
           (v6 >> 28 << 12) | v8,
           v6 - (unsigned int)*(_QWORD *)(v5 + 12),
           4,
           0,
           0,
           0);
}
