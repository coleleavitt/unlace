__int64 __fastcall sub_525A0(__int64 a1, unsigned int a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  unsigned __int64 v11; // r13
  int v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-70h]
  __int128 v18; // [rsp+10h] [rbp-68h]
  int v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int128 v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 1384);
  v22 = __readfsqword(0x28u);
  if ( a2 == -3 )
  {
    if ( !v6 )
      return -1;
    v9 = *(_QWORD *)(a1 + 1376);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 1376);
    v8 = v7 + 112 * v6;
    if ( v7 == v8 )
      return -1;
    while ( 1 )
    {
      v9 = v7;
      if ( a2 == *(_DWORD *)(v7 + 24) )
        break;
      v7 += 112;
      if ( v8 == v7 )
        return -1;
    }
  }
  if ( !v9 )
    return -1;
  v10 = *(_DWORD *)(a1 + 784);
  v16 = -2;
  v17 = -1;
  v18 = 0;
  if ( (unsigned __int8)sub_519A0(a1, a2, (__int64)&v16, v10, 0.0, a4, a5, a6) )
  {
    v11 = v17;
    if ( !*(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120) && *(__int64 *)(a1 + 944) > 0 && !(v17 >> 16) )
    {
      v13 = *(_DWORD *)(a1 + 1184);
      v19 = -2;
      v20 = -1;
      v21 = 0;
      if ( (unsigned __int8)sub_519A0(a1, a2, (__int64)&v19, v13, 0.0, a4, a5, a6) )
      {
        v14 = *(_QWORD *)(a1 + 24);
        v15 = v17 + 16 * v20;
        if ( v15 != v14 )
        {
          v14 &= v15;
          if ( v15 == -1 )
            v14 = -1;
        }
        v17 = v14;
      }
      if ( v19 >= -1 && v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      v11 = v17;
    }
  }
  else
  {
    v11 = 0;
  }
  if ( v16 >= -1 && v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v11;
}

