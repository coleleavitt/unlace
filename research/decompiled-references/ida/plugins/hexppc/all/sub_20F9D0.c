__int64 __fastcall sub_20F9D0(__int64 a1)
{
  char **v1; // rbp
  __int64 name_ea; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  __int128 v8; // [rsp+8h] [rbp-80h]
  _QWORD v9[13]; // [rsp+20h] [rbp-68h] BYREF

  v1 = off_4CC720;
  v9[7] = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  do
  {
    name_ea = get_name_ea();
    if ( name_ea != -1 )
    {
      v3 = v8;
      v4 = v7;
      if ( *((_QWORD *)&v8 + 1) < (unsigned __int64)(v8 + 1) )
      {
        v7 = qvector_reserve();
        v4 = v7;
        v3 = v8;
      }
      *(_QWORD *)(v4 + 8 * v3) = name_ea;
      *(_QWORD *)&v8 = v8 + 1;
    }
    ++v1;
  }
  while ( v1 != (char **)algn_4CC730 );
  v5 = 0;
  if ( (_QWORD)v8 )
  {
    memset(&v9[1], 0, 32);
    v9[5] = &v7;
    v9[0] = off_4CC6D8;
    sub_11C1E0(a1, (__int64)v9);
    v5 = 1;
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v5;
}

