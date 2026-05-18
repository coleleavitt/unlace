__int64 __fastcall sub_D47E0(__int64 a1, char *a2)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 v4; // rax

  v2 = strrchr(a2, 95);
  if ( v2
    && (*v2 = 0, v3 = v2, v4 = sub_CA640(a1, (unsigned __int8 *)a2, nullptr), *v3 = 95, v4)
    && *(_BYTE *)(v4 + 63) == 1 )
  {
    return sub_D4710(a1, v4, (unsigned __int8 *)a2);
  }
  else
  {
    return 0;
  }
}
