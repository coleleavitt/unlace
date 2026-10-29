unsigned __int64 __fastcall sub_30600(__int64 *a1, char a2, __int64 a3)
{
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  int v8; // r9d
  unsigned __int64 v9; // rax
  __int128 i; // xmm0
  __int64 v11; // rbp
  size_t v12; // r14
  void *v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbp
  int v17; // eax
  unsigned __int64 v18; // rdx
  size_t v19; // rbx
  const void *v20; // rsi
  size_t v21; // rax
  void *v22; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v33; // [rsp+Ch] [rbp-6Ch]
  int v34; // [rsp+Ch] [rbp-6Ch]
  int v35; // [rsp+Ch] [rbp-6Ch]
  __int64 v36; // [rsp+10h] [rbp-68h] BYREF
  void *src; // [rsp+18h] [rbp-60h]
  size_t n[3]; // [rsp+20h] [rbp-58h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v5 = unpack_dd();
  v6 = a1[1];
  v7 = v5;
  v8 = v5;
  if ( v5 != v6 )
  {
    v36 = 0;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v5 < v6 )
    {
      v26 = v5;
      do
      {
        v27 = *a1 + 32 * v26;
        if ( *(_QWORD *)(v27 + 8) )
        {
          *(_QWORD *)(v27 + 16) = 0;
          v34 = v8;
          qfree();
          v8 = v34;
        }
        ++v26;
      }
      while ( v26 < v6 );
      a1[1] = v7;
    }
    else
    {
      v9 = a1[2];
      if ( (unsigned __int64)&v36 < *a1 || (unsigned __int64)&v36 >= *a1 + 32 * v9 )
      {
        if ( v9 < v7 )
        {
          v35 = v8;
          v30 = qvector_reserve();
          v6 = a1[1];
          v8 = v35;
          *a1 = v30;
        }
        for ( i = 0; v6 < v7; i = 0 )
        {
          while ( 1 )
          {
            v11 = *a1 + 32 * v6;
            *(_QWORD *)v11 = v36;
            *(_QWORD *)(v11 + 8) = 0;
            *(_OWORD *)(v11 + 16) = i;
            v12 = n[0];
            if ( n[0] )
              break;
            if ( ++v6 >= v7 )
              goto LABEL_11;
          }
          v33 = v8;
          ++v6;
          v13 = (void *)qalloc_or_throw();
          *(_QWORD *)(v11 + 24) = v12;
          *(_QWORD *)(v11 + 8) = v13;
          memcpy(v13, src, v12);
          *(_QWORD *)(v11 + 16) = v12;
          v8 = v33;
        }
      }
      else
      {
        if ( v9 < v7 )
        {
          v31 = qvector_reserve();
          v6 = a1[1];
          v8 = v7;
          *a1 = v31;
        }
        if ( v6 < v7 )
        {
          do
          {
            v28 = v6++;
            v29 = *a1 + 32 * v28;
            *(_QWORD *)v29 = 0;
            *(_QWORD *)(v29 + 8) = 0;
            *(_OWORD *)(v29 + 16) = 0;
          }
          while ( v7 != v6 );
        }
      }
LABEL_11:
      a1[1] = v7;
    }
  }
  v14 = 0;
  v15 = 32LL * (unsigned int)v8;
  if ( v8 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v16 = v14 + *a1;
        *(_DWORD *)v16 = unpack_dd();
        v17 = unpack_dd();
        v18 = *(_QWORD *)(v16 + 16);
        v19 = v17;
        if ( v18 < v17 )
        {
          v24 = *(_QWORD *)(v16 + 8);
          if ( *(_QWORD *)(v16 + 24) < (unsigned __int64)v17 )
          {
            v25 = qvector_reserve();
            v18 = *(_QWORD *)(v16 + 16);
            *(_QWORD *)(v16 + 8) = v25;
            v24 = v25;
          }
          memset((void *)(v24 + v18), 0, v19 - v18);
          *(_QWORD *)(v16 + 16) = v19;
        }
        else if ( v17 != v18 )
        {
          *(_QWORD *)(v16 + 16) = v17;
        }
        if ( a2 )
        {
          *(_DWORD *)(v16 + 4) = unpack_dd();
          v20 = *(const void **)a3;
          v21 = *(_QWORD *)a3 + v19;
          if ( *(_QWORD *)(a3 + 8) >= v21 && v21 >= (unsigned __int64)v20 )
            break;
        }
        v14 += 32;
        if ( v14 == v15 )
          return v39 - __readfsqword(0x28u);
      }
      v22 = *(void **)(v16 + 8);
      *(_QWORD *)a3 = v21;
      v14 += 32;
      memcpy(v22, v20, v19);
    }
    while ( v14 != v15 );
  }
  return v39 - __readfsqword(0x28u);
}

