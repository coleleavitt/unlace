__int64 __fastcall sub_339FD0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, __int64 a5, char *a6)
{
  __int64 v12; // rax
  int v13; // esi
  __int64 segm_para; // r15
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // ecx
  char v20; // al
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v24[3] = __readfsqword(0x28u);
  sub_3312A0(a3, a4);
  v12 = getseg();
  if ( !v12 )
    return 0;
  v13 = *(_DWORD *)(a1 + 84);
  if ( v13 != (1 << (*(_BYTE *)(v12 + 43) + 4)) / 8 )
  {
    if ( !under_debugger )
      sub_3835A0(52944);
    BUG();
  }
  if ( v13 > *((_DWORD *)a6 + 1) )
    return 0;
  if ( !a5 )
  {
    get_segm_para();
    v20 = *a6;
    v23 = 0;
    if ( v20 != 4 )
    {
      if ( v20 != 10 )
      {
        if ( v20 == 2 )
          return 0;
        return 2;
      }
      goto LABEL_26;
    }
LABEL_22:
    if ( !(unsigned __int8)sub_3395B0(&v23, a1, a3, a4, *((int **)a6 + 1)) )
    {
      if ( (unsigned __int8)sub_339F20(v24, *((_QWORD *)a6 + 1)) )
      {
        v18 = v24[0];
        goto LABEL_14;
      }
      return 2;
    }
    goto LABEL_28;
  }
  if ( *(_BYTE *)a5 != 1 || *(_DWORD *)(a1 + 64) != *(_DWORD *)(a5 + 8) )
    return 0;
  v23 = 0;
  segm_para = get_segm_para();
  v16 = *a6;
  if ( *a6 == 4 )
    goto LABEL_22;
  if ( v16 > 4u )
  {
    if ( v16 != 10 )
      return 2;
LABEL_26:
    sub_123480((__int64)v24, *((unsigned __int8 **)a6 + 1));
    sub_11C450((char *)a2, (char *)v24);
    sub_11C7E0((__int64)v24);
    return 1;
  }
  if ( v16 == 1 )
  {
    if ( !(unsigned __int8)sub_3394F0((unsigned __int64 *)&v23, a1, a3, a4, *((_DWORD *)a6 + 2)) )
      return 2;
LABEL_28:
    v21 = v23;
    if ( v23 < 0 )
      return 0;
    sub_11C7E0(a2);
    *(_BYTE *)a2 = 5;
    v22 = (_QWORD *)j__qalloc_or_throw();
    *v22 = a3;
    v22[1] = v21;
    *(_QWORD *)(a2 + 8) = v22;
    return 1;
  }
  if ( v16 == 2 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)a6 + 1) + 16LL);
    if ( v17 < *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL) )
    {
      v18 = 16 * segm_para + sub_32AEF0(v17, *(_DWORD *)(a1 + 84), 0);
LABEL_14:
      sub_11C7E0(a2);
      *(_BYTE *)a2 = 6;
      v19 = 8 * *(_DWORD *)(a1 + 84);
      if ( (unsigned __int64)v19 <= 0x3F )
        v18 &= ~(-1LL << v19);
      *(_QWORD *)(a2 + 8) = v18;
      return 1;
    }
    return 0;
  }
  return 2;
}

