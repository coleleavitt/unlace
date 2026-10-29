unsigned __int64 __fastcall sub_2B75C0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  const char *v8; // rsi
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rbx
  const char *v12; // rsi
  bool v13; // zf
  const char *v14; // rsi
  _QWORD *v15; // r12
  _QWORD *v16; // r13
  _QWORD *v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v27; // [rsp+18h] [rbp-78h] BYREF
  __m128i v28; // [rsp+20h] [rbp-70h] BYREF
  const char *v29; // [rsp+38h] [rbp-58h]
  __int128 v30; // [rsp+40h] [rbp-50h]
  unsigned __int64 v31; // [rsp+50h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v28 = 0;
  v27 = 0;
  sub_32D120(&v27, 122);
  sub_32D120(&v27, *(unsigned int *)(a3 + 48));
  sub_32D120(&v27, 0);
  sub_32D120(&v27, *(unsigned int *)(a3 + 8));
  sub_32D120(&v27, *(unsigned int *)(a3 + 40));
  if ( *(_QWORD *)(a3 + 8) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v11 = *(_QWORD *)a3 + 4 * v6;
      sub_2B73E0(&v27, v11, a2);
      v12 = s1;
      if ( *(_QWORD *)(v11 + 32) )
        v12 = *(const char **)(v11 + 24);
      sub_32D2A0(&v27, v12);
      if ( a4 )
      {
        v8 = src;
        v9 = v6 + *a4;
        if ( *(_QWORD *)(v9 + 8) )
          v8 = *(const char **)v9;
        sub_32D2A0(&v27, v8);
      }
      else
      {
        v13 = *(_BYTE *)(v11 + 48) == 0;
        v29 = nullptr;
        v30 = 0;
        if ( v13 )
          goto LABEL_13;
        if ( !(unsigned __int8)serialize_tinfo() )
        {
          if ( !under_debugger )
            sub_37E160(51092);
          BUG();
        }
        if ( !(_QWORD)v30 )
LABEL_13:
          v14 = src;
        else
          v14 = v29;
        sub_32D2A0(&v27, v14);
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree();
        }
      }
      v10 = s1;
      if ( *(_QWORD *)(v11 + 64) )
        v10 = *(const char **)(v11 + 56);
      sub_32D2A0(&v27, v10);
      sub_32D120(&v27, *(unsigned int *)(v11 + 88));
      ++v7;
      v6 += 24;
    }
    while ( v7 < *(_QWORD *)(a3 + 8) );
  }
  sub_32D120(&v27, *(unsigned int *)(a3 + 32));
  v15 = *(_QWORD **)(a3 + 24);
  if ( v15 && *(_QWORD *)(a3 + 32) )
  {
    v16 = (_QWORD *)v15[1];
LABEL_22:
    while ( v15 != v16 )
    {
      while ( 1 )
      {
        sub_2B73E0(&v27, (__int64)(v16 + 3), a2);
        sub_2B73E0(&v27, (__int64)(v16 + 6), a2);
        if ( (*v16 & 2) != 0 )
          break;
        v17 = (_QWORD *)v16[2];
        if ( (*(_BYTE *)v17 & 2) != 0 )
        {
          v22 = (_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
          v23 = *v22;
          if ( (*v22 & 2) == 0 )
          {
            while ( (_QWORD *)v22[2] == v16 )
            {
              v16 = v22;
              v24 = v23 & 0xFFFFFFFFFFFFFFFCLL;
              v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v23 & 2) != 0 )
              {
                v16 = (_QWORD *)v24;
                goto LABEL_22;
              }
              v22 = (_QWORD *)v24;
            }
          }
          v16 = v22;
          goto LABEL_22;
        }
        do
        {
          v16 = v17;
          v17 = (_QWORD *)v17[1];
        }
        while ( (*(_BYTE *)v17 & 2) == 0 );
        if ( v15 == v16 )
          goto LABEL_27;
      }
    }
  }
LABEL_27:
  v18 = _mm_loadu_si128(&v28);
  v19 = *(_QWORD *)a1;
  v20 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v27;
  *(__m128i *)(a1 + 8) = v18;
  v27 = v19;
  v28.m128i_i64[1] = v20;
  if ( v19 )
  {
    v28.m128i_i64[0] = 0;
    qfree();
  }
  return v31 - __readfsqword(0x28u);
}

