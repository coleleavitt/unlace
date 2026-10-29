_QWORD *__fastcall sub_19E700(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8)
{
  _QWORD *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // r9d
  __m128i *v19; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+10h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+3Ch] [rbp-5Ch]
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  char v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v11 = *(_QWORD **)(a1 + 16);
  v12 = v11[35];
  v19 = sub_D21A0(v12, a2, a3, a4, a7);
  v20 = *(_QWORD *)(v12 + 40);
  if ( a5 == a3 )
  {
    LODWORD(v13) = *(_DWORD *)(a1 + 112);
    v14 = a2;
  }
  else
  {
    v14 = (__int64)sub_19AAC0((__int64)v19, a2, v20, a5, a4, 1);
    v13 = (a5 - *(_QWORD *)(a1 + 104)) / *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  }
  if ( a5 < a4 )
  {
    v15 = 0;
    if ( a4 >= 0 )
      v15 = a4;
    v22 = v15;
    do
    {
      if ( (unsigned __int64)(int)v13 < v11[13] )
      {
        v16 = v11[12];
        v25 = 5;
        v17 = *(_DWORD *)(v16 + 4LL * (int)v13);
        v24 = v22;
        v23 = v17;
        v14 = (__int64)sub_19AC70((__int64)v19, v14, &v24, -1, v20, v17, a5, a6, a8, 1);
        if ( v23 != -1 )
          sub_64190((__int64 *)(a1 + 88), v23, a7);
      }
      else
      {
        v25 = 5;
        v24 = v22;
        v14 = (__int64)sub_19AC70((__int64)v19, v14, &v24, -1, v20, 0xFFFFFFFF, a5, a6, a8, 1);
      }
      LODWORD(v13) = v13 + 1;
      a5 += *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    }
    while ( a4 > a5 );
  }
  return (_QWORD *)v14;
}

