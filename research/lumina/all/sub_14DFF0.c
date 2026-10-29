__int64 *__fastcall sub_14DFF0(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, int a5, unsigned int a6)
{
  __int64 v8; // rbp
  __int64 *result; // rax
  __int16 v10; // r12
  __int64 v11; // r14
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-48h]
  int v18; // [rsp+Ch] [rbp-3Ch]

  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
  {
    v18 = a5;
    v17 = a3;
    v16 = sub_E2050((__int64 *)a1);
    a5 = v18;
    v8 = (__int64)v16;
    a3 = v17;
  }
  result = sub_14DEB0((_QWORD *)a1, (__int64)a2, a3, a5);
  if ( result )
  {
    v10 = 0;
    if ( *a2 )
      v10 = ((unsigned __int8)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) >> 13) ^ 1) & 1;
    v11 = result[2];
    v12 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v12;
    v13 = sub_E1710(v8, 47, a4, a6, v12);
    sub_DCC50(v8, v13, v11, 4294967292LL, v14, v15);
    result = (__int64 *)*(int *)(v8 + 144);
    if ( (int)result > 0 )
    {
      result = (__int64 *)(*(_QWORD *)(v8 + 136) + 24LL * (_QWORD)result);
      *((_WORD *)result - 11) = v10;
    }
  }
  return result;
}
