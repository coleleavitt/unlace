__int64 __fastcall sub_FA990(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5, char a6)
{
  unsigned int v8; // ebp
  unsigned __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v20; // [rsp+18h] [rbp-78h] BYREF
  __int128 v21; // [rsp+20h] [rbp-70h]
  __int128 v22; // [rsp+30h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-50h]
  int v24; // [rsp+48h] [rbp-48h]
  unsigned __int64 v25; // [rsp+50h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v24 = 1;
  v20 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  v8 = sub_D7540(a1, &v20, a3, a4);
  if ( !(_BYTE)v8 )
    goto LABEL_9;
  v9 = v21;
  if ( (_QWORD)v21 == 1 )
  {
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      v17 = v20;
      v18 = *a2;
      *a2 = *(_QWORD *)(v20 + 64);
      *(_QWORD *)(v17 + 64) = v18;
      if ( !a3 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v9 = v21;
  }
  v11 = HIDWORD(v23);
  v10 = HIDWORD(v23);
  BYTE1(v11) = BYTE5(v23) & 0xF7;
  if ( v9 >= 2 )
  {
    BYTE1(v10) = BYTE5(v23) | 8;
    v11 = v10;
  }
  HIDWORD(v23) = v11;
  if ( !(unsigned __int8)create_tinfo() )
  {
    if ( !under_debugger )
      sub_3835A0(52858);
    BUG();
  }
  if ( a5 == -1 )
  {
    if ( !a3 )
      goto LABEL_9;
  }
  else
  {
    sub_FA5D0((__int64)a1, a2, -1, a5, a6);
    if ( !a3 )
      goto LABEL_9;
  }
LABEL_8:
  if ( *(_DWORD *)a3 == 2 && *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL) == 1 )
  {
    copy_argloc();
    copy_argloc();
    cleanup_argloc();
  }
LABEL_9:
  v12 = v20;
  if ( v20 )
  {
    v13 = v21;
    if ( (_QWORD)v21 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 144 * v14);
        clear_tinfo_t();
        if ( v15[5] )
        {
          v15[6] = 0;
          qfree();
        }
        if ( v15[2] )
        {
          v15[3] = 0;
          qfree();
        }
        ++v14;
        v12 = v20;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v8;
}

