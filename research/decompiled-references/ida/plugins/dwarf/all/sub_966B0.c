__int64 __fastcall sub_966B0(__int64 a1)
{
  __int64 v3; // rax
  int v4; // esi
  const char *v5; // rax
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r12
  __int64 v9; // rax
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax
  int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 212) & 0x40) == 0 )
  {
    v3 = *(_QWORD *)a1;
    v14[0] = 0;
    v13 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(*(_QWORD *)(a1 + 256) + 112LL))(
           *(_QWORD *)(v3 + 24),
           110,
           &v13,
           v14)
      || (v4 = 110, !v13) )
    {
      v9 = *(_QWORD *)a1;
      v14[0] = 0;
      v13 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(*(_QWORD *)(a1 + 256) + 112LL))(
             *(_QWORD *)(v9 + 24),
             8199,
             &v13,
             v14)
        || !v13 )
      {
LABEL_8:
        *(_DWORD *)(a1 + 212) |= 0x40u;
        return *(_QWORD *)(a1 + 88);
      }
      v4 = 8199;
    }
    v5 = (const char *)sub_965E0((__int64 *)a1, v4);
    v6 = v5;
    if ( v5 && (v7 = strlen(v5), (v8 = v7) != 0) )
    {
      v10 = *(void **)(a1 + 88);
      v11 = v7 + 1;
      if ( *(_QWORD *)(a1 + 104) < v7 + 1 )
      {
        v12 = qvector_reserve(a1 + 88, *(_QWORD *)(a1 + 88), v11, 1);
        *(_QWORD *)(a1 + 88) = v12;
        v10 = (void *)v12;
      }
      *(_QWORD *)(a1 + 96) = v11;
      memmove(v10, v6, v8);
      *(_BYTE *)(*(_QWORD *)(a1 + 88) + v8) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 96) = 0;
    }
    goto LABEL_8;
  }
  return *(_QWORD *)(a1 + 88);
}

