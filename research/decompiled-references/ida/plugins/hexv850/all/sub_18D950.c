__int64 __fastcall sub_18D950(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _DWORD *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( a4 )
  {
    sub_18D670(a1, (char *)a2);
    return 0;
  }
  else if ( *(_BYTE *)a2 == 4
         && (v5 = *(_DWORD **)(a2 + 8), *v5 == 12)
         && v5
         && sub_18D870((_QWORD *)a1, *(_DWORD **)(a2 + 8), (_BYTE *)(a1 + 160)) )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v7 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v6 + 1) )
    {
      v8 = qvector_reserve();
      *(_QWORD *)(a1 + 88) = v8;
      v7 = v8;
      v6 = *(_QWORD *)(a1 + 96);
    }
    *(_QWORD *)(v7 + 8 * v6) = v5;
    ++*(_QWORD *)(a1 + 96);
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  else
  {
    return 0;
  }
}

