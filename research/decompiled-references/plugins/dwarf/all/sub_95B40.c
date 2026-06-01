__int64 __fastcall sub_95B40(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  char *v6; // r8
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)sub_872B0((__int64)a1, a2) == 7969 )
    return sub_95540(a1, a2);
  v3 = a1[32];
  v4 = *a2;
  v8[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v3 + 288))(v4, &v7, v8) )
  {
    v6 = sub_81C40((__int64)a1);
    sub_95A30(
      v8[0],
      (__int64)"die.cpp",
      1153,
      (__int64)"Error retrieving attribute value of type string for DIE %s",
      v6);
  }
  return v7;
}
