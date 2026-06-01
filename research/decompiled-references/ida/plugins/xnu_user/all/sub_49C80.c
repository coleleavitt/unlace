__int64 __fastcall sub_49C80(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v4 = a1[10];
  v5 = a1[9];
  if ( a1[11] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve();
    v4 = a1[10];
    a1[9] = v8;
    v5 = v8;
  }
  v6 = v5 + 56 * v4;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  ++a1[10];
  *(_DWORD *)(v6 + 48) = -1;
  sub_49750(v6, a2, dword_98620);
  return 1;
}

