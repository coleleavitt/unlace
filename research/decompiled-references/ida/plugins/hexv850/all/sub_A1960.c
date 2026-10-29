__int64 __fastcall sub_A1960(__int64 a1)
{
  _QWORD *exception; // r12
  bool v2; // zf
  __int64 v3; // rax
  int *v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // ecx
  _BYTE *v9; // rdx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // eax
  int v15; // eax
  int v16; // [rsp+8h] [rbp-B0h]
  _BYTE *v17; // [rsp+8h] [rbp-B0h]
  __int64 v18; // [rsp+10h] [rbp-A8h]
  int v19; // [rsp+1Ch] [rbp-9Ch]
  __int64 v20[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h] BYREF
  __int128 v22; // [rsp+38h] [rbp-80h]
  _QWORD v23[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[11]; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 48) == 0;
  v24[3] = __readfsqword(0x28u);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    return 0;
  }
  v3 = *(_QWORD *)(a1 + 480);
  v20[0] = 0;
  v20[1] = 0;
  sub_5F400(v20, *(_DWORD *)(*(_QWORD *)(v3 + 112) + 60LL), *(_DWORD *)(*(_QWORD *)(v3 + 112) + 84LL));
  v4 = *(int **)(a1 + 48);
  v21 = 0;
  v22 = 0;
  if ( !v4 )
  {
    qfree();
    v12 = *(_DWORD *)(a1 + 24);
LABEL_31:
    v5 = 0;
    *(_DWORD *)(a1 + 24) = v12 & 0xFFFFFFEF;
    return v5;
  }
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v16 = *v4;
      if ( (unsigned int)(*v4 - 59) > 1 )
        break;
      v18 = *(_QWORD *)(a1 + 64);
      v6 = sub_1CAD30(v18, *((_QWORD *)v4 + 3));
      v7 = v6;
      if ( (v4[1] & 0x20) != 0 )
        v7 = *(int *)(*(_QWORD *)(v18 + 1504) + 80LL) + v6;
      if ( v16 == 59 )
      {
        v7 -= v4[9];
        v8 = v4[9];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 24LL) != 8 )
          v7 = (int)v7;
        v9 = v4 + 16;
      }
      else
      {
        v8 = v4[17];
        v9 = v4 + 8;
      }
      if ( v7 < 0 )
      {
        exception = __cxa_allocate_exception(0x30u);
        exception[2] = sub_32B3E0(*(_QWORD *)(a1 + 64));
        *exception = off_4AF6B0;
        *((_DWORD *)exception + 2) = -5;
        exception[3] = 0;
        *((_OWORD *)exception + 2) = 0;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_75A40);
      }
      v10 = *(_QWORD *)(a1 + 64);
      *v9 = 5;
      v19 = v8;
      v17 = v9;
      v11 = (_QWORD *)j__qalloc_or_throw();
      v11[1] = v7;
      ++v5;
      *v11 = v10;
      *((_QWORD *)v17 + 1) = v11;
      *((_DWORD *)v17 + 1) = v19;
      *v4 = 4;
      v4 = *((int **)v4 + 1);
      if ( !v4 )
        goto LABEL_16;
    }
    sub_122E60(v23, a1, v4, 1);
    if ( ((unsigned __int8)sub_5FD00(v23, v20) || (unsigned __int8)sub_312BB0(v24, &v21))
      && (unsigned __int8)sub_5FDA0(v23, v20)
      && (unsigned __int8)sub_312680(&v21, v24)
      && (*((_BYTE *)v4 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v4 + 9) + 284LL) != 11) )
    {
      sub_1189E0(v4);
      v15 = *(_DWORD *)(a1 + 24);
      ++v5;
      BYTE1(v15) &= ~2u;
      LOBYTE(v15) = v15 | 0x80;
      *(_DWORD *)(a1 + 24) = v15;
    }
    if ( v24[0] )
    {
      v24[1] = 0;
      qfree();
    }
    qfree();
    v4 = *((int **)v4 + 1);
  }
  while ( v4 );
LABEL_16:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  qfree();
  v12 = *(_DWORD *)(a1 + 24);
  if ( !v5 )
    goto LABEL_31;
  v13 = v12 & 0xFFFFFDEF;
  LOBYTE(v13) = v13 | 0x80;
  *(_DWORD *)(a1 + 24) = v13;
  sub_9D960(a1, (__int64)"convert_pushes: %d modifications", v5);
  return v5;
}

