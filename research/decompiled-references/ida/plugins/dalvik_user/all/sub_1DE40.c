__int64 __fastcall sub_1DE40(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  void *v6; // rsi
  __int128 v7; // kr00_16
  void *v8; // rdi
  unsigned __int64 v9; // r13
  size_t v10; // r14
  unsigned int v11; // eax
  void *v12; // [rsp+0h] [rbp-58h]
  __int128 v13; // [rsp+8h] [rbp-50h]
  char nptr[5]; // [rsp+23h] [rbp-35h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v3 = sub_1DD80(a1, (__int64)nptr, 4u);
  if ( !(_BYTE)v3 )
    return v3;
  nptr[4] = 0;
  v5 = strtoul(nptr, nullptr, 16);
  v13 = 0;
  if ( !v5 )
  {
    if ( !a2 )
      return v3;
    v6 = nullptr;
    v7 = 0u;
    goto LABEL_6;
  }
  v9 = v5;
  v10 = v5 + 1LL;
  v12 = (void *)qvector_reserve();
  memset(v12, 0, v10);
  *(_QWORD *)&v13 = v10;
  *((_BYTE *)v12 + v9) = 0;
  v11 = sub_1DD80(a1, (__int64)v12, v9);
  v8 = v12;
  if ( (_BYTE)v11 )
  {
    if ( a2 )
    {
      v7 = v13;
      v6 = v12;
LABEL_6:
      v8 = *(void **)a2;
      *(_QWORD *)a2 = v6;
      *(_OWORD *)(a2 + 8) = v7;
      goto LABEL_7;
    }
    v3 = v11;
  }
  else
  {
    v3 = 0;
  }
LABEL_7:
  if ( v8 )
    qfree();
  return v3;
}

