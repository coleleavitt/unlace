__int64 __fastcall sub_D95F0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 *v6; // rsi
  __int64 *v7; // r14
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  bool v11; // dl

  v3 = a2;
  v4 = *(__int64 **)(a1 + 72);
  v5 = *v4;
  v6 = (__int64 *)v4[1];
  v7 = *(__int64 **)(*(_QWORD *)(*v4 + 16) + 32LL);
  result = sub_D9750(*v4, v6, v3);
  if ( (_DWORD)result )
    return result;
  v9 = *((int *)v4 + 6);
  if ( *((_DWORD *)v4 + 8) )
  {
    result = sub_D24E0(v7, *((int *)v4 + 6), v4 + 5);
    if ( (_DWORD)result )
      return result;
    v6 = (__int64 *)v9;
    result = sub_D24E0(v7, v9, v4 + 7);
    if ( (_DWORD)result )
      return result;
    result = *((unsigned int *)v4 + 8);
    v11 = 1;
    if ( !(_DWORD)result )
      goto LABEL_5;
  }
  else
  {
    v10 = *(_QWORD *)(v5 + 88);
    if ( !v10 )
    {
      v6 = *(__int64 **)(v5 + 96);
      result = sub_D24E0(v7, (__int64)v6, (__int64 *)(v5 + 88));
      *(_QWORD *)(v5 + 96) = 0;
      if ( (_DWORD)result )
        return result;
      v10 = *(_QWORD *)(v5 + 88);
    }
    v4[7] = v10;
    v11 = 1;
    v4[2] = *(_QWORD *)(v5 + 96);
    *(_QWORD *)(v5 + 96) += v9;
    result = *((unsigned int *)v4 + 8);
    if ( !(_DWORD)result )
      goto LABEL_5;
  }
  result = sub_D8F20((__int64)v4, (__int64)v6);
  v11 = (_DWORD)result == 0;
LABEL_5:
  if ( a2 != 1 && v11 )
    return sub_D90E0(a1, v6);
  return result;
}
