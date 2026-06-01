unsigned __int64 __fastcall sub_2BB9C0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v7; // r14
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int128 v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v18 = 0;
    v19 = 0;
    if ( a2 < v2 )
    {
      v7 = a2;
      do
      {
        v8 = (__int64 *)(*a1 + 24 * v7);
        v9 = *v8;
        if ( *v8 )
        {
          v16 = v8[1];
          if ( v16 )
          {
            v10 = 0;
            v11 = 0;
            do
            {
              v12 = v9 + v10;
              ++v11;
              v10 += 112;
              sub_1166E0(v12 + 88);
              sub_1166E0(v12 + 72);
              sub_1166E0(v12 + 56);
              v9 = *v8;
            }
            while ( v16 != v11 );
          }
          v8[1] = 0;
          qfree();
        }
        ++v7;
      }
      while ( v2 != v7 );
      a1[1] = a2;
    }
    else
    {
      v3 = a1[2];
      if ( (unsigned __int64)&v18 < *a1 || (unsigned __int64)&v18 >= *a1 + 24 * v3 )
      {
        if ( v3 < a2 )
        {
          v15 = qvector_reserve();
          v2 = a1[1];
          *a1 = v15;
        }
        if ( v2 < a2 )
        {
          v4 = 24 * v2;
          do
          {
            ++v2;
            v5 = v4 + *a1;
            v4 += 24;
            *(_QWORD *)v5 = 0;
            *(_OWORD *)(v5 + 8) = 0;
          }
          while ( a2 != v2 );
        }
      }
      else
      {
        v21 = 0;
        v20 = 0;
        if ( v3 < a2 )
        {
          *a1 = qvector_reserve();
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v13 = 24 * v2;
          do
          {
            ++v2;
            v14 = v13 + *a1;
            v13 += 24;
            *(_QWORD *)v14 = 0;
            *(_OWORD *)(v14 + 8) = 0;
          }
          while ( a2 != v2 );
        }
      }
      a1[1] = a2;
    }
  }
  return v22 - __readfsqword(0x28u);
}

