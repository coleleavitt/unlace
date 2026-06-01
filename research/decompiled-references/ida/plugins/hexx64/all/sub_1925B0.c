bool __fastcall sub_1925B0(__int64 a1, _BYTE *a2, _BYTE *a3, double a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v11; // rax

  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  if ( sub_192430((_QWORD *)a1, a2, a3, a4) )
  {
    v8 = *(_QWORD *)(a1 + 96);
    v9 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v8 + 1) )
    {
      v11 = qvector_reserve(a1 + 88, v9, v8 + 1, 8);
      *(_QWORD *)(a1 + 88) = v11;
      v9 = v11;
      v8 = *(_QWORD *)(a1 + 96);
    }
    *(_QWORD *)(v9 + 8 * v8) = a2;
    ++*(_QWORD *)(a1 + 96);
    sub_192230(a1, a2 + 64);
    return *(_QWORD *)(a1 + 96) != 0;
  }
  else
  {
    *(_QWORD *)(a1 + 160) = *(_QWORD *)a3;
    *(_BYTE *)(a1 + 168) = a3[8];
    sub_11E900(a2, a1);
    return *(_QWORD *)(a1 + 96) != 0;
  }
}

