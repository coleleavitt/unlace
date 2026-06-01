__int64 __fastcall sub_5950(__int64 a1, __int64 a2)
{
  __int16 v2; // bp
  const char *v3; // rdi
  unsigned int v4; // ebx
  const char *v6; // rdx
  const char *v7; // rdi
  const char *v8; // rdx
  const char *v9; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  sub_C360();
  v2 = *(_WORD *)(a2 + 8194);
  sub_C320(v2 == 0);
  sub_C310(a2);
  if ( v2 )
    goto LABEL_2;
  if ( *(_QWORD *)(a2 + 8208) )
  {
    if ( !(unsigned int)qaccess(*(_QWORD *)(a2 + 8200), 0) )
      goto LABEL_18;
  }
  else if ( !(unsigned int)qaccess(s1, 0) )
  {
LABEL_18:
    v7 = s1;
    if ( *(_QWORD *)(a2 + 8208) )
      v7 = *(const char **)(a2 + 8200);
    qunlink(v7);
  }
LABEL_2:
  v9 = nullptr;
  v10 = 0;
  do
  {
    v3 = s1;
    if ( *(_QWORD *)(a2 + 8208) )
      v3 = *(const char **)(a2 + 8200);
    if ( !(unsigned int)qaccess(v3, 0)
      && (int)sub_4CF0(
                (__int64)"Edit collisions\n"
                         "\n"
                         "%/%*Add '+' at the start of a line to select a module\n"
                         "Add '-' if you are not sure about the selection\n"
                         "Do nothing if you want to exclude all modules\n"
                         "<~C~ollisions:t1:1000:100::>\n"
                         "\n",
                sub_54E0,
                a2,
                a2 + 8224) <= 0 )
    {
      goto LABEL_9;
    }
    if ( !(unsigned __int8)sub_16AC0(a2 + 4096, &v9) )
    {
      v6 = s1;
      if ( (_QWORD)v10 )
        v6 = v9;
      sub_4C20((__int64)"%s: %s\n", (const char *)(a2 + 4096), v6);
      v4 = 0;
      goto LABEL_10;
    }
  }
  while ( (unsigned __int8)sub_C330() );
  qunlink(a2);
  if ( (unsigned __int8)sub_C350() )
  {
    sub_4C20((__int64)"%s: NO LIBRARY MODULES ARE FOUND!!!\n", (const char *)a2);
    v4 = 0;
  }
  else
  {
    if ( (unsigned __int8)sub_134B0(a2, a2 + 8264, &v9) && (unsigned __int8)sub_196C0(a2, &v9) )
    {
LABEL_9:
      v4 = 1;
      goto LABEL_10;
    }
    v8 = s1;
    if ( (_QWORD)v10 )
      v8 = v9;
    sub_4C20((__int64)"%s: %s\n", (const char *)a2, v8);
    v4 = 0;
  }
LABEL_10:
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v4;
}
