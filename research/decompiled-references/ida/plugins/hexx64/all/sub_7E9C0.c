__int64 __fastcall sub_7E9C0(__int64 a1, _QWORD *a2, double a3)
{
  int v5; // eax
  int v6; // r13d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 *v9; // rax
  __int64 *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // r13
  __int64 *v16; // r12
  int *v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 *v21; // rsi
  unsigned __int64 v22; // r12
  __int64 *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v5 = sub_7D4F0(a2, a3);
  if ( v5 < 0 )
    return 0;
  v6 = v5;
  v7 = v5;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = *(__int64 **)(a1 + 72);
  v10 = v9;
  if ( v7 != v8 )
  {
    a3 = 0.0;
    v27 = 0;
    v28 = 0;
    if ( v7 < v8 )
    {
      v22 = v7;
      do
      {
        v23 = &v9[3 * v22];
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24);
          v9 = *(__int64 **)(a1 + 72);
        }
        ++v22;
      }
      while ( v22 < v8 );
      *(_QWORD *)(a1 + 80) = v7;
      v10 = v9;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 88);
      v12 = a1 + 72;
      if ( &v27 < v9 || &v27 >= &v9[3 * v11] )
      {
        if ( v11 < v7 )
        {
          v25 = qvector_reserve(v12, (__int64)v9, v7, 24);
          v8 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v25;
          v10 = (__int64 *)v25;
        }
        if ( v8 < v7 )
        {
          a3 = 0.0;
          v13 = 3 * v8;
          do
          {
            v14 = &v10[v13];
            ++v8;
            v13 += 3;
            *v14 = 0;
            *(_OWORD *)(v14 + 1) = 0;
            v10 = *(__int64 **)(a1 + 72);
          }
          while ( v7 != v8 );
        }
      }
      else
      {
        if ( v11 < v7 )
        {
          v26 = qvector_reserve(v12, (__int64)v9, v7, 24);
          v8 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v26;
          v10 = (__int64 *)v26;
        }
        if ( v8 < v7 )
        {
          a3 = 0.0;
          v20 = 3 * v8;
          do
          {
            v21 = &v10[v20];
            ++v8;
            v20 += 3;
            *v21 = 0;
            *(_OWORD *)(v21 + 1) = 0;
            v10 = *(__int64 **)(a1 + 72);
          }
          while ( v7 != v8 );
        }
      }
      *(_QWORD *)(a1 + 80) = v7;
    }
  }
  *(_DWORD *)(a1 + 144) = v6;
  v15 = v10;
  v16 = &v10[3 * v7];
  if ( v16 != v10 )
  {
    while ( (unsigned __int8)sub_7D530(a2, v15, a3) )
    {
      v17 = (int *)*v15;
      v18 = *v15 + 4 * v15[1];
      if ( v18 != *v15 )
      {
        while ( *v17 >= 0 && *v17 < *(_DWORD *)(a1 + 144) )
        {
          if ( (int *)v18 == ++v17 )
            goto LABEL_19;
        }
        return 0;
      }
LABEL_19:
      v15 += 3;
      if ( v16 == v15 )
        return 1;
    }
    return 0;
  }
  return 1;
}

