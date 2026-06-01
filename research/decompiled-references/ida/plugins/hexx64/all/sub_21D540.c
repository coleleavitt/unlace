__int64 __fastcall sub_21D540(__int64 a1, _BYTE *a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  char v12; // al
  unsigned int v13; // ebx
  __int64 v15; // [rsp+8h] [rbp-70h]
  int v16[4]; // [rsp+10h] [rbp-68h] BYREF
  int v17[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 32);
  v18 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 24);
  v15 = v4 + 56 * v3;
  if ( v15 == v4 )
    return (unsigned int)-1;
  while ( 1 )
  {
    v5 = 13LL * *(int *)(v4 + 44);
    v6 = **(_QWORD **)(a1 + 88);
    v16[0] = 0;
    v7 = v6 + 8 * v5;
    copy_argloc();
    v17[0] = 0;
    copy_argloc();
    sub_1C2F10((__int64)v16, *(_DWORD *)(v7 + 88));
    sub_1C2F10((__int64)v17, *(_DWORD *)(a1 + 144));
    if ( !(unsigned int)sub_1C2AD0(v16, v17, a3) || (unsigned __int8)sub_1C2D80() )
      break;
    v4 += 56;
    cleanup_argloc();
    cleanup_argloc();
    if ( v4 == v15 )
      return (unsigned int)-1;
  }
  v8 = **(_QWORD **)(a1 + 88) + 104LL * *(int *)(v4 + 44);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_DWORD *)(a1 + 144);
  v11 = *(_DWORD *)(v8 + 88);
  if ( *(_BYTE *)(v9 + 320) && (*(_BYTE *)(v8 + 25) & 1) != 0 )
  {
    if ( v11 < v10 )
      goto LABEL_14;
    goto LABEL_8;
  }
  if ( v11 > v10 )
  {
LABEL_8:
    v12 = sub_32A510(*(_QWORD *)(v9 + 1496));
    goto LABEL_9;
  }
  if ( (unsigned __int8)sub_21D360(a1, *(_DWORD *)(v4 + 44), a2, 0) )
  {
    if ( !sub_1EF950(
            v8,
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
            a2,
            *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL),
            2,
            a3) )
      goto LABEL_14;
    copy_argloc();
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v8 + 88) != *(_DWORD *)(a1 + 144) )
    goto LABEL_14;
  v12 = sub_32A510(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL));
LABEL_9:
  if ( !v12 )
  {
LABEL_14:
    cleanup_argloc();
    cleanup_argloc();
    return (unsigned int)-1;
  }
LABEL_10:
  v13 = *(_DWORD *)(v4 + 44);
  cleanup_argloc();
  cleanup_argloc();
  return v13;
}

