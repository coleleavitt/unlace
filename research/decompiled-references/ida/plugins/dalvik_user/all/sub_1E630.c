__int64 __fastcall sub_1E630(const char *a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  const char *v10; // rsi
  __int64 v11; // r12
  const char *v12; // r14
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v2 = 1;
  v20 = __readfsqword(0x28u);
  if ( a1 && *a1 )
  {
    v18 = 0;
    v19 = 0;
    v5 = sub_1E130(&v18, a2, (__int64)"connect %s", a1);
    v6 = v18;
    v2 = v5;
    if ( (_BYTE)v5 )
    {
      v7 = v19;
      if ( !(_QWORD)v19 )
      {
        v2 = 0;
        if ( !v18 )
          return v2;
        goto LABEL_20;
      }
      v8 = v18 + 24 * v19;
      if ( v8 != v18 )
      {
        v9 = v18;
        do
        {
          v10 = nptr;
          if ( *(_QWORD *)(v9 + 8) )
            v10 = *(const char **)v9;
          sub_11340((__int64)"%s\n", v10);
          v9 += 24;
        }
        while ( v8 != v9 );
        v7 = v19;
        v6 = v18;
      }
      v11 = v6 + 8 * (3 * v7 - 3);
      v12 = *(const char **)v11;
      if ( *(_QWORD *)(v11 + 8) && strstr(*(const char **)v11, "connected to") )
      {
        if ( !v6 )
          return v2;
LABEL_15:
        v15 = v19;
        if ( (_QWORD)v19 )
        {
          v16 = 0;
          do
          {
            v17 = (_QWORD *)(v6 + 24 * v16);
            if ( *v17 )
            {
              v17[1] = 0;
              qfree();
              v6 = v18;
            }
            ++v16;
          }
          while ( v15 != v16 );
        }
LABEL_20:
        *(_QWORD *)&v19 = 0;
        qfree();
        return v2;
      }
      v13 = *(_QWORD *)a2;
      v14 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      *(_QWORD *)a2 = v12;
      v2 = 0;
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(v11 + 16);
      *(_QWORD *)v11 = v13;
      v6 = v18;
      *(__m128i *)(v11 + 8) = v14;
    }
    if ( !v6 )
      return v2;
    goto LABEL_15;
  }
  return v2;
}

