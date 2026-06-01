bool __fastcall sub_EFD0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rdi
  _QWORD v14[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-98h] BYREF
  __int128 v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int128 v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  int v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  __int128 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  __int16 v24; // [rsp+70h] [rbp-38h]
  char v25; // [rsp+72h] [rbp-36h]
  unsigned __int64 v26; // [rsp+78h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a3 == -1 || a2 >= a3 )
    return 0;
  v14[0] = a2;
  v14[1] = a3;
  del_tryblks(v14);
  if ( !*(_BYTE *)(a1 + 572) )
    *(_BYTE *)(a1 + 572) = 1;
  v15 = 0;
  v25 = 0;
  v17 = 0;
  v19 = -1;
  v20 = -1;
  v21 = 0;
  v24 = 360;
  v16 = 0;
  v18 = 0;
  v22 = 0;
  v15 = qvector_reserve(&v15, 0, 1, 16);
  v7 = 16 * v16 + v15;
  *(_OWORD *)v7 = 0;
  *(_QWORD *)&v16 = v16 + 1;
  *(_QWORD *)v7 = a2;
  *(_QWORD *)(v7 + 8) = a3;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
    v17 = 0;
    *((_QWORD *)&v18 + 1) = 0;
  }
  v20 = -1;
  v19 = -1;
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
    v21 = 0;
    *((_QWORD *)&v22 + 1) = 0;
  }
  if ( (unsigned __int64)(a4 - 1) >= 0xFFFFFFFFFFFFFFFELL )
    a4 = 0;
  v23 = a4;
  v8 = add_tryblk(&v15);
  if ( HIBYTE(v24) == 2 )
  {
    v9 = v17;
    if ( v17 )
    {
      v10 = v18;
      if ( (_QWORD)v18 )
      {
        v11 = 0;
        v12 = 0;
        do
        {
          v13 = *(_QWORD *)(v9 + v11);
          if ( v13 )
          {
            *(_QWORD *)(v9 + v11 + 8) = 0;
            qfree(v13);
            v9 = v17;
          }
          ++v12;
          v11 += 56;
        }
        while ( v10 != v12 );
      }
      *(_QWORD *)&v18 = 0;
      qfree(v9);
    }
  }
  else if ( HIBYTE(v24) == 1 )
  {
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
  }
  HIBYTE(v24) = 0;
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v8 == 0;
}

