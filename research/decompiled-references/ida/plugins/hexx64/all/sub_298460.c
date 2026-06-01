__int64 __fastcall sub_298460(_QWORD *a1, __int64 a2, double a3)
{
  __int64 *v3; // r12
  __int64 v4; // r14
  unsigned int v5; // r15d
  __int64 v8; // rax
  _QWORD *v9; // rdx
  int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // r10
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-C8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+0h] [rbp-C8h]
  __int64 v40; // [rsp+0h] [rbp-C8h]
  __int64 v41; // [rsp+0h] [rbp-C8h]
  __int64 v42; // [rsp+0h] [rbp-C8h]
  __int64 v43; // [rsp+10h] [rbp-B8h]
  __int64 v44; // [rsp+10h] [rbp-B8h]
  __int64 v45; // [rsp+18h] [rbp-B0h]
  __int64 v46; // [rsp+20h] [rbp-A8h]
  __int64 v47; // [rsp+20h] [rbp-A8h]
  __int64 v48; // [rsp+28h] [rbp-A0h]
  __int64 v49; // [rsp+30h] [rbp-98h] BYREF
  __int64 v50; // [rsp+38h] [rbp-90h] BYREF
  __int64 v51; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v52[6]; // [rsp+48h] [rbp-80h]
  int v53; // [rsp+78h] [rbp-50h]
  unsigned __int64 v54; // [rsp+88h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a2 + 24);
  v4 = v3[9];
  if ( !v4
    && *(_DWORD *)(a2 + 12) == -1
    && (v8 = v3[8], v9 = *(_QWORD **)(v8 + 24), v9[2] == 1)
    && (v10 = *(_DWORD *)(v8 + 12), v10 == -1)
    && *(_QWORD *)(*v9 + 24LL) == -4294967220LL
    && (v37 = *v9, v11 = *(_QWORD *)(*v9 + 40LL), !(unsigned __int8)sub_285230(*(_QWORD *)(a2 + 24)))
    && !(unsigned __int8)sub_285230(v11)
    && (v51 = -1,
        LODWORD(v52[0]) = 0,
        *(_QWORD *)((char *)v52 + 4) = -1,
        v53 = 0,
        v52[5] = 0,
        sub_25AFF0((__int64)&v51, v11, a3),
        v5 = sub_287730(a1, a2, v3, (__int64)&v51),
        sub_255630((__int64)&v51, a3),
        clear_tinfo_t(),
        (_BYTE)v5)
    && !(unsigned __int8)sub_285570(*(_QWORD *)(*(_QWORD *)(v37 + 40) + 64LL), 0)
    && (v13 = v37, v43 = *(_QWORD *)(*(_QWORD *)(v37 + 40) + 64LL), v14 = *(_QWORD *)(v43 + 24), *(_QWORD *)(v14 + 16))
    && (v15 = *(_QWORD *)(v14 + 8), v38 = v15, *(_DWORD *)(v15 + 24) == 72)
    && ((v16 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 8LL), v17 = (unsigned int)(v16 - 2), (unsigned int)v17 <= 0xD)
     || (unsigned int)(v16 - 53) <= 3) )
  {
    v46 = v13;
    v45 = j__qalloc_or_throw(64, 0, v17, v12);
    v18 = *(_QWORD *)(v46 + 40);
    v48 = v46;
    sub_25B480(v45, v18, a3);
    v47 = j__qalloc_or_throw(64, v18, v19, v20);
    sub_25B480(v47, *(_QWORD *)(v38 + 40), a3);
    v21 = *(_DWORD *)(v38 + 28);
    if ( v21 == -1 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(v43 + 24) + 8LL);
      v44 = *(_QWORD *)(v43 + 24);
      v35 = *(_QWORD *)v34;
      v42 = v34;
      **(_QWORD **)(v34 + 8) = *(_QWORD *)v34;
      *(_QWORD *)(v35 + 8) = *(_QWORD *)(v34 + 8);
      sub_255050(v34 + 16, a3);
      qfree(v42);
      v22 = v48;
      --*(_QWORD *)(v44 + 16);
    }
    else
    {
      sub_296B50(v43, 79, v21);
      sub_255050(v38 + 16, a3);
      v22 = v48;
    }
    v23 = a1;
    v39 = v22;
    sub_283C00(&v51, a1, a2, a3);
    v25 = v39;
    if ( *(_QWORD *)v51 != v52[0] )
    {
      v26 = *(_QWORD *)(v52[0] + 8LL);
      v52[0] = v26;
      if ( *(_DWORD *)(v26 + 24) == 72 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v26 + 40) + 8LL) - 2) <= 0xD )
      {
        v10 = *(_DWORD *)(v26 + 28);
        v36 = j__qalloc_or_throw(64, (__int64)a1, v51, v24);
        a3 = 0.0;
        *(_QWORD *)v36 = -1;
        v4 = v36;
        *(_QWORD *)(v36 + 40) = 0;
        *(_QWORD *)(v36 + 8) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v36 + 16) = 0xFFFFFFFFLL;
        *(_QWORD *)(v36 + 48) = 0;
        *(_DWORD *)(v36 + 56) = 0;
        *(_OWORD *)(v36 + 24) = 0;
        sub_2819E0((__int64 *)v36, *(__int64 **)(v26 + 40));
        v23 = (_QWORD *)v51;
        v49 = v52[0];
        sub_298400(&v50, v51, &v49, 0.0);
        v25 = v39;
      }
    }
    v27 = *(_QWORD *)(v25 + 40);
    v28 = 0;
    v29 = *(_QWORD *)(v27 + 64);
    *(_QWORD *)(v27 + 64) = 0;
    if ( v3 )
    {
      v30 = v3[8];
      if ( v30 )
      {
        v40 = v3[8];
        sub_255050(v30, a3);
        j__qfree(v40);
      }
      v31 = v3[9];
      if ( v31 )
      {
        v41 = v3[9];
        sub_255050(v31, a3);
        j__qfree(v41);
      }
      sub_255630((__int64)v3, a3);
      clear_tinfo_t();
      j__qfree((__int64)v3);
    }
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(a2 + 8) = 74;
    v32 = j__qalloc_or_throw(200, (__int64)v23, v28, v24);
    *(_QWORD *)v32 = -1;
    v33 = (__int64 *)v32;
    *(_DWORD *)(v32 + 8) = 0;
    *(_QWORD *)(v32 + 40) = 0;
    *(_QWORD *)(v32 + 12) = -1;
    *(_QWORD *)(v32 + 84) = -1;
    *(_QWORD *)(v32 + 48) = 0;
    *(_QWORD *)(v32 + 144) = 0xFFFFFFFF00000000LL;
    *(_DWORD *)(v32 + 56) = 0;
    *(_QWORD *)(v32 + 64) = 0;
    *(_QWORD *)(v32 + 72) = -1;
    *(_DWORD *)(v32 + 80) = 0;
    *(_QWORD *)(v32 + 112) = 0;
    *(_QWORD *)(v32 + 120) = 0;
    *(_DWORD *)(v32 + 128) = 0;
    *(_QWORD *)(v32 + 136) = -1;
    *(_QWORD *)(v32 + 152) = 0xFFFFFFFFLL;
    *(_QWORD *)(v32 + 176) = 0;
    *(_QWORD *)(v32 + 184) = 0;
    *(_DWORD *)(v32 + 192) = 0;
    *(_OWORD *)(v32 + 24) = 0;
    *(_OWORD *)(v32 + 96) = 0;
    *(_OWORD *)(v32 + 160) = 0;
    *(_QWORD *)(a2 + 24) = v32;
    if ( v4 )
      sub_255850((__int64 *)(v32 + 72), v4, 0.0);
    sub_255850(v33, v45, 0.0);
    sub_255850(v33 + 17, v47, 0.0);
    v33[8] = v29;
  }
  else
  {
    return 0;
  }
  return v5;
}

