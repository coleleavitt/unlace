__int64 __fastcall sub_4FFC0(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 **a7,
        __int64 a8,
        unsigned int a9)
{
  __int64 (__fastcall *v12)(__int64, unsigned int *); // rax
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r12
  __int64 *v16; // rax
  __int64 (__fastcall *v17)(__int64, __int64 *); // rax
  const char **v18; // rax
  const char *v19; // r13
  size_t v20; // rax
  size_t v21; // rbx
  void *v22; // rdi
  size_t v23; // r14
  __int64 (__fastcall *v25)(__int64, unsigned int *); // rax
  unsigned int *v26; // rax
  __int64 (__fastcall *v27)(__int64, int *); // rax
  int *v28; // rax
  __int64 func; // r13
  __int64 *v30; // rax
  __int64 (__fastcall *v31)(__int64, __int64 *); // rax
  const char **v32; // rax
  const char *v33; // r15
  size_t v34; // rax
  size_t v35; // r14
  unsigned int *v36; // rdi
  __int64 v37; // rdx
  __int64 (*v38)(void); // rax
  __int64 v39; // rsi
  const char *v40; // r8
  const char *v41; // rcx
  unsigned int v42; // eax
  int v43; // eax
  _DWORD *v44; // rdi
  unsigned int (*v45)(void); // rdx
  int v46; // edx
  const char *v47; // rsi
  unsigned __int64 *v48; // rax
  __int64 v49; // rax
  __int64 frame_var; // rax
  __int64 v51; // rbx
  __int64 tinfo_property4; // rax
  unsigned __int64 tinfo_size; // rcx
  size_t v54; // rdx
  _DWORD *v55; // rdi
  __int64 (*v56)(void); // rax
  unsigned int v57; // [rsp+8h] [rbp-200h]
  size_t v58; // [rsp+8h] [rbp-200h]
  int v59; // [rsp+10h] [rbp-1F8h] BYREF
  unsigned int v60; // [rsp+14h] [rbp-1F4h] BYREF
  __int64 v61; // [rsp+18h] [rbp-1F0h] BYREF
  void *dest; // [rsp+20h] [rbp-1E8h] BYREF
  __int128 v63; // [rsp+28h] [rbp-1E0h]
  __int64 v64; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v65; // [rsp+48h] [rbp-1C0h] BYREF
  __int128 v66; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v67; // [rsp+70h] [rbp-198h]
  __int64 v68; // [rsp+78h] [rbp-190h]
  __int64 v69; // [rsp+80h] [rbp-188h]
  char v70; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int64 v71; // [rsp+1C8h] [rbp-40h] BYREF

  v71 = __readfsqword(0x28u);
  if ( a9 == 3 )
  {
    v25 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a7)[20];
    if ( v25 == sub_2DD50 )
    {
      v26 = (unsigned int *)sub_2CEC0(a7[2], 0x20000, 0x400u, 0x4000000);
      if ( !v26 )
        return 0;
      v60 = *v26;
    }
    else if ( (unsigned int)v25((__int64)a7, &v60) )
    {
      return 0;
    }
    v27 = (__int64 (__fastcall *)(__int64, int *))(*a7)[19];
    if ( v27 == sub_2D130 )
    {
      v28 = (int *)sub_2CEC0(a7[2], 0x20000000, 0x20000000u, 0x20000000);
      if ( !v28 )
        return 0;
      v59 = *v28;
    }
    else if ( (unsigned int)v27((__int64)a7, &v59) )
    {
      return 0;
    }
    if ( !sub_31E80(a1, v60) && !sub_31DE0(a1, v60) )
      return 0;
    func = get_func(a6);
    if ( !func )
      return 0;
    v30 = *a7;
    dest = nullptr;
    v63 = 0;
    v31 = (__int64 (__fastcall *)(__int64, __int64 *))v30[18];
    if ( v31 == sub_2D280 )
    {
      v32 = (const char **)sub_2CEC0(a7[2], 0x10000000, 0x10000000u, 0x10000000);
      if ( v32 )
      {
        v33 = *v32;
        if ( *v32 && (v34 = strlen(*v32), (v35 = v34) != 0) )
        {
          v54 = v34 + 1;
          if ( *((_QWORD *)&v63 + 1) < v34 + 1 )
          {
            v58 = v34 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v54, 1);
            v54 = v58;
          }
          *(_QWORD *)&v63 = v54;
          memmove(dest, v33, v35);
          *((_BYTE *)dest + v35) = 0;
        }
        else
        {
          *(_QWORD *)&v63 = 0;
        }
      }
    }
    else
    {
      v31((__int64)a7, (__int64 *)&dest);
    }
    v64 = 1;
    v65 = 0u;
    if ( !(unsigned __int8)sub_4F630(a1, (__int64)&v64, a7, nullptr, 0.0, a3, a4) )
    {
      sub_244A0();
      goto LABEL_35;
    }
    if ( get_tinfo_size(0, v65, 0) == -1 )
      goto LABEL_35;
    if ( sub_31E80(a1, v60) )
      v43 = v59 - *(_DWORD *)(func + 56);
    else
      v43 = v59 - *(_DWORD *)(func + 32);
    v44 = *(_DWORD **)(a1 + 320);
    v59 = v43;
    v45 = *(unsigned int (**)(void))(*(_QWORD *)v44 + 112LL);
    if ( (char *)v45 == (char *)sub_23F30 )
    {
      v46 = v44[4];
      if ( (unsigned int)(v46 - 3) > 4 )
        goto LABEL_67;
    }
    else
    {
      if ( v45() - 3 > 4 )
      {
        v55 = *(_DWORD **)(a1 + 320);
        v56 = *(__int64 (**)(void))(*(_QWORD *)v55 + 112LL);
        if ( (char *)v56 == (char *)sub_23F30 )
          v46 = v55[4];
        else
          v46 = v56();
        v43 = v59;
LABEL_67:
        if ( v46 != 208 )
        {
LABEL_68:
          v47 = src;
          if ( (_QWORD)v63 )
            v47 = (const char *)dest;
          if ( (unsigned __int8)define_stkvar(func, v47, v43, &v65, 0) )
          {
            v67 = -1;
            v48 = (unsigned __int64 *)&v70;
            v68 = 0;
            v69 = 0;
            v66 = -1;
            do
            {
              *(_WORD *)v48 = 0;
              v48 += 5;
              *((_WORD *)v48 - 19) = 0;
              *((_WORD *)v48 - 18) = 0;
              *((_DWORD *)v48 - 2) = 0;
              *((_WORD *)v48 - 17) = 0;
              *((_OWORD *)v48 - 2) = 0;
              *(v48 - 2) = 0;
            }
            while ( &v71 != v48 );
            v49 = *(_QWORD *)func;
            v61 = 0;
            v67 = v49;
            frame_var = get_frame_var(&v61, 0, &v66, 0, v59, 0.0);
            v51 = frame_var;
            if ( frame_var != -1 )
            {
              set_tinfo_property4(&v61, 12, frame_var, &v65, 0, 0);
              tinfo_property4 = get_tinfo_property4(v61, 297, v51, 0, 0, 0);
              upd_abits(tinfo_property4, 3254779904LL, 0x2000000);
            }
            clear_tinfo_t(&v61);
          }
          goto LABEL_35;
        }
        goto LABEL_79;
      }
      v43 = v59;
    }
