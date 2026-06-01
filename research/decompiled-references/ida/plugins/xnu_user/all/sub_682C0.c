__int64 __fastcall sub_682C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  size_t v15; // r8
  const void *v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // [rsp+10h] [rbp-98h]
  unsigned __int64 v19; // [rsp+10h] [rbp-98h]
  void *srca; // [rsp+18h] [rbp-90h]
  void *src; // [rsp+18h] [rbp-90h]
  size_t na; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+20h] [rbp-88h]
  unsigned __int64 v24; // [rsp+28h] [rbp-80h]
  unsigned __int64 v25; // [rsp+28h] [rbp-80h]
  const void *v26; // [rsp+30h] [rbp-78h] BYREF
  __int128 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+50h] [rbp-58h] BYREF
  __int128 v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !a4 )
    goto LABEL_31;
  if ( !a2 )
  {
LABEL_29:
    if ( under_debugger )
      goto LABEL_33;
    interr();
LABEL_31:
    if ( !under_debugger )
      interr();
LABEL_33:
    BUG();
  }
  if ( !a3 )
  {
    if ( under_debugger )
      goto LABEL_33;
    interr();
    goto LABEL_29;
  }
  v26 = nullptr;
  a4[1] = 0;
  v27 = 0;
  v5 = 0;
  v28 = 0;
  v29 = 0;
  do
  {
    sub_15ED0(&v28);
    if ( (unsigned int)sub_65730(a1, &v28) != 1
      || (v8 = sub_65680(a1), *(_BYTE *)(a1 + 16) = 0, v8 != 1)
      || (v9 = *(_QWORD *)(a1 + 32)) == 0
      || (v10 = *(_BYTE **)(a1 + 24), (unsigned __int8)(*v10 - 108) > 1u) )
    {
      v11 = 0;
      goto LABEL_20;
    }
    sub_64140(a1, (__int64 *)&v26, v10 + 1, v9 - 1);
    v15 = v27;
    v5 += v27;
    if ( (_QWORD)v27 )
    {
      v14 = a4[1];
      v16 = v26;
      v17 = v14 + v27;
      if ( __CFADD__(v14, (_QWORD)v27) )
      {
        if ( v14 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v14 != 0x7FFFFFFFFFFFFFFFLL )
            a4[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
          memcpy((void *)(v14 + *a4), v16, v15);
          continue;
        }
        v17 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v6 = *a4;
      v7 = a4[1];
      if ( a4[2] < v17 )
      {
        v25 = a4[1];
        n = v27;
        src = (void *)v26;
        v19 = v17;
        v13 = qvector_reserve();
        *a4 = v13;
        v6 = v13;
        v14 = v25;
        v7 = a4[1];
        v15 = n;
        v16 = src;
        v17 = v19;
      }
      v24 = v14;
      na = v15;
      srca = (void *)v16;
      v18 = v17;
      memset((void *)(v6 + v7), 0, v17 - v7);
      v16 = srca;
      v15 = na;
      v14 = v24;
      a4[1] = v18;
      goto LABEL_8;
    }
  }
  while ( **(_BYTE **)(a1 + 24) != 108 );
  v11 = 1;
LABEL_20:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return v11;
}

