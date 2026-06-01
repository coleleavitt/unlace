unsigned __int64 __fastcall sub_3B2B0(
        struct _Unwind_Exception *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6)
{
  __int64 *v6; // r12
  __int64 v8; // r13
  void (*v9)(_Unwind_Reason_Code, struct _Unwind_Exception *); // rbp
  void (*v10)(_Unwind_Reason_Code, struct _Unwind_Exception *); // rbp
  _QWORD *v11; // rax
  unsigned int v12; // ebp
  bool v13; // zf
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 result; // rax
  __int64 v18; // r15
  __int64 v19; // rdi
  void (*exception_cleanup)(_Unwind_Reason_Code, struct _Unwind_Exception *); // rax
  __int64 v21; // rdx
  __m128i *v22; // r14
  __int64 v23; // rbp
  void (__fastcall *hexdsp)(__int64, __m128i *, __int64); // rax
  void *v25; // rax
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8

  v6 = (__int64 *)a2;
  *(_QWORD *)&a1->exception_class = &off_4DB00;
  a1->exception_cleanup = nullptr;
  *(_OWORD *)&a1->private_1 = 0;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 )
  {
    v18 = 0;
    v19 = 16 * v8;
    exception_cleanup = (void (*)(_Unwind_Reason_Code, struct _Unwind_Exception *))qalloc_or_throw(16 * v8);
    *(_QWORD *)(&a1->private_2 + 1) = v8;
    for ( a1->exception_cleanup = exception_cleanup; ; exception_cleanup = a1->exception_cleanup )
    {
      v21 = v18++;
      v21 *= 16;
      v22 = (__m128i *)((char *)exception_cleanup + v21);
      v23 = v6[1] + v21;
      hexdsp = (void (__fastcall *)(__int64, __m128i *, __int64))get_hexdsp(v19, a2);
      a2 = (__int64)v22;
      v19 = 273;
      hexdsp(273, v22, v23);
      if ( v8 == v18 )
        break;
    }
    *(_QWORD *)&a1->private_1 = v8;
  }
  *(_QWORD *)&a1[1].exception_class = 0;
  *(_OWORD *)&a1[1].exception_cleanup = 0;
  v9 = (void (*)(_Unwind_Reason_Code, struct _Unwind_Exception *))v6[5];
  if ( v9 )
  {
    v26 = (void *)qalloc_or_throw(16LL * (_QWORD)v9);
    *(_QWORD *)&a1[1].exception_class = v26;
    a2 = v6[4];
    *(_QWORD *)&a1[1].private_1 = v9;
    memcpy(v26, (const void *)a2, 16LL * (_QWORD)v9);
    a1[1].exception_cleanup = v9;
  }
  *(_QWORD *)(&a1[1].private_2 + 1) = 0;
  *(_OWORD *)&a1[2].exception_class = 0;
  v10 = (void (*)(_Unwind_Reason_Code, struct _Unwind_Exception *))v6[8];
  if ( v10 )
  {
    v25 = (void *)qalloc_or_throw(16LL * (_QWORD)v10);
    *(_QWORD *)(&a1[1].private_2 + 1) = v25;
    a2 = v6[7];
    a1[2].exception_cleanup = v10;
    memcpy(v25, (const void *)a2, 16LL * (_QWORD)v10);
    *(_QWORD *)&a1[2].exception_class = v10;
  }
  *(_QWORD *)&a1->exception_class = &off_4DB40;
  v11 = (_QWORD *)operator new(0x20u);
  v12 = 0;
  v13 = *(_QWORD *)&a1->private_1 == 0;
  *(_QWORD *)(&a1[2].private_2 + 1) = v11;
  *(_OWORD *)&a1[3].exception_cleanup = 0;
  *v11 = off_4DA48;
  v14 = (__int64)off_4D960;
  v11[1] = 0x100000001LL;
  v15 = (unsigned __int64)(v11 + 2);
  v11[2] = off_4D960;
  v11[3] = 0;
  *(_QWORD *)&a1[2].private_1 = v11 + 2;
  *(_QWORD *)&a1[3].exception_class = 0;
  if ( !v13 )
  {
    do
    {
      a2 = (__int64)a1[1].exception_cleanup;
      v14 = v12;
      v16 = 0;
      v15 = 0;
      if ( a2 )
      {
        while ( ((unsigned int)v15 & (1 << v12)) == 0 || !*(_QWORD *)(*(_QWORD *)&a1[1].exception_class + 16 * v16) )
        {
          v16 = (unsigned int)(v15 + 1);
          v15 = v16;
          if ( v16 >= a2 )
            goto LABEL_11;
        }
        ++v12;
      }
      else
      {
LABEL_11:
        a2 = v12;
        sub_35300(a1, (void *)v12);
      }
    }
    while ( (unsigned __int64)(int)v12 < *(_QWORD *)&a1->private_1 );
  }
  sub_35940(a1, (__m128i *)a2, v15, v14);
  result = *(_QWORD *)&a1->private_1 - 1LL;
  if ( result <= 2 )
  {
    result = sub_38460((__int64)a1, 0.0, a4, a5);
    if ( !(_BYTE)result )
    {
      result = sub_39A20((__int64)a1, 0.0, a4, a5);
      if ( !(_BYTE)result )
      {
        result = sub_38780((__int64)a1, 0.0, a4, a5);
        if ( !(_BYTE)result )
        {
          result = sub_38C40((__int64)a1, 0.0, a4, a5, a6);
          if ( !(_BYTE)result )
          {
            result = sub_3A900((__int64)a1, 0.0, a4, a5, a6, a2, v27, v28, v29);
            if ( !(_BYTE)result )
            {
              result = sub_391E0((__int64)a1, 0.0, a4, a5);
              if ( !(_BYTE)result )
                return sub_3B040(a1, 0.0, a4, a5, a6);
            }
          }
        }
      }
    }
  }
  return result;
}
