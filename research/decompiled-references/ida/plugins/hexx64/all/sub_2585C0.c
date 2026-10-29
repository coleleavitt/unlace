unsigned __int64 __fastcall sub_2585C0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r13
  _DWORD *v3; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rdx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-C0h] BYREF
  __int64 (__fastcall **v12)(); // [rsp+8h] [rbp-B8h] BYREF
  int v13; // [rsp+10h] [rbp-B0h]
  __int64 v14; // [rsp+18h] [rbp-A8h]
  __int128 v15; // [rsp+20h] [rbp-A0h]
  __int64 v16; // [rsp+30h] [rbp-90h]
  __int128 v17; // [rsp+38h] [rbp-88h]
  _DWORD *v18; // [rsp+48h] [rbp-78h]
  __int128 v19; // [rsp+50h] [rbp-70h]
  _QWORD *v20; // [rsp+60h] [rbp-60h]
  __int128 v21; // [rsp+68h] [rbp-58h]
  unsigned __int64 v22; // [rsp+80h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v13 = 2;
  v12 = off_4DFED8;
  v14 = 0;
  v16 = 0;
  v18 = nullptr;
  v20 = nullptr;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  sub_255A80((__int64 *)&v12, a1 + 16, 0, 0.0);
  v1 = v20;
  v2 = &v20[2 * v21];
  if ( v2 != v20 )
  {
    do
    {
      v3 = v18;
      v4 = v1[1];
      v5 = &v18[v19];
      if ( v18 == v5 )
        goto LABEL_18;
      while ( *(_DWORD *)(v4 + 12) != *v3 )
      {
        if ( v5 == ++v3 )
          goto LABEL_18;
      }
      if ( v3 == v5 )
      {
LABEL_18:
        if ( *(_DWORD *)(v4 + 8) == 70 && *(_DWORD *)(*v1 + 8LL) == 71 )
        {
          v7 = *(_QWORD *)(*v1 + 24LL);
          sub_283BC0(&v11, (_QWORD **)v7, (_QWORD *)v1[1]);
          v8 = v11;
          if ( v11 == v7 )
          {
            if ( !under_debugger )
              sub_383060(0xCD4Eu, 0.0);
            BUG();
          }
          v9 = *(_QWORD *)v11;
          v10 = v11 + 16;
          **(_QWORD **)(v11 + 8) = *(_QWORD *)v11;
          *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
          sub_255050(v10, 0.0);
          qfree(v8);
          --*(_QWORD *)(v7 + 16);
        }
        else
        {
          *(_DWORD *)(v4 + 12) = -1;
        }
      }
      v1 += 2;
    }
    while ( v2 != v1 );
    v1 = v20;
  }
  v12 = off_4DFED8;
  if ( v1 )
  {
    *(_QWORD *)&v21 = 0;
    qfree((__int64)v1);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree((__int64)v18);
  }
  v12 = off_4DBCF8;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v22 - __readfsqword(0x28u);
}

