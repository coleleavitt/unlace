__int64 *__fastcall sub_11D550(__int64 a1, int a2, int a3, char a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // r13d
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdi
  __int64 *result; // rax
  _OWORD *v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-48h]
  char v15; // [rsp+Ch] [rbp-3Ch]
  char v16; // [rsp+Ch] [rbp-3Ch]
  char v17; // [rsp+Ch] [rbp-3Ch]

  v6 = *(_QWORD *)(a1 + 104);
  if ( a2 > 0 )
    v6 += 56LL * (*(_DWORD *)(a1 + 36) - a2);
  v7 = a2;
  v8 = 8 * (a3 + 14);
  v14 = a3 + 14LL;
  if ( !a4 )
    v8 += 296;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * a2);
  if ( v9 )
  {
    v15 = a4;
    sub_11D2F0((__int64 *)a1, v9);
    a4 = v15;
    *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v7) = 0;
  }
  v10 = *(_DWORD *)(v6 + 32);
  if ( v10 >= v8 )
  {
    result = *(__int64 **)(v6 + 40);
  }
  else
  {
    v11 = *(_QWORD *)(v6 + 24);
    if ( v10 > 0 )
    {
      v17 = a4;
      sub_C9250(v11, *(_QWORD **)(v6 + 40));
      v11 = *(_QWORD *)(v6 + 24);
      a4 = v17;
    }
    v16 = a4;
    result = sub_DBFF0(v11, v8);
    *(_QWORD *)(v6 + 40) = result;
    *(_QWORD *)(v6 + 8) = result;
    a4 = v16;
    if ( !result )
    {
      *(_DWORD *)(v6 + 32) = 0;
      return result;
    }
    *(_DWORD *)(v6 + 32) = v8;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v7) = result;
  *((_WORD *)result + 32) = a3;
  *(_OWORD *)result = 0;
  result[10] = (__int64)result + 4 * a3 + 104;
  *(_BYTE *)result = a4;
  *((_OWORD *)result + 1) = 0;
  if ( !a4 )
  {
    v13 = (_OWORD *)(*(_QWORD *)(v6 + 8) + 8 * v14);
    result[5] = (__int64)v13;
    *v13 = 0;
    v13[1] = 0;
  }
  return result;
}
