__int64 __fastcall sub_4F830(
        __int64 a1,
        __int64 a2,
        __int64 **a3,
        double a4,
        double a5,
        double a6,
        __int64 a7,
        int a8,
        unsigned int a9)
{
  __int64 *v13; // rax
  __int64 (__fastcall *v15)(__int64, __int64 *); // rax
  const char **v16; // rax
  size_t v17; // rax
  const char *v18; // r9
  size_t v19; // r8
  __int64 (__fastcall *v20)(__int64, int *); // rax
  int *v21; // rax
  __int64 (__fastcall *v22)(__int64, unsigned int *); // rax
  unsigned int *v23; // rax
  __int64 v24; // rsi
  unsigned __int64 tinfo_size; // rdx
  int v26; // eax
  __int64 (__fastcall *v28)(__int64, unsigned int *); // rax
  unsigned int *v29; // rax
  __int64 v30; // rdx
  unsigned int *v31; // rdi
  __int64 (*v32)(void); // rax
  __int64 v33; // rsi
  const char *v34; // rdi
  int v35; // eax
  const char *v36; // rdi
  void *v37; // rdi
  void *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rax
  const char *src; // [rsp+8h] [rbp-A0h]
  _BYTE *srcb; // [rsp+8h] [rbp-A0h]
  unsigned int srcc; // [rsp+8h] [rbp-A0h]
  void *srca; // [rsp+8h] [rbp-A0h]
  const char *v45; // [rsp+10h] [rbp-98h]
  size_t v46; // [rsp+18h] [rbp-90h]
  int v47; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v48; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v49; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v50[3]; // [rsp+38h] [rbp-70h] BYREF
  const char *v51; // [rsp+50h] [rbp-58h] BYREF
  __int128 v52; // [rsp+58h] [rbp-50h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v13 = *a3;
  v53 = __readfsqword(0x28u);
  v15 = (__int64 (__fastcall *)(__int64, __int64 *))v13[18];
  if ( v15 == sub_2D280 )
  {
    v16 = (const char **)sub_2CEC0(a3[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v16 )
    {
      if ( *v16 && (src = *v16, v17 = strlen(*v16), v18 = src, (v19 = v17) != 0) )
      {
        v37 = *(void **)(a2 + 16);
        v38 = (void *)(v17 + 1);
        if ( *(_QWORD *)(a2 + 32) < v17 + 1 )
        {
          v45 = src;
          srca = (void *)(v17 + 1);
          v46 = v17;
          v40 = qvector_reserve(a2 + 16, *(_QWORD *)(a2 + 16), v38, 1);
          v19 = v46;
          v18 = v45;
          *(_QWORD *)(a2 + 16) = v40;
          v38 = srca;
          v37 = (void *)v40;
        }
        *(_QWORD *)(a2 + 24) = v38;
        srcb = (_BYTE *)v19;
        memmove(v37, v18, v19);
        srcb[*(_QWORD *)(a2 + 16)] = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 24) = 0;
      }
    }
  }
  else
  {
    v15((__int64)a3, (__int64 *)(a2 + 16));
  }
  v49 = 1;
  v50[0] = 0;
  v50[1] = 0;
  sub_4F630(a1, (__int64)&v49, a3, nullptr, a4, a5, a6);
  copy_tinfo_t(a2 + 64, v50);
  if ( a8 == 5 )
  {
    v28 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a3)[20];
    if ( v28 == sub_2DD50 )
    {
      v29 = (unsigned int *)sub_2CEC0(a3[2], 0x20000, 0x400u, 0x4000000);
      if ( !v29 )
        goto LABEL_19;
      v30 = *v29;
      v48 = *v29;
    }
    else
    {
      if ( (unsigned int)v28((__int64)a3, &v48) )
        goto LABEL_19;
      v30 = v48;
    }
    if ( *(_BYTE *)(a1 + 328) && (_DWORD)v30 )
    {
      v30 = (unsigned int)(v30 - 1);
      v48 = v30;
    }
    v31 = *(unsigned int **)(a1 + 320);
    v51 = nullptr;
    v52 = 0;
    v32 = *(__int64 (**)(void))(*(_QWORD *)v31 + 112LL);
    if ( (char *)v32 == (char *)sub_23F30 )
    {
      v33 = v31[4];
    }
    else
    {
      srcc = v30;
      v39 = v32();
      v30 = srcc;
      v33 = v39;
    }
    sub_38090(&v51, v33, v30);
    v34 = ::src;
    if ( (_QWORD)v52 )
      v34 = v51;
    v35 = str2reg(v34);
    v36 = v51;
    *(_DWORD *)a2 = 3;
    *(_DWORD *)(a2 + 8) = v35;
    if ( v36 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v36);
    }
  }
  else
  {
    if ( a8 != 3 )
    {
      sub_29830();
      goto LABEL_19;
    }
    v20 = (__int64 (__fastcall *)(__int64, int *))(*a3)[20];
    if ( v20 == sub_2DD50 )
    {
      v21 = (int *)sub_2CEC0(a3[2], 0x20000, 0x400u, 0x4000000);
      if ( !v21 )
        goto LABEL_19;
      v47 = *v21;
    }
    else if ( (unsigned int)v20((__int64)a3, &v47) )
    {
      goto LABEL_19;
    }
    v22 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a3)[19];
    if ( v22 == sub_2D130 )
    {
      v23 = (unsigned int *)sub_2CEC0(a3[2], 0x20000000, 0x20000000u, 0x20000000);
      if ( !v23 )
        goto LABEL_19;
      v48 = *v23;
    }
    else if ( (unsigned int)v22((__int64)a3, &v48) )
    {
      goto LABEL_19;
    }
    if ( sub_31E80(a1, v47) || sub_31DE0(a1, v47) )
    {
      *(_DWORD *)a2 = 1;
      v24 = *(_QWORD *)(a2 + 64);
      *(_QWORD *)(a2 + 8) = (int)a9;
      tinfo_size = get_tinfo_size(&v51, v24, 0);
      v26 = (int)v51;
      if ( (unsigned int)v51 < tinfo_size )
        v26 = tinfo_size;
      a9 += v26;
    }
  }
LABEL_19:
  clear_tinfo_t(v50);
  return a9;
}
