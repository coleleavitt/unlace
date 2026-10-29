__int64 __fastcall sub_3F5B0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( a1[5] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve();
    v4 = a1[4];
    a1[3] = v8;
    v5 = v8;
  }
  v6 = v5 + 136 * v4;
  *(_QWORD *)(v6 + 24) = -1;
  *(_QWORD *)(v6 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 112) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 72) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 120) = 0;
  ++a1[4];
  *(_QWORD *)(v6 + 24) = -1;
  *(_DWORD *)(v6 + 32) = -1;
  sub_3EF50(v6, a2, dword_8C6A0);
  return 1;
}

