__int64 __fastcall sub_5C080(__int64 a1, unsigned int a2, _QWORD *a3, double a4, double a5, double a6)
{
  __int64 v7; // rax
  void *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r12
  unsigned __int32 v13; // r14d
  __int64 v14; // r15
  unsigned __int32 v15; // ebp
  unsigned __int32 v16; // edx
  __int64 v17; // rax
  __m128i v18; // xmm0
  void *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  _BOOL8 v25; // rdi
  unsigned int v26; // ebx
  void (*v27)(void); // rax
  __int64 *v29; // rbx
  __int64 v30; // rsi
  __m128i si128; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-98h]
  unsigned int v35; // [rsp+8h] [rbp-90h]
  void *v36; // [rsp+28h] [rbp-70h] BYREF
  __m128i v37; // [rsp+30h] [rbp-68h] BYREF
  __m128i v38; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 608);
  v39 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(&v36, v7, a2);
  v9 = v36;
  if ( v36 )
  {
    v35 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v36 + 24LL))(v36);
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v36 + 32LL))(v36);
      v9 = v36;
      if ( v10 >= v35 )
      {
        v26 = 1;
        goto LABEL_26;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(void *, __m128i *, __int64))(*(_QWORD *)v36 + 48LL))(v36, &v37, 16) )
        break;
      v11 = a3[2];
      v12 = a3 + 1;
      v13 = v37.m128i_i32[0];
      v14 = (__int64)(a3 + 1);
      v15 = v37.m128i_u32[1];
      v38 = _mm_load_si128(&v37);
      if ( v11 )
      {
        do
        {
          while ( 1 )
          {
            v16 = *(_DWORD *)(v11 + 32);
            if ( v16 < v37.m128i_i32[0] || v37.m128i_i32[0] == v16 && *(_DWORD *)(v11 + 36) < v37.m128i_i32[1] )
              break;
            v14 = v11;
            v11 = *(_QWORD *)(v11 + 16);
            if ( !v11 )
              goto LABEL_12;
          }
          v11 = *(_QWORD *)(v11 + 24);
        }
        while ( v11 );
LABEL_12:
        if ( v12 != (_QWORD *)v14
          && v37.m128i_i32[0] >= *(_DWORD *)(v14 + 32)
          && (v37.m128i_i32[0] != *(_DWORD *)(v14 + 32) || v37.m128i_i32[1] >= *(_DWORD *)(v14 + 36)) )
        {
          continue;
        }
      }
      v34 = v37.m128i_i64[0];
      v17 = operator new(0x38u);
      v18 = _mm_loadu_si128(&v38);
      v19 = (void *)v17;
      *(_QWORD *)(v17 + 32) = v34;
      *(__m128i *)(v17 + 40) = v18;
      v23 = sub_5BF30(a3, v14, (unsigned int *)(v17 + 32), v20, v21, v22, *(double *)v18.m128i_i64, a5, a6);
      if ( v24 )
      {
        v25 = 1;
        if ( !v23 && v12 != (_QWORD *)v24 && v13 >= *(_DWORD *)(v24 + 32) )
        {
          v25 = 0;
          if ( v13 == *(_DWORD *)(v24 + 32) )
            v25 = v15 < *(_DWORD *)(v24 + 36);
        }
        std::_Rb_tree_insert_and_rebalance(v25, v19, v24, a3 + 1, *(double *)v18.m128i_i64, a5, a6);
        ++a3[5];
      }
      else if ( v19 )
      {
        operator delete(v19, 0x38u);
      }
    }
    v9 = v36;
    v26 = 0;
  }
  else
  {
    v29 = *(__int64 **)(a1 + 600);
    v30 = *v29;
    if ( (unsigned __int64)v29[2] <= 0x19 )
    {
      v33 = qvector_reserve(*(_QWORD *)(a1 + 600), v30, 26, 1);
      *v29 = v33;
      v30 = v33;
      v9 = v36;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_94220);
    v29[1] = 26;
    *(__m128i *)v30 = si128;
    *(__m128i *)(v30 + 9) = _mm_load_si128((const __m128i *)&xmmword_94230);
    v32 = *v29;
    v26 = 0;
    *(_BYTE *)(v32 + 25) = 0;
  }
LABEL_26:
  if ( v9 )
  {
    v27 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
    if ( (char *)v27 == (char *)sub_54910 )
      operator delete(v9, 0x40u);
    else
      v27();
  }
  return v26;
}
