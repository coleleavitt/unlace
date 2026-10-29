__int64 __fastcall sub_DFB20(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  void *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 result; // rax
  int v13; // ecx
  size_t v14; // rdx
  int v15; // edx

  v3 = *(unsigned int *)(a1 + 20);
  if ( !(_DWORD)v3 )
  {
    *(_BYTE *)(a1 + 28) = 18;
    sub_CA280((__int64 *)a1);
    return (unsigned int)(*(_DWORD *)(a1 + 16) - 1 - *(_DWORD *)(a1 + 24));
  }
  v4 = nullptr;
  if ( (*(_BYTE *)(a1 + 29) & 4) != 0 )
    v4 = *(_QWORD **)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 24);
  v6 = v5 + (int)a2 + 1;
  v7 = v6 + v5;
  if ( v7 > v3 )
  {
    if ( v6 > v3 )
    {
      sub_C92E0(a1);
      v13 = *(_DWORD *)(a1 + 20);
      *(_BYTE *)(a1 + 28) = 18;
      if ( v13 )
        sub_C92E0(a1);
      sub_CA280((__int64 *)a1);
      return 0;
    }
    LODWORD(v7) = v6;
  }
  v8 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 16) = v7;
  if ( v8 )
    v9 = sub_DFAD0(v8, v4, (unsigned int)v7);
  else
    v9 = (void *)sub_D2640((__int64)v4, (unsigned int)v7);
  if ( v9 )
  {
    if ( (*(_BYTE *)(a1 + 29) & 4) == 0 )
    {
      v14 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v14 )
        v9 = memcpy(v9, *(const void **)(a1 + 8), v14);
    }
    v10 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 8) = v9;
    if ( v10 && *(_QWORD *)(v10 + 488) > (unsigned __int64)v9 )
    {
      v11 = 128;
      if ( *(_QWORD *)(v10 + 472) <= (unsigned __int64)v9 )
        goto LABEL_11;
      if ( *(_QWORD *)(v10 + 480) <= (unsigned __int64)v9 )
      {
        v11 = *(unsigned __int16 *)(v10 + 414);
        goto LABEL_11;
      }
    }
    v11 = ((__int64 (__fastcall *)(void *))*(&xmmword_2414B0 + 1))(v9);
LABEL_11:
    *(_BYTE *)(a1 + 29) |= 4u;
    *(_DWORD *)(a1 + 16) = v11;
    return a2;
  }
  sub_C92E0(a1);
  v15 = *(_DWORD *)(a1 + 20);
  result = 0;
  *(_BYTE *)(a1 + 28) = 7;
  if ( v15 )
  {
    sub_C92E0(a1);
    return 0;
  }
  return result;
}
