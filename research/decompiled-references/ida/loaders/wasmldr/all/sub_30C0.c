unsigned __int64 __fastcall sub_30C0(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // [rsp+0h] [rbp-168h] BYREF
  int v7; // [rsp+8h] [rbp-160h]
  __int64 v8; // [rsp+10h] [rbp-158h]
  _BYTE v9[8]; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v10[208]; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int64 v11; // [rsp+148h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  set_processor_type("wasm", 1);
  sub_DF60(&v6, a1);
  sub_9940(&v6);
  sub_4CC0((unsigned int)&v6, a1, v1, v2, v3, v4, v6, v7, v8);
  sub_E670(v10, v9);
  sub_3DC0(&v6);
  return v11 - __readfsqword(0x28u);
}

