unsigned __int64 __fastcall sub_3C31E0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9)
{
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r9
  __int64 v18; // rax
  double v19; // xmm0_8
  __int64 v20; // rbx
  __int64 i; // rbp
  __int64 v22; // rdi
  __int64 v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // [rsp+0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+8h] [rbp-58h] BYREF
  __int128 v29; // [rsp+10h] [rbp-50h]
  unsigned __int64 v30; // [rsp+20h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v29 = 0;
  v28 = 0;
  v9 = sub_3C2540(&v28, a1, a2, 0.0, a4, a5, a6, a7, a8, a9);
  v12 = v28;
  v13 = v29;
  if ( v9 )
  {
    v14 = qalloc_or_throw(264, a1, v10, v11);
    sub_3C2D90(v14, a1, (__int64)a2, &v28, 0);
    v15 = v28;
    v16 = v29;
    v27 = -1;
    v19 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            16,
            0,
            v14 + 32,
            &v27,
            &callui,
            v17);
    if ( v14 && v18 == -3 )
    {
      (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v14 + 8LL))(v14, v19);
      if ( !v15 )
        return v30 - __readfsqword(0x28u);
    }
    else if ( !v15 )
    {
      return v30 - __readfsqword(0x28u);
    }
    if ( v16 )
    {
      v20 = v15;
      for ( i = 0; i != v16; ++i )
      {
        v22 = *(_QWORD *)(v20 + 16);
        if ( v22 )
        {
          *(_QWORD *)(v20 + 24) = 0;
          qfree(v22);
        }
        v20 += 40;
      }
    }
    qfree(v15);
  }
  else if ( v28 )
  {
    if ( (_QWORD)v29 )
    {
      v24 = v28;
      v25 = 0;
      do
      {
        v26 = *(_QWORD *)(v24 + 16);
        if ( v26 )
        {
          *(_QWORD *)(v24 + 24) = 0;
          qfree(v26);
        }
        ++v25;
        v24 += 40;
      }
      while ( v25 != v13 );
    }
    qfree(v12);
  }
  return v30 - __readfsqword(0x28u);
}

