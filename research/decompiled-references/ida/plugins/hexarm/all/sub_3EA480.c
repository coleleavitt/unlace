__int64 __fastcall sub_3EA480(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v8[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a2 + 64);
  v8[2] = a2;
  v8[0] = off_4E40C0;
  v8[1] = v6;
  v8[4] = 0;
  v8[5] = v5;
  v9 = 0;
  v8[3] = a3;
  sub_11F1A0(a3, v8);
  return v9;
}

