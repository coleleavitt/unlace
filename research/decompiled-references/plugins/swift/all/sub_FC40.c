unsigned __int64 __fastcall sub_FC40(__int64 a1, __int64 a2)
{
  bool v2; // dl
  int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // rax
  __int64 v8; // rdx
  const char *v9; // r12
  size_t v10; // rax
  size_t v11; // rbp
  __int64 v12; // rbp
  const char *v13; // rax
  void *v14; // rdi
  size_t v15; // r13
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v18; // [rsp+10h] [rbp-38h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v2 = sub_F230(a1, *(_DWORD *)(a2 + 64));
  v3 = 6;
  if ( v2 )
  {
    v5 = *(int *)(a2 + 64);
    v6 = 16 * v5 + a1;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v6 + 248);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v6 + 256);
    v7 = (char *)&xmmword_28820 + 24 * v5;
    v8 = *((_QWORD *)v7 + 2);
    *(_QWORD *)(a2 + 8) = 1610613760;
    *(_DWORD *)a2 = v8;
    v9 = *(const char **)v7;
    if ( *(_QWORD *)v7 && (v10 = strlen(*(const char **)v7), (v11 = v10) != 0) )
    {
      v14 = *(void **)(a2 + 32);
      v15 = v10 + 1;
      if ( *(_QWORD *)(a2 + 48) < v10 + 1 )
      {
        v16 = qvector_reserve(a2 + 32, *(_QWORD *)(a2 + 32), v15, 1);
        *(_QWORD *)(a2 + 32) = v16;
        v14 = (void *)v16;
      }
      *(_QWORD *)(a2 + 40) = v15;
      memmove(v14, v9, v11);
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + v11) = 0;
      v12 = a2 + 24;
      if ( *(_QWORD *)(a2 + 40) )
        v13 = *(const char **)(a2 + 32);
      else
        v13 = s1;
    }
    else
    {
      *(_QWORD *)(a2 + 40) = 0;
      v12 = a2 + 24;
      v13 = s1;
    }
    if ( v13 )
    {
      v17[1] = v13;
      v18 = 256;
      v17[0] = get_idati();
      create_tinfo(v12, 61, 61, v17);
    }
    v3 = 1;
  }
  *(_DWORD *)(a2 + 68) = v3;
  return v19 - __readfsqword(0x28u);
}
