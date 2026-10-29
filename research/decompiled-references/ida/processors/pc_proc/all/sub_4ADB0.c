bool __fastcall sub_4ADB0(__int64 a1)
{
  __int64 v1; // rbp
  bool result; // al
  __int64 v3; // rdx
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // al
  bool v6; // bp
  unsigned __int8 v7; // al
  bool v8; // cl
  bool v9; // bp
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __m128i v15; // [rsp+18h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 864);
  v18 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v1) )
    return 0;
  v4 = *(_BYTE *)(v1 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 <= 0xF9u )
  {
    if ( v5 >= v4 || v4 > 0xF9u || *(_BYTE *)(a1 + 8) && v5 == 2 )
      goto LABEL_11;
  }
  else if ( v5 >= v4 && v4 > 0xF9u )
  {
    goto LABEL_11;
  }
  LOBYTE(v3) = v5 < v4;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v3);
  v8 = v7 < v4 && v6;
  v9 = v7 < v4 || v6;
  if ( v7 <= 0xF9u )
    v9 = v8;
  if ( v9 )
    return 0;
LABEL_11:
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v15 = 0;
  result = sub_4AC90(a1, &v13, (__m128i *)&v14);
  if ( !result )
    return 0;
  v10 = *(_QWORD *)(a1 + 864);
  v11 = _mm_loadu_si128(&v15);
  *(_QWORD *)v10 = v14;
  v12 = v16;
  *(__m128i *)(v10 + 8) = v11;
  *(_QWORD *)(v10 + 24) = v12;
  *(_DWORD *)(v10 + 32) = v17;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL) & -v13;
  return result;
}

