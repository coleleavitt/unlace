__int64 __fastcall sub_195070(__int64 *a1, char *a2, char a3)
{
  __int64 v4; // rax
  __int64 *v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  const char *v9; // rdx
  char *v10; // rdi
  char *v12; // rax
  char *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-1080h]
  int v15; // [rsp+10h] [rbp-1078h]
  _BYTE v16[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v17; // [rsp+1048h] [rbp-40h]

  v4 = a1[1];
  v17 = __readfsqword(0x28u);
  v14 = 0;
  v15 = v4;
  if ( (a3 & 1) != 0 )
    v14 = sub_464B0(v16, 4096);
  if ( (a3 & 2) != 0 )
  {
    v12 = sub_1945E0(a2);
    sub_1942C0(a1, a3, (__int64)v12, v14, 0);
    v6 = sub_194E60();
    if ( v6[1] )
      goto LABEL_5;
    if ( !a2 )
      return (unsigned int)a1[1] - v15;
  }
  else
  {
    v6 = sub_194E60();
    if ( v6[1] )
    {
LABEL_5:
      v7 = 0;
      do
      {
        v8 = *v6 + 24 * v7;
        v9 = s1;
        if ( *(_QWORD *)(v8 + 8) )
          v9 = *(const char **)v8;
        ++v7;
        sub_1942C0(a1, a3, (__int64)v9, a2, v14, 0);
      }
      while ( v7 < v6[1] );
      if ( !a2 )
        goto LABEL_14;
      goto LABEL_10;
    }
    if ( !a2 )
      goto LABEL_24;
  }
LABEL_10:
  if ( !strcmp(a2, "sig") )
  {
    v10 = "IDASGN";
  }
  else if ( !strcmp(a2, "ids") )
  {
    v10 = "IDAIDS";
  }
  else if ( !strcmp(a2, "idc") )
  {
    v10 = "IDAIDC";
  }
  else
  {
    if ( strcmp(a2, "til") )
      goto LABEL_14;
    v10 = "IDATIL";
  }
  if ( (unsigned __int8)sub_19AD90(v10) )
    sub_1942C0(a1, a3, (__int64)s1, v14, 0);
LABEL_14:
  if ( (a3 & 2) == 0 )
  {
LABEL_24:
    v13 = sub_1945E0(a2);
    sub_1942C0(a1, a3, (__int64)v13, v14, 0);
  }
  return (unsigned int)a1[1] - v15;
}
