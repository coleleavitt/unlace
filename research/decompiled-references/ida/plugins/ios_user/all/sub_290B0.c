unsigned __int64 __fastcall sub_290B0(__int64 a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int128 v9; // [rsp+10h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v10 = -1;
  v7 = 0x800000028LL;
  v8 = 0;
  v9 = 0;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 552LL))(*(_QWORD *)(a1 + 8), &v7);
  v2 = v8;
  v5 = __OFSUB__(HIDWORD(v7), 4);
  v3 = HIDWORD(v7) == 4;
  v4 = HIDWORD(v7) - 4 < 0;
  *(_DWORD *)(a1 + 20) = HIDWORD(v7);
  *(_BYTE *)(a1 + 24) = !(v4 ^ v5 | v3);
  if ( v2 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

