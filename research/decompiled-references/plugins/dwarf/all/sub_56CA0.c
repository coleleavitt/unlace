__int64 __fastcall sub_56CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  bool v8; // cc
  const char *v9; // r15
  char *v11; // rax
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int64 (__fastcall **v14)(); // [rsp+10h] [rbp-78h] BYREF
  int v15; // [rsp+18h] [rbp-70h]
  __int64 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 320) <= 1u;
  v9 = *(const char **)(a3 + 312);
  v20 = __readfsqword(0x28u);
  if ( (v8 || (v13 = a4, v11 = strstr(v9, "$<"), a4 = v13, !v11)) && v9 )
  {
    if ( !*v9 )
    {
      if ( !under_debugger )
        interr(30390);
      BUG();
    }
    sub_85010(a2, v9);
    return 0;
  }
  else
  {
    v17 = a4;
    v16 = a1;
    v15 = 0;
    v14 = off_C84F8;
    v18 = a6;
    v19 = a5;
    return sub_9D820(a2, a3 + 8, &v14, a6);
  }
}
