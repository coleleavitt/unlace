__int64 __fastcall sub_3F720(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v4 = a1[8];
  v5 = a1[7];
  if ( a1[9] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve();
    a1[7] = v8;
    v5 = v8;
    v4 = a1[8];
  }
  v6 = v5 + 32 * v4;
  *(_QWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  ++a1[8];
  *(_QWORD *)(v6 + 24) = 0;
  sub_3EF50(v6, a2, dword_8C840);
  return 1;
}

