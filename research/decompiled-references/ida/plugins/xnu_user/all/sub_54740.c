unsigned __int64 __fastcall sub_54740(_QWORD *a1)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r14
  char v11; // al
  __int64 (*v12)(); // rax
  __int64 v13; // rax
  __int16 v14; // cx
  __int16 v15; // dx
  __int16 v16; // cx
  _QWORD *v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( !(unsigned __int8)netnode_inited() )
    return v18 - __readfsqword(0x28u);
  v3 = a1[110];
  netnode_check();
  v4 = &v17;
  if ( !(unsigned __int8)netnode_exist() )
    return v18 - __readfsqword(0x28u);
  v9 = a1[126];
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v3 = a1[125] + 32 * v10;
      v11 = *(_BYTE *)(v3 + 8);
      if ( v11 == 3 )
        break;
      if ( v11 <= 3 )
      {
        if ( v11 == 1 )
        {
          v4 = v17;
          v3 = *(_QWORD *)(v3 + 16);
          netnode_qsupstr();
          goto LABEL_9;
        }
        if ( v11 == 2 )
          break;
LABEL_9:
        if ( v9 == ++v10 )
          goto LABEL_15;
      }
      else
      {
        if ( v11 != 6 )
          goto LABEL_9;
        v12 = *(__int64 (**)())(*a1 + 640LL);
        if ( v12 == sub_2A1F0 )
          goto LABEL_9;
        ++v10;
        v4 = a1;
        ((void (__fastcall *)(_QWORD *, __int64, _QWORD **))v12)(a1, v3, &v17);
        if ( v9 == v10 )
          goto LABEL_15;
      }
    }
    v4 = v17;
    v3 = *(char *)(v3 + 9);
    netnode_supval();
    goto LABEL_9;
  }
LABEL_15:
  v13 = sub_15D50(v4, v3, v5, v6, v7, v8);
  v14 = *(_WORD *)(v13 + 82);
  v15 = v14 | 1;
  v16 = v14 & 0xFFFE;
  if ( *(char *)(v13 + 36) >= 0 )
    v15 = v16;
  *(_WORD *)(v13 + 82) = v15;
  return v18 - __readfsqword(0x28u);
}

