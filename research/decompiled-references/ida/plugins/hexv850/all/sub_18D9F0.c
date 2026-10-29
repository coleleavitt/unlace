bool __fastcall sub_18D9F0(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // rax

  if ( *(_QWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree();
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  if ( sub_18D870((_QWORD *)a1, a2, a3) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v6 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v5 + 1) )
    {
      v8 = qvector_reserve();
      *(_QWORD *)(a1 + 88) = v8;
      v6 = v8;
      v5 = *(_QWORD *)(a1 + 96);
    }
    *(_QWORD *)(v6 + 8 * v5) = a2;
    ++*(_QWORD *)(a1 + 96);
    sub_18D670(a1, a2 + 64);
    return *(_QWORD *)(a1 + 96) != 0;
  }
  else
  {
    *(_QWORD *)(a1 + 160) = *(_QWORD *)a3;
    *(_BYTE *)(a1 + 168) = a3[8];
    sub_119D40(a2, a1);
    return *(_QWORD *)(a1 + 96) != 0;
  }
}

