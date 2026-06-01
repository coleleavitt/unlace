__int64 __fastcall sub_96820(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v5; // rbx
  __int64 result; // rax
  size_t v7; // rax
  size_t v8; // r12
  __int64 v9; // rax
  int v10; // esi
  const char *v11; // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r13
  __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // r13
  __int64 v18; // rax
  void *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rax
  int v22; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v23[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 212) & 0x40) == 0 )
  {
    v9 = *(_QWORD *)a3;
    v23[0] = 0;
    v22 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(*(_QWORD *)(a3 + 256) + 112LL))(
           *(_QWORD *)(v9 + 24),
           110,
           &v22,
           v23)
      || (v10 = 110, !v22) )
    {
      v15 = *(_QWORD *)a3;
      v23[0] = 0;
      v22 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(*(_QWORD *)(a3 + 256) + 112LL))(
             *(_QWORD *)(v15 + 24),
             8199,
             &v22,
             v23)
        || !v22 )
      {
LABEL_12:
        *(_DWORD *)(a3 + 212) |= 0x40u;
        goto LABEL_2;
      }
      v10 = 8199;
    }
    v11 = (const char *)sub_965E0((__int64 *)a3, v10);
    v12 = v11;
    if ( v11 && (v13 = strlen(v11), (v14 = v13) != 0) )
    {
      v19 = *(void **)(a3 + 88);
      v20 = v13 + 1;
      if ( *(_QWORD *)(a3 + 104) < v13 + 1 )
      {
        v21 = qvector_reserve(a3 + 88, *(_QWORD *)(a3 + 88), v20, 1);
        *(_QWORD *)(a3 + 88) = v21;
        v19 = (void *)v21;
      }
      *(_QWORD *)(a3 + 96) = v20;
      memmove(v19, v12, v14);
      *(_BYTE *)(*(_QWORD *)(a3 + 88) + v14) = 0;
    }
    else
    {
      *(_QWORD *)(a3 + 96) = 0;
    }
    goto LABEL_12;
  }
LABEL_2:
  v5 = *(const char **)(a3 + 88);
  result = 0;
  if ( v5 )
  {
    v7 = strlen(v5);
    v8 = v7;
    if ( v7 )
    {
      v16 = (void *)*a2;
      v17 = v7 + 1;
      if ( a2[2] < v7 + 1 )
      {
        v18 = qvector_reserve(a2, *a2, v7 + 1, 1);
        *a2 = v18;
        v16 = (void *)v18;
      }
      a2[1] = v17;
      memmove(v16, v5, v8);
      *(_BYTE *)(*a2 + v8) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    return 1;
  }
  return result;
}

