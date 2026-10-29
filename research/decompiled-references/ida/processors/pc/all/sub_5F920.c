__int64 __fastcall sub_5F920(_QWORD *a1, __int64 *a2, int a3)
{
  unsigned int v5; // r12d
  int v7; // ecx
  char *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 tinfo_size; // r15
  int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  int v21; // ecx
  __int64 i; // rax
  unsigned __int8 v23; // dl
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  struct _Unwind_Exception *v33; // rbx
  unsigned __int64 v35; // [rsp+18h] [rbp-D0h]
  _DWORD *v36; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-A0h]
  __int128 v38; // [rsp+50h] [rbp-98h]
  __int128 v39; // [rsp+60h] [rbp-88h]
  unsigned __int64 v40; // [rsp+70h] [rbp-78h]
  int v41; // [rsp+78h] [rbp-70h]
  char v42; // [rsp+7Ch] [rbp-6Ch]
  int v43; // [rsp+8Ch] [rbp-5Ch] BYREF
  __int128 v44; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v5 = getinf_flag();
  if ( !(_BYTE)v5 )
    return v5;
  v5 = sub_58790();
  if ( !(_BYTE)v5 )
  {
    v7 = 0;
    v8 = (char *)&unk_96250;
    if ( a3 <= 3 )
    {
      v7 = 4 - a3;
      v8 = (char *)&unk_96250 + 4 * a3;
    }
    return sub_58C60((__int64)a1, a3, (__int64)v8, v7, 8 * a3);
  }
  v37 = 0;
  v38 = 0;
  v36 = &unk_96230;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  if ( a3 <= 0 )
  {
    v35 = a3;
  }
  else
  {
    v9 = 0;
    v35 = a3;
    do
    {
      get_tinfo_size();
      for_all_arglocs();
      v9 += 80;
    }
    while ( 80LL * a3 != v9 );
  }
  v10 = a1[7];
  v40 = 0;
  v41 = v10;
  v11 = (int)v10;
  v12 = v35;
  if ( v35 >= a1[1] )
    goto LABEL_41;
  do
  {
    HIDWORD(v39) = 0;
    v13 = *a1 + 80 * v12;
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == -1 )
    {
LABEL_59:
      v5 = 0;
      goto LABEL_49;
    }
    *(_QWORD *)&v38 = 0;
    if ( v42 || DWORD2(v39) | (unsigned int)v39 )
    {
      if ( !under_debugger )
        interr();
LABEL_73:
      BUG();
    }
    v43 = 0;
    if ( tinfo_size - 1 <= 0x1F )
    {
      if ( (unsigned __int8)sub_5ED00((__int64)&v36, (char *)&v43, v13 + 64, tinfo_size) )
        goto LABEL_31;
      v15 = sub_5E9B0((__int64)&v36);
      if ( v15 != 1 )
      {
        if ( v15 )
          goto LABEL_59;
        v16 = 0;
        v17 = (tinfo_size + 7) >> 3;
        while ( *((_BYTE *)&v43 + v16) != 7 )
        {
          if ( (unsigned int)++v16 >= (unsigned int)((tinfo_size + 7) >> 3) )
          {
            if ( tinfo_size <= 0x10 )
            {
              if ( v17 != 2 )
                goto LABEL_31;
            }
            else if ( (_BYTE)v43 != 3 || *(_WORD *)((char *)&v43 + 1) != 1028 || HIBYTE(v43) != 4 )
            {
              break;
            }
            v18 = 0;
            do
            {
              if ( *((_BYTE *)&v43 + v18 + 1) == 4 && (unsigned __int8)(*((_BYTE *)&v43 + (int)v18) - 2) > 2u )
                *((_BYTE *)&v43 + v18 + 1) = 2;
              ++v18;
            }
            while ( (_DWORD)v17 - 1 != v18 );
            goto LABEL_31;
          }
        }
      }
    }
    LOBYTE(v43) = 7;
LABEL_31:
    if ( HIDWORD(v39) )
    {
      if ( !under_debugger )
      {
        v33 = (struct _Unwind_Exception *)interr();
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
        _Unwind_Resume(v33);
      }
      goto LABEL_73;
    }
    v19 = (int)v40;
    v20 = SHIDWORD(v40);
    v21 = 0;
    v44 = -1;
    for ( i = 0; i != 4; ++i )
    {
      v23 = *((_BYTE *)&v43 + i);
      switch ( v23 )
      {
        case 1u:
          if ( v19 > 5 )
            goto LABEL_38;
          v29 = v36[v19++];
          goto LABEL_53;
        case 2u:
          v29 = v20++ + 64;
LABEL_53:
          *((_DWORD *)&v44 + i) = v29;
          ++v21;
          continue;
        case 4u:
          v29 = -1;
          goto LABEL_53;
        case 3u:
          v29 = v20++ + 81;
          goto LABEL_53;
      }
      if ( v23 > 4u )
        goto LABEL_38;
    }
    if ( v19 > 6 || v20 > 8 || (v40 = __PAIR64__(v20, v19), v21 <= 0) )
    {
LABEL_38:
      v24 = v41;
      *(_DWORD *)v13 = 1;
      *(_QWORD *)(v13 + 8) = v24;
      v41 += (tinfo_size + 7) & 0xFFFFFFF8;
      goto LABEL_39;
    }
    sub_59E90(&v36, (int *)v13, (int *)&v44, v21, tinfo_size);
LABEL_39:
    v12 = ++a3;
  }
  while ( (unsigned __int64)a3 < a1[1] );
  v11 = v41;
LABEL_41:
  a1[7] = v11;
  if ( a2 && dbg )
  {
    v25 = a2[1];
    v26 = *a2;
    if ( a2[2] < (unsigned __int64)(v25 + 1) )
    {
      v31 = qvector_reserve();
      *a2 = v31;
      v25 = a2[1];
      v26 = v31;
    }
    v27 = v26 + 32 * v25;
    *(_QWORD *)(v27 + 8) = 0;
    *(_OWORD *)(v27 + 16) = 0;
    ++a2[1];
    *(_DWORD *)v27 = sub_71F30("RAX");
    v28 = *(_QWORD *)(v27 + 16);
    *(_DWORD *)(v27 + 4) = 0;
    if ( v28 <= 7 )
    {
      v30 = *(_QWORD *)(v27 + 8);
      if ( *(_QWORD *)(v27 + 24) <= 7u )
      {
        v32 = qvector_reserve();
        *(_QWORD *)(v27 + 8) = v32;
        v30 = v32;
        v28 = *(_QWORD *)(v27 + 16);
      }
      memset((void *)(v30 + v28), 0, 8 - v28);
      *(_QWORD *)(v27 + 16) = 8;
    }
    else if ( v28 != 8 )
    {
      *(_QWORD *)(v27 + 16) = 8;
    }
    **(_QWORD **)(v27 + 8) = SHIDWORD(v40);
  }
LABEL_49:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v5;
}
