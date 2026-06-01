__int64 __fastcall sub_2CAC0(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r14
  const char *v12; // rdx
  __int64 v14; // [rsp+8h] [rbp-60h] BYREF
  __m128i v15[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
  {
    sub_11340((__int64)"Asked for unknown register type, clsmask %x\n", a3);
    return 0xFFFFFFFFLL;
  }
  if ( *(_DWORD *)(a1 + 1820) != 1 )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 1856);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 1848) + 40 * v7;
    if ( a2 == *(_DWORD *)v8 )
      break;
    v7 = ++v6;
    if ( v6 >= v5 )
      return 0xFFFFFFFFLL;
  }
  if ( !v8 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int8)sub_1ABE0(a1, v15, *(_QWORD *)(v8 + 8))
    && (unsigned __int8)sub_2CA10((_QWORD *)(a1 + 1040), &v14, v15) )
  {
    v11 = v14;
    if ( a2 == *(_QWORD *)(a1 + 1832) )
      *(_QWORD *)(a1 + 1840) = v14;
  }
  else
  {
    v11 = -1;
  }
  v12 = nptr;
  if ( *(_QWORD *)(v8 + 24) )
    v12 = *(const char **)(v8 + 16);
  sub_58110(a1, (unsigned int)"dalvik_debugger::dbg_read_registers() thread='%s' IP=%a\n", (_DWORD)v12, v11, v9, v10);
  *(_QWORD *)(a4 + 8) = v11;
  return -*(unsigned __int8 *)(a1 + 920) ^ 1u;
}

