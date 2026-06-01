__int64 __fastcall sub_14F2F0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // ebp
  _DWORD *v7; // rdi
  __int64 v8; // rbp
  int v9; // edx
  bool v10; // r13
  __int64 v11; // rax
  char *v12; // r14
  int v13; // ecx
  __int64 v14; // r15
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r15
  __m128i *v18; // r13
  __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v23; // [rsp+10h] [rbp-78h] BYREF
  __int64 v24; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __m128i *v26; // [rsp+28h] [rbp-60h]
  _QWORD v27[11]; // [rsp+30h] [rbp-58h] BYREF

  v27[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 || *(_BYTE *)(a2 + 48) != 4 )
    return 0;
  v7 = *(_DWORD **)(a2 + 40);
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_DWORD *)v8;
  if ( *v7 == 20 )
  {
    if ( v9 == 9 )
    {
      v10 = 1;
    }
    else
    {
      v10 = 0;
      if ( v9 != 20 )
        return 0;
    }
  }
  else
  {
    v10 = v9 == 20 && *v7 == 9;
    if ( !v10 )
      return 0;
    v7 = *(_DWORD **)(a2 + 56);
    v8 = *(_QWORD *)(a2 + 40);
  }
  v11 = sub_11C8A0((__int64)v7, &v23);
  v12 = (char *)v11;
  if ( !v11 )
    return 0;
  v22 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
  if ( *(_DWORD *)v8 != 9 )
  {
    if ( *(_DWORD *)v8 != 20 )
      goto LABEL_11;
LABEL_26:
    v21 = sub_11C8A0(v8, &v24);
    if ( !v21 )
      return 0;
    v14 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v8 + 32) == 4 && **(_DWORD **)(v8 + 40) == 20 )
  {
    v8 = *(_QWORD *)(v8 + 40);
    goto LABEL_26;
  }
LABEL_11:
  v13 = *(_DWORD *)(v8 + 36);
  v14 = -1;
  v24 = v8 + 32;
  v15 = 8 * v13;
  if ( (unsigned __int64)v15 <= 0x3F )
    v14 = (1LL << v15) - 1;
LABEL_13:
  if ( *(_DWORD *)a2 == 12 && (v14 & v22) != 0 )
    return 0;
  LOBYTE(v16) = sub_1255D0(v23, a1, v24, v10, a3);
  v4 = v16;
  if ( !(_BYTE)v16 || *v23 == 4 && (unsigned __int8)sub_1205A0(*((_BYTE **)v23 + 1), a1, 0) )
    return 0;
  if ( *(_DWORD *)a2 == 19 )
  {
    v17 = v22 | v14;
    goto LABEL_19;
  }
  if ( *(_DWORD *)a2 == 12 )
  {
    v17 = v22 + v14;
LABEL_19:
    *(_DWORD *)a2 = 20;
    v25 = 0xFFFFFFFF00000000LL;
    v26 = nullptr;
    sub_11CA10((char *)&v25, v12);
    v18 = v26;
    v19 = sub_32ABC0(v17, SHIDWORD(v25), 0);
    v20 = (char *)v23;
    v27[1] = 0;
    v27[0] = 0xFFFFFFFF00000000LL;
    v18[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    sub_11CA10((char *)v27, v20);
    sub_11CA10((char *)(a2 + 32), (char *)v27);
    sub_11CA10((char *)(a2 + 48), (char *)&v25);
    sub_11CDA0((__int64)v27);
    sub_11CDA0((__int64)&v25);
    return v4;
  }
  return 0;
}

