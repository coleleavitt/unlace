const char *__fastcall sub_1EFDD0(_DWORD *a1, __int64 *a2, __int64 a3, signed int a4, _DWORD *a5, signed int a6)
{
  const char *result; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h]

  sub_1C75C0(a3, a1, a2, a4, 3);
  if ( !*a5 )
    goto LABEL_2;
  v10 = a2[1];
  if ( v10 )
  {
    v13 = v10 + 4;
    v12 = v10 + 5;
    v11 = *a2;
    --v10;
    if ( a2[2] >= v12 )
      goto LABEL_7;
LABEL_9:
    v16 = v13;
    v15 = qvector_reserve();
    v13 = v16;
    *a2 = v15;
    v11 = v15;
    goto LABEL_7;
  }
  v11 = *a2;
  v12 = 6;
  v13 = 5;
  if ( (unsigned __int64)a2[2] < 6 )
    goto LABEL_9;
LABEL_7:
  a2[1] = v12;
  *(_BYTE *)(v11 + v13) = 0;
  v14 = *a2 + v10;
  *(_DWORD *)v14 = 1684955424;
  *(_BYTE *)(v14 + 4) = 32;
  sub_1C75C0((__int64)a5, a1, a2, a6, 2);
LABEL_2:
  result = s1;
  if ( a2[1] )
    return (const char *)*a2;
  return result;
}

