__int64 __fastcall sub_128E80(__int128 a1, __int64 a2, char a3)
{
  unsigned __int8 v3; // dl
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  _BYTE *v9; // rdx
  char v10; // dl
  __int64 v11; // r13
  __int64 v12; // rdi
  _QWORD v14[2]; // [rsp+10h] [rbp-90h] BYREF
  __int64 v15; // [rsp+20h] [rbp-80h]
  __int128 v16; // [rsp+28h] [rbp-78h]
  _QWORD v17[2]; // [rsp+40h] [rbp-60h] BYREF
  __int64 v18; // [rsp+50h] [rbp-50h]
  __int64 v19; // [rsp+58h] [rbp-48h]
  unsigned __int64 v20; // [rsp+68h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_3835A0(50293);
    BUG();
  }
  v3 = **((_BYTE **)&a1 + 1);
  v4 = *((_QWORD *)&a1 + 1);
  if ( **((_BYTE **)&a1 + 1) > 6u )
  {
    if ( v3 != 14 )
      return 0;
    v9 = *(_BYTE **)(*((_QWORD *)&a1 + 1) + 8LL);
    if ( (unsigned __int8)(*v9 - 5) > 1u && *v9 != 1 )
      return 0;
    v10 = v9[16];
    if ( (unsigned __int8)(v10 - 5) > 1u && v10 != 1 )
      return 0;
  }
  else if ( v3 <= 4u && v3 != 1 )
  {
    if ( v3 == 4 )
    {
      if ( *(_QWORD *)a2 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v6 )
        {
          if ( *((_QWORD *)&a1 + 1) == v6 + 64 )
            *(_QWORD *)a2 = v6;
        }
      }
      return *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    }
    return 0;
  }
  if ( !(_QWORD)a1 )
    return 0;
  v11 = *(_QWORD *)a2 ? *(_QWORD *)(*(_QWORD *)a2 + 16LL) : *(_QWORD *)(a1 + 56);
  if ( !v11 )
    return 0;
  v14[0] = 0;
  *((_QWORD *)&a1 + 1) = v14;
  v15 = 0;
  v14[1] = 0;
  v16 = 0;
  sub_1238E0(a1, v4, 1u, 0xFFFF0000);
  v7 = sub_128B90(a1, v14, v11, 0, nullptr, 0, 0x101u);
  if ( !v7 )
  {
LABEL_27:
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    qfree();
    return 0;
  }
  if ( a3 )
  {
    sub_1240C0((__int64)v17, a1, v7, 1u);
    if ( sub_A94E0(a1, v17, v7, *(_QWORD *)(v11 + 8), 1u) )
    {
      if ( v18 )
      {
        v19 = 0;
        qfree();
      }
      qfree();
      goto LABEL_27;
    }
    if ( v18 )
    {
      v19 = 0;
      qfree();
    }
    qfree();
  }
  v12 = v15;
  *(_QWORD *)a2 = v7;
  if ( v12 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  qfree();
  return v7;
}

