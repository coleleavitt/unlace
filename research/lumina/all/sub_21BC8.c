__int64 __fastcall sub_21BC8(__int64 a1, int a2, int a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned int v9; // r13d
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  int v14; // r12d
  unsigned __int64 v15; // rbx
  unsigned int v16; // r12d
  __int64 v18; // [rsp+8h] [rbp-70h]
  unsigned __int64 v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+2Ch] [rbp-4Ch]
  _QWORD *v23; // [rsp+30h] [rbp-48h]
  _QWORD *v24; // [rsp+38h] [rbp-40h]

  v6 = 0;
  v18 = *(_QWORD *)(a1 + 80);
  v7 = v18 + *(unsigned int *)(*(_QWORD *)(a1 + 72) + 56LL);
  v8 = 0;
  v9 = 0;
  v19 = v18 + *(unsigned __int8 *)(a1 + 9) + *(unsigned __int8 *)(a1 + 10) + 8;
  v10 = a2 + a3;
  v11 = 0;
  v21 = v10;
  v20 = a2;
  while ( v21 > a2 + (int)v6 )
  {
    v12 = v6 + v20;
    v13 = *(_QWORD *)(*a4 + 8 * (v6 + v20));
    if ( v19 <= v13 && v7 > v13 )
    {
      v14 = *(unsigned __int16 *)(*a5 + 2 * v12);
      v15 = v13 + *(unsigned __int16 *)(*a5 + 2 * v12);
      if ( v15 == v8 )
      {
        v14 += v11;
      }
      else
      {
        if ( v8 )
        {
          v24 = a5;
          v23 = a4;
          v22 = a2;
          sub_E93B0(a1, (unsigned __int16)(v8 - v18), (unsigned __int16)v11);
          a5 = v24;
          a4 = v23;
          a2 = v22;
        }
        if ( v7 < v15 )
          return 0;
      }
      ++v9;
      v11 = v14;
      v8 = v13;
    }
    ++v6;
  }
  v16 = v9;
  if ( v8 )
    sub_E93B0(a1, (unsigned __int16)(v8 - v18), (unsigned __int16)v11);
  return v16;
}
