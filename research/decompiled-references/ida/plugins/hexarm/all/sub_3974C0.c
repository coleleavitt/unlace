__int64 __fastcall sub_3974C0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v7; // rax
  const char *v8; // rax
  unsigned int v9; // [rsp+0h] [rbp-F0h]
  __int64 v10; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v11; // [rsp+30h] [rbp-C0h]
  __int64 v12; // [rsp+40h] [rbp-B0h]
  __int128 v13; // [rsp+48h] [rbp-A8h]
  __int128 v14; // [rsp+58h] [rbp-98h]
  __int64 v15; // [rsp+88h] [rbp-68h]
  int v16; // [rsp+90h] [rbp-60h]
  __int64 v17; // [rsp+98h] [rbp-58h]
  char v18; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v19; // [rsp+B0h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v18 = 0;
  v10 = 0;
  v12 = 0;
  v15 = 1;
  v16 = -1;
  v17 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)find_tinfo_udt_member() != -1 )
  {
    while ( 1 )
    {
      v1 = sub_3884D0((__int64)&v10, (__int64)"Please enter field name");
      if ( !(_BYTE)v1 )
        break;
      if ( (unsigned __int64)v11 > 1 )
      {
        v7 = *(_QWORD *)(a1 + 32);
        if ( v7 )
          *(_DWORD *)(v7 + 108) |= 8u;
      }
      else
      {
        sub_6B2B0(&v10);
        v2 = *(_QWORD *)(a1 + 32);
        if ( v2 )
          *(_DWORD *)(v2 + 108) |= 8u;
      }
      v3 = set_tinfo_property4();
      v5 = *(_QWORD *)(a1 + 32);
      if ( v5 )
      {
        *(_DWORD *)(v5 + 108) &= ~8u;
        if ( (*(_BYTE *)a1 & 2) == 0 )
        {
          v9 = v3;
          sub_395FD0(a1, 0, 0.0, v5, v3, v4);
          v3 = v9;
        }
      }
      if ( !v3 )
      {
        sub_38FB60(a1, 1u, v5);
        goto LABEL_11;
      }
      v8 = (const char *)tinfo_errstr();
      sub_2B5230((__int64)"%s failed: %s", "Renaming field", v8);
    }
  }
  v1 = 0;
LABEL_11:
  clear_tinfo_t();
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v1;
}

