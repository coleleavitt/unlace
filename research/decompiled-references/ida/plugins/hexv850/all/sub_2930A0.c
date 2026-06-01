__int64 __fastcall sub_2930A0(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v6; // rax
  _QWORD *v7; // rdx
  int v8; // r13d
  __int64 v9; // r15
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // r12
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-C8h]
  __int64 v28; // [rsp+0h] [rbp-C8h]
  __int64 v29; // [rsp+0h] [rbp-C8h]
  __int64 v30; // [rsp+10h] [rbp-B8h]
  __int64 v31; // [rsp+10h] [rbp-B8h]
  __int64 v32; // [rsp+18h] [rbp-B0h]
  __int64 v33; // [rsp+20h] [rbp-A8h]
  __int64 v34; // [rsp+20h] [rbp-A8h]
  __int64 v35; // [rsp+28h] [rbp-A0h]
  __int64 *v36; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+38h] [rbp-90h] BYREF
  __int64 v38; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v39[6]; // [rsp+48h] [rbp-80h]
  int v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a2 + 24);
  v3 = v2[9];
  if ( !v3
    && *(_DWORD *)(a2 + 12) == -1
    && (v6 = v2[8], v7 = *(_QWORD **)(v6 + 24), v7[2] == 1)
    && (v8 = *(_DWORD *)(v6 + 12), v8 == -1)
    && *(_QWORD *)(*v7 + 24LL) == -4294967220LL
    && (v27 = *v7, v9 = *(_QWORD *)(*v7 + 40LL), !(unsigned __int8)sub_27FE70(*(_QWORD *)(a2 + 24)))
    && !(unsigned __int8)sub_27FE70(v9)
    && (v38 = -1,
        LODWORD(v39[0]) = 0,
        *(_QWORD *)((char *)v39 + 4) = -1,
        v40 = 0,
        v39[5] = 0,
        sub_255C30((__int64)&v38, v9),
        v4 = sub_282370(a1, a2, v2, (__int64)&v38),
        sub_250270((__int64)&v38),
        clear_tinfo_t(),
        (_BYTE)v4)
    && !(unsigned __int8)sub_2801B0(*(_QWORD *)(*(_QWORD *)(v27 + 40) + 64LL), 0)
    && (v10 = v27, v30 = *(_QWORD *)(*(_QWORD *)(v27 + 40) + 64LL), v11 = *(_QWORD *)(v30 + 24), *(_QWORD *)(v11 + 16))
    && (v12 = *(_QWORD *)(v11 + 8), v28 = v12, *(_DWORD *)(v12 + 24) == 72)
    && ((v13 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 8LL), (unsigned int)(v13 - 2) <= 0xD) || (unsigned int)(v13 - 53) <= 3) )
  {
    v33 = v10;
    v32 = j__qalloc_or_throw();
    v35 = v33;
    sub_2560C0(v32, *(_QWORD *)(v33 + 40));
    v34 = j__qalloc_or_throw();
    sub_2560C0(v34, *(_QWORD *)(v28 + 40));
    v14 = *(_DWORD *)(v28 + 28);
    if ( v14 == -1 )
    {
      v24 = *(__int64 **)(*(_QWORD *)(v30 + 24) + 8LL);
      v31 = *(_QWORD *)(v30 + 24);
      v25 = *v24;
      *(_QWORD *)v24[1] = *v24;
      *(_QWORD *)(v25 + 8) = v24[1];
      sub_24FC90((__int64)(v24 + 2));
      qfree();
      v15 = v35;
      --*(_QWORD *)(v31 + 16);
    }
    else
    {
      sub_291790(v30, 79, v14);
      sub_24FC90(v28 + 16);
      v15 = v35;
    }
    v29 = v15;
    sub_27E840(&v38, a1, a2);
    v16 = v29;
    if ( *(_QWORD *)v38 != v39[0] )
    {
      v17 = *(_QWORD *)(v39[0] + 8LL);
      v39[0] = v17;
      if ( *(_DWORD *)(v17 + 24) == 72 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v17 + 40) + 8LL) - 2) <= 0xD )
      {
        v8 = *(_DWORD *)(v17 + 28);
        v26 = j__qalloc_or_throw();
        *(_QWORD *)v26 = -1;
        v3 = v26;
        *(_QWORD *)(v26 + 40) = 0;
        *(_QWORD *)(v26 + 8) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 16) = 0xFFFFFFFFLL;
        *(_QWORD *)(v26 + 48) = 0;
        *(_DWORD *)(v26 + 56) = 0;
        *(_OWORD *)(v26 + 24) = 0;
        sub_27C620((__int64 *)v26, *(__int64 **)(v17 + 40));
        v36 = (__int64 *)v39[0];
        sub_293040(&v37, v38, &v36);
        v16 = v29;
      }
    }
    v18 = *(_QWORD *)(v16 + 40);
    v19 = *(_QWORD *)(v18 + 64);
    *(_QWORD *)(v18 + 64) = 0;
    if ( v2 )
    {
      v20 = v2[8];
      if ( v20 )
      {
        sub_24FC90(v20);
        j__qfree();
      }
      v21 = v2[9];
      if ( v21 )
      {
        sub_24FC90(v21);
        j__qfree();
      }
      sub_250270((__int64)v2);
      clear_tinfo_t();
      j__qfree();
    }
    *(_DWORD *)(a2 + 12) = v8;
    *(_DWORD *)(a2 + 8) = 74;
    v22 = j__qalloc_or_throw();
    *(_QWORD *)v22 = -1;
    v23 = (__int64 *)v22;
    *(_DWORD *)(v22 + 8) = 0;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 12) = -1;
    *(_QWORD *)(v22 + 84) = -1;
    *(_QWORD *)(v22 + 48) = 0;
    *(_QWORD *)(v22 + 144) = 0xFFFFFFFF00000000LL;
    *(_DWORD *)(v22 + 56) = 0;
    *(_QWORD *)(v22 + 64) = 0;
    *(_QWORD *)(v22 + 72) = -1;
    *(_DWORD *)(v22 + 80) = 0;
    *(_QWORD *)(v22 + 112) = 0;
    *(_QWORD *)(v22 + 120) = 0;
    *(_DWORD *)(v22 + 128) = 0;
    *(_QWORD *)(v22 + 136) = -1;
    *(_QWORD *)(v22 + 152) = 0xFFFFFFFFLL;
    *(_QWORD *)(v22 + 176) = 0;
    *(_QWORD *)(v22 + 184) = 0;
    *(_DWORD *)(v22 + 192) = 0;
    *(_OWORD *)(v22 + 24) = 0;
    *(_OWORD *)(v22 + 96) = 0;
    *(_OWORD *)(v22 + 160) = 0;
    *(_QWORD *)(a2 + 24) = v22;
    if ( v3 )
      sub_250490((__int64 *)(v22 + 72), v3);
    sub_250490(v23, v32);
    sub_250490(v23 + 17, v34);
    v23[8] = v19;
  }
  else
  {
    return 0;
  }
  return v4;
}

