__int64 __fastcall sub_82A00(_QWORD *a1, __int64 *a2, double a3)
{
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-58h] BYREF
  int v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v4 = sub_7D4F0(a1, a3);
  v5 = 0;
  if ( v4 >= 0 )
  {
    v6 = a2[1];
    v7 = v4;
    if ( v4 != v6 )
    {
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      if ( v4 < v6 )
      {
        v15 = v4;
        do
        {
          v16 = *a2 + 40 * v15;
          v17 = *(_QWORD *)(v16 + 16);
          if ( v17 )
          {
            *(_QWORD *)(v16 + 24) = 0;
            qfree(v17);
          }
          ++v15;
        }
        while ( v15 < v6 );
        a2[1] = v7;
      }
      else
      {
        v8 = *a2;
        v9 = a2[2];
        if ( (unsigned __int64)&v20 < *a2 || (unsigned __int64)&v20 >= v8 + 40 * v9 )
        {
          if ( v9 < v7 )
          {
            v18 = qvector_reserve((__int64)a2, v8, v7, 40);
            v6 = a2[1];
            *a2 = v18;
          }
          if ( v6 < v7 )
          {
            v10 = 40 * v6;
            do
            {
              ++v6;
              v11 = v10 + *a2;
              v10 += 40;
              *(_QWORD *)v11 = 0;
              *(_QWORD *)(v11 + 8) = 0;
              *(_QWORD *)(v11 + 16) = 0;
              *(_OWORD *)(v11 + 24) = 0;
            }
            while ( v7 != v6 );
          }
        }
        else
        {
          if ( v9 < v7 )
          {
            v19 = qvector_reserve((__int64)a2, v8, v7, 40);
            v6 = a2[1];
            *a2 = v19;
          }
          if ( v6 < v7 )
          {
            v13 = 40 * v6;
            do
            {
              ++v6;
              v14 = v13 + *a2;
              v13 += 40;
              *(_QWORD *)v14 = 0;
              *(_QWORD *)(v14 + 8) = 0;
              *(_QWORD *)(v14 + 16) = 0;
              *(_OWORD *)(v14 + 24) = 0;
            }
            while ( v7 != v6 );
          }
        }
        a2[1] = v7;
      }
    }
    return 1;
  }
  return v5;
}

