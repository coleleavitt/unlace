__int64 __fastcall sub_2A7C0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r15
  unsigned __int64 i; // rbx
  _OWORD *v6; // rsi
  unsigned int *v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  _OWORD *v16; // rsi
  __int64 v17; // rax

  v3 = *(_QWORD *)(a2 + 80);
  if ( v3 )
  {
    if ( (int)v3 > 0 )
    {
      v4 = (unsigned int)(v3 - 1);
      for ( i = 0; i < v3; ++i )
      {
        v7 = (unsigned int *)(*(_QWORD *)(a2 + 72) + 20 * i);
        v8 = *v7;
        v9 = v7[1];
        if ( !sub_25EF0(a2, i, 0, 1) )
          break;
        v10 = a1[1];
        v11 = *a1;
        if ( a1[2] < (unsigned __int64)(v10 + 1) )
        {
          v12 = qvector_reserve();
          v10 = a1[1];
          *a1 = v12;
          v11 = v12;
        }
        v6 = (_OWORD *)(v11 + 28 * v10);
        *v6 = 0;
        *(_OWORD *)((char *)v6 + 12) = 0;
        ++a1[1];
        sub_2A700(a2, (__int64)v6, (__int64 (*)())v8, (__int64 (*)())v9);
        if ( i == v4 )
          return 1;
        v3 = *(_QWORD *)(a2 + 80);
      }
      return 0;
    }
    return 1;
  }
  if ( !sub_25EF0(a2, 0, 0, 1) )
    return 0;
  v14 = a1[1];
  v15 = *a1;
  if ( a1[2] < (unsigned __int64)(v14 + 1) )
  {
    v17 = qvector_reserve();
    v14 = a1[1];
    *a1 = v17;
    v15 = v17;
  }
  v16 = (_OWORD *)(v15 + 28 * v14);
  *v16 = 0;
  *(_OWORD *)((char *)v16 + 12) = 0;
  ++a1[1];
  if ( *(_QWORD *)(a2 + 120) != -1 )
  {
    sub_2A700(a2, (__int64)v16, (__int64 (*)())*(unsigned int *)(a2 + 168), (__int64 (*)())*(unsigned int *)(a2 + 172));
    return 1;
  }
  sub_11CF0();
  return sub_2A960();
}

