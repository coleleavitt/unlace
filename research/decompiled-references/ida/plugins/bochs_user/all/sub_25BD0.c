__int64 __fastcall sub_25BD0(__int64 a1, unsigned __int16 a2, _QWORD *a3)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v5 = *(_DWORD *)(a1 + 1392);
  if ( (v5 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 808) = 0;
    *(_DWORD *)(a1 + 1392) = v5 | 1;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 800);
  v8 = v7 + 12LL * *(_QWORD *)(a1 + 808);
  if ( !(12LL * *(_QWORD *)(a1 + 808)) )
  {
LABEL_3:
    result = sub_27060(a1, a2, a3);
    if ( !(_DWORD)result )
    {
      v9 = *(_QWORD *)(a1 + 808);
      v10 = *(_QWORD *)(a1 + 800);
      v11 = v9 + 1;
      if ( *(_QWORD *)(a1 + 816) < (unsigned __int64)(v9 + 1) )
      {
        v10 = qvector_reserve();
        v9 = *(_QWORD *)(a1 + 808);
        *(_QWORD *)(a1 + 800) = v10;
        v11 = v9 + 1;
      }
      *(_QWORD *)(a1 + 808) = v11;
      v12 = v10 + 12 * v9;
      *(_WORD *)(v12 + 8) = a2;
      *(_QWORD *)v12 = *a3;
      return 0;
    }
    return result;
  }
  while ( *(_WORD *)(v7 + 8) != a2 )
  {
    v7 += 12;
    if ( v8 == v7 )
      goto LABEL_3;
  }
  *a3 = *(_QWORD *)v7;
  return 0;
}

