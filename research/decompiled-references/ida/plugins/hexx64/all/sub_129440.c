__int64 __fastcall sub_129440(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, __m128 a6)
{
  unsigned __int8 v6; // dl
  __int64 v8; // rdx
  __int64 v9; // rbx
  _BYTE *v11; // rdx
  char v12; // dl
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v16[2]; // [rsp+10h] [rbp-90h] BYREF
  __int64 v17; // [rsp+20h] [rbp-80h]
  __int128 v18; // [rsp+28h] [rbp-78h]
  unsigned __int64 *v19[2]; // [rsp+40h] [rbp-60h] BYREF
  __int64 v20; // [rsp+50h] [rbp-50h]
  __int64 v21; // [rsp+58h] [rbp-48h]
  unsigned __int64 v22; // [rsp+68h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_383060(0xC475u, a5);
    BUG();
  }
  v6 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 > 6u )
  {
    if ( v6 != 14 )
      return 0;
    v11 = *(_BYTE **)(a2 + 8);
    if ( (unsigned __int8)(*v11 - 5) > 1u && *v11 != 1 )
      return 0;
    v12 = v11[16];
    if ( (unsigned __int8)(v12 - 5) > 1u && v12 != 1 )
      return 0;
  }
  else if ( v6 <= 4u && v6 != 1 )
  {
    if ( v6 == 4 )
    {
      if ( *(_QWORD *)a3 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
        if ( v8 )
        {
          if ( a2 == v8 + 64 )
            *(_QWORD *)a3 = v8;
        }
      }
      return *(_QWORD *)(a2 + 8);
    }
    return 0;
  }
  if ( !a1 )
    return 0;
  v13 = *(_QWORD *)a3 ? *(_QWORD *)(*(_QWORD *)a3 + 16LL) : *(_QWORD *)(a1 + 56);
  if ( !v13 )
    return 0;
  v16[0] = 0;
  v17 = 0;
  v16[1] = 0;
  v18 = 0;
  sub_123EA0(a1, v16, a2, 1, 0xFFFF0000, 0.0);
  v9 = sub_129150(a1, v16, v13, 0, 0, 0, 0.0, a6, 0x101u);
  if ( !v9 )
  {
LABEL_27:
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    qfree(v16[0]);
    return 0;
  }
  if ( a4 )
  {
    sub_124680((__int64)v19, a1, v9, 1, 0.0, a6);
    if ( sub_A9AA0(a1, v19, v9, *(_QWORD *)(v13 + 8), 1u) )
    {
      if ( v20 )
      {
        v21 = 0;
        qfree(v20);
      }
      qfree((__int64)v19[0]);
      goto LABEL_27;
    }
    if ( v20 )
    {
      v21 = 0;
      qfree(v20);
    }
    qfree((__int64)v19[0]);
  }
  v14 = v17;
  *(_QWORD *)a3 = v9;
  if ( v14 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v14);
  }
  qfree(v16[0]);
  return v9;
}

