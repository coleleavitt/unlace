unsigned __int64 __fastcall sub_232C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rbp
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  _QWORD *v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v4 = a1[10];
  v5 = a1[9];
  v25 = __readfsqword(0x28u);
  v7 = v5;
  if ( a2 + 1 >= v4 )
  {
    v8 = a2 + 2;
    if ( a2 + 2 != v4 )
    {
      v23 = 0;
      v24 = 0;
      if ( a2 + 2 < v4 )
      {
        v21 = a2 + 2;
        do
        {
          v22 = (_QWORD *)(v5 + 24 * v21);
          if ( *v22 )
          {
            v22[1] = 0;
            qfree();
            v5 = a1[9];
          }
          ++v21;
        }
        while ( v21 < v4 );
        a1[10] = v8;
        v7 = v5;
      }
      else
      {
        v9 = a1[11];
        if ( (unsigned __int64)&v23 < v5 || (unsigned __int64)&v23 >= v5 + 24 * v9 )
        {
          if ( v9 < v8 )
          {
            v7 = qvector_reserve();
            v4 = a1[10];
            a1[9] = v7;
          }
          if ( v4 < v8 )
          {
            v10 = 24 * v4;
            do
            {
              v11 = v10 + v7;
              ++v4;
              v10 += 24;
              *(_QWORD *)v11 = 0;
              *(_OWORD *)(v11 + 8) = 0;
              v7 = a1[9];
            }
            while ( v8 != v4 );
          }
        }
        else
        {
          if ( v9 < v8 )
          {
            v7 = qvector_reserve();
            v4 = a1[10];
            a1[9] = v7;
          }
          if ( v4 < v8 )
          {
            v17 = 24 * v4;
            do
            {
              v18 = v17 + v7;
              ++v4;
              v17 += 24;
              *(_QWORD *)v18 = 0;
              *(_OWORD *)(v18 + 8) = 0;
              v7 = a1[9];
            }
            while ( v8 != v4 );
          }
        }
        a1[10] = v8;
      }
    }
  }
  v12 = (__int64 *)(v7 + 24 * (a2 + 1));
  v13 = v12[1];
  v14 = (_QWORD *)(*v12 + 8 * v13);
  if ( (_QWORD *)*v12 == v14 )
    goto LABEL_17;
  v15 = (_QWORD *)*v12;
  while ( *v15 != a3 )
  {
    if ( v14 == ++v15 )
      goto LABEL_17;
  }
  if ( v14 == v15 )
  {
LABEL_17:
    if ( v12[2] < (unsigned __int64)(v13 + 1) )
    {
      v19 = qvector_reserve();
      v20 = v12[1];
      *v12 = v19;
      v14 = (_QWORD *)(v19 + 8 * v20);
    }
    *v14 = a3;
    ++v12[1];
  }
  return v25 - __readfsqword(0x28u);
}
