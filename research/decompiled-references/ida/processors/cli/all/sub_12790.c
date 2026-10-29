__int64 *__fastcall sub_12790(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 **a3,
        unsigned __int64 a4,
        double a5,
        double a6,
        __m128 a7)
{
  unsigned __int8 *v8; // rax
  unsigned __int8 v9; // bp
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  const char *v18; // r13
  size_t v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  _QWORD *v23; // rax
  char *v24; // rax
  const char *v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-58h] BYREF
  __int128 v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v8 = *a3;
  if ( (unsigned __int64)*a3 >= a4 )
    return a1;
  if ( (_DWORD)a4 == (_DWORD)v8 )
    return a1;
  v9 = *v8;
  *a3 = v8 + 1;
  if ( (v9 & 0xF) != 8 )
    return a1;
  v12 = (__int64)a1;
  v30 = 0;
  v29 = 0;
  if ( (unsigned __int8)sub_BA20(a2, a1, &v29, a3, a4, 0, 0.0, a6, a7) && (v9 & 0x20) != 0 )
  {
    v17 = 14;
    v18 = "explicit-this ";
    if ( (v9 & 0x40) == 0 )
    {
      v17 = 9;
      v18 = "instance ";
    }
    v19 = a1[1];
    v12 = *a1;
    v20 = a1[2];
    if ( v19 )
    {
      v21 = --v19 + v17;
      v22 = v19 + v17 + 1;
      if ( v20 >= v22 )
        goto LABEL_11;
    }
    else
    {
      v22 = v17 + 1;
      v21 = v17;
      if ( v20 >= v17 + 1 )
      {
        a1[1] = v22;
        *(_BYTE *)(v12 + v17) = 0;
LABEL_13:
        v23 = (_QWORD *)*a1;
        *v23 = *(_QWORD *)v18;
        *(_QWORD *)((char *)v23 + v17 - 8) = *(_QWORD *)&v18[v17 - 8];
        v13 = (unsigned __int64)(v23 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v24 = (char *)v23 - v13;
        v25 = (const char *)(v18 - v24);
        v26 = (v17 + (_DWORD)v24) & 0xFFFFFFF8;
        if ( v26 >= 8 )
        {
          v27 = v26 & 0xFFFFFFF8;
          LODWORD(v14) = 0;
          do
          {
            v12 = (unsigned int)v14;
            v14 = (unsigned int)(v14 + 8);
            *(_QWORD *)(v13 + v12) = *(_QWORD *)&v25[v12];
          }
          while ( (unsigned int)v14 < v27 );
        }
        goto LABEL_16;
      }
    }
    v28 = qvector_reserve(a1, v12, v22, 1);
    *a1 = v28;
    v12 = v28;
LABEL_11:
    a1[1] = v22;
    *(_BYTE *)(v12 + v21) = 0;
    if ( v19 )
    {
      v12 = *a1;
      memmove((void *)(*a1 + v17), (const void *)*a1, v19);
    }
    goto LABEL_13;
  }
LABEL_16:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v12, v13, v14, v15, v16);
  }
  return a1;
}

