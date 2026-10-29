unsigned __int64 __fastcall sub_35940(_QWORD *a1, __m128i *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  const __m128i *v5; // r14
  const __m128i *v7; // r12
  unsigned __int64 v8; // r8
  __int32 v9; // r9d
  struct _Unwind_Exception *exception_cleanup; // rbx
  struct _Unwind_Exception *v11; // rax
  bool v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  const __m128i *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm0
  _Unwind_Exception_Cleanup_Fn v28; // rbx
  _Unwind_Exception_Cleanup_Fn v29; // rdi
  unsigned __int64 v31; // [rsp+0h] [rbp-88h]
  __int64 v32; // [rsp+0h] [rbp-88h]
  __int64 v33; // [rsp+0h] [rbp-88h]
  __int32 v34; // [rsp+8h] [rbp-80h]
  _QWORD *v35; // [rsp+8h] [rbp-80h]
  struct _Unwind_Exception v36; // [rsp+18h] [rbp-70h] BYREF
  __int64 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v4 = a1[8];
  v5 = (const __m128i *)a1[7];
  v38 = __readfsqword(0x28u);
  v36.exception_class = 0;
  *(_QWORD *)&v36.private_1 = &v36;
  v7 = &v5[v4];
  *(_QWORD *)(&v36.private_2 + 1) = &v36;
  v36.exception_cleanup = nullptr;
  v37 = 0;
  if ( v7 == v5 )
  {
    a1[13] = 0;
  }
  else
  {
    v8 = v5->m128i_i64[0];
    v9 = v5->m128i_i32[2];
    while ( 2 )
    {
      exception_cleanup = &v36;
      if ( *(struct _Unwind_Exception **)&v36.private_1 != &v36 )
        goto LABEL_17;
      v12 = 1;
LABEL_11:
      a2 = (__m128i *)operator new(0x30u);
      a2[2] = _mm_loadu_si128(v5);
      std::_Rb_tree_insert_and_rebalance(v12, a2, exception_cleanup, &v36);
      ++v37;
LABEL_12:
      if ( v7 != ++v5 )
      {
        exception_cleanup = (struct _Unwind_Exception *)v36.exception_cleanup;
        v8 = v5->m128i_i64[0];
        v9 = v5->m128i_i32[2];
        if ( !v36.exception_cleanup )
          continue;
        while ( v9 == LODWORD(exception_cleanup[1].exception_cleanup) )
        {
          a3 = *(_QWORD *)&exception_cleanup[1].exception_class;
          a2 = *(__m128i **)&exception_cleanup->private_1;
          a4 = 0;
          v11 = *(struct _Unwind_Exception **)(&exception_cleanup->private_2 + 1);
          if ( v8 < a3 )
          {
            v11 = *(struct _Unwind_Exception **)&exception_cleanup->private_1;
            a4 = 1;
          }
          if ( !v11 )
          {
            if ( !(_BYTE)a4 )
              goto LABEL_9;
            if ( *(struct _Unwind_Exception **)&v36.private_1 != exception_cleanup )
            {
LABEL_17:
              v34 = v9;
              v31 = v8;
              v13 = std::_Rb_tree_decrement(exception_cleanup, a2, a3, a4, v8);
              v9 = v34;
              if ( v34 != *(_DWORD *)(v13 + 40) )
                goto LABEL_37;
              a3 = *(_QWORD *)(v13 + 32);
              v8 = v31;
LABEL_9:
              if ( a3 < v8 )
                goto LABEL_10;
              goto LABEL_12;
            }
LABEL_10:
            v12 = 1;
            if ( exception_cleanup == &v36 )
              goto LABEL_11;
            if ( v9 == LODWORD(exception_cleanup[1].exception_cleanup) )
            {
              v12 = v8 < *(_QWORD *)&exception_cleanup[1].exception_class;
              goto LABEL_11;
            }
            if ( !under_debugger )
              interr(52898);
LABEL_41:
            BUG();
          }
          exception_cleanup = v11;
        }
        if ( !under_debugger )
        {
          interr(52898);
LABEL_37:
          if ( !under_debugger )
          {
            interr(52898);
            sub_322B0((_QWORD *)v36.exception_cleanup);
            _Unwind_Resume(exception_cleanup);
          }
        }
        goto LABEL_41;
      }
      break;
    }
    v14 = *(_QWORD *)&v36.private_1;
    a1[13] = 0;
    if ( (struct _Unwind_Exception *)v14 != &v36 )
    {
      v15 = 0;
      v35 = a1 + 12;
      do
      {
        v18 = *(_QWORD *)(v14 + 32);
        v19 = *(_DWORD *)(v14 + 40);
        if ( a1[14] >= (unsigned __int64)(v15 + 1) )
        {
          v16 = a1[12];
        }
        else
        {
          v32 = a1[14];
          v20 = qvector_reserve(v35, 0, v15 + 1, 16);
          v21 = a1[13];
          v22 = a1[14];
          v23 = (const __m128i *)a1[12];
          a1[14] = v32;
          v24 = v21 - 1;
          if ( v24 >= 0 )
          {
            v25 = v20;
            do
            {
              v26 = _mm_loadu_si128(v23);
              v25 += 16;
              ++v23;
              *(__m128i *)(v25 - 16) = v26;
            }
            while ( v24-- != 0 );
            v23 = (const __m128i *)a1[12];
          }
          v33 = v20;
          qfree(v23);
          v16 = v33;
          a1[14] = v22;
          v15 = a1[13];
          a1[12] = v33;
        }
        v17 = 16 * v15 + v16;
        *(_QWORD *)v17 = v18;
        *(_DWORD *)(v17 + 8) = v19;
        v15 = a1[13] + 1LL;
        a1[13] = v15;
        v14 = std::_Rb_tree_increment(v14);
      }
      while ( (struct _Unwind_Exception *)v14 != &v36 );
    }
  }
  v28 = v36.exception_cleanup;
  while ( v28 )
  {
    sub_322B0(*((_QWORD **)v28 + 3));
    v29 = v28;
    v28 = *((_Unwind_Exception_Cleanup_Fn *)v28 + 2);
    operator delete(v29, 0x30u);
  }
  return v38 - __readfsqword(0x28u);
}

