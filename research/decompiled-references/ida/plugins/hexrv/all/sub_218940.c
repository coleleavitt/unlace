__int64 __fastcall sub_218940(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  char v11; // al
  unsigned int v12; // ebx
  __int64 v14; // [rsp+8h] [rbp-70h]
  int v15[4]; // [rsp+10h] [rbp-68h] BYREF
  int v16[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 32);
  v17 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 24);
  v14 = v3 + 56 * v2;
  if ( v14 == v3 )
    return (unsigned int)-1;
  while ( 1 )
  {
    v4 = 13LL * *(int *)(v3 + 44);
    v5 = **(_QWORD **)(a1 + 88);
    v15[0] = 0;
    v6 = v5 + 8 * v4;
    copy_argloc();
    v16[0] = 0;
    copy_argloc();
    sub_1BE890((__int64)v15, *(_DWORD *)(v6 + 88));
    sub_1BE890((__int64)v16, *(_DWORD *)(a1 + 144));
    if ( !(unsigned int)sub_1BE450(v15, v16) || (unsigned __int8)sub_1BE700(v6, a1 + 120, a2) )
      break;
    v3 += 56;
    cleanup_argloc();
    cleanup_argloc();
    if ( v3 == v14 )
      return (unsigned int)-1;
  }
  v7 = **(_QWORD **)(a1 + 88) + 104LL * *(int *)(v3 + 44);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 144);
  v10 = *(_DWORD *)(v7 + 88);
  if ( *(_BYTE *)(v8 + 320) && (*(_BYTE *)(v7 + 25) & 1) != 0 )
  {
    if ( v10 < v9 )
      goto LABEL_14;
    goto LABEL_8;
  }
  if ( v10 > v9 )
  {
LABEL_8:
    v11 = sub_325380(*(_QWORD *)(v8 + 1496), v7 + 80, a2);
    goto LABEL_9;
  }
  if ( (unsigned __int8)sub_218760(a1, *(_DWORD *)(v3 + 44), (__int64)a2, 0) )
  {
    if ( !sub_1EAD50(v7, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL), a2, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL), 2) )
      goto LABEL_14;
    copy_argloc();
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v7 + 88) != *(_DWORD *)(a1 + 144) )
    goto LABEL_14;
  v11 = sub_325380(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL), v7 + 80, a2);
LABEL_9:
  if ( !v11 )
  {
LABEL_14:
    cleanup_argloc();
    cleanup_argloc();
    return (unsigned int)-1;
  }
LABEL_10:
  v12 = *(_DWORD *)(v3 + 44);
  cleanup_argloc();
  cleanup_argloc();
  return v12;
}

