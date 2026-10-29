__int64 __fastcall sub_11C10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_23EE0(a1, 1, 0xFFFFFFFFLL);
  *(_QWORD *)a1 = &off_396C0;
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 112) = -1;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 176) = a2;
  *(_WORD *)(a1 + 185) = 255;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  result = free_debug_event();
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 112) = -1;
  *(_BYTE *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 64) = 10000;
  return result;
}

