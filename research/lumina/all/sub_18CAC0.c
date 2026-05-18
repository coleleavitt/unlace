__int64 __fastcall sub_18CAC0(__int64 a1, char a2)
{
  FILE *v3; // rbx
  int v4; // eax
  int v5; // r14d
  unsigned int v6; // ebp
  _BYTE *v7; // r12
  __int64 v9; // r13
  _BYTE *v10; // rax
  unsigned __int64 v11; // r15
  __int16 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  char *v15; // rdx
  unsigned __int64 v16; // rax
  int *v17; // r11
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned int v20; // r9d
  int v21; // edx
  char *v22; // rcx
  __int64 v23; // r8
  int *v24; // rsi
  int v25; // edx
  int v26; // ecx
  _BYTE *v27; // rax
  __m128i v28; // xmm0
  unsigned __int64 v29; // rdx
  void *v30; // rax
  __m128i v31; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a2 )
    v3 = (FILE *)sub_196960();
  else
    v3 = (FILE *)sub_196990();
  if ( !v3 )
    return (unsigned int)-1;
  v4 = sub_190160(v3);
  v5 = v4;
  if ( v4 <= 14 )
  {
    v6 = -2;
    v7 = nullptr;
    sub_1980A0(v3);
LABEL_6:
    j__free(v7);
    return v6;
  }
  v9 = v4;
  v10 = (_BYTE *)sub_198620(v4);
  v7 = v10;
  if ( !v10 )
  {
    v6 = -5;
LABEL_13:
    sub_1980A0(v3);
    goto LABEL_6;
  }
  if ( v9 != sub_197ED0(v3, v10) )
  {
    v6 = -4;
    sub_1980A0(v3);
    goto LABEL_6;
  }
  if ( *v7 != 72 )
  {
LABEL_15:
    v6 = -2;
    sub_1980A0(v3);
    goto LABEL_6;
  }
  if ( v7[1] != 70 )
  {
LABEL_17:
    v6 = -2;
    goto LABEL_13;
  }
  if ( v7[2] != 2 )
  {
    v6 = -3;
    sub_1980A0(v3);
    goto LABEL_6;
  }
  v11 = *(unsigned __int16 *)(v7 + 9);
  dword_2428E0 = *(_DWORD *)(v7 + 3);
  v12 = v11;
  word_2428E4 = *(_WORD *)(v7 + 7);
  v13 = xmmword_2428C8;
  if ( v11 != (_QWORD)xmmword_2428C8 )
  {
    v31 = 0u;
    if ( v11 >= (unsigned __int64)xmmword_2428C8 )
    {
      if ( &v31 < qword_2428C0 || &v31 >= (__m128i *)((char *)qword_2428C0 + 16 * *((_QWORD *)&xmmword_2428C8 + 1)) )
      {
        if ( *((_QWORD *)&xmmword_2428C8 + 1) >= v11
          || (qword_2428C0 = (void *)sub_1987B0(&qword_2428C0, qword_2428C0, v11, 16),
              v13 = xmmword_2428C8,
              (unsigned __int64)xmmword_2428C8 < v11) )
        {
          v28 = _mm_load_si128(&v31);
          do
          {
            v29 = v13++;
            *((__m128i *)qword_2428C0 + v29) = v28;
          }
          while ( v13 != v11 );
        }
        *(_QWORD *)&xmmword_2428C8 = v11;
        v16 = (unsigned __int64)&v7[v9];
LABEL_31:
        v17 = (int *)(v7 + 13);
        v18 = 0;
        v19 = 0x7FFFFFFF;
        v20 = v5 - 2;
        while ( v16 >= (unsigned __int64)(v17 + 1) )
        {
          v21 = *((unsigned __int16 *)v17 - 1);
          if ( 4 * v21 + 13 >= v20 )
            break;
          v22 = (char *)qword_2428C0 + v18;
          *((_QWORD *)v22 + 1) = v17;
          *(_DWORD *)v22 = v21;
          if ( v21 )
          {
            v23 = (__int64)&v17[v21 - 1 + 1];
            v24 = v17;
            do
            {
              v25 = *v24;
              if ( *v24 )
              {
                if ( v25 <= 13 || (int)v20 <= v25 )
                  goto LABEL_17;
                if ( (int)v19 > v25 )
                  v19 = *v24;
                v26 = v25 + *(unsigned __int16 *)&v7[v25];
                if ( v25 >= v26 + 2 || v5 < v26 + 2 || v7[v26 + 1] )
                  goto LABEL_17;
              }
              ++v24;
            }
            while ( v24 != (int *)v23 );
          }
          v18 += 16;
          v17 = (int *)((char *)v17 + 6);
          if ( 16 * v11 == v18 )
          {
            v27 = (_BYTE *)(*((_QWORD *)qword_2428C0 + 2 * xmmword_2428C8 - 1)
                          + 4LL * *((unsigned int *)qword_2428C0 + 4 * xmmword_2428C8 - 4));
            goto LABEL_47;
          }
        }
        goto LABEL_17;
      }
      if ( *((_QWORD *)&xmmword_2428C8 + 1) < v11 )
      {
        v30 = (void *)sub_1987B0(&qword_2428C0, qword_2428C0, v11, 16);
        v12 = v11;
        qword_2428C0 = v30;
        v13 = xmmword_2428C8;
      }
      while ( v13 < v11 )
      {
        v14 = v13++;
        v15 = (char *)qword_2428C0 + 16 * v14;
        *(_DWORD *)v15 = 0;
        *((_QWORD *)v15 + 1) = 0;
      }
    }
    *(_QWORD *)&xmmword_2428C8 = v11;
  }
  v16 = (unsigned __int64)&v7[v9];
  if ( v12 )
    goto LABEL_31;
  v27 = v7 + 11;
  v19 = 0x7FFFFFFF;
LABEL_47:
  if ( *v27 != 72 )
    goto LABEL_17;
  if ( v27[1] != 70 )
    goto LABEL_15;
  if ( v19 < v27 + 2 - v7 )
    goto LABEL_17;
  if ( a2 )
    sub_1980A0(v3);
  else
    qword_2428E8 = (__int64)v3;
  qword_2428D8 = v7;
  v6 = 0;
  sub_198ED0(sub_18C800);
  return v6;
}
