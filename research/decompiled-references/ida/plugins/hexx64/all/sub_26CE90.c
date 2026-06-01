__int64 __fastcall sub_26CE90(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int64 v6; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  signed __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-40h]

  v6 = a5;
  if ( a2 )
  {
    v11 = j__qalloc_or_throw(64, (__int64)a2, a3, a4);
    v12 = *a2;
    *(_QWORD *)v11 = -1;
    v13 = v11;
    *(_DWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 12) = -1;
    *(_QWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 56) = 0;
    sub_25AFF0(v11, v12, a6);
    v14 = sub_26CC70(a1, v13, a2 + 1, a2[3], a3, a6);
    if ( !v14 )
    {
      if ( v13 )
      {
        sub_255630(v13, a6);
        clear_tinfo_t();
        j__qfree(v13);
      }
      return v14;
    }
    v15 = a1[1];
    v16 = *(_QWORD *)(v15 + 64);
    if ( *(_DWORD *)(v14 + 8) != 61 )
      return sub_269F60(v14, *(_QWORD *)(v15 + 64), *(_QWORD *)a4, *(_DWORD *)(a4 + 8), v6, a6);
    v21 = sub_255A30(*(__int64 **)(v14 + 24));
    v22 = a2[3];
    v6 += v21;
    v23 = v6;
    v24 = *(_QWORD *)(*a1 + 24);
    if ( !v22 || !v6 || *(_QWORD *)(v24 + 16) / (unsigned __int64)v22 >= v6 )
    {
      v25 = v22 * v6;
      if ( *(_DWORD *)(v24 + 24) != 8 )
        v25 = (int)v25;
      v23 = v25 / v22;
      v6 = v25 / v22;
    }
    v26 = v23;
    sub_255630(v14, a6);
    clear_tinfo_t();
    j__qfree(v14);
    v20 = *a1;
    v19 = 0;
    if ( v26 < 0 )
      goto LABEL_15;
  }
  else
  {
    v18 = a1[1];
    v19 = 0;
    v20 = *a1;
    v16 = *(_QWORD *)(v18 + 64);
    if ( a5 < 0 )
LABEL_15:
      v19 = *(_DWORD *)(*(_QWORD *)(v20 + 112) + 80LL);
  }
  return sub_240F50(v20, v6, v16, *(_QWORD *)a4, *(_DWORD *)(a4 + 8), 1, v19);
}

