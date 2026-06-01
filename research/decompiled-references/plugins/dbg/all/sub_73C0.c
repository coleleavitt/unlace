_BYTE *__fastcall sub_73C0(_QWORD *a1, unsigned int a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // r8

  if ( a4 <= 0 || (unsigned __int64)a2 >= a1[8] )
    return nullptr;
  v7 = a1[7] + 24LL * a2;
  if ( *(_DWORD *)v7 )
  {
    v9 = a4 - 1;
    if ( (unsigned __int64)(a4 - 1) > 8 )
      v9 = 8;
    if ( (unsigned int)v9 >= 8 )
    {
      *(_QWORD *)a3 = *(_QWORD *)v7;
      *(_QWORD *)&a3[(unsigned int)v9 - 8] = *(_QWORD *)(v7 + (unsigned int)v9 - 8);
      v10 = (unsigned __int64)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v7 - (_QWORD)&a3[-v10];
      if ( (((_DWORD)v9 + (_DWORD)a3 - (_DWORD)v10) & 0xFFFFFFF8) >= 8 )
      {
        v12 = 0;
        do
        {
          v13 = v12;
          v12 += 8;
          *(_QWORD *)(v10 + v13) = *(_QWORD *)(v11 + v13);
        }
        while ( v12 < (((_DWORD)v9 + (_DWORD)a3 - (_DWORD)v10) & 0xFFFFFFF8) );
      }
    }
    else if ( (v9 & 4) != 0 )
    {
      *(_DWORD *)a3 = *(_DWORD *)v7;
      *(_DWORD *)&a3[(unsigned int)v9 - 4] = *(_DWORD *)(v7 + (unsigned int)v9 - 4);
    }
    else if ( (_DWORD)v9 )
    {
      *a3 = *(_BYTE *)v7;
      if ( (v9 & 2) != 0 )
        *(_WORD *)&a3[(unsigned int)v9 - 2] = *(_WORD *)(v7 + (unsigned int)v9 - 2);
    }
    a3[v9] = 0;
    return a3;
  }
  else
  {
    sub_6500(a1, a3, a4, *(_DWORD *)(v7 + 4), 0, a6);
    return a3;
  }
}
