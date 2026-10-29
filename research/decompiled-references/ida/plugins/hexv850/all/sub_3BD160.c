unsigned __int64 __fastcall sub_3BD160(
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
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 i; // rbp
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // [rsp+0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+10h] [rbp-50h]
  unsigned __int64 v24; // [rsp+20h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v23 = 0;
  v22 = 0;
  v9 = sub_3BC4C0(&v22, a1, a2, 0.0, a4, a5, a6, a7, a8, a9);
  v10 = v23;
  if ( v9 )
  {
    v11 = qalloc_or_throw();
    sub_3BCD10(v11, a1, (__int64)a2, &v22, 0);
    v12 = v22;
    v13 = v23;
    v21 = -1;
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            16,
            0,
            v11 + 32,
            &v21,
            &callui,
            v14);
    if ( v11 && v15 == -3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      if ( !v12 )
        return v24 - __readfsqword(0x28u);
    }
    else if ( !v12 )
    {
      return v24 - __readfsqword(0x28u);
    }
    if ( v13 )
    {
      v16 = v12;
      for ( i = 0; i != v13; ++i )
      {
        if ( *(_QWORD *)(v16 + 16) )
        {
          *(_QWORD *)(v16 + 24) = 0;
          qfree();
        }
        v16 += 40;
      }
    }
    qfree();
  }
  else if ( v22 )
  {
    if ( (_QWORD)v23 )
    {
      v19 = v22;
      v20 = 0;
      do
      {
        if ( *(_QWORD *)(v19 + 16) )
        {
          *(_QWORD *)(v19 + 24) = 0;
          qfree();
        }
        ++v20;
        v19 += 40;
      }
      while ( v20 != v10 );
    }
    qfree();
  }
  return v24 - __readfsqword(0x28u);
}

