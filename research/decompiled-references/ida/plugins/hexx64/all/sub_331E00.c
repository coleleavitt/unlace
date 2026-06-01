__int64 __fastcall sub_331E00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  bool v14; // al
  char v15; // al
  char v16; // al
  int v17; // eax
  _QWORD *v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 48);
  if ( !v8 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    sub_127A20((__int64)v21, a2, v8, 1, a5, a6, a7, a8);
    if ( *(_DWORD *)v8 != 4 )
      break;
    v10 = a1 + 2;
    if ( *(_BYTE *)(v8 + 32) == 1 )
      goto LABEL_9;
LABEL_4:
    sub_64280(v10, v21, a7);
    sub_316CB0(a1 + 4, (const void **)&v22, v11, v12);
    if ( v22 )
    {
      v23 = 0;
      qfree(v22);
    }
    qfree(v21[0]);
    v8 = *(_QWORD *)(v8 + 8);
    if ( !v8 )
      return v9;
  }
  v10 = a1 + 2;
  if ( *(_DWORD *)v8 != 67 )
    goto LABEL_4;
  if ( *(_DWORD *)(v8 + 36) != *(_DWORD *)(v8 + 68) )
    goto LABEL_4;
  v10 = a1 + 2;
  if ( *(_BYTE *)(v8 + 32) != 1 )
    goto LABEL_4;
LABEL_9:
  v13 = sub_32F330(v8 + 64, &v20, a7);
  v10 = a1 + 2;
  if ( !v13 )
    goto LABEL_4;
  v19 = a1 + 2;
  v14 = sub_64930(a1 + 2, *(_DWORD *)(v8 + 40));
  v10 = a1 + 2;
  if ( v14 )
    goto LABEL_4;
  v15 = sub_64780(v19, v21);
  v10 = a1 + 2;
  if ( v15 )
    goto LABEL_4;
  v16 = sub_318470((unsigned __int64 **)a1 + 4, (__int64)&v22);
  v10 = a1 + 2;
  if ( v16 )
    goto LABEL_4;
  v17 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, _QWORD *))(*a1 + 16LL))(
          a1,
          v8,
          *(unsigned int *)(v8 + 40),
          v20,
          v19);
  if ( v17 != -1 )
  {
    v10 = a1 + 2;
    v9 -= (v17 == 0) - 1;
    goto LABEL_4;
  }
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
  }
  qfree(v21[0]);
  return v9;
}

