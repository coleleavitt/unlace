__int64 __fastcall sub_1CD50(unsigned int *a1, _DWORD *a2, __int64 *a3, char a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbp
  unsigned __int64 tinfo_size; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // rcx
  int v18; // ebp
  unsigned int v19; // edx
  unsigned __int64 v20; // r15
  char **v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  struct _Unwind_Exception *v24; // rbx
  unsigned int v25; // [rsp+4h] [rbp-5Ch] BYREF
  __int64 v26; // [rsp+8h] [rbp-58h] BYREF
  __int128 v27; // [rsp+10h] [rbp-50h]
  unsigned __int64 v28; // [rsp+20h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v27 = 0;
  v26 = 0;
  v6 = sub_1C600(a1, &v26, a3, a4);
  v7 = v6;
  if ( (v6 & 0xFFFFFFF7) != 0 )
  {
    if ( (v6 & 0xFFFFFFFD) != 4 )
    {
      tinfo_size = get_tinfo_size(&v25, *a3, 0);
      v9 = tinfo_size;
      switch ( v7 )
      {
        case 1LL:
          goto LABEL_16;
        case 2LL:
          v23 = *((_QWORD *)a1 + 2);
          if ( *((unsigned __int8 *)&off_34160 + 16 * *a1 + 10) >= tinfo_size )
          {
            if ( (unsigned __int64)(v23 + 1) <= 8 )
            {
              *((_QWORD *)a1 + 2) = v23 + 1;
              if ( a2 )
              {
                *a2 = 3;
                a2[2] = v23 + 42;
              }
              goto LABEL_7;
            }
LABEL_43:
            v24 = (struct _Unwind_Exception *)sub_15370();
            sub_1CA60(&v26);
            _Unwind_Resume(v24);
          }
          if ( (unsigned __int64)(v23 + 2) <= 8 )
          {
            *((_QWORD *)a1 + 2) = v23 + 2;
            if ( a2 )
            {
              *a2 = 4;
              a2[2] = (v23 + 42) | (((_DWORD)v23 + 43) << 16);
            }
            goto LABEL_7;
          }
          break;
        case 3LL:
          v18 = tinfo_size;
          v19 = v25;
          v20 = *((_QWORD *)a1 + 3);
          v21 = &(&off_34160)[2 * *a1];
          if ( *((unsigned __int8 *)v21 + 12) <= v25 )
            v19 = *((unsigned __int8 *)v21 + 12);
          v22 = *((unsigned __int8 *)v21 + 8);
          if ( v22 < v19 )
          {
            v20 = -v19 & ((int)(v19 - 1) + v20);
            *((_QWORD *)a1 + 3) = v20;
          }
          if ( a2 )
          {
            cleanup_argloc(a2);
            *a2 = 1;
            *((_QWORD *)a2 + 1) = v20;
            v20 = *((_QWORD *)a1 + 3);
            v22 = LOBYTE((&off_34160)[2 * *a1 + 1]);
          }
          *((_QWORD *)a1 + 3) = ((int)(v22 - 1) + v20 + v18) & -v22;
          goto LABEL_7;
        case 5LL:
          goto LABEL_6;
        case 7LL:
          sub_18100((__int64)a1, (__int64)a2, (__int64)&v26);
          goto LABEL_7;
        default:
          if ( !under_debugger )
            interr(10480);
          BUG();
      }
      goto LABEL_41;
    }
    *((_QWORD *)a1 + 1) = (*((_QWORD *)a1 + 1) + 1LL) & 0xFFFFFFFFFFFFFFFELL;
    v10 = *a3;
    if ( v6 != 4 )
    {
      v9 = get_tinfo_size(&v25, v10, 0);
LABEL_6:
      sub_17E30(a1, (__int64)a2, v9);
      goto LABEL_7;
    }
    v9 = get_tinfo_size(&v25, v10, 0);
LABEL_16:
    v17 = *((_QWORD *)a1 + 1);
    if ( LOBYTE((&off_34160)[2 * *a1 + 1]) < v9 )
    {
      if ( (unsigned __int64)(v17 + 2) > 8 )
      {
LABEL_42:
        sub_15370();
        goto LABEL_43;
      }
      *((_QWORD *)a1 + 1) = v17 + 2;
      if ( a2 )
      {
        *a2 = 4;
        a2[2] = (v17 + 10) | (((_DWORD)v17 + 11) << 16);
      }
    }
    else
    {
      if ( (unsigned __int64)(v17 + 1) > 8 )
      {
        sub_15370();
LABEL_41:
        sub_15370();
        goto LABEL_42;
      }
      *((_QWORD *)a1 + 1) = v17 + 1;
      if ( a2 )
      {
        *a2 = 3;
        a2[2] = v17 + 10;
      }
    }
LABEL_7:
    v11 = 1;
    goto LABEL_9;
  }
  v11 = 0;
LABEL_9:
  v12 = v26;
  if ( v26 )
  {
    v13 = v27;
    if ( (_QWORD)v27 )
    {
      v14 = 0;
      do
      {
        v15 = v14++;
        clear_tinfo_t(v12 + 16 * v15 + 8);
        v12 = v26;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v27 = 0;
    qfree(v12);
  }
  return v11;
}

