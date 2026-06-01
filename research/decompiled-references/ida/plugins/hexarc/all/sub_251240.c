unsigned __int64 __fastcall sub_251240(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r13
  _DWORD *v3; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 *v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // [rsp+0h] [rbp-C0h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+8h] [rbp-B8h] BYREF
  int v14; // [rsp+10h] [rbp-B0h]
  __int64 v15; // [rsp+18h] [rbp-A8h]
  __int128 v16; // [rsp+20h] [rbp-A0h]
  __int64 v17; // [rsp+30h] [rbp-90h]
  __int128 v18; // [rsp+38h] [rbp-88h]
  _DWORD *v19; // [rsp+48h] [rbp-78h]
  __int128 v20; // [rsp+50h] [rbp-70h]
  _QWORD *v21; // [rsp+60h] [rbp-60h]
  __int128 v22; // [rsp+68h] [rbp-58h]
  unsigned __int64 v23; // [rsp+80h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v14 = 2;
  v13 = off_4AC6D8;
  v15 = 0;
  v17 = 0;
  v19 = nullptr;
  v21 = nullptr;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  sub_24E700((__int64 *)&v13, a1 + 16, 0);
  v1 = v21;
  v2 = &v21[2 * v22];
  if ( v2 != v21 )
  {
    do
    {
      v3 = v19;
      v4 = v1[1];
      v5 = &v19[v20];
      v6 = *(unsigned int *)(v4 + 12);
      if ( v19 == v5 )
        goto LABEL_18;
      while ( (_DWORD)v6 != *v3 )
      {
        if ( v5 == ++v3 )
          goto LABEL_18;
      }
      if ( v3 == v5 )
      {
LABEL_18:
        if ( *(_DWORD *)(v4 + 8) == 70 && *(_DWORD *)(*v1 + 8LL) == 71 )
        {
          v8 = *(__int64 **)(*v1 + 24LL);
          sub_27C840(&v12, v8, v1[1], v6);
          v9 = v12;
          if ( v12 == v8 )
          {
            if ( !under_debugger )
              sub_37B760(52558);
            BUG();
          }
          v10 = *v12;
          v11 = (__int64)(v12 + 2);
          *(_QWORD *)v12[1] = *v12;
          *(_QWORD *)(v10 + 8) = v9[1];
          sub_24DCD0(v11);
          qfree();
          --v8[2];
        }
        else
        {
          *(_DWORD *)(v4 + 12) = -1;
        }
      }
      v1 += 2;
    }
    while ( v2 != v1 );
    v1 = v21;
  }
  v13 = off_4AC6D8;
  if ( v1 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  v13 = off_4A8538;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v23 - __readfsqword(0x28u);
}

