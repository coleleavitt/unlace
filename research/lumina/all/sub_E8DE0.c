__int64 sub_E8DE0()
{
  __int64 v1; // [rsp+8h] [rbp-20h] BYREF
  __int64 v2[3]; // [rsp+10h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  sub_E8C70(0, &v1, v2, 0);
  return v1;
}
