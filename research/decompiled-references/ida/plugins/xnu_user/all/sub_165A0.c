__int64 __fastcall sub_165A0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 (*v10)(void); // rax
  __int64 v11; // rbx
  size_t v12; // rax
  const char *v13; // r9
  size_t v14; // r8
  const char *v15; // r9
  size_t v16; // rax
  size_t v17; // r8
  unsigned int v18; // r12d
  void *v20; // rdi
  void *v21; // rdx
  void *v22; // rdi
  void *v23; // rdx
  __int64 v24; // rax
  void (*v25)(); // rax
  __int64 v26; // rax
  __int64 v27; // rax
  const char *src; // [rsp+8h] [rbp-60h]
  const char *srca; // [rsp+8h] [rbp-60h]
  _BYTE *srcc; // [rsp+8h] [rbp-60h]
  _BYTE *srce; // [rsp+8h] [rbp-60h]
  void *srcd; // [rsp+8h] [rbp-60h]
  void *srcb; // [rsp+8h] [rbp-60h]
  const char *v34; // [rsp+10h] [rbp-58h]
  const char *v35; // [rsp+10h] [rbp-58h]
  size_t v36; // [rsp+18h] [rbp-50h]
  size_t v37; // [rsp+18h] [rbp-50h]
  _QWORD v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_QWORD *)a1;
  v38[1] = __readfsqword(0x28u);
  v10 = *(__int64 (**)(void))(v8 + 32);
  if ( (char *)v10 == (char *)sub_12A40 )
    v11 = a1 + 488;
  else
    v11 = v10();
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 96LL))(v11, debug[2] & 1);
  if ( *(_QWORD *)(a1 + 128) && (src = *(const char **)(a1 + 128), v12 = strlen(src), v13 = src, (v14 = v12) != 0) )
  {
    v22 = *(void **)(v11 + 808);
    v23 = (void *)(v12 + 1);
    if ( *(_QWORD *)(v11 + 824) < v12 + 1 )
    {
      v36 = v12;
      v34 = src;
      srcd = (void *)(v12 + 1);
      v26 = qvector_reserve();
      v14 = v36;
      v13 = v34;
      *(_QWORD *)(v11 + 808) = v26;
      v23 = srcd;
      v22 = (void *)v26;
    }
    *(_QWORD *)(v11 + 816) = v23;
    srce = (_BYTE *)v14;
    memmove(v22, v13, v14);
    srce[*(_QWORD *)(v11 + 808)] = 0;
  }
  else
  {
    *(_QWORD *)(v11 + 816) = 0;
  }
  v15 = *(const char **)(a1 + 144);
  if ( v15 && (srca = *(const char **)(a1 + 144), v16 = strlen(srca), v15 = srca, (v17 = v16) != 0) )
  {
    v20 = *(void **)(v11 + 832);
    v21 = (void *)(v16 + 1);
    if ( *(_QWORD *)(v11 + 848) < v16 + 1 )
    {
      v37 = v16;
      v35 = srca;
      srcb = (void *)(v16 + 1);
      v27 = qvector_reserve();
      v17 = v37;
      v15 = v35;
      *(_QWORD *)(v11 + 832) = v27;
      v21 = srcb;
      v20 = (void *)v27;
    }
    *(_QWORD *)(v11 + 840) = v21;
    srcc = (_BYTE *)v17;
    memmove(v20, v15, v17);
    srcc[*(_QWORD *)(v11 + 832)] = 0;
  }
  else
  {
    *(_QWORD *)(v11 + 840) = 0;
  }
  *(_DWORD *)(v11 + 856) = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(v11 + 800) = *(_QWORD *)(a1 + 152);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, const char *))(*(_QWORD *)v11 + 80LL))(
         v11,
         a2,
         a3,
         a4,
         a5,
         v15) )
  {
    v38[0] = 0;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v11 + 104LL))(v11, v38, a5);
    if ( v18 == 1 )
    {
      *(_QWORD *)(a1 + 152) |= v38[0];
      sub_16200((__int64 *)a1, 1u);
      v24 = *(_QWORD *)a1;
      *(_BYTE *)(a1 + 208) = 1;
      v25 = *(void (**)())(v24 + 40);
      if ( v25 != nullsub_1 )
        ((void (__fastcall *)(__int64))v25)(a1);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v18;
}

