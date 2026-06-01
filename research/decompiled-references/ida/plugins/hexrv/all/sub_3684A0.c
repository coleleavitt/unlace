__int64 *__fastcall sub_3684A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-C0h]
  int v18; // [rsp+10h] [rbp-B8h]
  __int64 v19; // [rsp+18h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+28h] [rbp-A0h]
  __int64 v22; // [rsp+38h] [rbp-90h]
  __int64 v23; // [rsp+40h] [rbp-88h]
  __int64 v24; // [rsp+48h] [rbp-80h]
  __int128 v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int128 v27; // [rsp+68h] [rbp-60h]
  char v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  *a1 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(a2 + 320) )
  {
    tinfo_property = 0;
    if ( a3 )
    {
      v22 = 0;
      v28 = 16;
      v23 = 0;
      v24 = 0;
      v26 = 0;
      v21 = 0;
      v25 = 0;
      v27 = 0;
      if ( !(unsigned __int8)get_tinfo_details() )
      {
        if ( !under_debugger )
          sub_37DDE0(51020);
        goto LABEL_42;
      }
      v5 = *a1;
      *a1 = v23;
      v23 = v5;
      v19 = v25;
      *(_QWORD *)&v25 = 0;
      v18 = v24;
      LODWORD(v24) = 0;
      cleanup_argloc();
      clear_tinfo_t();
      v6 = tinfo_property;
      if ( tinfo_property )
      {
        v17 = v21;
        if ( (_QWORD)v21 )
        {
          v7 = 0;
          do
          {
            v8 = (_QWORD *)(v6 + 80 * v7);
            clear_tinfo_t();
            if ( v8[5] )
            {
              v8[6] = 0;
              qfree();
            }
            if ( v8[2] )
            {
              v8[3] = 0;
              qfree();
            }
            ++v7;
            cleanup_argloc();
            v6 = tinfo_property;
          }
          while ( v17 != v7 );
        }
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      v9 = *(int *)(a2 + 480);
      if ( (_DWORD)v9 == -1 )
      {
        v13 = v19;
        v11 = v18;
LABEL_28:
        *(_QWORD *)(a3 + 8) = v13;
        *(_DWORD *)a3 = v11;
        goto LABEL_26;
      }
      v10 = *(_QWORD *)(a2 + 432) + 104 * v9;
      if ( *(_BYTE *)(a2 + 320) )
      {
LABEL_15:
        sub_1C30C0(&tinfo_property, a2, v10, *(_DWORD *)(v10 + 88));
        copy_argloc();
        cleanup_argloc();
        v11 = v18;
        if ( v18 || (v11 = *(_DWORD *)(v10 + 88) & (*(_DWORD *)(v10 + 88) - 1)) == 0 )
        {
          v13 = v19;
        }
        else
        {
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            v12 = round_up_power2();
            sub_1C30C0(&tinfo_property, a2, v10, v12);
            copy_argloc();
            cleanup_argloc();
          }
          v13 = v19;
          v11 = 0;
        }
        goto LABEL_28;
      }
    }
    else
    {
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v16 = *(_DWORD *)(a2 + 480);
      if ( v16 == -1 || *(_BYTE *)(a2 + 320) )
        goto LABEL_26;
      v10 = *(_QWORD *)(a2 + 432) + 104LL * v16;
    }
  }
  else
  {
    v14 = *(int *)(a2 + 480);
    if ( (_DWORD)v14 == -1 )
    {
      if ( !a3 )
        goto LABEL_26;
      v11 = 0;
      v13 = 0;
      goto LABEL_28;
    }
    v10 = *(_QWORD *)(a2 + 432) + 104 * v14;
  }
  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(a2 + 464) )
    {
      sub_138DC0((_QWORD *)a2, 0);
      copy_tinfo_t();
      goto LABEL_25;
    }
    if ( !under_debugger )
      sub_37DDE0(52092);
LABEL_42:
    BUG();
  }
  copy_tinfo_t();
LABEL_25:
  sub_3683F0(a2, (__int64)a1, v10);
  if ( a3 )
    goto LABEL_15;
LABEL_26:
  set_tinfo_property();
  cleanup_argloc();
  return a1;
}

