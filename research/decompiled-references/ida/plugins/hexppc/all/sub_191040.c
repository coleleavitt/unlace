__int64 __fastcall sub_191040(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rax
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdi
  _BYTE v10[16]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v11[22]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v12[24]; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+D8h] [rbp-20h]

  v3 = 0;
  v13 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v4 + 1352) != -1 && (*(_BYTE *)(v4 + 1) & 0x10) != 0 )
  {
    sub_190F70((__int64)v10, v4, a2, a3);
    v3 = sub_1907A0((__int64)v10, *(_DWORD *)(a1 + 72));
    if ( v3 > 0 )
    {
      v7 = *(_DWORD *)(a1 + 24);
      v8 = *(_DWORD *)(a1 + 72);
      v9 = *(_QWORD *)(a1 + 64);
      BYTE1(v7) &= ~2u;
      LOBYTE(v7) = v7 | 0x80;
      *(_DWORD *)(a1 + 24) = v7;
      sub_63560(v9, 1u, (__int64)"resolve addGot(%d)\n", v8);
    }
    sub_119360((__int64)v12);
    sub_18D580(v11);
  }
  return (unsigned int)v3;
}

