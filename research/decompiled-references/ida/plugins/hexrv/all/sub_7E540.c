__int64 __fastcall sub_7E540(_QWORD *a1, __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // edx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  int v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  __int128 v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v3 = sub_79170(a1);
  v4 = 0;
  if ( v3 >= 0 )
  {
    v5 = a2[1];
    v6 = v3;
    if ( v3 != v5 )
    {
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      if ( v3 < v5 )
      {
        v14 = v3;
        do
        {
          v15 = *a2 + 40 * v14;
          if ( *(_QWORD *)(v15 + 16) )
          {
            *(_QWORD *)(v15 + 24) = 0;
            qfree();
          }
          ++v14;
        }
        while ( v14 < v5 );
        a2[1] = v6;
      }
      else
      {
        v7 = *a2;
        v8 = a2[2];
        if ( (unsigned __int64)&v18 < *a2 || (unsigned __int64)&v18 >= v7 + 40 * v8 )
        {
          if ( v8 < v6 )
          {
            v16 = qvector_reserve();
            v5 = a2[1];
            *a2 = v16;
          }
          if ( v5 < v6 )
          {
            v9 = 40 * v5;
            do
            {
              ++v5;
              v10 = v9 + *a2;
              v9 += 40;
              *(_QWORD *)v10 = 0;
              *(_QWORD *)(v10 + 8) = 0;
              *(_QWORD *)(v10 + 16) = 0;
              *(_OWORD *)(v10 + 24) = 0;
            }
            while ( v6 != v5 );
          }
        }
        else
        {
          if ( v8 < v6 )
          {
            v17 = qvector_reserve();
            v5 = a2[1];
            *a2 = v17;
          }
          if ( v5 < v6 )
          {
            v12 = 40 * v5;
            do
            {
              ++v5;
              v13 = v12 + *a2;
              v12 += 40;
              *(_QWORD *)v13 = 0;
              *(_QWORD *)(v13 + 8) = 0;
              *(_QWORD *)(v13 + 16) = 0;
              *(_OWORD *)(v13 + 24) = 0;
            }
            while ( v6 != v5 );
          }
        }
        a2[1] = v6;
      }
    }
    return 1;
  }
  return v4;
}

