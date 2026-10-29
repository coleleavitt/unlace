__int64 __fastcall sub_19D40(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r14d
  unsigned int v5; // ebp
  _OWORD *v6; // rsi
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  _OWORD *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  _DWORD v18[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 80);
  v19 = __readfsqword(0x28u);
  if ( !v2 )
  {
    if ( (unsigned __int8)sub_8D860(a2, 0, 0, 1) )
    {
      v13 = a1[1];
      v14 = *a1;
      if ( a1[2] < (unsigned __int64)(v13 + 1) )
      {
        v17 = qvector_reserve(a1, v14, v13 + 1, 28);
        v13 = a1[1];
        *a1 = v17;
        v14 = v17;
      }
      v15 = (_OWORD *)(v14 + 28 * v13);
      *v15 = 0;
      *(_OWORD *)((char *)v15 + 12) = 0;
      ++a1[1];
      v16 = sub_82460(a2);
      sub_13340(a2, (__int64)v15, *(_DWORD *)(v16 + 4), *(_DWORD *)(v16 + 8));
      return 1;
    }
    return 0;
  }
  v4 = v2;
  v5 = 0;
  if ( (int)v2 > 0 )
  {
    while ( (unsigned __int8)sub_821C0(a2, v5, v18) && (unsigned __int8)sub_8D860(a2, v5, 0, 1) )
    {
      v9 = a1[1];
      v10 = *a1;
      if ( a1[2] < (unsigned __int64)(v9 + 1) )
      {
        v11 = qvector_reserve(a1, v10, v9 + 1, 28);
        v9 = a1[1];
        *a1 = v11;
        v10 = v11;
      }
      ++v5;
      v6 = (_OWORD *)(v10 + 28 * v9);
      *v6 = 0;
      v7 = v18[1];
      v8 = v18[0];
      *(_OWORD *)((char *)v6 + 12) = 0;
      ++a1[1];
      sub_13340(a2, (__int64)v6, v8, v7);
      if ( v4 == v5 )
        return 1;
    }
    return 0;
  }
  return 1;
}
