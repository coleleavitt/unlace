unsigned __int64 sub_14330()
{
  __int64 module_data; // rax
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64); // rax
  _QWORD *v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  size_t v12; // r13
  void *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // cf
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rax
  const void *v29; // r13
  void *v30; // rax
  __int64 v31; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  module_data = get_module_data();
  if ( !module_data )
    sub_11FC0();
  v1 = module_data;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  if ( v2 == sub_11DE0 )
    v3 = (_QWORD *)(v1 + 272);
  else
    v3 = (_QWORD *)v2(v1);
  v4 = xmmword_8FA78;
  v5 = 0;
  if ( (_QWORD)xmmword_8FA78 )
  {
    do
    {
      v6 = (_QWORD *)(qword_8FA70 + 120 * v5);
      if ( v6[12] )
      {
        v6[13] = 0;
        qfree();
      }
      if ( *v6 )
      {
        v6[1] = 0;
        qfree();
      }
      ++v5;
    }
    while ( v4 != v5 );
  }
  v7 = xmmword_8FA58;
  v8 = 0;
  *(_QWORD *)&xmmword_8FA78 = 0;
  if ( (_QWORD)xmmword_8FA58 )
  {
    do
    {
      v9 = (_QWORD *)(qword_8FA50 + 24 * v8);
      if ( *v9 )
      {
        v9[1] = 0;
        qfree();
      }
      ++v8;
    }
    while ( v7 != v8 );
  }
  *(_QWORD *)&xmmword_8FA58 = 0;
  *(_QWORD *)&xmmword_8FA38 = 0;
  if ( (_QWORD)xmmword_8FB58 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v24 = xmmword_8FA78;
      v25 = qword_8FA30;
      v26 = qword_8FB50 + 144 * v11;
      if ( *((_QWORD *)&xmmword_8FA38 + 1) < (unsigned __int64)(v10 + 1) )
      {
        v25 = qvector_reserve();
        qword_8FA30 = v25;
        v10 = xmmword_8FA38;
      }
      *(_QWORD *)(v25 + 8 * v10) = v24;
      v12 = *(_QWORD *)(v26 + 32);
      v13 = nullptr;
      *(_QWORD *)&xmmword_8FA38 = xmmword_8FA38 + 1;
      if ( v12 )
      {
        v13 = (void *)qalloc_or_throw();
        memcpy(v13, *(const void **)(v26 + 24), v12);
      }
      v14 = xmmword_8FA58;
      v15 = qword_8FA50;
      if ( *((_QWORD *)&xmmword_8FA58 + 1) < (unsigned __int64)(xmmword_8FA58 + 1) )
      {
        qword_8FA50 = qvector_reserve();
        v15 = qword_8FA50;
        v14 = xmmword_8FA58;
      }
      v16 = v15 + 24 * v14;
      *(_QWORD *)v16 = v13;
      v17 = qword_8FA70;
      *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      v18 = xmmword_8FA78;
      *(_QWORD *)&xmmword_8FA58 = xmmword_8FA58 + 1;
      if ( *((_QWORD *)&xmmword_8FA78 + 1) < (unsigned __int64)(xmmword_8FA78 + 1) )
      {
        v27 = qvector_reserve();
        v18 = xmmword_8FA78;
        v17 = v27;
        qword_8FA70 = v27;
      }
      v19 = v17 + 120 * v18;
      *(_QWORD *)v19 = 0;
      *(_OWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 96) = 0;
      *(_QWORD *)&xmmword_8FA78 = xmmword_8FA78 + 1;
      *(_DWORD *)(v19 + 28) = v11;
      *(_OWORD *)(v19 + 104) = 0;
      if ( v19 != v26 + 48 )
      {
        v20 = *(_QWORD *)(v26 + 56);
        if ( v20 > 1 )
        {
          n = v20 - 1;
          v29 = *(const void **)(v26 + 48);
          v31 = *(_QWORD *)(v26 + 56);
          v30 = (void *)qvector_reserve();
          *(_QWORD *)v19 = v30;
          *(_QWORD *)(v19 + 8) = v31;
          memmove(v30, v29, n);
          *(_BYTE *)(*(_QWORD *)v19 + v31 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v19 + 8) = 0;
        }
      }
      *(_DWORD *)(v19 + 24) = *(_DWORD *)(v26 + 120);
      *(_QWORD *)(v19 + 32) = v3[114];
      *(_QWORD *)(v19 + 40) = v3[115];
      v21 = v3[116];
      if ( v21 < 0 )
        v21 = *(int *)(v26 + 136);
      *(_QWORD *)(v19 + 48) = v21;
      ++v11;
      *(_QWORD *)(v19 + 56) = v3[117];
      *(_QWORD *)(v19 + 64) = v3[118];
      v22 = v3[119];
      *(_QWORD *)(v19 + 88) = -1;
      *(_QWORD *)(v19 + 72) = v22;
      v23 = v11 < (unsigned __int64)xmmword_8FB58;
      *(_WORD *)(v19 + 80) = 0;
      if ( !v23 )
        break;
      v10 = xmmword_8FA38;
    }
  }
  return v33 - __readfsqword(0x28u);
}

