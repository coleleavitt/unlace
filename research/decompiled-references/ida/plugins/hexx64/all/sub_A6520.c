__int64 __fastcall sub_A6520(__int64 a1, double a2)
{
  _QWORD *exception; // r12
  bool v3; // zf
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  int v15; // eax
  unsigned int v16; // eax
  int v18; // eax
  int v19; // [rsp+8h] [rbp-B0h]
  _BYTE *v20; // [rsp+8h] [rbp-B0h]
  __int64 v21; // [rsp+10h] [rbp-A8h]
  int v22; // [rsp+1Ch] [rbp-9Ch]
  __int64 v23[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v24; // [rsp+30h] [rbp-88h] BYREF
  __int128 v25; // [rsp+38h] [rbp-80h]
  __int64 v26[2]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 *v27[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 48) == 0;
  v27[3] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 480);
  v23[0] = 0;
  v23[1] = 0;
  sub_63E80(v23, *(_DWORD *)(*(_QWORD *)(v4 + 112) + 60LL), *(_DWORD *)(*(_QWORD *)(v4 + 112) + 84LL), a2);
  v7 = *(_QWORD *)(a1 + 48);
  v24 = 0;
  v25 = 0;
  if ( !v7 )
  {
    qfree(v23[0]);
    v15 = *(_DWORD *)(a1 + 24);
LABEL_31:
    v8 = 0;
    *(_DWORD *)(a1 + 24) = v15 & 0xFFFFFFEF;
    return v8;
  }
  v8 = 0;
  do
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)v7;
      if ( (unsigned int)(*(_DWORD *)v7 - 59) > 1 )
        break;
      v21 = *(_QWORD *)(a1 + 64);
      v9 = sub_1CFBB0(v21, *(_QWORD *)(v7 + 24));
      v10 = v9;
      if ( (*(_BYTE *)(v7 + 4) & 0x20) != 0 )
        v10 = *(int *)(*(_QWORD *)(v21 + 1504) + 80LL) + v9;
      if ( v19 == 59 )
      {
        v10 -= *(int *)(v7 + 36);
        v11 = *(int *)(v7 + 36);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 24LL) != 8 )
          v10 = (int)v10;
        v12 = (_BYTE *)(v7 + 64);
      }
      else
      {
        v11 = *(unsigned int *)(v7 + 68);
        v12 = (_BYTE *)(v7 + 32);
      }
      if ( v10 < 0 )
      {
        exception = __cxa_allocate_exception(0x30u);
        exception[2] = sub_330F80(*(_QWORD **)(a1 + 64), *(_QWORD *)(v7 + 24));
        *exception = off_4DBCD0;
        *((_DWORD *)exception + 2) = -5;
        exception[3] = 0;
        *((_OWORD *)exception + 2) = 0;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
      }
      v13 = *(_QWORD *)(a1 + 64);
      *v12 = 5;
      v22 = v11;
      v20 = v12;
      v14 = (_QWORD *)j__qalloc_or_throw(16, v13, (__int64)v12, v11);
      v14[1] = v10;
      ++v8;
      *v14 = v13;
      *((_QWORD *)v20 + 1) = v14;
      *((_DWORD *)v20 + 1) = v22;
      *(_DWORD *)v7 = 4;
      v7 = *(_QWORD *)(v7 + 8);
      if ( !v7 )
        goto LABEL_16;
    }
    sub_127A20((__int64)v26, a1, v7, 1, v5, v6);
    if ( ((unsigned __int8)sub_64780(v26, v23) || (unsigned __int8)sub_318470(v27, (__int64)&v24))
      && (unsigned __int8)sub_64820(v26, v23)
      && (unsigned __int8)sub_317F40(&v24, (__int64)v27)
      && (*(_BYTE *)(v7 + 64) != 8 || *(_DWORD *)(*(_QWORD *)(v7 + 72) + 284LL) != 11) )
    {
      sub_11D5A0(v7);
      v18 = *(_DWORD *)(a1 + 24);
      ++v8;
      BYTE1(v18) &= ~2u;
      LOBYTE(v18) = v18 | 0x80;
      *(_DWORD *)(a1 + 24) = v18;
    }
    if ( v27[0] )
    {
      v27[1] = nullptr;
      qfree((__int64)v27[0]);
    }
    qfree(v26[0]);
    v7 = *(_QWORD *)(v7 + 8);
  }
  while ( v7 );
LABEL_16:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  qfree(v23[0]);
  v15 = *(_DWORD *)(a1 + 24);
  if ( !v8 )
    goto LABEL_31;
  v16 = v15 & 0xFFFFFDEF;
  LOBYTE(v16) = v16 | 0x80;
  *(_DWORD *)(a1 + 24) = v16;
  sub_A2520(a1, "convert_pushes: %d modifications");
  return v8;
}

