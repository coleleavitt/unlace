unsigned __int64 __fastcall sub_17000(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char **v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbp
  const void *v10; // r13
  size_t v11; // rax
  size_t v12; // r14
  void *v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rdi
  size_t v19; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // [rsp+8h] [rbp-68h]
  __int64 v32; // [rsp+20h] [rbp-50h] BYREF
  void *v33; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-40h]

  v3 = a1 + 88;
  v34 = __readfsqword(0x28u);
  *(_QWORD *)(v3 - 80) = a2;
  *(_QWORD *)(v3 - 72) = 0;
  *(_OWORD *)(v3 - 64) = 0;
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)a1 = &off_44E20;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 1065353216;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  memset(
    (void *)((a1 + 112) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 112) & 0xFFFFFFF8) + 320) >> 3));
  *(_QWORD *)(a1 + 320) = 0;
  v5 = off_48040;
  *(_QWORD *)(a1 + 824) = 0;
  memset(
    (void *)((a1 + 328) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 328) & 0xFFFFFFF8) + 832) >> 3));
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 3520) = 0;
  memset(
    (void *)((a1 + 840) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 832 - (((_DWORD)a1 + 840) & 0xFFFFFFF8) + 2696) >> 3));
  *(_QWORD *)(a1 + 3528) = a1 + 832;
  *(_WORD *)(a1 + 3544) = 0;
  *(_BYTE *)(a1 + 3546) = 0;
  *(_QWORD *)(a1 + 3536) = 2696;
  if ( off_48040[0] )
  {
    do
    {
      v7 = *(_QWORD *)(a2 + 32);
      v8 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a2 + 40) < (unsigned __int64)(v7 + 1) )
      {
        v17 = qvector_reserve();
        *(_QWORD *)(a2 + 24) = v17;
        v7 = *(_QWORD *)(a2 + 32);
        v8 = v17;
      }
      ++v5;
      v9 = v8 + 24 * v7;
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      ++*(_QWORD *)(a2 + 32);
      v10 = *(v5 - 1);
      if ( v10 && (v11 = strlen(*(v5 - 1)), (v12 = v11) != 0) )
      {
        v18 = *(void **)v9;
        v19 = v11 + 1;
        if ( *(_QWORD *)(v9 + 16) < v11 + 1 )
        {
          v31 = v11 + 1;
          v28 = qvector_reserve();
          *(_QWORD *)v9 = v28;
          v19 = v31;
          v18 = (void *)v28;
        }
        *(_QWORD *)(v9 + 8) = v19;
        memmove(v18, v10, v12);
        *(_BYTE *)(*(_QWORD *)v9 + v12) = 0;
      }
      else
      {
        *(_QWORD *)(v9 + 8) = 0;
      }
      v13 = *(void **)v9;
      v27 = *(_QWORD *)(a2 + 56);
      v26 = *(_QWORD *)(a2 + 48);
      v14 = *(_QWORD *)(a2 + 64);
      v33 = v13;
      v15 = v27 + 1;
      if ( (unsigned __int64)&v33 < v26 || (unsigned __int64)&v33 >= v26 + 8 * v14 )
      {
        if ( v14 < v15 )
        {
          v16 = qvector_reserve();
          *(_QWORD *)(a2 + 48) = v16;
          v26 = v16;
          v13 = v33;
          v27 = *(_QWORD *)(a2 + 56);
        }
      }
      else if ( v14 < v15 )
      {
        v25 = qvector_reserve();
        *(_QWORD *)(a2 + 48) = v25;
        v26 = v25;
        v27 = *(_QWORD *)(a2 + 56);
      }
      *(_QWORD *)(v26 + 8 * v27) = v13;
      v6 = *(_QWORD *)(a2 + 56) + 1LL;
      *(_QWORD *)(a2 + 56) = v6;
    }
    while ( *v5 );
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 56);
  }
  v20 = *(_QWORD *)(a2 + 48);
  v21 = *(_QWORD *)(a2 + 64);
  v22 = v6 + 1;
  v32 = 0;
  if ( (unsigned __int64)&v32 >= v20 && (unsigned __int64)&v32 < v20 + 8 * v21 )
  {
    if ( v21 < v22 )
    {
      v30 = qvector_reserve();
      *(_QWORD *)(a2 + 48) = v30;
      v6 = *(_QWORD *)(a2 + 56);
      v20 = v30;
    }
    *(_QWORD *)(v20 + 8 * v6) = 0;
  }
  else
  {
    v23 = 0;
    if ( v21 < v22 )
    {
      v29 = qvector_reserve();
      *(_QWORD *)(a2 + 48) = v29;
      v20 = v29;
      v6 = *(_QWORD *)(a2 + 56);
      v23 = v32;
    }
    *(_QWORD *)(v20 + 8 * v6) = v23;
  }
  ++*(_QWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 96) = 1;
  return v34 - __readfsqword(0x28u);
}

