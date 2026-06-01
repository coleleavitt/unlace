__int64 __fastcall sub_14FFE0(
        __int64 a1,
        __int64 *a2,
        int a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v11; // rbx
  char v14; // al
  __int64 v15; // r8
  __int64 *v16; // rsi
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-80h]
  __int64 v26; // [rsp+0h] [rbp-80h]
  __int64 v27; // [rsp+0h] [rbp-80h]
  char v29; // [rsp+10h] [rbp-70h]
  __int64 v30; // [rsp+28h] [rbp-58h] BYREF
  __int64 v31[10]; // [rsp+30h] [rbp-50h] BYREF

  v9 = a9;
  v31[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)a6 != a3 )
    return 0;
  if ( *(_DWORD *)a9 != a3 )
    return 0;
  if ( (*(_BYTE *)(a9 + 4) & 0x10) != 0 )
    return 0;
  v11 = a6;
  if ( (*(_BYTE *)(a6 + 4) & 0x10) != 0 )
    return 0;
  v14 = sub_11FD80((char *)(a9 + 48), v31, 0);
  v15 = a5;
  if ( v14 && v31[0] == 1 )
  {
    v29 = 0;
  }
  else
  {
    v27 = a5;
    v29 = sub_11FD80((char *)(v11 + 48), v31, 0);
    if ( !v29 )
      return 0;
    v15 = v27;
    if ( v31[0] != 1 )
      return 0;
    v23 = v11;
    v11 = a9;
    v9 = v23;
  }
  v16 = v31;
  v25 = v15;
  v17 = sub_11FD80((char *)(v11 + 48), v31, 0);
  v20 = v25;
  if ( !v17 || v31[0] )
  {
    while ( 1 )
    {
      v26 = v20;
      v21 = j__qalloc_or_throw(80, (__int64)v16, v18, v19);
      *(_OWORD *)(v21 + 8) = 0;
      *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 56) = 0;
      *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 72) = 0;
      sub_1253A0(v21, v11);
      v22 = *(_DWORD *)(v21 + 36);
      *(_DWORD *)v21 = 13;
      *(_DWORD *)(v21 + 68) = v22;
      LODWORD(v31[0]) = 4;
      v31[1] = v21;
      HIDWORD(v31[0]) = v22;
      if ( (unsigned __int8)sub_12EA80(a1, a4, v26, (__int64)v31, v26, v9 + 32, (__m128i)0LL, a8, 0) )
        break;
      if ( v29 || (v16 = &v30, (v29 = sub_11FD80((char *)(v11 + 48), &v30, 0)) == 0) || v30 != 1 )
      {
        sub_11CDA0((__int64)v31);
        return 0;
      }
      sub_11CDA0((__int64)v31);
      v24 = v11;
      v20 = v26;
      v11 = v9;
      v9 = v24;
    }
    sub_11CDA0((__int64)v31);
    goto LABEL_20;
  }
  if ( !(unsigned __int8)sub_12EA80(a1, a4, v25, v11 + 32, v25, v9 + 32, a7, a8, 0) )
    return 0;
LABEL_20:
  *a2 = v9;
  return 1;
}

