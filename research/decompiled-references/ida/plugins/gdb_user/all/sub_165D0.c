unsigned __int64 __fastcall sub_165D0(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-58h] BYREF
  int v3; // [rsp+8h] [rbp-50h] BYREF
  void *v4; // [rsp+10h] [rbp-48h]
  int *v5; // [rsp+18h] [rbp-40h]
  int *v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = 0;
  v4 = nullptr;
  v5 = &v3;
  v6 = &v3;
  v7 = 0;
  if ( (unsigned __int8)sub_16450(a1, (__int64)&v2) )
    sub_2E0A0(a1, &v2);
  sub_12CE0(v4);
  return v8 - __readfsqword(0x28u);
}

