__int64 __fastcall sub_320F0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  const char *v6; // rax
  const char *v7; // r13
  __int64 v8; // r15
  size_t v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // r8
  void *v17; // rax
  void *v18; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_84C30(a4) )
    goto LABEL_6;
  do
  {
    if ( (*(_QWORD *)(a4 + 224) & 0x7FFFFFFFFFFFFFFFLL) != 0 && *(_QWORD *)(a4 + 224) != -1 )
      goto LABEL_17;
    if ( under_debugger )
      goto LABEL_23;
    interr(30478);
LABEL_6:
    v6 = (const char *)sub_986B0(a4);
    v7 = v6;
  }
  while ( !v6 || !strstr(v6, "nullptr") );
  src = nullptr;
  v8 = sub_5A0C0(a3 + 3, a4, 2, 4);
  v20 = 0;
  v9 = strlen(v7);
  src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
  *(_QWORD *)&v20 = v9 + 1;
  memmove(src, v7, v9);
  *((_BYTE *)src + v9) = 0;
  if ( (void **)(v8 + 312) != &src )
  {
    v10 = v20;
    if ( (unsigned __int64)v20 > 1 )
    {
      v16 = src;
      v17 = *(void **)(v8 + 312);
      if ( *(_QWORD *)(v8 + 328) < (unsigned __int64)v20 )
      {
        v18 = src;
        v17 = (void *)qvector_reserve(v8 + 312, *(_QWORD *)(v8 + 312), v20, 1);
        *(_QWORD *)(v8 + 312) = v17;
        v16 = v18;
      }
      *(_QWORD *)(v8 + 320) = v10;
      memmove(v17, v16, v10 - 1);
      *(_BYTE *)(*(_QWORD *)(v8 + 312) + v10 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v8 + 320) = 0;
    }
  }
  if ( src )
  {
    *(_QWORD *)&v20 = 0;
    qfree(src);
  }
  if ( (*(_QWORD *)(a4 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a4 + 224) == -1 )
  {
    if ( under_debugger )
LABEL_23:
      BUG();
    interr(30478);
LABEL_17:
    v11 = sub_5C3E0(*a3, 0, a4 + 224);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v12;
    return a1;
  }
  v14 = sub_5C3E0(*a3, 0, a4 + 224);
  *(_DWORD *)(v8 + 392) = 3;
  *(_OWORD *)(a1 + 4) = 0;
  *(_QWORD *)(v8 + 400) = v14;
  *(_QWORD *)(v8 + 408) = v15;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v8;
  return a1;
}

