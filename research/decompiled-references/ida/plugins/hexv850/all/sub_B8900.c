__int64 __fastcall sub_B8900(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+0h] [rbp-88h] BYREF
  char v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 328);
  v16 = __readfsqword(0x28u);
  v15 = a1 + 64;
  v12[1] = v2;
  v3 = *(_QWORD *)(a1 + 320);
  memset(&v12[2], 0, 24);
  v4 = *(_QWORD *)(v3 + 528);
  v13 = 0;
  v12[0] = off_4AFA48;
  v14 = a1;
  v5 = (_DWORD *)sub_32B2C0(*(_QWORD *)(v4 + 8LL * (int)a2), HIDWORD(a2));
  if ( (unsigned int)(*v5 - 56) <= 1 && !v5[17] )
    return 0;
  v6 = j__qalloc_or_throw();
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 72) = 0;
  sub_1207E0(v6, v5);
  if ( (unsigned int)sub_119D40(v6, v12, v7, v8, v9, v10)
    || (unsigned __int8)sub_11B9E0(v6, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), 0) )
  {
    if ( v6 )
    {
      sub_1181E0(v6 + 64);
      sub_1181E0(v6 + 48);
      sub_1181E0(v6 + 32);
      j__qfree();
    }
    return 0;
  }
  return v6;
}

