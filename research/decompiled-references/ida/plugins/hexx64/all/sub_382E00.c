__int64 __fastcall sub_382E00(char a1, __int64 a2)
{
  int v2; // ebx
  _BYTE *v3; // rax
  __int64 (**v5)(); // [rsp+0h] [rbp-A8h] BYREF
  int v6; // [rsp+8h] [rbp-A0h]
  __int64 v7; // [rsp+10h] [rbp-98h]
  __int64 v8; // [rsp+20h] [rbp-88h] BYREF
  __int128 v9; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+40h] [rbp-68h]
  __int64 v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  __int64 (***v14)(); // [rsp+68h] [rbp-40h]
  unsigned __int64 v15; // [rsp+78h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v5 = off_4E6478;
  v10 = 0;
  v6 = 0;
  v7 = a2;
  v11 = 0;
  v12 = 0x50000FFFFFFFFLL;
  v13 = 1;
  v14 = &v5;
  v2 = 1;
  v14 = (__int64 (***)())idaplace_t__clone();
  v8 = 0;
  v9 = 0;
  if ( !a1 )
  {
    while ( (unsigned __int8)bookmarks_t_get_desc() )
    {
      if ( ++v2 == 1025 )
        goto LABEL_9;
    }
  }
  sub_6B7A0(&v8);
  if ( (unsigned __int64)v9 > 1 )
  {
    v3 = (_BYTE *)(v8 + v9 - 2);
    if ( *v3 == 10 )
      *v3 = 0;
  }
  bookmarks_t_mark();
LABEL_9:
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  if ( v14 )
    qfree((__int64)v14);
  return 1;
}

