unsigned __int64 __fastcall sub_1380(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // r12
  unsigned __int32 v7; // eax
  __int64 v8; // rdx
  unsigned int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v6 = qlseek(a1, 0, 1);
  qlseek(a1, a2 + a3 - 4, 0);
  lread(a1, &v10, 4);
  v7 = _byteswap_ulong(v10);
  v8 = v7;
  if ( v7 > 0x3FF )
  {
    v7 = 1023;
    v8 = 1023;
  }
  v10 = v7;
  lread(a1, a4, v8);
  *(_BYTE *)(a4 + v10) = 0;
  qlseek(a1, v6, 0);
  return v11 - __readfsqword(0x28u);
}
