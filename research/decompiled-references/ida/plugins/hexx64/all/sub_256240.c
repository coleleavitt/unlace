__int64 __fastcall sub_256240(__int64 a1, _QWORD **a2, __int64 a3, double a4)
{
  int v6; // edx
  __int64 result; // rax
  _QWORD *v8; // rbx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rsi
  __int64 v14; // rax

  v6 = *(_DWORD *)(a1 + 8);
  result = v6 & 2;
  if ( (v6 & 2) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    v12 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v11 + 1) )
    {
      v14 = qvector_reserve(a1 + 40, v12, v11 + 1, 16);
      *(_QWORD *)(a1 + 40) = v14;
      v12 = v14;
      v11 = *(_QWORD *)(a1 + 48);
    }
    v13 = (_QWORD *)(16 * v11 + v12);
    v13[1] = 0;
    ++*(_QWORD *)(a1 + 48);
    *v13 = a2;
    v9 = *(_DWORD *)(a1 + 8);
    v8 = *a2;
    LOBYTE(v6) = v9;
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
        if ( (v6 & 2) != 0 )
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL * *(_QWORD *)(a1 + 48) - 8) = v8;
        result = sub_255A80((__int64 *)a1, (__int64)(v8 + 2), a3, a4);
        v9 = *(_DWORD *)(a1 + 8);
        LOBYTE(v6) = v9;
        if ( (_DWORD)result )
          break;
        v8 = (_QWORD *)*v8;
        if ( v8 == a2 )
          goto LABEL_15;
      }
    }
    if ( (v9 & 2) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 48);
      if ( v10 )
        *(_QWORD *)(a1 + 48) = v10 - 1;
    }
  }
  else
  {
    v8 = *a2;
    if ( *a2 != a2 )
      goto LABEL_5;
  }
  return result;
}

