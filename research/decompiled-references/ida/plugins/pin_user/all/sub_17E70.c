unsigned __int64 __fastcall sub_17E70(unsigned __int64 *a1, int a2, void *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // eax
  size_t v9; // r12
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  int v15; // eax
  size_t v16; // r12
  void *v17; // rax
  void *v18; // rsi
  bool v19; // cc
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+0h] [rbp-78h] BYREF
  void *src; // [rsp+8h] [rbp-70h]
  size_t n[2]; // [rsp+10h] [rbp-68h]
  int v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+30h] [rbp-48h] BYREF
  void *v27; // [rsp+38h] [rbp-40h]
  size_t v28[2]; // [rsp+40h] [rbp-38h]
  int v29; // [rsp+50h] [rbp-28h]
  unsigned __int64 v30; // [rsp+58h] [rbp-20h]

  v3 = a1[2];
  v30 = __readfsqword(0x28u);
  v25 = a2;
  v5 = *a1;
  v22 = -2;
  src = a3;
  *(_OWORD *)n = 0;
  if ( (unsigned __int64)&v22 >= v5 && (unsigned __int64)&v22 < v5 + 40 * v3 )
  {
    v29 = a2;
    v13 = a1[1];
    v27 = a3;
    v26 = -2;
    *(_OWORD *)v28 = 0;
    if ( v3 < v13 + 1 )
    {
      v21 = qvector_reserve();
      *a1 = v21;
      v5 = v21;
      v13 = a1[1];
    }
    v14 = v5 + 40 * v13;
    *(_DWORD *)v14 = -2;
    *(_QWORD *)(v14 + 24) = 0;
    *(_OWORD *)(v14 + 8) = 0;
    if ( (int *)v14 != &v26 )
    {
      v15 = v26;
      if ( v26 < -1 )
      {
        *(_QWORD *)(v14 + 8) = v27;
      }
      else
      {
        *(_QWORD *)(v14 + 8) = 0;
        *(_OWORD *)(v14 + 16) = 0;
        v16 = v28[0];
        if ( v28[0] )
        {
          v17 = (void *)qalloc_or_throw();
          *(_QWORD *)(v14 + 8) = v17;
          v18 = v27;
          *(_QWORD *)(v14 + 24) = v16;
          memcpy(v17, v18, v16);
          *(_QWORD *)(v14 + 16) = v16;
          v15 = v26;
        }
      }
      *(_DWORD *)v14 = v15;
    }
    v19 = v26 < -1;
    *(_DWORD *)(v14 + 32) = v29;
    if ( !v19 && v27 )
    {
      v28[0] = 0;
      qfree();
    }
  }
  else
  {
    v6 = a1[1];
    if ( v3 < v6 + 1 )
    {
      v20 = qvector_reserve();
      *a1 = v20;
      v5 = v20;
      v6 = a1[1];
    }
    v7 = v5 + 40 * v6;
    *(_DWORD *)v7 = -2;
    *(_QWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 8) = 0;
    if ( (int *)v7 != &v22 )
    {
      v8 = v22;
      if ( v22 < -1 )
      {
        *(_QWORD *)(v7 + 8) = src;
      }
      else
      {
        *(_QWORD *)(v7 + 8) = 0;
        *(_OWORD *)(v7 + 16) = 0;
        v9 = n[0];
        if ( n[0] )
        {
          v10 = (void *)qalloc_or_throw();
          *(_QWORD *)(v7 + 8) = v10;
          v11 = src;
          *(_QWORD *)(v7 + 24) = v9;
          memcpy(v10, v11, v9);
          *(_QWORD *)(v7 + 16) = v9;
          v8 = v22;
        }
      }
      *(_DWORD *)v7 = v8;
    }
    *(_DWORD *)(v7 + 32) = v25;
  }
  ++a1[1];
  if ( v22 >= -1 && src )
  {
    n[0] = 0;
    qfree();
  }
  return v30 - __readfsqword(0x28u);
}

