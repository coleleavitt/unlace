__int64 __fastcall sub_1D690(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( a1[5] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve();
    a1[3] = v8;
    v5 = v8;
    v4 = a1[4];
  }
  v6 = v5 + 48 * v4;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  ++a1[4];
  sub_1CF50(v6, a2, dword_688E0);
  return 1;
}

