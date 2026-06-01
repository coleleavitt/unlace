__int64 __fastcall sub_2DE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (***v6)(); // rsi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const char **v15; // rax
  const char *v16; // r15
  int v17; // eax
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  _QWORD *v22; // rax
  unsigned int v24; // edi
  __int64 v25; // [rsp-8h] [rbp-C8h]
  __int64 v26; // [rsp+0h] [rbp-C0h]
  __int64 (**v27)(); // [rsp+8h] [rbp-B8h] BYREF
  int v28; // [rsp+10h] [rbp-B0h]
  __int64 v29; // [rsp+18h] [rbp-A8h]
  __int64 v30; // [rsp+28h] [rbp-98h]
  __int128 v31; // [rsp+30h] [rbp-90h]
  __int64 v32; // [rsp+40h] [rbp-80h]
  __int64 v33; // [rsp+58h] [rbp-68h]
  __int128 v34; // [rsp+60h] [rbp-60h]
  unsigned __int64 v35; // [rsp+80h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  HIDWORD(v26) = 0;
  v31 = 0;
  v30 = 0;
  v33 = 0;
  v34 = 0;
  linearray_t_ctr();
  v6 = &v27;
  v28 = 0;
  v27 = off_5C88;
  v29 = a2;
  linearray_t_set_place();
  v7 = 0;
  while ( !(unsigned __int8)linearray_t_ending()
       && !(unsigned __int8)callui(27, v6, &callui, v12, v13, v14, v25, v26, v27) )
  {
    v15 = (const char **)linearray_t_down();
    if ( !v15[1] )
    {
      v16 = &haystack;
      v17 = isspace(0);
      goto LABEL_9;
    }
    v16 = *v15;
    v24 = **v15;
    if ( !**v15 )
    {
LABEL_27:
      v17 = isspace(0);
LABEL_9:
      if ( !v17 )
        goto LABEL_10;
      goto LABEL_25;
    }
    while ( v24 > 0x7F || !isspace(v24) )
    {
      v24 = *++v16;
      if ( !(_BYTE)v24 )
        goto LABEL_27;
    }
LABEL_25:
    ++v16;
LABEL_10:
    v18 = *(_QWORD *)(v32 + 16);
    if ( (_BYTE)v18
      || (show_auto(), v18)
      || (v6 = (__int64 (***)())"; These will appear here when output using the samaout plugin",
          !strstr(v16, "; These will appear here when output using the samaout plugin")) )
    {
      v6 = (__int64 (***)())v16;
      sub_2C30();
      ++v7;
      if ( v18 >= a3 )
        break;
    }
    else
    {
      v7 += sub_2CC0(a1, "; These will appear here when output using the samaout plugin", v8, v9, v10, v11);
      if ( !a3 )
        break;
    }
  }
  linearray_t_dtr();
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  v19 = v30;
  if ( v30 )
  {
    v20 = v31;
    if ( (_QWORD)v31 )
    {
      v21 = 0;
      do
      {
        v22 = (_QWORD *)(v19 + 24 * v21);
        if ( *v22 )
        {
          v22[1] = 0;
          qfree();
          v19 = v30;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return v7;
}

