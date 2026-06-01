__int64 __fastcall sub_C320(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 (*v7)(void); // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  size_t v11; // r8
  const void *v12; // r14
  size_t v13; // rax
  size_t v14; // r13
  const void *v15; // r13
  size_t v16; // rax
  __int64 (*v17)(); // rax
  unsigned int v18; // r12d
  __int64 (*v19)(); // rax
  void *v21; // rdi
  size_t v22; // rdx
  void *v23; // rdi
  size_t v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v28; // [rsp+10h] [rbp-58h]
  size_t v29; // [rsp+10h] [rbp-58h]
  size_t v30; // [rsp+10h] [rbp-58h]
  size_t v31; // [rsp+18h] [rbp-50h]
  _QWORD v32[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  v32[1] = __readfsqword(0x28u);
  if ( (char *)v7 == (char *)sub_ABD0 )
    v9 = a1 + 224;
  else
    v9 = v7();
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, debug[2] & 1);
  v12 = *(const void **)(a1 + 128);
  if ( v12 && (v13 = strlen(*(const char **)(a1 + 128)), (v14 = v13) != 0) )
  {
    v23 = *(void **)(v9 + 808);
    v24 = v13 + 1;
    if ( *(_QWORD *)(v9 + 824) < v13 + 1 )
    {
      v29 = v13 + 1;
      v25 = qvector_reserve();
      v24 = v29;
      *(_QWORD *)(v9 + 808) = v25;
      v23 = (void *)v25;
    }
    *(_QWORD *)(v9 + 816) = v24;
    memmove(v23, v12, v14);
    *(_BYTE *)(*(_QWORD *)(v9 + 808) + v14) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 816) = 0;
  }
  v15 = *(const void **)(a1 + 144);
  if ( v15 && (v16 = strlen(*(const char **)(a1 + 144)), (v11 = v16) != 0) )
  {
    v21 = *(void **)(v9 + 832);
    v22 = v16 + 1;
    if ( *(_QWORD *)(v9 + 848) < v16 + 1 )
    {
      v31 = v16;
      v30 = v16 + 1;
      v26 = qvector_reserve();
      v11 = v31;
      v22 = v30;
      *(_QWORD *)(v9 + 832) = v26;
      v21 = (void *)v26;
    }
    *(_QWORD *)(v9 + 840) = v22;
    v28 = v11;
    memmove(v21, v15, v11);
    v11 = v28;
    *(_BYTE *)(*(_QWORD *)(v9 + 832) + v28) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 840) = 0;
  }
  *(_DWORD *)(v9 + 856) = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(v9 + 800) = *(_QWORD *)(a1 + 152);
  v17 = *(__int64 (**)())(*(_QWORD *)v9 + 80LL);
  if ( v17 == sub_AB00
    || ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))v17)(v9, a2, a3, a4, a5) )
  {
    v32[0] = 0;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, size_t))(*(_QWORD *)v9 + 104LL))(
            v9,
            v32,
            a5,
            v10,
            v11);
    if ( v18 == 1 )
    {
      *(_QWORD *)(a1 + 152) |= v32[0];
      sub_BFC0(a1, 1);
      *(_BYTE *)(a1 + 208) = 1;
      setup_lowcnd_regfuncs();
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)()))(*(_QWORD *)a1 + 40LL))(a1, sub_35FC0);
    }
    else
    {
      v19 = *(__int64 (**)())(*(_QWORD *)v9 + 88LL);
      if ( v19 != sub_AB10 )
        ((void (__fastcall *)(__int64))v19)(v9);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v18;
}

