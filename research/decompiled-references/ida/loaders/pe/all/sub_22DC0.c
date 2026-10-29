__int64 __fastcall sub_22DC0(__int64 a1, __int64 *a2, int a3, _DWORD *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  _BOOL8 (__fastcall *v11)(__int64, _DWORD *, unsigned int, unsigned int *); // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  _DWORD *v14; // rdx
  __int64 v15; // rax
  int v17; // r14d
  unsigned int v18; // r14d
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-68h]
  int v26; // [rsp+18h] [rbp-50h]
  unsigned int v27; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a6 )
    *a6 = 0;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v9 + 472) )
    return 1;
  v10 = *a2;
  v24 = v9 + 472;
  if ( !*a2 )
  {
    v17 = *(_DWORD *)(v9 + 476);
    v26 = v17;
    v10 = operator new(0x28u);
    *(_QWORD *)v10 = &off_32828;
    *(_QWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 32) = 0;
    *a2 = v10;
    *(_OWORD *)(v10 + 16) = 0;
    if ( !v17 )
      goto LABEL_22;
    v18 = 0;
    do
    {
      v19 = v18++;
      if ( (unsigned __int8)sub_22900(*(_QWORD *)(a1 + 8), &v27, v24, v19, 0)
        && (unsigned int)sub_22C80(*(_QWORD *)(a1 + 8), 0x68u, v27) == a3 )
      {
        v20 = *(_QWORD *)(v10 + 16);
        v21 = *(_QWORD *)(v10 + 8);
        v22 = v18 | 0xA000000;
        if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)(v20 + 1) )
        {
          v23 = qvector_reserve();
          v22 = v18 | 0xA000000;
          *(_QWORD *)(v10 + 8) = v23;
          v21 = v23;
          v20 = *(_QWORD *)(v10 + 16);
        }
        *(_DWORD *)(v21 + 4 * v20) = v22;
        ++*(_QWORD *)(v10 + 16);
      }
    }
    while ( v26 != v18 );
  }
  v11 = *(_BOOL8 (__fastcall **)(__int64, _DWORD *, unsigned int, unsigned int *))(*(_QWORD *)v10 + 16LL);
  if ( v11 == sub_21320 )
  {
    v12 = *(unsigned int *)(v10 + 32);
    v13 = *(_QWORD *)(v10 + 16);
    if ( v13 - v12 < (unsigned __int64)a5 )
      a5 = v13 - v12;
    if ( a5 )
    {
      v14 = a4 + 1;
      ++*(_DWORD *)(v10 + 32);
      *a4 = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 4 * v12);
      if ( a5 != 1 )
      {
        do
        {
          v15 = *(unsigned int *)(v10 + 32);
          ++v14;
          *(_DWORD *)(v10 + 32) = v15 + 1;
          *(v14 - 1) = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 4 * v15);
        }
        while ( &a4[a5] != v14 );
      }
      goto LABEL_11;
    }
LABEL_22:
    a5 = 0;
LABEL_11:
    *a6 = a5;
    return a5 == 0;
  }
  return v11(v10, a4, a5, a6);
}
