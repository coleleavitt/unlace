__int64 __fastcall sub_194A80(__int64 a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  int v5; // ebp
  __int64 v6; // rax
  int v9; // eax
  __int64 v10; // rdi
  _BYTE v11[16]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v12[22]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v13[24]; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+D8h] [rbp-20h]

  v5 = 0;
  v14 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v6 + 1352) != -1 && (*(_BYTE *)(v6 + 1) & 0x10) != 0 )
  {
    sub_1949B0((__int64)v11, v6, a2, a3);
    v5 = sub_1941E0((__int64)v11, *(_DWORD *)(a1 + 72), a4, a5);
    if ( v5 > 0 )
    {
      v9 = *(_DWORD *)(a1 + 24);
      v10 = *(_QWORD *)(a1 + 64);
      BYTE1(v9) &= ~2u;
      LOBYTE(v9) = v9 | 0x80;
      *(_DWORD *)(a1 + 24) = v9;
      sub_66FA0(v10, 1);
    }
    sub_11CDA0((__int64)v13);
    sub_190FC0(v12);
  }
  return (unsigned int)v5;
}

