char __fastcall sub_309350(__int128 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const __m128i *v7; // r13
  char result; // al
  char v10; // al
  unsigned int *v11; // rbx
  unsigned int *v12; // r12
  char v14; // [rsp+18h] [rbp-78h]
  __int64 v15; // [rsp+20h] [rbp-70h] BYREF
  __int64 v16; // [rsp+28h] [rbp-68h] BYREF
  _BYTE v17[4]; // [rsp+30h] [rbp-60h] BYREF
  int v18; // [rsp+34h] [rbp-5Ch]
  _BYTE v19[4]; // [rsp+40h] [rbp-50h] BYREF
  int v20; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v21; // [rsp+58h] [rbp-38h]

  v7 = *((const __m128i **)&a1 + 1);
  v21 = __readfsqword(0x28u);
  result = sub_121B90((unsigned __int8 *)a3, a1, a5, 0);
  if ( !result && a2 && a4 )
  {
    sub_120000((__int64)v17, (unsigned __int8 *)a3);
    *((_QWORD *)&a1 + 1) = v17;
    v15 = a2;
    sub_308F30(a1, &v15, (__int64)v7);
    if ( v18 > 1 )
      sub_123F70((unsigned __int64)v17, a1, *(_QWORD *)(v15 + 24), 1);
    sub_120000((__int64)v19, (unsigned __int8 *)a5);
    v16 = a4;
    *((_QWORD *)&a1 + 1) = v19;
    sub_308F30(a1, &v16, (__int64)v7);
    if ( v20 > 1 )
      sub_123F70((unsigned __int64)v19, a1, *(_QWORD *)(v16 + 24), 1);
    v10 = sub_12B040(a1, v7, v15, (__int64)v17, v16, (__int64)v19, 0);
    if ( v10 )
      goto LABEL_14;
    if ( !v7 || *(_BYTE *)a3 != 4 || *(_BYTE *)a5 != 4 )
      goto LABEL_12;
    v11 = *(unsigned int **)(a5 + 8);
    v12 = *(unsigned int **)(a3 + 8);
    if ( sub_12E590(v7, a2, (__int64)v12, a4, v11) )
LABEL_14:
      v10 = 1;
    else
      v10 = sub_12E590(v7, a4, (__int64)v11, a2, v12);
LABEL_12:
    v14 = v10;
    sub_119360((__int64)v19);
    sub_119360((__int64)v17);
    return v14;
  }
  return result;
}

