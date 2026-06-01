__int64 __fastcall sub_2E1D0(__int64 a1, __int64 **a2)
{
  __int64 *v3; // rax
  __int64 (__fastcall *v5)(__int64, __int64 *); // rax
  const char **v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  const char *v10; // rsi
  const char *v11; // rdi
  __int64 (__fastcall *v12)(__int64, _DWORD *); // rax
  int *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  void *v17; // rdi
  size_t v18; // r14
  void *dest; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v3 = *a2;
  v21 = __readfsqword(0x28u);
  dest = nullptr;
  v5 = (__int64 (__fastcall *)(__int64, __int64 *))v3[18];
  v20 = 0;
  if ( v5 == sub_2D280 )
  {
    v6 = (const char **)sub_2CEC0(a2[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( !v6 )
      goto LABEL_11;
    v7 = *v6;
    if ( !*v6 || (v8 = strlen(*v6), (v9 = v8) == 0) )
    {
      *(_QWORD *)&v20 = 0;
      v10 = *(const char **)(a1 + 24);
      v11 = src;
      goto LABEL_6;
    }
    v17 = dest;
    v18 = v8 + 1;
    if ( *((_QWORD *)&v20 + 1) < v8 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v8 + 1, 1);
      v17 = dest;
    }
    *(_QWORD *)&v20 = v18;
    memmove(v17, v7, v9);
    *((_BYTE *)dest + v9) = 0;
  }
  else if ( (unsigned int)v5((__int64)a2, (__int64 *)&dest) )
  {
    goto LABEL_11;
  }
  v10 = *(const char **)(a1 + 24);
  if ( (_QWORD)v20 )
    v11 = (const char *)dest;
  else
    v11 = src;
LABEL_6:
  if ( !strcmp(v11, v10) )
  {
    v12 = (__int64 (__fastcall *)(__int64, _DWORD *))(*a2)[22];
    if ( v12 == sub_2DEA0 )
    {
      v13 = (int *)sub_2CEC0(a2[2], 0x80000, 0x400u, 0x4000000);
      if ( v13 )
      {
        v14 = *v13;
        *(_DWORD *)(a1 + 32) = v14;
        goto LABEL_12;
      }
    }
    else
    {
      v12((__int64)a2, (_DWORD *)(a1 + 32));
    }
  }
LABEL_11:
  v14 = *(_DWORD *)(a1 + 32);
LABEL_12:
  if ( v14 )
    v15 = -2147467259;
  else
    v15 = 0;
  if ( dest )
  {
    *(_QWORD *)&v20 = 0;
    qfree(dest);
  }
  return v15;
}

