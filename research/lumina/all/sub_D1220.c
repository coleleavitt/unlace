_BOOL8 __fastcall sub_D1220(unsigned __int8 *a1, int a2)
{
  _BOOL8 result; // rax
  int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  result = 0;
  v3 = 59;
  if ( a2 > 1 )
  {
    sub_D0F40(a1, a2, &v3);
    return v3 != 59;
  }
  return result;
}
