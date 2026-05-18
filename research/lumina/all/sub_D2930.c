__int64 __fastcall sub_D2930(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 result; // rax
  __int64 *v8; // r15
  __int64 v9; // rdx
  int v10; // r13d

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 40) <= (int)a2 )
  {
    v10 = a2 + 1;
    v5 = sub_D2640(*(_QWORD *)(a1 + 48), 8LL * ((int)a2 + 1));
    if ( !v5 )
    {
      *a3 = 0;
      return 7;
    }
    a2 = 0;
    memset((void *)(v5 + 8LL * *(int *)(a1 + 40)), 0, 8LL * (v10 - *(_DWORD *)(a1 + 40)));
    *(_QWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 40) = v10;
  }
  v6 = 8LL * v4;
  if ( *(_BYTE *)(a1 + 63) == 2 )
  {
    *(_QWORD *)(v5 + 8LL * v4) = sub_D2260(0x8000u, a2);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v4);
    result = v9 == 0 ? 7 : 0;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 104LL))(
               *(_QWORD *)(a1 + 8),
               (unsigned int)v4,
               0x8000,
               *(unsigned __int8 *)(a1 + 64),
               v5 + v6);
    if ( (_DWORD)result )
    {
      v8 = (__int64 *)(*(_QWORD *)(a1 + 48) + v6);
      if ( (_BYTE)result == 8 )
      {
        *(_BYTE *)(a1 + 66) |= 2u;
        v9 = *v8;
        if ( (_DWORD)result == 8 )
          result = 0;
      }
      else
      {
        v9 = *v8;
      }
    }
    else if ( v4 > 0 && qword_241610 && (result = qword_241610(600), (_DWORD)result) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v4);
      result = 7;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v4);
    }
  }
  *a3 = v9;
  return result;
}
