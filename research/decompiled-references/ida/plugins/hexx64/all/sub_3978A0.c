__int64 __fastcall sub_3978A0(__int64 a1, unsigned __int64 a2, double a3, __m128 a4, __m128i a5, double a6)
{
  __int64 v6; // rax
  double v7; // xmm0_8
  __int64 func; // r13
  char v10; // al
  char *v11; // rax
  char v12; // al
  char **p_s1; // r8
  char *v14; // rsi
  unsigned int v15; // r15d
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+8h] [rbp-78h] BYREF
  char *s2; // [rsp+10h] [rbp-70h]
  __int128 v21; // [rsp+18h] [rbp-68h]
  char *s1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+38h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 128);
  v24 = __readfsqword(0x28u);
  v19 = 0;
  sub_381D00(*(_QWORD *)(v6 + 112), a2, (__int64)&v19, 2, a3, a4);
  s2 = nullptr;
  v21 = 0;
  get_ea_name();
  calc_c_cpp_name();
  v7 = 0.0;
  s1 = nullptr;
  v23 = 0;
  func = get_func();
  v10 = get_tinfo_property() & 0xF;
  if ( func && v10 == 12 )
  {
    v11 = (char *)::s1;
    if ( (_QWORD)v21 )
      v11 = s2;
    v7 = ((double (__fastcall *)(__int64, _QWORD, __int64 *, char **, __int64, __int64 *, char *))callui)(
           200,
           0,
           &v19,
           &s1,
           func,
           &v19,
           v11);
  }
  else
  {
    v12 = sub_388A20(&v19, (__int64)&s1, *(_QWORD *)(a1 + 128), (__int64)s2, (__int64)&v19, v10 == 12, 0.0, a4, nullptr);
  }
  if ( v12 )
  {
    if ( (_QWORD)v21 )
    {
      v14 = s2;
      if ( !(_QWORD)v23 )
      {
        v17 = strcmp(::s1, s2);
        p_s1 = nullptr;
        if ( v17 )
          p_s1 = &s1;
        goto LABEL_9;
      }
    }
    else
    {
      p_s1 = nullptr;
      v14 = (char *)::s1;
      if ( !(_QWORD)v23 )
      {
LABEL_9:
        sub_397700(a1, (char *)&v19, a2, 1, (__int64)p_s1, v7, *(double *)a4.m128_u64, a5, a6);
        v15 = 1;
        goto LABEL_10;
      }
    }
    v18 = strcmp(s1, v14);
    p_s1 = nullptr;
    if ( v18 )
      p_s1 = &s1;
    goto LABEL_9;
  }
  v15 = 0;
LABEL_10:
  if ( s1 )
  {
    *(_QWORD *)&v23 = 0;
    qfree((__int64)s1);
  }
  if ( s2 )
  {
    *(_QWORD *)&v21 = 0;
    qfree((__int64)s2);
  }
  clear_tinfo_t();
  return v15;
}

