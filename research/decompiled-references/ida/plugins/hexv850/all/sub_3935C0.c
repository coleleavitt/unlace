__int64 __fastcall sub_3935C0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128 v10; // xmm0
  int v12; // edx
  _BYTE *v13; // rax
  const char *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdi
  unsigned int v19; // r12d
  __int64 v20; // r8
  const char *v21; // rsi
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r8
  double v25; // xmm4_8
  double v26; // xmm5_8
  unsigned __int64 v28; // r15
  const char *v29; // r9
  int v30; // eax
  __int64 v31; // [rsp-10h] [rbp-B0h]
  __int64 v32; // [rsp-8h] [rbp-A8h]
  _BYTE v34[9]; // [rsp+1Fh] [rbp-81h] BYREF
  __int64 v35; // [rsp+28h] [rbp-78h] BYREF
  const void *v36; // [rsp+30h] [rbp-70h] BYREF
  __int128 v37; // [rsp+38h] [rbp-68h]
  const char *v38; // [rsp+50h] [rbp-50h]
  __int128 v39; // [rsp+58h] [rbp-48h]
  unsigned __int64 v40; // [rsp+68h] [rbp-38h]

  v10 = 0;
  v12 = *(_DWORD *)(a2 + 24);
  v40 = __readfsqword(0x28u);
  v34[8] = 0;
  v36 = nullptr;
  *(_QWORD *)v34 = HIBYTE(v12) & 1;
  v13 = v34;
  v37 = 0;
  if ( (v12 & 0x100) == 0 )
    v13 = nullptr;
  v14 = s1;
  if ( *(_QWORD *)(a2 + 40) )
    v14 = *(const char **)(a2 + 32);
  v15 = sub_3829A0(&v34[1], (__int64)&v36, *(_QWORD *)(a1 + 128), (__int64)v14, a2 + 80, 0, v13);
  v18 = v31;
  v19 = v15;
  v20 = v32;
  if ( (_BYTE)v15 )
  {
    v21 = *(const char **)&v34[1];
    if ( !v34[1] || (v18 = 0, v28 = *(int *)(a2 + 88), v28 >= get_tinfo_size()) )
    {
LABEL_7:
      v22 = *(unsigned int *)(a2 + 24);
      v23 = *(_DWORD *)(a2 + 24) & 0xFEFFFFFF;
      if ( v34[0] )
        v23 = v22 | 0x1000000;
      *(_DWORD *)(a2 + 24) = v23;
      if ( (unsigned __int8)sub_37E8C0(v18, (__int64)v21, v22, v16, v20, v17) )
        sub_3925E0(a1, a2, &v36, 0, v24, *(double *)v10.m128_u64, a4, a5, a6, v25, v26, a9, a10);
      sub_392DA0(a1, a2, &v34[1], 0, v10, a4, a5, a6, v25, v26, a9, a10);
      goto LABEL_12;
    }
    if ( *(_DWORD *)(a2 + 88) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 80LL) )
    {
      v21 = "AUTOHIDE REGISTRY\n"
            "HIDECANCEL\n"
            "The new variable size is bigger than the old one.\n"
            "It may overlap with other variables (and destroy them).\n"
            "Are you sure to set the new type?";
      v18 = 0;
      if ( (int)sub_337110(
                  0,
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "HIDECANCEL\n"
                           "The new variable size is bigger than the old one.\n"
                           "It may overlap with other variables (and destroy them).\n"
                           "Are you sure to set the new type?") <= 0 )
        goto LABEL_12;
      goto LABEL_7;
    }
    v10 = 0;
    v38 = nullptr;
    v39 = 0;
    print_tinfo();
    v29 = s1;
    if ( (_QWORD)v39 )
      v29 = v38;
    v21 = "Set the ~t~ype";
    v30 = sub_3371F0(
            (__int64)"Convert to ~p~ointer",
            (__int64)"Set the ~t~ype",
            (__int64)"~C~ancel",
            0xFFFFFFFF,
            (__int64)"The new variable size is bigger than the old one.\n"
                     "It may overlap with other variables (and destroy them).\n"
                     "Did you mean to use '%s *'?\n",
            v29);
    if ( v30 != -1 )
    {
      if ( v30 == 1 )
      {
        sub_326AD0(&v35, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), &v34[1]);
        v21 = (const char *)&v35;
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v18 = (__int64)v38;
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree();
      }
      goto LABEL_7;
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree();
    }
  }
LABEL_12:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v19;
}

