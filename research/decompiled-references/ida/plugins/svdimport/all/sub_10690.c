__int64 __fastcall sub_10690(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  v5 = a1[2];
  v6 = a1[1];
  if ( a1[3] < (unsigned __int64)(v5 + 1) )
  {
    v9 = qvector_reserve();
    a1[1] = v9;
    v6 = v9;
    v5 = a1[2];
  }
  result = 48 * v5;
  v8 = result + v6;
  *(_OWORD *)v8 = 0;
  *(_BYTE *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 32) = 0;
  ++a1[2];
  *(_QWORD *)v8 = a2;
  *(_QWORD *)(v8 + 8) = a3;
  *(_BYTE *)(v8 + 16) = 1;
  return result;
}

