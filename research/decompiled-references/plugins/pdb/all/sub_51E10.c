__int64 __fastcall sub_51E10(__int64 a1, __int64 a2, double a3, double a4, double a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64 *); // rax
  const char **v8; // rax
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r15
  __int64 v12; // rax
  const char *v13; // rdx
  __int64 **v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // r13d
  __int64 **v19; // rdi
  __int64 (__fastcall *v20)(__int64, int *); // rax
  int *v21; // rax
  void *v23; // rdi
  size_t v24; // r14
  int v25; // [rsp+Ch] [rbp-94h] BYREF
  void *dest; // [rsp+10h] [rbp-90h] BYREF
  __int128 v27; // [rsp+18h] [rbp-88h]
  __int64 v28; // [rsp+30h] [rbp-70h] BYREF
  __int64 v29; // [rsp+38h] [rbp-68h] BYREF
  __int64 v30; // [rsp+40h] [rbp-60h]
  __int64 v31; // [rsp+50h] [rbp-50h] BYREF
  __int128 v32; // [rsp+58h] [rbp-48h]
  unsigned __int64 v33; // [rsp+68h] [rbp-38h]

  v5 = a1;
  v6 = *(_QWORD *)a1;
  v33 = __readfsqword(0x28u);
  v27 = 0;
  dest = nullptr;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(v6 + 16);
  if ( v7 != sub_2D7C0
    || (a1 = *(_QWORD *)(a1 + 24),
        v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 144LL),
        v7 != sub_2D280) )
  {
    v7(a1, (__int64 *)&dest);
    goto LABEL_8;
  }
  v8 = (const char **)sub_2CEC0(*(__int64 **)(a1 + 16), 0x10000000, 0x10000000u, 0x10000000);
  if ( !v8 )
  {
LABEL_8:
    v16 = v27;
    goto LABEL_9;
  }
  v9 = *v8;
  if ( !*v8 || (v10 = strlen(*v8), (v11 = v10) == 0) )
  {
    v12 = *(_QWORD *)(v5 + 16);
    v28 = 1;
    v13 = src;
    *(_QWORD *)&v27 = 0;
    v14 = *(__int64 ***)(v5 + 24);
    v29 = 0;
    v15 = *(_QWORD *)(v12 + 112);
    v30 = 0;
    goto LABEL_11;
  }
  v23 = dest;
  v24 = v10 + 1;
  if ( *((_QWORD *)&v27 + 1) < v10 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v24, 1);
    v23 = dest;
  }
  *(_QWORD *)&v27 = v24;
  memmove(v23, v9, v11);
  *((_BYTE *)dest + v11) = 0;
  v16 = v27;
LABEL_9:
  v17 = *(_QWORD *)(v5 + 16);
  v28 = 1;
  v29 = 0;
  v14 = *(__int64 ***)(v5 + 24);
  v15 = *(_QWORD *)(v17 + 112);
  v30 = 0;
  v13 = src;
  if ( v16 )
    v13 = (const char *)dest;
LABEL_11:
  v18 = sub_4E7E0(v15, (__int64)&v28, v13, v14, 0, nullptr, 0.0, a4, a5);
  copy_tinfo_t(a2, &v29);
  if ( (*((_BYTE *)&debug + 2) & 4) != 0 )
  {
    v31 = 0;
    v32 = 0;
    print_tinfo(&v31, 0, 0, 0, 0, &v29, 0, 0);
    v19 = *(__int64 ***)(v5 + 24);
    v25 = 0;
    v20 = (__int64 (__fastcall *)(__int64, int *))(*v19)[22];
    if ( v20 == sub_2DEA0 )
    {
      v21 = (int *)sub_2CEC0(v19[2], 0x80000, 0x400u, 0x4000000);
      if ( v21 )
        v25 = *v21;
    }
    else
    {
      v20((__int64)v19, &v25);
    }
    if ( (debug & 0x40000) != 0 )
      sub_29350();
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
  }
  clear_tinfo_t(&v29);
  if ( dest )
  {
    *(_QWORD *)&v27 = 0;
    qfree(dest);
  }
  return v18;
}
