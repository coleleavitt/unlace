unsigned __int64 __fastcall sub_16E9A0(const char *a1, char *a2, char a3)
{
  int v4; // eax
  const char *v6; // r8
  char v7; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 v8; // [rsp+58h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
    sub_16E8E0(-1, (__int64)"Missing %s path\n", a1);
  v4 = a3 & 0xF;
  if ( v4 == 2 )
  {
    if ( !(unsigned __int8)sub_197CF0(a2) )
      sub_16E8E0(-1, (__int64)"The %s directory \"%s\" does not exist\n", a1, a2);
  }
  else if ( v4 == 3 )
  {
    if ( !(unsigned int)sub_197B50(a2) )
      sub_16E8E0(-1, (__int64)"The %s path %s already exists", a1, a2);
  }
  else if ( v4 == 1 && !(unsigned __int8)sub_197CA0(a2) )
  {
    sub_16E8E0(-1, (__int64)"The %s file \"%s\" does not exist\n", a1, a2);
  }
  if ( (a3 & 0x10) != 0 )
  {
    if ( (unsigned int)sub_197B50(a2) )
    {
      v6 = (const char *)sub_18FFF0(-1);
      sub_16E8E0(-1, (__int64)"The %s file \"%s\" could not be queried: %s\n", a1, a2, v6);
    }
    if ( (v7 & 7) != 0 )
      sub_16E8E0(-1, (__int64)"The %s file \"%s\" is world-accessible; exiting\n", a1, a2);
  }
  return v8 - __readfsqword(0x28u);
}
