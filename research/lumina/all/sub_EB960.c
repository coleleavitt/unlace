__int64 __fastcall sub_EB960(const char *a1, int *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  char *v5; // rdx
  int v6; // edx
  __int64 result; // rax
  char v8[520]; // [rsp+0h] [rbp-228h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_E89C0(512, (__int64)v8, "%s", a1);
  v2 = strlen(v8);
  v3 = v2;
  if ( v2 > 0 )
  {
    if ( v8[v2] == 47 )
    {
LABEL_10:
      v8[v3] = 0;
      goto LABEL_11;
    }
    v4 = v2 - 1;
    v5 = &v8[(int)v3 - 1];
    while ( 1 )
    {
      v3 = v4;
      if ( !v4 )
        break;
      if ( *v5-- == 47 )
        goto LABEL_10;
      --v4;
    }
  }
  if ( v8[0] != 47 )
    v8[0] = 46;
  v8[1] = 0;
LABEL_11:
  v6 = sub_EAA90(v8, 0, 0);
  *a2 = v6;
  result = 0;
  if ( v6 < 0 )
  {
    sub_E8BB0(
      0xEu,
      "%s at line %d of [%.10s]",
      "cannot open file",
      39037,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return sub_EABB0(0xEu, (__int64)"openDirectory", v8, 0x987Du);
  }
  return result;
}
