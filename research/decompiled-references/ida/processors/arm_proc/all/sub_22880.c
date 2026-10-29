__int64 __fastcall sub_22880(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  unsigned __int64 *v8; // r13
  unsigned __int64 *v9; // rax
  __int64 v10; // rsi
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // r15
  unsigned __int64 *v16; // rax
  __int64 v17; // rsi
  unsigned __int64 *v18; // rcx
  __int64 v19; // r14
  bool v20; // al
  unsigned __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rdx
  unsigned __int64 *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // [rsp+0h] [rbp-48h]

  if ( *(_BYTE *)(a2 + 24) )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(unsigned __int64 **)a2;
    if ( v7 == 1 || (v9 = v8 + 3, v10 = 24 * v7, v11 = &v8[3 * v7], v10 == 24) )
    {
LABEL_4:
      if ( v8 && (unsigned __int8)sub_22260(a4, (__int64)v8) )
        goto LABEL_6;
      goto LABEL_12;
    }
    while ( *v8 == *v9 )
    {
      v9 += 3;
      if ( v9 == v11 )
        goto LABEL_4;
    }
  }
  v8 = nullptr;
LABEL_12:
  if ( *(_BYTE *)(a3 + 24) )
  {
    v14 = *(_QWORD *)(a3 + 8);
    v15 = *(unsigned __int64 **)a3;
    if ( v14 != 1 )
    {
      v16 = v15 + 3;
      v17 = 24 * v14;
      v18 = &v15[3 * v14];
      if ( v17 != 24 )
      {
        while ( *v15 == *v16 )
        {
          v16 += 3;
          if ( v18 == v16 )
            goto LABEL_19;
        }
        return 0;
      }
    }
LABEL_19:
    if ( v15 )
    {
      if ( (unsigned __int8)sub_22260(a4, *(_QWORD *)a3) )
        goto LABEL_32;
      if ( !v8 )
        return 0;
      v19 = getseg();
      if ( v19 )
      {
        v26 = getseg();
        v20 = v19 == getseg();
        if ( !v20 && v19 == v26 )
        {
LABEL_6:
          v12 = *v8;
LABEL_7:
          *a1 = v12;
          return 1;
        }
        if ( v19 != v26 && v20 )
        {
LABEL_32:
          v21 = *v15;
LABEL_33:
          *a1 = v21;
          v22 = *(_BYTE *)(a2 + 24);
          *(_BYTE *)(a2 + 24) = *(_BYTE *)(a3 + 24);
          v23 = *(_QWORD *)a3;
          *(_BYTE *)(a3 + 24) = v22;
          v24 = *(unsigned __int64 **)a2;
          *(_QWORD *)a2 = v23;
          v25 = _mm_loadu_si128((const __m128i *)(a2 + 8));
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
          *(_QWORD *)a3 = v24;
          *(__m128i *)(a3 + 8) = v25;
          return 1;
        }
      }
      if ( (unsigned int)getinf() == 2 )
      {
        v12 = *v8;
        v21 = *v15;
        if ( *v8 > 0xFFFF )
        {
          if ( v21 <= 0xFFF )
            goto LABEL_7;
        }
        else if ( v21 > 0xFFFF && v12 <= 0xFFF )
        {
          goto LABEL_33;
        }
      }
    }
  }
  return 0;
}

