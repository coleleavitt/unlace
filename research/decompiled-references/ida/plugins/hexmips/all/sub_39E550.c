__int64 __fastcall sub_39E550(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v4; // eax
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax

  v4 = *(_DWORD *)(a1 + 44);
  if ( v4 != -2 )
    return (unsigned int)(v4 + 1);
  sub_253960(*(_QWORD *)(a1 + 24), a2, a3);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v7 == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v9 = *(_QWORD *)(v8 + 136) - 1;
    *(_DWORD *)(a1 + 44) = v9;
    return (unsigned int)(v9 + 1);
  }
  else
  {
    *(_QWORD *)(a1 + 40) = -1;
    sub_386E60(v8, v7, (_DWORD *)(a1 + 40), (_DWORD *)(a1 + 44), a4);
    return (unsigned int)(*(_DWORD *)(a1 + 44) + 1);
  }
}

