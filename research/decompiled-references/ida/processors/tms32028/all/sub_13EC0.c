__int64 __fastcall sub_13EC0(__int64 a1)
{
  unsigned int v1; // r13d
  __int16 v2; // ax
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // al
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  int v12; // edx
  char v13; // dl
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __m128i v19; // [rsp+18h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v2 = *(_WORD *)(a1 + 40);
  v22 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v2 - 4) > 1u && (unsigned __int16)(v2 - 131) > 1u )
  {
    LOBYTE(v2) = v2 & 0x7F;
    if ( v2 != 8 )
      return 0;
  }
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v8 = *(_BYTE *)(v3 + 5);
  v9 = *(_BYTE *)(a1 + 61);
  LOBYTE(v1) = v8 <= 0xF9u;
  if ( v9 > 0xF9u )
  {
    if ( v9 >= v8 && v8 > 0xF9u )
      goto LABEL_16;
  }
  else if ( v9 >= v8 || v8 > 0xF9u || *(_BYTE *)(a1 + 8) && v9 == 2 )
  {
    goto LABEL_16;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v10 == sub_10110 )
    return 0;
  v11 = v10(a1, a1 + 56);
  LOBYTE(v12) = v11 < v8;
  v5 = v12 & v1;
  v13 = v1 | (v11 < v8);
  if ( v11 <= 0xF9u )
    v13 = v5;
  if ( v13 )
    return 0;
LABEL_16:
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  result = sub_13B20(a1, &v17, (__m128i *)&v18, v5, v6, v7);
  if ( !(_BYTE)result )
    return 0;
  v14 = *(_QWORD *)(a1 + 864);
  v15 = _mm_loadu_si128(&v19);
  *(_QWORD *)v14 = v18;
  v16 = v20;
  *(__m128i *)(v14 + 8) = v15;
  *(_QWORD *)(v14 + 24) = v16;
  *(_DWORD *)(v14 + 32) = v21;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -v17;
  return result;
}

