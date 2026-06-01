__m128i *__fastcall sub_2D3120(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+10h] [rbp-28h]
  __int64 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 8);
  v7 = __readfsqword(0x28u);
  v5 = 102;
  v4[1] = v1;
  v4[0] = &off_4DB738;
  v6 = 0;
  return sub_2D2A80((__int64)v4, (unsigned __int8 **)a1, v2);
}

