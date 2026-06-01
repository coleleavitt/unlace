__int64 __fastcall sub_192510(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  _DWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  if ( a4 )
  {
    sub_192230(a1, (char *)a2);
    return 0;
  }
  else if ( *(_BYTE *)a2 == 4
         && (v6 = *(_DWORD **)(a2 + 8), *v6 == 12)
         && v6
         && sub_192430((_QWORD *)a1, *(_DWORD **)(a2 + 8), (_BYTE *)(a1 + 160), a5) )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v8 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v7 + 1) )
    {
      v9 = qvector_reserve(a1 + 88, v8, v7 + 1, 8);
      *(_QWORD *)(a1 + 88) = v9;
      v8 = v9;
      v7 = *(_QWORD *)(a1 + 96);
    }
    *(_QWORD *)(v8 + 8 * v7) = v6;
    ++*(_QWORD *)(a1 + 96);
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  else
  {
    return 0;
  }
}

