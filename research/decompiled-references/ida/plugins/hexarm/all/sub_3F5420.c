__int64 __fastcall sub_3F5420(__int64 a1, double a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  const char *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int8 v11[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v2 + 80) != 8 )
    return *(unsigned int *)(v2 + 428);
  if ( (getinf() & 0xF) != 1 || *(_BYTE *)(a1 + 876) )
  {
    v2 = *(_QWORD *)(a1 + 832);
    return *(unsigned int *)(v2 + 428);
  }
  v10 = 0;
  v6 = "NtCurrentTeb";
  if ( (unsigned __int8)getinf_flag() )
    v6 = "KeGetPcr";
  if ( !(unsigned __int8)parse_decl() )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8CAu, a2);
    BUG();
  }
  v7 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v6, &v10, 0, 0, 1);
  v8 = *(_QWORD *)(v7 + 72);
  *(_QWORD *)v11 = 1;
  *(_DWORD *)(v8 + 280) |= 0x14u;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 428LL);
  *(_QWORD *)&v11[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v7 + 68)), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  v9 = sub_124BF0(v7, v11);
  sub_11C7E0((__int64)v11);
  sub_B4CD0(*(_QWORD **)(a1 + 16), (__int64)v9);
  sub_151110(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 832) + 712LL);
  clear_tinfo_t();
  return v3;
}

