__int64 __fastcall sub_50A80(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5, double a6, double a7)
{
  __int64 v9; // rdi
  __int64 **v11; // rbx
  bool (__fastcall *v12)(__int64); // rax
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  const char **v14; // rax
  const char *v15; // r15
  size_t v16; // rax
  size_t v17; // rbp
  const char *v18; // rdx
  unsigned int v19; // ebp
  void (__fastcall *v20)(void *); // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rdi
  __int64 (__fastcall *v25)(__int64); // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64, unsigned __int8 *); // rax
  unsigned __int8 *v29; // rax
  int v30; // ebp
  void *v31; // rdi
  size_t v32; // rdx
  size_t v33; // [rsp+8h] [rbp-90h]
  unsigned __int8 v34; // [rsp+17h] [rbp-81h] BYREF
  __int64 **v35; // [rsp+18h] [rbp-80h]
  void *dest; // [rsp+20h] [rbp-78h] BYREF
  __int128 v37; // [rsp+28h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 v39; // [rsp+48h] [rbp-50h] BYREF
  __int64 v40; // [rsp+50h] [rbp-48h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 320);
  v41 = __readfsqword(0x28u);
  v11 = (__int64 **)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 128LL))(v9, 0, 0);
  v35 = v11;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a3 + 240LL))(a3, v11) )
    goto LABEL_11;
  v12 = (bool (__fastcall *)(__int64))(*v11)[35];
  if ( v12 == sub_23F00 )
  {
    if ( v11[2] )
      goto LABEL_4;
LABEL_11:
    v19 = 0;
    goto LABEL_12;
  }
  if ( v12((__int64)v11) )
    goto LABEL_11;
LABEL_4:
  dest = nullptr;
  v37 = 0;
  v13 = (__int64 (__fastcall *)(__int64, __int64 *))(*v11)[18];
  if ( v13 != sub_2D280 )
  {
    v13((__int64)v11, (__int64 *)&dest);
    goto LABEL_17;
  }
  v14 = (const char **)sub_2CEC0(v11[2], 0x10000000, 0x10000000u, 0x10000000);
  if ( !v14 )
  {
LABEL_17:
    v22 = v37;
    goto LABEL_18;
  }
  v15 = *v14;
  if ( !*v14 || (v16 = strlen(*v14), (v17 = v16) == 0) )
  {
    *(_QWORD *)&v37 = 0;
    v38 = 1;
    v39 = 0;
    v40 = 0;
LABEL_9:
    v18 = src;
    goto LABEL_19;
  }
  v31 = dest;
  v32 = v16 + 1;
  if ( *((_QWORD *)&v37 + 1) < v16 + 1 )
  {
    v33 = v16 + 1;
    dest = (void *)qvector_reserve(&dest, dest, v32, 1);
    v32 = v33;
    v31 = dest;
  }
  *(_QWORD *)&v37 = v32;
  memmove(v31, v15, v17);
  *((_BYTE *)dest + v17) = 0;
  v22 = v37;
LABEL_18:
  v38 = 1;
  v18 = (const char *)dest;
  v39 = 0;
  v40 = 0;
  if ( !v22 )
    goto LABEL_9;
LABEL_19:
  v19 = sub_4E7E0(a1, (__int64)&v38, v18, v11, 0, nullptr, 0.0, a6, a7);
  if ( (_BYTE)v19 )
  {
    v23 = v39;
    v39 = *a2;
    *a2 = v23;
    if ( a4 )
    {
      v24 = *(_DWORD **)(a1 + 320);
      v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 120LL);
      v26 = v25 == sub_23F40 ? v24[5] : ((__int64 (*)(void))v25)();
      if ( v26 > 799 )
      {
        v27 = *(_QWORD *)a4;
        v34 = 0;
        v28 = *(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v27 + 104);
        if ( v28 == sub_2DA40 )
        {
          v29 = (unsigned __int8 *)sub_2CEC0(*(__int64 **)(a4 + 16), 2, 1u, 512);
          if ( !v29 )
            goto LABEL_28;
          v30 = *v29;
          goto LABEL_27;
        }
        if ( !(unsigned int)v28(a4, &v34) )
        {
          v30 = v34;
LABEL_27:
          v19 = v30 ^ 1;
        }
      }
    }
  }
LABEL_28:
  clear_tinfo_t(&v39);
  if ( dest )
  {
    *(_QWORD *)&v37 = 0;
    qfree(dest);
  }
LABEL_12:
  if ( v11 )
  {
    v20 = (void (__fastcall *)(void *))(*v11)[37];
    if ( v20 == sub_243F0 )
      operator delete(v11, 0x18u);
    else
      v20(v11);
  }
  return v19;
}

