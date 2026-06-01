__int64 __fastcall sub_1AF50(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        const char *a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v10; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  const char *v14; // rdx
  unsigned int v15; // r15d
  char *v17; // rbp
  const char *v18; // rsi
  char *v19; // [rsp+0h] [rbp-78h] BYREF
  __int128 v20; // [rsp+8h] [rbp-70h]
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v10 = *a4;
  v23 = __readfsqword(0x28u);
  v12 = sub_BF20(a3, v10, a5);
  if ( v12 == -1 )
    return 0;
  v19 = nullptr;
  v13 = v12;
  v20 = 0;
  v19 = (char *)qvector_reserve(&v19, 0, 3, 1);
  *(_QWORD *)&v20 = 3;
  strcpy(v19, "$s");
  if ( (unsigned __int8)sub_1AC30(a1, (__int64 *)&v19, v13, (__m128i)0LL, a7, a8, a9) )
  {
    v14 = ::s1;
    if ( (_QWORD)v20 )
      v14 = v19;
    v15 = sub_9BF0(a1, a2, v14, 0);
    if ( (_BYTE)v15 )
    {
      if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
      {
        s1 = nullptr;
        v22 = 0;
        if ( get_cmt(&s1, v13, 1) <= 0
          || (v17 = s1, (unsigned __int64)v22 > 0x15) && !strncmp(s1, "Alternative name is '", 0x15u) )
        {
          v18 = ::s1;
          if ( a2[1] )
            v18 = (const char *)*a2;
          set_cmt(v13, v18, 1);
          v17 = s1;
        }
        if ( v17 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v17);
        }
      }
      goto LABEL_7;
    }
    sub_CB10((__int64)"could not demangle the type string for the %s field at %a\n", a5, 0.0);
  }
  v15 = 0;
LABEL_7:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return v15;
}

