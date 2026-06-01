__int64 __fastcall sub_399640(__int64 a1, __int64 a2, double a3, __m128 a4, __m128i a5, double a6)
{
  int v7; // edx
  _BYTE *v8; // rax
  const char *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // r12d
  __int64 v15; // r8
  const char *v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned __int64 v21; // r15
  const char *v22; // r9
  int v23; // eax
  __int64 v24; // [rsp-10h] [rbp-B0h]
  __int64 v25; // [rsp-8h] [rbp-A8h]
  _BYTE v27[9]; // [rsp+1Fh] [rbp-81h] BYREF
  __int64 v28; // [rsp+28h] [rbp-78h] BYREF
  __int64 v29; // [rsp+30h] [rbp-70h] BYREF
  __int128 v30; // [rsp+38h] [rbp-68h]
  const char *v31; // [rsp+50h] [rbp-50h]
  __int128 v32; // [rsp+58h] [rbp-48h]
  unsigned __int64 v33; // [rsp+68h] [rbp-38h]

  v7 = *(_DWORD *)(a2 + 24);
  v33 = __readfsqword(0x28u);
  v27[8] = 0;
  v29 = 0;
  *(_QWORD *)v27 = HIBYTE(v7) & 1;
  v8 = v27;
  v30 = 0;
  if ( (v7 & 0x100) == 0 )
    v8 = nullptr;
  v9 = s1;
  if ( *(_QWORD *)(a2 + 40) )
    v9 = *(const char **)(a2 + 32);
  v10 = sub_388A20(&v27[1], (__int64)&v29, *(_QWORD *)(a1 + 128), (__int64)v9, a2 + 80, 0, 0.0, a4, v8);
  v13 = v24;
  v14 = v10;
  v15 = v25;
  if ( (_BYTE)v10 )
  {
    v16 = *(const char **)&v27[1];
    if ( !v27[1] || (v13 = 0, v21 = *(int *)(a2 + 88), v21 >= get_tinfo_size()) )
    {
LABEL_7:
      v17 = *(unsigned int *)(a2 + 24);
      v18 = *(_DWORD *)(a2 + 24) & 0xFEFFFFFF;
      if ( v27[0] )
        v18 = v17 | 0x1000000;
      *(_DWORD *)(a2 + 24) = v18;
      if ( (unsigned __int8)sub_384940(v13, (__int64)v16, v17, v11, v15, v12) )
        sub_398660(a1, a2, (const void **)&v29, 0, v19, 0.0, *(double *)a4.m128_u64, a5, a6);
      sub_398E20(a1, a2, &v27[1], 0, 0.0, *(double *)a4.m128_u64, a5, a6);
      goto LABEL_12;
    }
    if ( *(_DWORD *)(a2 + 88) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 80LL) )
    {
      v16 = "AUTOHIDE REGISTRY\n"
            "HIDECANCEL\n"
            "The new variable size is bigger than the old one.\n"
            "It may overlap with other variables (and destroy them).\n"
            "Are you sure to set the new type?";
      v13 = 0;
      if ( (int)sub_33D190(
                  0,
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "HIDECANCEL\n"
                           "The new variable size is bigger than the old one.\n"
                           "It may overlap with other variables (and destroy them).\n"
                           "Are you sure to set the new type?") <= 0 )
        goto LABEL_12;
      goto LABEL_7;
    }
    v31 = nullptr;
    v32 = 0;
    print_tinfo();
    v22 = s1;
    if ( (_QWORD)v32 )
      v22 = v31;
    v16 = "Set the ~t~ype";
    v23 = sub_33D270(
            (__int64)"Convert to ~p~ointer",
            (__int64)"Set the ~t~ype",
            (__int64)"~C~ancel",
            0xFFFFFFFF,
            (__int64)"The new variable size is bigger than the old one.\n"
                     "It may overlap with other variables (and destroy them).\n"
                     "Did you mean to use '%s *'?\n",
            v22);
    if ( v23 != -1 )
    {
      if ( v23 == 1 )
      {
        sub_32C540(&v28, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), &v27[1]);
        v16 = (const char *)&v28;
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v13 = (__int64)v31;
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree((__int64)v31);
      }
      goto LABEL_7;
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree((__int64)v31);
    }
  }
LABEL_12:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  clear_tinfo_t();
  return v14;
}

