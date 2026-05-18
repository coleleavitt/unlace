__int64 __fastcall sub_50FA0(_QWORD *a1, const char **a2, int **a3, __int64 a4)
{
  unsigned int v4; // r14d
  int *v8; // rax
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // r12
  int *v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  char *v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  char *v19; // rax
  void *v20; // rdi
  const char *v22; // rsi
  char *v23; // rsi
  __m128i si128; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // [rsp+Ch] [rbp-52Ch]
  void *ptr; // [rsp+10h] [rbp-528h] BYREF
  __int128 v29; // [rsp+18h] [rbp-520h]
  int v30; // [rsp+30h] [rbp-508h] BYREF
  __int16 v31; // [rsp+34h] [rbp-504h]
  __int64 v32; // [rsp+38h] [rbp-500h]
  __int64 v33; // [rsp+40h] [rbp-4F8h]
  int v34; // [rsp+50h] [rbp-4E8h]
  __int16 v35; // [rsp+54h] [rbp-4E4h]
  char s[1032]; // [rsp+F0h] [rbp-448h] BYREF
  unsigned __int64 v37; // [rsp+4F8h] [rbp-40h]

  v8 = *a3;
  v37 = __readfsqword(0x28u);
  v32 = 0;
  v33 = 0;
  v10 = *v8;
  LOWORD(v8) = *((_WORD *)v8 + 2);
  v34 = v10;
  v35 = (__int16)v8;
  v30 = v10;
  v31 = (__int16)v8;
  v11 = sub_4CB80((__int64)a1, (__int64)&v30);
  if ( v11 )
  {
    v12 = v11;
    LOBYTE(v4) = (*(_QWORD *)(v12 + 104) != -1) & (*(_QWORD *)(v12 + 104) > time(nullptr));
    if ( (_BYTE)v4 )
    {
      v4 = 0;
      sub_1992F0(s, 0x400u, "%F");
      sub_299F0((char **)a2);
      return v4;
    }
    if ( !a1[54] && !(unsigned __int8)sub_4E5C0((__int64)a1, (char **)a2, 0) )
      return 0;
    if ( (unsigned __int64)a2[1] > 1 )
      sub_4BC40((__int64 (__fastcall ***)(_QWORD))"Failed to borrow license: %s\n", *a2);
    v13 = *a3;
    v14 = a1[54];
    ptr = nullptr;
    v29 = 0;
    v15 = sub_5E430(v14, v13, a4, &ptr, a2);
    if ( v15 == 2 )
    {
      v22 = s1;
      if ( a2[1] )
        v22 = *a2;
      if ( !(unsigned __int8)sub_4F560((__int64)a1, v22, 0) )
      {
        sub_4C550((unsigned int **)&ptr, 1);
LABEL_9:
        v16 = (char *)ptr;
        if ( ptr )
        {
          v17 = v29;
          if ( (_QWORD)v29 )
          {
            v18 = 0;
            do
            {
              v19 = &v16[32 * v18];
              v20 = *((void **)v19 + 1);
              if ( v20 )
              {
                *((_QWORD *)v19 + 2) = 0;
                j__free(v20);
                v16 = (char *)ptr;
              }
              ++v18;
            }
            while ( v17 != v18 );
          }
          *(_QWORD *)&v29 = 0;
          j__free(v16);
        }
        return v4;
      }
      v25 = a1[54];
      if ( !v25 )
      {
        if ( !unk_2439A0 )
          sub_198E10(2705);
        BUG();
      }
      v15 = sub_5E430(v25, *a3, a4, &ptr, a2);
    }
    v27 = v15;
    sub_4C550((unsigned int **)&ptr, 1);
    if ( !v27 )
    {
      sub_50C10(a1, a3);
      sub_503C0((__int64)a1, v12, 1, 0, 0);
      v4 = 1;
    }
    goto LABEL_9;
  }
  v23 = (char *)*a2;
  if ( (unsigned __int64)a2[2] <= 0x38 )
  {
    v26 = sub_1987B0(a2, v23, 57, 1);
    *a2 = (const char *)v26;
    v23 = (char *)v26;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6CC0);
  a2[1] = (_BYTE *)(&word_38 + 1);
  v4 = 0;
  *((_QWORD *)v23 + 6) = 0x656C62616C696176LL;
  *(__m128i *)v23 = si128;
  *((__m128i *)v23 + 1) = _mm_load_si128((const __m128i *)&xmmword_1B6CD0);
  *((__m128i *)v23 + 2) = _mm_load_si128((const __m128i *)&xmmword_1B6CE0);
  *((_BYTE *)*a2 + 56) = 0;
  return v4;
}
