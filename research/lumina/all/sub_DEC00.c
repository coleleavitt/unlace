__int64 *__fastcall sub_DEC00(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  int v7; // r12d
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rcx
  size_t v11; // rdx
  char *v12; // rdi
  __int64 v13; // rdx
  __int64 *v14; // rax
  int v16; // edx
  __int64 *v17; // rax
  int v18; // eax
  int v19; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-30h]

  v4 = a1;
  v20 = __readfsqword(0x28u);
  v19 = 0;
  if ( !a3 )
  {
    v9 = sub_DBF10(a1, 72);
    if ( v9 )
    {
      v9[8] = 0;
      *(_OWORD *)v9 = 0;
      *(_BYTE *)v9 = a2;
      *((_OWORD *)v9 + 2) = 0;
      *((_OWORD *)v9 + 3) = 0;
      *((_OWORD *)v9 + 1) = 0;
      *((_WORD *)v9 + 25) = -1;
      *((_DWORD *)v9 + 10) = 1;
      return v9;
    }
    return nullptr;
  }
  if ( a2 == 155 && *(_QWORD *)a3 && (unsigned int)sub_C6480(*(unsigned __int8 **)a3, &v19) )
  {
    v14 = sub_DBF10(v4, 72);
    v9 = v14;
    if ( !v14 )
      return nullptr;
    v14[8] = 0;
    *((_OWORD *)v14 + 1) = 0;
    *((_OWORD *)v14 + 2) = 0;
    *(_OWORD *)v14 = 0;
    *((_OWORD *)v14 + 3) = 0;
    *(_BYTE *)v14 = -101;
    *((_WORD *)v14 + 25) = -1;
    goto LABEL_18;
  }
  v7 = *(_DWORD *)(a3 + 8) + 1;
  v8 = sub_DBF10(v4, v7 + 72LL);
  v9 = v8;
  if ( !v8 )
    return nullptr;
  v8[8] = 0;
  *(_OWORD *)v8 = 0;
  *(_BYTE *)v8 = a2;
  *((_OWORD *)v8 + 3) = 0;
  *((_OWORD *)v8 + 1) = 0;
  *((_OWORD *)v8 + 2) = 0;
  *((_WORD *)v8 + 25) = -1;
  if ( !v7 )
  {
LABEL_18:
    v16 = v19;
    *((_DWORD *)v9 + 10) = 1;
    *((_DWORD *)v9 + 2) = v16;
    *((_DWORD *)v9 + 1) |= v16 == 0 ? 545260544 : 276825088;
    return v9;
  }
  v10 = v8 + 9;
  v8[1] = (__int64)(v8 + 9);
  v11 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v11 )
  {
    v17 = (__int64 *)memcpy(v8 + 9, *(const void **)a3, v11);
    v11 = *(unsigned int *)(a3 + 8);
    v10 = v17;
  }
  *((_BYTE *)v10 + v11) = 0;
  if ( a4 )
  {
    v12 = (char *)v9[1];
    v13 = (unsigned __int8)*v12;
    if ( byte_1BEF00[v13] < 0 )
    {
      v18 = 0x4000000;
      if ( (_BYTE)v13 == 34 )
        v18 = 67108928;
      *((_DWORD *)v9 + 1) |= v18;
      sub_C23E0(v12);
    }
  }
  *((_DWORD *)v9 + 10) = 1;
  return v9;
}
