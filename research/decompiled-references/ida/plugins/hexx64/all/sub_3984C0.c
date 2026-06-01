__int64 __fastcall sub_3984C0(__int64 a1, unsigned __int64 a2, _QWORD *a3, double a4, double a5, __m128i a6, double a7)
{
  __int64 v7; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // rdx
  __int64 v24; // rax
  _QWORD v25[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 1008);
  v26 = __readfsqword(0x28u);
  v9 = *(__int64 **)(v7 + 40);
  v10 = &v9[*(_QWORD *)(v7 + 48)];
  if ( v9 == v10 )
    goto LABEL_5;
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 )
    {
      if ( (unsigned __int8)sub_389B80(*v9, a2) )
        break;
    }
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  v15 = *(_QWORD *)(v11 + 32);
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 108);
    if ( (v16 & 8) == 0 && (*(_BYTE *)v11 & 2) != 0 )
    {
      *(_DWORD *)(v15 + 108) = v16 | 8;
      goto LABEL_11;
    }
LABEL_5:
    v12 = *(_QWORD *)(a1 + 112);
    v13 = *a3 >> 3;
    v25[0] = off_4E6658;
    v25[1] = v13;
    sub_2BC2C0(v12, a2, (__int64)v25);
    return v26 - __readfsqword(0x28u);
  }
  if ( (*(_BYTE *)v11 & 2) == 0 )
    goto LABEL_5;
LABEL_11:
  v17 = *(_QWORD *)(v11 + 24);
  v18 = sub_1CFE20(v17, *a3 >> 3, a2, a4);
  v19 = sub_228FE0((_QWORD *)(v17 + 432), *(_QWORD *)(a1 + 112), v18, 1, a4);
  if ( v19 != -1 )
  {
    v23 = s1;
    if ( a3[3] )
      v23 = (const char *)a3[2];
    sub_397570(v11, *(_QWORD *)(v17 + 432) + 104LL * v19, v23, 0, 1, a4, a5, a6, a7);
  }
  v24 = *(_QWORD *)(v11 + 32);
  if ( !v24 )
    return v26 - __readfsqword(0x28u);
  *(_DWORD *)(v24 + 108) &= ~8u;
  if ( (*(_BYTE *)v11 & 2) != 0 )
    return v26 - __readfsqword(0x28u);
  return sub_395A90(v11, 0, a4, v20, v21, v22, a5, a6, a7);
}

