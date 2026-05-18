__int64 __fastcall sub_EA180(__int64 a1, __int64 a2, char **a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 result; // rax
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r15
  size_t v14; // rdx
  char *v15; // r10
  const void *v16; // rsi
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  char *dest; // [rsp+8h] [rbp-90h]
  int v21; // [rsp+14h] [rbp-84h]
  unsigned __int64 v22; // [rsp+18h] [rbp-80h]
  unsigned __int16 v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+24h] [rbp-74h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  _BYTE v28[4]; // [rsp+54h] [rbp-44h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v24 = a5 + a6;
  result = 0;
  if ( a5 < a5 + a6 )
  {
    v8 = a5;
    if ( a5 < *(_DWORD *)(a7 + 80) )
    {
      v21 = 0;
    }
    else
    {
      v9 = 1;
      while ( *(_DWORD *)(a7 + 4 * v9 + 80) <= a5 )
      {
        if ( ++v9 == 7 )
        {
          v21 = 6;
          goto LABEL_7;
        }
      }
      v21 = v9;
    }
LABEL_7:
    v10 = *(_QWORD *)(a1 + 80);
    dest = *a3;
    v22 = *(_QWORD *)(a7 + 8LL * v21 + 32);
    v11 = 8LL * a5;
    v25 = 2LL * a5 - a4;
    v12 = a4;
    v13 = v21;
    while ( 1 )
    {
      v18 = v12 + *(_QWORD *)(a7 + 24);
      v19 = *(_WORD *)(v18 + v25);
      if ( *(_WORD *)(v10 + 1)
        && (v23 = *(_WORD *)(v18 + v25), v15 = sub_E9840(a1, v19, (unsigned __int64)v28), v19 = v23, v15) )
      {
        v14 = v23;
      }
      else
      {
        v14 = v19;
        if ( (__int64)&dest[-a2] < v19 )
          return 1;
        dest -= v19;
        v15 = dest;
      }
      v16 = *(const void **)(*(_QWORD *)(a7 + 16) + v11);
      if ( (unsigned __int64)v16 + v14 > v22 && (unsigned __int64)v16 < v22 )
        break;
      v12 += 2;
      ++v8;
      v17 = (unsigned __int16)memmove(v15, v16, v14);
      *(_BYTE *)(v12 - 1) = v17 - v10;
      *(_BYTE *)(v12 - 2) = (unsigned __int16)(v17 - v10) >> 8;
      if ( v24 == v8 )
      {
        *a3 = dest;
        return 0;
      }
      if ( *(_DWORD *)(a7 + 4 * v13 + 80) <= v8 )
      {
        v13 = ++v21;
        v22 = *(_QWORD *)(a7 + 8LL * v21 + 32);
      }
      v11 += 8;
    }
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      74114,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 1;
  }
  return result;
}
