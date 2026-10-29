__int64 __fastcall sub_26E20(__int64 a1, char a2, __int64 a3)
{
  signed int v5; // r13d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  v5 = *(_DWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 8) && v5 >= 0 )
  {
    v11 = qtime64();
    v6 = sub_24F60(v11, v5);
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v7 + 1) )
  {
    v12 = qvector_reserve();
    *(_QWORD *)(a1 + 32) = v12;
    v8 = v12;
    v7 = *(_QWORD *)(a1 + 40);
  }
  result = 32 * v7;
  v10 = result + v8;
  *(_QWORD *)v10 = a3;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = v6;
  *(_BYTE *)(v10 + 24) = a2;
  ++*(_QWORD *)(a1 + 40);
  return result;
}

