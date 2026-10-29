__int64 __fastcall sub_60F40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 tinfo_size; // rax
  bool v7; // zf
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  int v11; // ecx
  __int64 i; // rax
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  int v21; // [rsp+Ch] [rbp-4Ch] BYREF
  int v22[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 44) = 0;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size == -1 )
    return 0;
  v7 = *(_BYTE *)(a1 + 60) == 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v7 || *(_DWORD *)(a1 + 32) || *(_DWORD *)(a1 + 40) )
  {
    if ( !under_debugger )
      interr();
LABEL_49:
    BUG();
  }
  v8 = tinfo_size;
  v21 = 0;
  if ( tinfo_size - 1 > 0x1F )
    goto LABEL_6;
  if ( !(unsigned __int8)sub_5FD00(a1, (char *)&v21, a3, tinfo_size) )
  {
    v15 = sub_5F9B0(a1);
    if ( v15 == 1 )
    {
LABEL_6:
      LOBYTE(v21) = 7;
      goto LABEL_7;
    }
    if ( !v15 )
    {
      v16 = 0;
      v17 = (v8 + 7) >> 3;
      while ( *((_BYTE *)&v22[-1] + v16) != 7 )
      {
        if ( (unsigned int)++v16 >= (unsigned int)((v8 + 7) >> 3) )
        {
          if ( v8 <= 0x10 )
          {
            if ( v17 != 2 )
              goto LABEL_7;
          }
          else if ( (_BYTE)v21 != 3 || *(_WORD *)((char *)&v21 + 1) != 1028 || HIBYTE(v21) != 4 )
          {
            goto LABEL_6;
          }
          v18 = 0;
          do
          {
            if ( *((_BYTE *)&v21 + v18 + 1) == 4 && (unsigned __int8)(*((_BYTE *)&v22[-1] + (int)v18) - 2) > 2u )
              *((_BYTE *)&v21 + v18 + 1) = 2;
            ++v18;
          }
          while ( (_DWORD)v17 - 1 != v18 );
          goto LABEL_7;
        }
      }
      goto LABEL_6;
    }
    return 0;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 44) )
  {
    if ( !under_debugger )
      interr();
    goto LABEL_49;
  }
  v9 = *(int *)(a1 + 48);
  v10 = *(int *)(a1 + 52);
  v11 = 0;
  *(_OWORD *)v22 = -1;
  for ( i = 0; i != 4; ++i )
  {
    v13 = *((_BYTE *)&v22[-1] + i);
    switch ( v13 )
    {
      case 1u:
        if ( v9 > 5 )
          goto LABEL_14;
        v19 = *(_DWORD *)(*(_QWORD *)a1 + 4 * v9++);
        goto LABEL_32;
      case 2u:
        v19 = v10++ + 64;
LABEL_32:
        v22[i] = v19;
        ++v11;
        continue;
      case 4u:
        v19 = -1;
        goto LABEL_32;
      case 3u:
        v19 = v10++ + 81;
        goto LABEL_32;
    }
    if ( v13 > 4u )
      goto LABEL_14;
  }
  if ( v9 > 6 || v10 > 8 || (*(_DWORD *)(a1 + 48) = v9, *(_DWORD *)(a1 + 52) = v10, v11 <= 0) )
  {
LABEL_14:
    v14 = *(int *)(a1 + 56);
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v14;
    *(_DWORD *)(a1 + 56) += (v8 + 7) & 0xFFFFFFF8;
    return 1;
  }
  sub_5AE90((_QWORD *)a1, (int *)a2, v22, v11, v8);
  return 1;
}

