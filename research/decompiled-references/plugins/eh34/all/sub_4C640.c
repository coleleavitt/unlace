__int64 __fastcall sub_4C640(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r14
  unsigned __int64 v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  _QWORD *v12; // rbp
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  int *v15; // r13
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  bool v20; // cf
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r12
  int *v24; // rbp
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rdi
  int v29; // [rsp+Ch] [rbp-ECh]
  unsigned __int64 v30; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v31; // [rsp+10h] [rbp-E8h]
  __int64 v32; // [rsp+20h] [rbp-D8h]
  __int64 v33; // [rsp+30h] [rbp-C8h]
  int v34; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+44h] [rbp-B4h]
  __int64 v36; // [rsp+50h] [rbp-A8h]
  __int64 v37; // [rsp+58h] [rbp-A0h]
  int v38; // [rsp+60h] [rbp-98h]
  __int64 v39; // [rsp+68h] [rbp-90h]
  int v40; // [rsp+70h] [rbp-88h]
  __int128 v41; // [rsp+80h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-68h]
  __int64 v43; // [rsp+98h] [rbp-60h]
  __int64 v44; // [rsp+A0h] [rbp-58h]
  __int64 v45; // [rsp+A8h] [rbp-50h]
  __int64 v46; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-40h]

  v1 = a1[1];
  v2 = *a1;
  v47 = __readfsqword(0x28u);
  v39 = 0xFFFFFFFFLL;
  v4 = a1[2];
  v29 = v1;
  v35 = 0;
  LODWORD(v37) = -1;
  v38 = 2;
  v40 = 2;
  v34 = v1;
  v36 = 0;
  if ( (unsigned __int64)&v34 >= v2 && (unsigned __int64)&v34 < v2 + 56 * v4 )
  {
    v41 = 0xFFFFFFFF;
    v42 = 0;
    v43 = 0xFFFFFFFFLL;
    v44 = 2;
    v45 = 0xFFFFFFFFLL;
    v46 = 2;
    sub_4C070((__int64)&v41);
    LODWORD(v33) = -1;
    v9 = v39;
    LODWORD(v41) = v1;
    v32 = v37;
    v10 = a1[2];
    v43 = v37;
    *(_QWORD *)((char *)&v41 + 4) = 0;
    v37 = v33;
    v39 = v33;
    v11 = a1[1];
    LODWORD(v44) = 2;
    v45 = v9;
    LODWORD(v46) = 2;
    if ( v10 < v11 + 1 )
    {
      v21 = qvector_reserve(a1, 0, v11 + 1, 56);
      v22 = a1[2];
      v23 = a1[1];
      a1[2] = v10;
      v30 = v21;
      v24 = (int *)*a1;
      v25 = v23 - 1;
      if ( v25 >= 0 )
      {
        v26 = v21;
        do
        {
          *(_QWORD *)(v26 + 4) = 0;
          v27 = v26;
          v26 += 56;
          *(_DWORD *)(v26 - 32) = -1;
          *(_DWORD *)(v26 - 24) = 2;
          *(_DWORD *)(v26 - 16) = -1;
          *(_DWORD *)(v26 - 8) = 2;
          *(_DWORD *)(v26 - 56) = -1;
          *(_QWORD *)(v26 - 40) = 0;
          sub_4C1B0(v27, v24);
          v28 = (__int64)v24;
          v24 += 14;
          sub_4C070(v28);
          v20 = v25-- == 0;
        }
        while ( !v20 );
        v24 = (int *)*a1;
      }
      qfree(v24);
      *a1 = v30;
      a1[2] = v22;
      v11 = a1[1];
    }
    else
    {
      v30 = *a1;
    }
    v12 = (_QWORD *)(v30 + 56 * v11);
    *v12 = 0xFFFFFFFFLL;
    v12[3] = 0xFFFFFFFFLL;
    v12[5] = 0xFFFFFFFFLL;
    v12[1] = 0;
    v12[2] = 0;
    v12[4] = 2;
    v12[6] = 2;
    sub_4C070((__int64)v12);
    v12[5] = v9;
    LODWORD(v33) = -1;
    v12[3] = v32;
    *(_QWORD *)((char *)v12 + 4) = 0;
    v43 = v33;
    v45 = v33;
    *((_DWORD *)v12 + 8) = 2;
    *((_DWORD *)v12 + 12) = 2;
    *(_DWORD *)v12 = v29;
    sub_4C070((__int64)&v41);
  }
  else
  {
    if ( v4 < v1 + 1 )
    {
      v2 = qvector_reserve(a1, 0, v1 + 1, 56);
      v13 = a1[1];
      v14 = a1[2];
      a1[2] = v4;
      v15 = (int *)*a1;
      v31 = v14;
      v16 = v13 - 1;
      if ( v16 >= 0 )
      {
        v17 = v2;
        do
        {
          *(_QWORD *)(v17 + 4) = 0;
          v18 = v17;
          v17 += 56;
          *(_DWORD *)(v17 - 32) = -1;
          *(_DWORD *)(v17 - 24) = 2;
          *(_DWORD *)(v17 - 16) = -1;
          *(_DWORD *)(v17 - 8) = 2;
          *(_DWORD *)(v17 - 56) = -1;
          *(_QWORD *)(v17 - 40) = 0;
          sub_4C1B0(v18, v15);
          v19 = (__int64)v15;
          v15 += 14;
          sub_4C070(v19);
          v20 = v16-- == 0;
        }
        while ( !v20 );
        v15 = (int *)*a1;
      }
      qfree(v15);
      v1 = a1[1];
      *a1 = v2;
      a1[2] = v31;
    }
    v5 = (_QWORD *)(v2 + 56 * v1);
    *v5 = 0xFFFFFFFFLL;
    v5[3] = 0xFFFFFFFFLL;
    v5[5] = 0xFFFFFFFFLL;
    v5[1] = 0;
    v5[2] = 0;
    v5[4] = 2;
    v5[6] = 2;
    sub_4C070((__int64)v5);
    v6 = v37;
    LODWORD(v33) = -1;
    *(_QWORD *)((char *)v5 + 4) = 0;
    v5[3] = v6;
    v7 = v39;
    *((_DWORD *)v5 + 8) = 2;
    v5[5] = v7;
    *((_DWORD *)v5 + 12) = 2;
    v37 = v33;
    v39 = v33;
    *(_DWORD *)v5 = v29;
  }
  ++a1[1];
  sub_4C070((__int64)&v34);
  return *a1 + 56 * a1[1] - 56;
}
