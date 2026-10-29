__int64 __fastcall sub_27160(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int16 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // r14d
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-40h]

  if ( *(_WORD *)(a2 + 24) != 143 )
    return 0;
  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  v4 = *(unsigned __int16 *)(a2 + 46);
  v5 = *(_WORD *)(a2 + 46);
  if ( (((_WORD)v4 - 3) & 0xFFFD) != 0 && (unsigned int)(v4 - 6) > 1 && (unsigned __int16)(v4 - 12) > 3u )
    return 0;
  v6 = *(_QWORD *)(a1 + 144);
  v7 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v7 < 0 )
  {
LABEL_31:
    v18 = sub_72FC0(v4, 1);
    v19 = *(_DWORD *)(a1 + 40);
    v20 = sub_72FC0(v18, 1);
    v5 = *(_WORD *)(a2 + 46);
    if ( !_bittest(&v19, v20) )
      goto LABEL_23;
  }
  else
  {
    while ( (_DWORD)v4 != *(__int16 *)(*(_QWORD *)(a1 + 8) + 32 * v7 + 24) )
    {
      v8 = v7-- == 0;
      if ( v8 )
        goto LABEL_31;
    }
  }
  if ( v5 != 5 )
    return 0;
  if ( *(_QWORD *)(a1 + 32) != -1 && !*(_BYTE *)(a1 + 177) )
  {
    if ( !sub_23340() )
    {
      if ( (*(_BYTE *)(a2 + 28) & 8) == 0 )
      {
LABEL_22:
        v5 = *(_WORD *)(a2 + 46);
LABEL_23:
        v9 = *(_QWORD *)(a1 + 16);
        v10 = *(_QWORD *)(a1 + 8);
LABEL_24:
        v12 = sub_23C00(a2);
        v13 = *(_QWORD *)(a2 + 16);
        v14 = v12;
        v15 = sub_23F00(a1);
        v16 = v15;
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v9 + 1) )
        {
          v22 = v15;
          v21 = qvector_reserve();
          v9 = *(_QWORD *)(a1 + 16);
          v16 = v22;
          *(_QWORD *)(a1 + 8) = v21;
          v10 = v21;
        }
        v17 = v10 + 32 * v9;
        *(_QWORD *)v17 = v13;
        *(_QWORD *)(v17 + 8) = v16;
        *(_QWORD *)(v17 + 16) = v14;
        *(_WORD *)(v17 + 24) = v5;
        *(_WORD *)(v17 + 26) = 0;
        ++*(_QWORD *)(a1 + 16);
        return 1;
      }
      if ( !*(_BYTE *)(a1 + 176) && !(unsigned __int8)sub_253C0(v6) )
      {
        v9 = *(_QWORD *)(a1 + 16);
        v10 = *(_QWORD *)(a1 + 8);
        v5 = *(_WORD *)(a2 + 46);
        v11 = v9 - 1;
        if ( v9 - 1 < 0 )
          goto LABEL_24;
        while ( *(unsigned __int16 *)(a2 + 46) != *(__int16 *)(v10 + 32 * v11 + 24) )
        {
          v8 = v11-- == 0;
          if ( v8 )
            goto LABEL_24;
        }
        *(_BYTE *)(a1 + 177) = sub_27090(v6, (const void *)a2, 10) ^ 1;
        goto LABEL_22;
      }
    }
    return 0;
  }
  return 1;
}

