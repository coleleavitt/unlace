__int64 __fastcall sub_51F40(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  int v8; // eax
  const char *v9; // rsi
  const char *v10; // rsi
  const char *v11; // rbp
  const char *v12; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-78h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+18h] [rbp-60h]
  int v22; // [rsp+32h] [rbp-46h]
  __int16 v23; // [rsp+36h] [rbp-42h]
  int v24[2]; // [rsp+38h] [rbp-40h]

  *(_QWORD *)v24 = __readfsqword(0x28u);
  v18 = sub_4CB80((__int64)a1, a2);
  if ( !v18 || !a1[54] && !(unsigned __int8)sub_4E5C0((__int64)a1, (char **)a5, a3) )
    return 0;
  v8 = sub_4F2F0((__int64)a1, a2, a3, (__int64 *)a5);
  if ( v8 == 2 )
  {
    if ( *(_QWORD *)(a5 + 8) )
    {
      if ( (unsigned __int8)sub_4F560((__int64)a1, *(const char **)a5, 0) )
        goto LABEL_22;
    }
    else if ( (unsigned __int8)sub_4F560((__int64)a1, s1, 0) )
    {
LABEL_22:
      v8 = sub_4F2F0((__int64)a1, a2, a3, (__int64 *)a5);
      goto LABEL_4;
    }
LABEL_12:
    if ( (word_2439A4 & 0x200) != 0 )
    {
      v11 = s1;
      if ( *(_QWORD *)(a5 + 8) )
        v11 = *(const char **)a5;
      sub_4EA40((__int64)&ptr, (int *)a2);
      v12 = s1;
      if ( v21 )
        v12 = (const char *)ptr;
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Checkout failed for license %s: %s\n", v12, v11);
      if ( ptr )
      {
        v21 = 0;
        j__free(ptr);
      }
    }
    return 0;
  }
LABEL_4:
  if ( v8 == 4 )
  {
    while ( 1 )
    {
      v9 = s1;
      if ( *(_QWORD *)(a5 + 8) )
        v9 = *(const char **)a5;
      sub_466E0((const __m128i *)"License server error: %s", v9);
      v10 = s1;
      if ( *(_QWORD *)(a5 + 8) )
        v10 = *(const char **)a5;
      if ( (unsigned __int8)sub_4F560((__int64)a1, v10, 2) )
      {
        v8 = sub_4F2F0((__int64)a1, a2, a3, (__int64 *)a5);
        if ( v8 != 4 )
          break;
      }
    }
  }
  if ( v8 )
    goto LABEL_12;
  v14 = a1[56];
  v15 = a1[55];
  v22 = *(_DWORD *)a2;
  v23 = *(_WORD *)(a2 + 4);
  if ( a1[57] < (unsigned __int64)(v14 + 1) )
  {
    v17 = sub_1987B0(a1 + 55, v15, v14 + 1, 6);
    v14 = a1[56];
    a1[55] = v17;
    v15 = v17;
  }
  v16 = v15 + 6 * v14;
  *(_DWORD *)v16 = v22;
  *(_WORD *)(v16 + 4) = v23;
  ++a1[56];
  sub_503C0((__int64)a1, v18, 0, a4, a2);
  return 1;
}
