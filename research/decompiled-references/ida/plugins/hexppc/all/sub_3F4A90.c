__int64 __fastcall sub_3F4A90(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v10; // rcx
  int v12; // eax
  char v14; // al
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 qword; // rdx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rsi
  int v23; // ecx
  _QWORD v24[7]; // [rsp+0h] [rbp-38h] BYREF

  v10 = *(_QWORD *)(a4 + 24);
  v24[1] = __readfsqword(0x28u);
  v12 = sub_3358E0(a1, a2, a3, v10, a5, (char *)a6);
  if ( !v12 )
    return 0;
  if ( v12 == 1 )
    return 1;
  v14 = *(_BYTE *)a6;
  if ( *(_BYTE *)a6 == 5 )
  {
    if ( *(_QWORD *)(a1 + 4416) == -1 )
      return 0;
    v22 = *(_QWORD *)(a1 + 4440);
    if ( v22 == -1 || sub_1CC3E0((__int64)a3, v22, *(_QWORD *)(a4 + 24)) != *(_QWORD *)(*(_QWORD *)(a6 + 8) + 8LL) )
      return 0;
    v17 = *(_QWORD *)(a1 + 4416);
    goto LABEL_27;
  }
  if ( (unsigned __int8)v14 > 5u )
  {
    if ( v14 == 6 )
    {
      v18 = *(_DWORD *)(a1 + 80);
      if ( v18 == a7
        && *(_DWORD *)a4 == 2
        && (*(_BYTE *)(a6 + 1) & 1) == 0
        && (unsigned int)sub_33F2E0(a3[187], *(_QWORD *)(a6 + 8), v18) == 2 )
      {
        sub_121740(a2, (unsigned __int8 *)a6);
        if ( *(_DWORD *)(a1 + 80) == 8 )
          qword = get_qword();
        else
          qword = (unsigned int)get_dword();
        *(_BYTE *)a2 = 6;
        v20 = 0;
        v21 = 8 * *(_DWORD *)(a1 + 84);
        if ( (unsigned __int64)v21 <= 0x3F )
          v20 = 1LL << v21;
        *(_BYTE *)(a2 + 1) |= 1u;
        *(_QWORD *)(a2 + 8) = qword & (v20 - 1);
        return 1;
      }
    }
    return 0;
  }
  if ( v14 == 1 )
  {
    v17 = sub_3F4920(a1, *(_QWORD *)(a4 + 24), *(_DWORD *)(a6 + 8), (__int64)a3);
    if ( v17 == -1 )
      return 0;
LABEL_27:
    sub_119360(a2);
    *(_BYTE *)a2 = 6;
    v23 = 8 * *(_DWORD *)(a1 + 84);
    if ( (unsigned __int64)v23 <= 0x3F )
      v17 &= ~(-1LL << v23);
    *(_QWORD *)(a2 + 8) = v17;
    return 1;
  }
  if ( v14 == 4 )
  {
    if ( (unsigned __int8)sub_3F49C0(a1, v24, a3, *(_QWORD *)(a4 + 24), *(_QWORD *)(a6 + 8)) )
    {
      v15 = v24[0];
      if ( v24[0] >= 0LL )
      {
        sub_119360(a2);
        *(_BYTE *)a2 = 5;
        v16 = (_QWORD *)j__qalloc_or_throw();
        *v16 = a3;
        v16[1] = v15;
        *(_QWORD *)(a2 + 8) = v16;
        return 1;
      }
    }
  }
  return 0;
}

