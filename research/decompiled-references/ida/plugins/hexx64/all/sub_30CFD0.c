char __fastcall sub_30CFD0(__int128 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  const __m128i *v9; // r13
  char result; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  unsigned int *v17; // rbx
  unsigned int *v18; // r12
  char v20; // [rsp+18h] [rbp-78h]
  __int64 v21; // [rsp+20h] [rbp-70h] BYREF
  __int64 v22; // [rsp+28h] [rbp-68h] BYREF
  _BYTE v23[4]; // [rsp+30h] [rbp-60h] BYREF
  int v24; // [rsp+34h] [rbp-5Ch]
  _BYTE v25[4]; // [rsp+40h] [rbp-50h] BYREF
  int v26; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+58h] [rbp-38h]

  v9 = *((const __m128i **)&a1 + 1);
  v27 = __readfsqword(0x28u);
  result = sub_1255D0((unsigned __int8 *)a3, a1, a5, 0, *(double *)a6.m128i_i64);
  if ( !result && a2 && a4 )
  {
    sub_123A40((__int64)v23, (unsigned __int8 *)a3, v12, v13);
    *((_QWORD *)&a1 + 1) = v23;
    v21 = a2;
    sub_30CBB0(a1, &v21, (__int64)v9, a6, a7);
    if ( v24 > 1 )
      sub_1279B0((__int64)v23, (unsigned __int64 *)a1, *(_QWORD *)(v21 + 24), 1, a6);
    sub_123A40((__int64)v25, (unsigned __int8 *)a5, v14, v15);
    v22 = a4;
    *((_QWORD *)&a1 + 1) = v25;
    sub_30CBB0(a1, &v22, (__int64)v9, a6, a7);
    if ( v26 > 1 )
      sub_1279B0((__int64)v25, (unsigned __int64 *)a1, *(_QWORD *)(v22 + 24), 1, a6);
    v16 = sub_12EA80(a1, v9, v21, (__int64)v23, v22, (__int64)v25, a6, a7, 0);
    if ( v16 )
      goto LABEL_14;
    if ( !v9 || *(_BYTE *)a3 != 4 || *(_BYTE *)a5 != 4 )
      goto LABEL_12;
    v17 = *(unsigned int **)(a5 + 8);
    v18 = *(unsigned int **)(a3 + 8);
    if ( sub_131FD0(v9, a2, (__int64)v18, a4, v17, a6, a7) )
LABEL_14:
      v16 = 1;
    else
      v16 = sub_131FD0(v9, a4, (__int64)v17, a2, v18, a6, a7);
LABEL_12:
    v20 = v16;
    sub_11CDA0((__int64)v25);
    sub_11CDA0((__int64)v23);
    return v20;
  }
  return result;
}

