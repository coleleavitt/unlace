__int64 __fastcall sub_20E820(__int64 a1)
{
  char **v1; // rbp
  __int64 name_ea; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+8h] [rbp-C0h]
  _QWORD v13[6]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v14[6]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v15; // [rsp+80h] [rbp-48h] BYREF
  __int128 v16; // [rsp+88h] [rbp-40h]
  unsigned __int64 v17; // [rsp+98h] [rbp-30h]

  v1 = off_4B2060;
  v17 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  do
  {
    name_ea = get_name_ea();
    if ( name_ea != -1 )
    {
      v3 = v12;
      v4 = v11;
      if ( *((_QWORD *)&v12 + 1) < (unsigned __int64)(v12 + 1) )
      {
        v11 = qvector_reserve();
        v4 = v11;
        v3 = v12;
      }
      *(_QWORD *)(v4 + 8 * v3) = name_ea;
      *(_QWORD *)&v12 = v12 + 1;
    }
    ++v1;
  }
  while ( v1 != (char **)&unk_4B2088 );
  v5 = 0;
  if ( (_QWORD)v12 )
  {
    memset(&v14[1], 0, 32);
    v14[5] = &v11;
    v14[0] = off_4B1FA0;
    v15 = 0;
    v16 = 0;
    sub_11B760(a1, (__int64)v14);
    if ( (_QWORD)v16 )
    {
      memset(&v13[1], 0, 32);
      v13[0] = off_4B1FD0;
      v13[5] = &v15;
      sub_11B760(a1, (__int64)v13);
      v5 = 1;
    }
    v7 = v15;
    v14[0] = off_4B1FA0;
    if ( v15 )
    {
      v8 = v16;
      if ( (_QWORD)v16 )
      {
        v9 = 0;
        do
        {
          v10 = v9++;
          sub_1188E0(16 * v10 + v7);
          v7 = v15;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v16 = 0;
      qfree();
    }
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v5;
}