LABEL_79:
    if ( v43 > 0 )
      goto LABEL_68;
    tinfo_size = get_tinfo_size(0, v65, 0);
    v43 = v59;
    if ( -v59 >= tinfo_size )
      goto LABEL_68;
LABEL_35:
    clear_tinfo_t(&v65);
    if ( dest )
    {
      *(_QWORD *)&v63 = 0;
      qfree(dest);
    }
    return 0;
  }
  if ( a9 != 5 )
  {
    if ( a9 > 5 )
    {
      if ( a9 == 10 )
        return 0;
    }
    else if ( a9 - 1 <= 1 )
    {
      sub_33820(a1, (__int64)a7, a2, a3, a4);
      return 0;
    }
    sub_29830();
    return 0;
  }
  v12 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a7)[20];
  if ( v12 == sub_2DD50 )
  {
    v13 = (unsigned int *)sub_2CEC0(a7[2], 0x20000, 0x400u, 0x4000000);
    if ( !v13 )
      return 0;
    v60 = *v13;
  }
  else if ( (unsigned int)v12((__int64)a7, &v60) )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 328) && v60 )
    --v60;
  v14 = get_func(a6);
  dest = nullptr;
  v15 = (_QWORD *)v14;
  v16 = *a7;
  v63 = 0;
  v17 = (__int64 (__fastcall *)(__int64, __int64 *))v16[18];
  if ( v17 == sub_2D280 )
  {
    v18 = (const char **)sub_2CEC0(a7[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v18 )
    {
      v19 = *v18;
      if ( *v18 && (v20 = strlen(*v18), (v21 = v20) != 0) )
      {
        v22 = dest;
        v23 = v20 + 1;
        if ( *((_QWORD *)&v63 + 1) < v20 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v23, 1);
          v22 = dest;
        }
        *(_QWORD *)&v63 = v23;
        memmove(v22, v19, v21);
        *((_BYTE *)dest + v21) = 0;
      }
      else
      {
        *(_QWORD *)&v63 = 0;
      }
    }
  }
  else
  {
    v17((__int64)a7, (__int64 *)&dest);
  }
  v36 = *(unsigned int **)(a1 + 320);
  v37 = v60;
  v64 = 0;
  v65 = 0;
  v38 = *(__int64 (**)(void))(*(_QWORD *)v36 + 112LL);
  if ( (char *)v38 == (char *)sub_23F30 )
  {
    v39 = v36[4];
  }
  else
  {
    v57 = v60;
    v42 = v38();
    v37 = v57;
    v39 = v42;
  }
  sub_38090(&v64, v39, v37);
  if ( v15 )
  {
    v40 = src;
    if ( (_QWORD)v63 )
      v40 = (const char *)dest;
    v41 = src;
    if ( (_QWORD)v65 )
      v41 = (const char *)v64;
    add_regvar(v15, *v15, v15[1], v41, v40, 0);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  if ( dest )
  {
    *(_QWORD *)&v63 = 0;
    qfree(dest);
  }
  return 0;
}
