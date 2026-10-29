__int64 __fastcall sub_EE90(const char *a1, const char *a2, const char *a3, char a4)
{
  int v4; // eax
  const char *v5; // r13
  unsigned int v6; // eax
  const char *v7; // rbp
  unsigned int v8; // ebx
  __int64 name_ea; // r14
  _QWORD v11[135]; // [rsp+0h] [rbp-438h] BYREF

  v11[129] = __readfsqword(0x28u);
  v5 = a3;
  LOBYTE(v4) = a3 == nullptr;
  LOBYTE(a3) = a2 == nullptr;
  v6 = (unsigned int)a3 | v4;
  LOBYTE(v6) = (a1 == nullptr) | v6;
  if ( (_BYTE)v6 )
  {
    if ( !under_debugger )
      interr(30507);
LABEL_12:
    BUG();
  }
  v7 = a1;
  v8 = v6;
  if ( a4 )
    goto LABEL_5;
  if ( *a1 != 95 )
  {
    if ( !under_debugger )
      interr(30508);
    goto LABEL_12;
  }
  v7 = a1 + 1;
LABEL_5:
  name_ea = get_name_ea(-1, v7);
  if ( name_ea != -1 )
  {
    qsnprintf(v11, 1024, "%s %s(%s);", a2, v7, v5);
    return (unsigned int)apply_cdecl(0, name_ea, v11, 1);
  }
  return v8;
}

