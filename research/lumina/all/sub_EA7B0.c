__int64 __fastcall sub_EA7B0(__int64 a1)
{
  const char *v1; // rdx
  char v2; // dl
  __int64 result; // rax

  v1 = "NULL";
  if ( !a1 )
    goto LABEL_6;
  v2 = *(_BYTE *)(a1 + 113);
  result = 1;
  if ( v2 != 118 )
  {
    if ( v2 == 109 || v2 == -70 || (result = sub_EA5B0(), (_DWORD)result) )
    {
      v1 = "unopened";
LABEL_6:
      sub_E8BB0(0x15u, "API call with %s database connection pointer", v1);
      return 0;
    }
  }
  return result;
}
