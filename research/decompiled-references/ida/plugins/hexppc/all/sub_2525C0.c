__int64 __fastcall sub_2525C0(__int64 a1, _QWORD **a2, __int64 a3)
{
  int v5; // edx
  __int64 result; // rax
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rsi
  __int64 v13; // rax

  v5 = *(_DWORD *)(a1 + 8);
  result = v5 & 2;
  if ( (v5 & 2) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v10 + 1) )
    {
      v13 = qvector_reserve();
      *(_QWORD *)(a1 + 40) = v13;
      v11 = v13;
      v10 = *(_QWORD *)(a1 + 48);
    }
    v12 = (_QWORD *)(16 * v10 + v11);
    v12[1] = 0;
    ++*(_QWORD *)(a1 + 48);
    *v12 = a2;
    v8 = *(_DWORD *)(a1 + 8);
    v7 = *a2;
    LOBYTE(v5) = v8;
    if ( a2 == *a2 )
    {
LABEL_15:
      result = 0;
    }
    else
    {
      while ( 1 )
      {
LABEL_5:
        if ( (v5 & 2) != 0 )
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL * *(_QWORD *)(a1 + 48) - 8) = v7;
        result = sub_251E00((__int64 *)a1, (__int64)(v7 + 2), a3);
        v8 = *(_DWORD *)(a1 + 8);
        LOBYTE(v5) = v8;
        if ( (_DWORD)result )
          break;
        v7 = (_QWORD *)*v7;
        if ( v7 == a2 )
          goto LABEL_15;
      }
    }
    if ( (v8 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 48);
      if ( v9 )
        *(_QWORD *)(a1 + 48) = v9 - 1;
    }
  }
  else
  {
    v7 = *a2;
    if ( *a2 != a2 )
      goto LABEL_5;
  }
  return result;
}

