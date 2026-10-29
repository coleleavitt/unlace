__int64 __fastcall sub_D670(__int64 a1)
{
  unsigned int v1; // eax
  const __m128i *v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  const __m128i *v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v10[1] = (const __m128i *)__readfsqword(0x28u);
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
    if ( !under_debugger )
      interr(10312);
    BUG();
  }
  v1 = sub_D570(a1, v10);
  v2 = v10[0];
  v3 = v1;
  if ( !(_BYTE)v1 )
  {
    if ( (unsigned __int8)sub_D510(a1) )
      return v3;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL) )
      return v3;
    if ( *(_WORD *)(a1 + 40) != 55 )
      return v3;
    if ( (*(_BYTE *)(a1 + 44) & 0x1F) != 0 )
      return v3;
    if ( *(_BYTE *)(a1 + 97) != 5 )
      return v3;
    v2 = (const __m128i *)(a1 + 56);
    if ( !(unsigned __int8)same_value_jpt(a1, a1 + 56, 0) )
      return v3;
    v8 = *(_QWORD *)(a1 + 376);
    v9 = *(_QWORD *)(a1 + 104);
    v10[0] = (const __m128i *)(a1 + 56);
    *(_WORD *)(v8 + 4) = v9;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( (*(_BYTE *)(v4 + 72) & 1) != 0 )
    ++*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
  v3 = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(v4 + 64);
  v5 = *(_QWORD *)(a1 + 376);
  v6 = v2->m128i_u16[3];
  *(_BYTE *)(v5 + 68) = v2->m128i_i8[5];
  *(_DWORD *)(v5 + 64) = v6;
  return v3;
}
