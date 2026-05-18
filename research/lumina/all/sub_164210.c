__int64 __fastcall sub_164210(__int64 a1, __int64 a2, char ***a3)
{
  __int64 v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  char *v10; // rbp
  __int64 v11; // r9

  v3 = 1;
  v4 = sub_CD0F0(*a3);
  if ( v4 > 0 )
    v3 = v4;
  result = sub_F5B20(a1, v3, v5, v6, v7, v8);
  if ( result )
  {
    v10 = (char *)result;
    if ( !(unsigned int)sub_FEBD0(a1, v3) )
      sub_FF240(v3, v10);
    return sub_F48B0(a1, v10, v3, 0, (__int64 (__fastcall *)(__int64))sub_C91C0, v11);
  }
  return result;
}
