unsigned __int64 __fastcall sub_241D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall **v22)(); // [rsp+0h] [rbp-B8h] BYREF
  int v23; // [rsp+8h] [rbp-B0h]
  __int64 v24; // [rsp+10h] [rbp-A8h]
  __int128 v25; // [rsp+18h] [rbp-A0h]
  __int64 v26; // [rsp+28h] [rbp-90h]
  __int128 v27; // [rsp+30h] [rbp-88h]
  __int64 v28; // [rsp+40h] [rbp-78h] BYREF
  int v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+4Ch] [rbp-6Ch]
  __int64 v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  int v35; // [rsp+78h] [rbp-40h]
  unsigned __int64 v36; // [rsp+88h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 480LL) != -1 )
  {
    v6 = a1 + 16;
    if ( (unsigned __int8)sub_241B40(a1 + 16, a2, a3, a4, a5) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
      v17 = sub_2413C0(v6, v16, v7, v8, a6);
      *((_DWORD *)v17 + 2) = 80;
      v18 = v17;
      v21 = j__qalloc_or_throw(64, v16, v19, v20);
      *(_QWORD *)(v21 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v21 = -1;
      *(_QWORD *)(v21 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 48) = 0;
      *(_DWORD *)(v21 + 56) = 0;
      *(_OWORD *)(v21 + 24) = 0;
      v18[3] = v21;
    }
    v9 = *(_QWORD *)(a1 + 8);
    v22 = off_4DFA58;
    v10 = *(int *)(v9 + 480);
    v31 = v9;
    v32 = 0;
    v11 = v10;
    v23 = 0;
    v12 = 13 * v10;
    v13 = *(_QWORD *)(v9 + 432);
    v24 = 0;
    v26 = 0;
    v14 = v13 + 8 * v12;
    LODWORD(v32) = v11;
    v25 = 0;
    v28 = -1;
    v30 = -1;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v29 = 65;
    v27 = 0;
    copy_tinfo_t();
    LODWORD(v33) = *(_DWORD *)(v14 + 88);
    sub_255A80((__int64 *)&v22, v6, 0);
    v22 = off_4DFA58;
    sub_255630((__int64)&v28);
    clear_tinfo_t();
    v22 = off_4DBCF8;
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
  }
  return v36 - __readfsqword(0x28u);
}

