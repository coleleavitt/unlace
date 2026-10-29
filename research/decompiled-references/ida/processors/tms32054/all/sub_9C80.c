unsigned __int64 __fastcall sub_9C80(__int64 a1)
{
  unsigned __int64 *v1; // rax
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rax
  __int128 v6; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v7; // [rsp+10h] [rbp-198h]
  __int64 v8; // [rsp+18h] [rbp-190h]
  __int64 v9; // [rsp+20h] [rbp-188h]
  char v10; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-40h] BYREF

  v11 = __readfsqword(0x28u);
  v1 = (unsigned __int64 *)&v10;
  v6 = -1;
  v7 = -1;
  v8 = 0;
  v9 = 0;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 5;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *(v1 - 2) = 0;
  }
  while ( &v11 != v1 );
  if ( *(_QWORD *)(a1 + 168) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        sub_6E00(a1, (__int64)&v6, *(_QWORD *)(*(_QWORD *)(a1 + 160) + 88 * v3), 0);
        v4 = getseg();
        if ( v4 )
        {
          if ( *(_BYTE *)(v4 + 184) == 12 )
          {
            create_data();
            if ( !(unsigned __int8)set_name() )
              break;
          }
        }
        v3 = ++v2;
        if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 168) )
          return v11 - __readfsqword(0x28u);
      }
      ++v2;
      set_cmt();
      v3 = v2;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 168) );
  }
  return v11 - __readfsqword(0x28u);
}

