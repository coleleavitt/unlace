__int64 __fastcall sub_3F330(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v4 = a1[10];
  v5 = a1[9];
  if ( a1[11] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve();
    a1[9] = v8;
    v5 = v8;
    v4 = a1[10];
  }
  v6 = v5 + 144 * v4;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 120) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 56) = 0;
  *(_OWORD *)(v6 + 80) = 0;
  *(_OWORD *)(v6 + 104) = 0;
  *(_OWORD *)(v6 + 128) = 0;
  ++a1[10];
  sub_3EF50(v6, a2, dword_8C4A0);
  return 1;
}

