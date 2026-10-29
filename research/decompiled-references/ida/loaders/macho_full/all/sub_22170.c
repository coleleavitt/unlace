signed __int64 __fastcall sub_22170(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        const char **a6,
        double a7,
        char a8,
        char a9)
{
  char v13; // cl
  __int64 v14; // r13
  const char *v15; // rbx
  bool v16; // cf
  __int64 v17; // r13
  __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  const char *v20; // r11
  __int64 v21; // rdi
  unsigned __int64 v22; // r11
  _QWORD *v23; // rax
  __int64 v24; // r10
  _QWORD *v25; // rsi
  __int64 *v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rsi
  const char *v30; // rbx
  __int64 *v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rdi
  char v34; // [rsp+0h] [rbp-78h]
  _QWORD *v35; // [rsp+0h] [rbp-78h]
  unsigned __int64 v36; // [rsp+10h] [rbp-68h]
  char v37; // [rsp+1Ch] [rbp-5Ch]

  v13 = a8;
  v14 = *(_QWORD *)(a3 + 120);
  if ( (*(_BYTE *)(a2 + 365) & 1) != 0 && (*(_QWORD *)(a3 + 128) < a4 + a5 || __CFADD__(a4, a5)) )
  {
    v30 = "section";
    v36 = *(_QWORD *)(a3 + 128);
    if ( a8 )
      v30 = "segment";
    sub_112F0((__int64)"%a: %s runs off the file end, truncating.\n", *a6, v30);
    v13 = a8;
    a5 = v36 - a4;
    if ( a4 >= v36 )
    {
      sub_196C0((__int64)"Cannot load the %s '%s'. File offset is bigger than file size");
      return 0;
    }
  }
  v15 = &(*a6)[a5];
  if ( a6[1] < v15 || __CFADD__(*a6, a5) )
  {
    v34 = v13;
    sub_112F0((__int64)"%a: %s file size is bigger than virtual, truncating.\n", a7, *a6);
    v15 = a6[1];
    v13 = v34;
  }
  v16 = __CFADD__(v14, a4);
  v17 = v14 + a4;
  if ( v16 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v18 = *(_QWORD *)(a2 + 16);
  v19 = *(_QWORD *)(a2 + 248);
  v20 = *a6;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != v19 && v19 != -1 )
  {
    v21 = *(_QWORD *)(a2 + 120);
    if ( v21 )
    {
      if ( *(int *)(v21 + 680) > 0 )
      {
        v37 = v13;
        v35 = sub_1C420((_QWORD *)v21, v19);
        v23 = sub_1C420((_QWORD *)v21, v22);
        v13 = v37;
        v25 = v23;
        if ( !v23 )
        {
          sub_196C0((__int64)"Failed to find subcache for segment %s (address %llX), please check for missing files");
          return 0;
        }
        v26 = (__int64 *)v23[66];
        v27 = &v26[4 * v23[67]];
        if ( !v35 || *((_DWORD *)v35 + 214) == *((_DWORD *)v25 + 214) )
        {
          if ( v26 == v27 )
          {
            if ( v24 != -1 )
            {
              v18 = v25[1];
              v17 = -1;
            }
          }
          else
          {
            v31 = v26;
            do
            {
              v32 = *v31;
              if ( (unsigned __int64)v20 >= *v31 && v31[1] >= (unsigned __int64)&v20[-v32] )
              {
                v33 = (__int64)&v20[v31[2] - v32];
                goto LABEL_35;
              }
              v31 += 4;
            }
            while ( v27 != v31 );
            v33 = -1;
LABEL_35:
            if ( v24 != v33 )
            {
              v18 = v25[1];
              goto LABEL_16;
            }
          }
        }
        else
        {
          v18 = v25[1];
          if ( v26 == v27 )
          {
LABEL_29:
            v17 = -1;
          }
          else
          {
LABEL_16:
            while ( 1 )
            {
              v28 = *v26;
              if ( (unsigned __int64)v20 >= *v26 && v26[1] >= (unsigned __int64)&v20[-v28] )
                break;
              v26 += 4;
              if ( v27 == v26 )
                goto LABEL_29;
            }
            v17 = (__int64)&v20[v26[2] - v28];
          }
        }
      }
    }
  }
  if ( !v13 || !a9 || !(unsigned __int8)sub_22040(a1, v18, v17, (int)v20, (int)v15) )
    file2base();
  rangeset_t_add();
  return v15 - *a6;
}

