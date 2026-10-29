__int64 __fastcall sub_50DD0(__int64 a1, __int64 **a2, double a3, double a4, double a5)
{
  __int64 *v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64 *); // rax
  const char **v8; // rax
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r12
  __int64 *v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  char *v14; // rax
  char v15; // al
  __int64 (__fastcall *v17)(__int64, unsigned int *); // rax
  unsigned int *v18; // rax
  __int64 v19; // rdi
  const char *v20; // rdx
  __int64 v21; // r8
  const char *v22; // rdx
  void *v23; // rdi
  size_t v24; // r14
  unsigned int v25; // [rsp+4h] [rbp-6Ch] BYREF
  void *dest; // [rsp+8h] [rbp-68h] BYREF
  __int128 v27; // [rsp+10h] [rbp-60h]
  __int64 v28; // [rsp+28h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h]
  unsigned __int64 v31; // [rsp+40h] [rbp-30h]

  v6 = *a2;
  v31 = __readfsqword(0x28u);
  v27 = 0;
  dest = nullptr;
  v7 = (__int64 (__fastcall *)(__int64, __int64 *))v6[18];
  if ( v7 == sub_2D280 )
  {
    v8 = (const char **)sub_2CEC0(a2[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v8 )
    {
      v9 = *v8;
      if ( *v8 && (v10 = strlen(*v8), (v11 = v10) != 0) )
      {
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
      }
      else
      {
        *(_QWORD *)&v27 = 0;
      }
    }
  }
  else
  {
    v7((__int64)a2, (__int64 *)&dest);
  }
  v12 = *a2;
  v25 = -1;
  v13 = (__int64 (__fastcall *)(__int64, __int64 *))v12[26];
  if ( (char *)v13 == (char *)sub_2DA80 )
  {
    v14 = (char *)sub_2CEC0(a2[2], 4, 1u, 512);
    if ( !v14 )
    {
LABEL_10:
      v28 = 1;
      v29 = 0;
      v30 = 0;
      goto LABEL_11;
    }
    v15 = *v14;
    LOBYTE(v28) = v15;
  }
  else
  {
    if ( (unsigned int)v13((__int64)a2, &v28) )
      goto LABEL_10;
    v15 = v28;
  }
  if ( !v15 )
    goto LABEL_10;
  v17 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a2)[28];
  if ( v17 == sub_2DD80 )
  {
    v18 = (unsigned int *)sub_2CEC0(a2[2], 0x400000, 0x400u, 0x4000000);
    if ( !v18 )
      goto LABEL_10;
    v25 = *v18;
  }
  else if ( (unsigned int)v17((__int64)a2, &v25) )
  {
    goto LABEL_10;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v28 = 1;
  v20 = src;
  v29 = 0;
  v21 = *(_QWORD *)(a1 + 8);
  v30 = 0;
  if ( (_QWORD)v27 )
    v20 = (const char *)dest;
  if ( (unsigned __int8)sub_4E7E0(v19, (__int64)&v28, v20, a2, v21, nullptr, 0.0, a4, a5) )
  {
    v22 = src;
    if ( (_QWORD)v27 )
      v22 = (const char *)dest;
    sub_32820(*(__int64 **)(a1 + 24), (__int64)&v29, v22, v25);
  }
LABEL_11:
  clear_tinfo_t(&v29);
  if ( dest )
  {
    *(_QWORD *)&v27 = 0;
    qfree(dest);
  }
  return 0;
}

