__int64 __fastcall sub_EC730(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  v12 = __readfsqword(0x28u);
  v11 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(v2 + 296);
  if ( v4 )
  {
    result = sub_EC5B0(v4, v3, &v11);
    if ( (_DWORD)result )
      return result;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(v2 + 200);
    if ( v11 )
    {
      v8 = *(_QWORD *)(v2 + 296);
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_WORD *)(v8 + 86) & 0xFE00 | (*(unsigned __int16 *)(v8 + 86) << 16) & 0x10000;
      if ( v10 <= (int)v7 )
        v7 = (unsigned int)v10;
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v9 + 16LL))(
                 v9,
                 v6,
                 v7,
                 (v10 + 24) * (unsigned __int64)(unsigned int)(v11 - 1) + 56);
      goto LABEL_7;
    }
    v3 = *(_DWORD *)(a1 + 48);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(v2 + 200);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v2 + 72) + 16LL))(
             *(_QWORD *)(v2 + 72),
             v6,
             v7,
             v7 * (unsigned int)(v3 - 1));
  if ( (_DWORD)result == 522 )
  {
    if ( *(_DWORD *)(a1 + 48) != 1 )
      return 0;
    goto LABEL_15;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 48) != 1 )
    return result;
  if ( !(_DWORD)result )
  {
LABEL_15:
    *(__m128i *)(v2 + 136) = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 8) + 24LL));
    return 0;
  }
  *(_OWORD *)(v2 + 136) = -1;
  return result;
}
