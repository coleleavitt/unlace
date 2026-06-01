_QWORD *__fastcall sub_19E140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  _QWORD *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // r9d
  __m128i *v18; // [rsp+8h] [rbp-90h]
  __int64 v19; // [rsp+10h] [rbp-88h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+3Ch] [rbp-5Ch]
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  char v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v10 = *(_QWORD **)(a1 + 16);
  v11 = v10[35];
  v18 = sub_D1BE0(v11);
  v19 = *(_QWORD *)(v11 + 40);
  if ( a5 == a3 )
  {
    LODWORD(v12) = *(_DWORD *)(a1 + 112);
    v13 = (_QWORD *)a2;
  }
  else
  {
    v13 = sub_19A500((__int64)v18, a2, v19, a5, a4, 1);
    v12 = (a5 - *(_QWORD *)(a1 + 104)) / *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  }
  if ( a5 < a4 )
  {
    v14 = 0;
    if ( a4 >= 0 )
      v14 = a4;
    v21 = v14;
    do
    {
      if ( (unsigned __int64)(int)v12 < v10[13] )
      {
        v15 = v10[12];
        v24 = 5;
        v16 = *(_DWORD *)(v15 + 4LL * (int)v12);
        v23 = v21;
        v22 = v16;
        v13 = sub_19A6B0((__int64)v18, (__int64)v13, &v23, -1, v19, v16, a5, a6, a7, 1);
        if ( v22 != -1 )
          sub_63B90((__int64 *)(a1 + 88), v22);
      }
      else
      {
        v24 = 5;
        v23 = v21;
        v13 = sub_19A6B0((__int64)v18, (__int64)v13, &v23, -1, v19, 0xFFFFFFFF, a5, a6, a7, 1);
      }
      LODWORD(v12) = v12 + 1;
      a5 += *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    }
    while ( a4 > a5 );
  }
  return v13;
}

