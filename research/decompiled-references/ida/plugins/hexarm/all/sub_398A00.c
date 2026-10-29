__int64 __fastcall sub_398A00(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  double v27; // xmm4_8
  double v28; // xmm5_8
  const char *v29; // rdx
  __int64 v30; // rax
  _QWORD v31[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v11 = *(_QWORD *)(a1 + 1008);
  v32 = __readfsqword(0x28u);
  v13 = *(__int64 **)(v11 + 40);
  v14 = &v13[*(_QWORD *)(v11 + 48)];
  if ( v13 == v14 )
    goto LABEL_5;
  while ( 1 )
  {
    v15 = *v13;
    if ( *v13 )
    {
      if ( (unsigned __int8)sub_38A0C0(*v13, a2) )
        break;
    }
    if ( v14 == ++v13 )
      goto LABEL_5;
  }
  v19 = *(_QWORD *)(v15 + 32);
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 108);
    if ( (v20 & 8) == 0 && (*(_BYTE *)v15 & 2) != 0 )
    {
      *(_DWORD *)(v19 + 108) = v20 | 8;
      goto LABEL_11;
    }
LABEL_5:
    v16 = *(_QWORD *)(a1 + 112);
    v17 = *a3 >> 3;
    v31[0] = off_4E0D18;
    v31[1] = v17;
    sub_2BC680(v16, a2, (__int64)v31);
    return v32 - __readfsqword(0x28u);
  }
  if ( (*(_BYTE *)v15 & 2) == 0 )
    goto LABEL_5;
LABEL_11:
  v21 = *(_QWORD *)(v15 + 24);
  v22 = sub_1CF860(v21, *a3 >> 3, a2);
  v23 = sub_2293A0((_QWORD *)(v21 + 432), *(_QWORD *)(a1 + 112), v22, 1);
  if ( v23 != -1 )
  {
    v29 = s1;
    if ( a3[3] )
      v29 = (const char *)a3[2];
    sub_397AB0(v15, *(_QWORD *)(v21 + 432) + 104LL * v23, v29, 0, 1, a4, a5, a6, a7, v27, v28, a10, a11);
  }
  v30 = *(_QWORD *)(v15 + 32);
  if ( !v30 )
    return v32 - __readfsqword(0x28u);
  *(_DWORD *)(v30 + 108) &= ~8u;
  if ( (*(_BYTE *)v15 & 2) != 0 )
    return v32 - __readfsqword(0x28u);
  return sub_395FD0(v15, 0, *(double *)a4.m128_u64, v24, v25, v26);
}

