__int64 *__fastcall sub_36D720(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-C0h]
  int v21; // [rsp+10h] [rbp-B8h]
  __int64 v22; // [rsp+18h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-A0h]
  __int64 v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  __int128 v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+60h] [rbp-68h]
  __int128 v30; // [rsp+68h] [rbp-60h]
  char v31; // [rsp+78h] [rbp-50h]
  unsigned __int64 v32; // [rsp+88h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  *a1 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(a2 + 320) )
  {
    tinfo_property = 0;
    if ( a3 )
    {
      a4 = 0.0;
      v25 = 0;
      v31 = 16;
      v26 = 0;
      v27 = 0;
      v29 = 0;
      v24 = 0;
      v28 = 0;
      v30 = 0;
      if ( !(unsigned __int8)get_tinfo_details() )
      {
        if ( !under_debugger )
          sub_383060(0xC74Cu, 0.0);
        goto LABEL_42;
      }
      v6 = *a1;
      *a1 = v26;
      v26 = v6;
      v22 = v28;
      *(_QWORD *)&v28 = 0;
      v21 = v27;
      LODWORD(v27) = 0;
      cleanup_argloc();
      clear_tinfo_t();
      v7 = tinfo_property;
      if ( tinfo_property )
      {
        v20 = v24;
        if ( (_QWORD)v24 )
        {
          v8 = 0;
          do
          {
            v9 = (_QWORD *)(v7 + 80 * v8);
            clear_tinfo_t();
            v10 = v9[5];
            if ( v10 )
            {
              v9[6] = 0;
              qfree(v10);
            }
            v11 = v9[2];
            if ( v11 )
            {
              v9[3] = 0;
              qfree(v11);
            }
            ++v8;
            cleanup_argloc();
            v7 = tinfo_property;
          }
          while ( v20 != v8 );
        }
        *(_QWORD *)&v24 = 0;
        qfree(v7);
      }
      v12 = *(int *)(a2 + 480);
      if ( (_DWORD)v12 == -1 )
      {
        v16 = v22;
        v14 = v21;
LABEL_28:
        *(_QWORD *)(a3 + 8) = v16;
        *(_DWORD *)a3 = v14;
        goto LABEL_26;
      }
      v13 = *(_QWORD *)(a2 + 432) + 104 * v12;
      if ( *(_BYTE *)(a2 + 320) )
      {
LABEL_15:
        sub_1C7740(&tinfo_property, a2, v13, *(unsigned int *)(v13 + 88), a4);
        copy_argloc();
        cleanup_argloc();
        v14 = v21;
        if ( v21 || (v14 = *(_DWORD *)(v13 + 88) & (*(_DWORD *)(v13 + 88) - 1)) == 0 )
        {
          v16 = v22;
        }
        else
        {
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            v15 = round_up_power2();
            sub_1C7740(&tinfo_property, a2, v13, v15, a4);
            copy_argloc();
            cleanup_argloc();
          }
          v16 = v22;
          v14 = 0;
        }
        goto LABEL_28;
      }
    }
    else
    {
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v19 = *(_DWORD *)(a2 + 480);
      if ( v19 == -1 || *(_BYTE *)(a2 + 320) )
        goto LABEL_26;
      v13 = *(_QWORD *)(a2 + 432) + 104LL * v19;
    }
  }
  else
  {
    v17 = *(int *)(a2 + 480);
    if ( (_DWORD)v17 == -1 )
    {
      if ( !a3 )
        goto LABEL_26;
      v14 = 0;
      v16 = 0;
      goto LABEL_28;
    }
    v13 = *(_QWORD *)(a2 + 432) + 104 * v17;
  }
  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(a2 + 464) )
    {
      sub_13D280((_QWORD *)a2, 0, a4);
      copy_tinfo_t();
      goto LABEL_25;
    }
    if ( !under_debugger )
      sub_383060(0xCB7Cu, a4);
LABEL_42:
    BUG();
  }
  copy_tinfo_t();
LABEL_25:
  sub_36D670(a2, (__int64)a1, v13);
  if ( a3 )
    goto LABEL_15;
LABEL_26:
  set_tinfo_property();
  cleanup_argloc();
  return a1;
}

