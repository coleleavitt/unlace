__int64 __fastcall sub_467B0(int a1)
{
  char v2[1032]; // [rsp+0h] [rbp-418h] BYREF
  unsigned __int64 v3; // [rsp+408h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( a1 == 6 )
    sub_2F260((__int64)"The license cannot be used anymore");
  if ( a1 > 3 )
    return sub_466E0((const __m128i *)"The license has expired, the software will stop working soon!");
  if ( !a1 )
  {
    sub_1992F0(v2, 0x400u, "%F");
    sub_2F260((__int64)"The license cannot be used yet, it will start on %s", v2);
  }
  return v3 - __readfsqword(0x28u);
}
