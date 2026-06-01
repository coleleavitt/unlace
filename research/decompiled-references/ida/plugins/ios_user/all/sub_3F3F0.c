__int64 __fastcall sub_3F3F0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v4 = a1[13];
  v5 = a1[12];
  if ( a1[14] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve();
    a1[12] = v8;
    v5 = v8;
    v4 = a1[13];
  }
  v6 = v5 + 48 * v4;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  ++a1[13];
  sub_3EF50(v6, a2, dword_8C560);
  return 1;
}

