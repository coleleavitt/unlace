__int64 __fastcall sub_287A90(_QWORD *a1, __int64 a2, double a3)
{
  __int64 *v3; // r14
  unsigned int v4; // ebp
  _QWORD *v6; // rax
  __int64 v7; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // r12
  int v16; // [rsp+4h] [rbp-94h]
  __int64 v17; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+10h] [rbp-88h] BYREF
  int v19; // [rsp+18h] [rbp-80h]
  __int64 v20; // [rsp+1Ch] [rbp-7Ch]
  __int64 v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a2 + 24);
  if ( !v3[9]
    && (v6 = *(_QWORD **)(v3[8] + 24), v6[2] == 1)
    && (v7 = *v6, *(_QWORD *)(*v6 + 24LL) == -4294967220LL)
    && (v9 = *(_QWORD *)(v7 + 40),
        v18 = -1,
        v19 = 0,
        v20 = -1,
        v21 = 0,
        v22 = 0,
        sub_25AFF0((__int64)&v18, v9, a3),
        v4 = sub_287730(a1, a2, v3, (__int64)&v18),
        sub_255630((__int64)&v18, a3),
        clear_tinfo_t(),
        (_BYTE)v4) )
  {
    v16 = *(_DWORD *)(a2 + 12);
    v17 = *(_QWORD *)a2;
    v12 = j__qalloc_or_throw(32, a2, v10, v11);
    *(_QWORD *)v12 = -1;
    v13 = v12;
    *(_DWORD *)(v12 + 8) = 70;
    *(_QWORD *)(v12 + 12) = -1;
    sub_25AA70(v12, v7 + 16, a3);
    sub_255580((__int64 *)a2, v13, a3);
    if ( v3 )
    {
      v14 = v3[8];
      if ( v14 )
      {
        sub_255050(v3[8], a3);
        j__qfree(v14);
      }
      v15 = v3[9];
      if ( v15 )
      {
        sub_255050(v3[9], a3);
        j__qfree(v15);
      }
      sub_255630((__int64)v3, a3);
      clear_tinfo_t();
      j__qfree((__int64)v3);
    }
    *(_DWORD *)(a2 + 8) = 75;
    *(_QWORD *)a2 = v17;
    *(_DWORD *)(a2 + 12) = v16;
  }
  else
  {
    return 0;
  }
  return v4;
}

