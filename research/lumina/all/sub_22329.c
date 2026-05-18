_BOOL8 __fastcall sub_22329(__int64 a1, __int64 a2)
{
  _BOOL8 v2; // rbx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  if ( a2 )
    sub_F7C20(a1, a2, *(unsigned __int8 *)(a1 + 100), 67, v4);
  LODWORD(v2) = 0;
  if ( v4[0] )
    v2 = (int)sub_CD0F0() > 0;
  sub_C9940(v4[0]);
  return v2;
}
