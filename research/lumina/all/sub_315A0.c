__int64 __fastcall sub_315A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbp
  int *v9; // r9
  unsigned int v10; // esi
  _QWORD *v11; // rax
  int *v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD **v18; // rbx
  void *v19; // rdi
  __int64 v21; // rax
  int *v22; // [rsp+8h] [rbp-C0h]
  _QWORD *v23; // [rsp+10h] [rbp-B8h]
  int v24; // [rsp+2Ch] [rbp-9Ch] BYREF
  __int64 (__fastcall **v25)(); // [rsp+30h] [rbp-98h] BYREF
  __int64 v26; // [rsp+38h] [rbp-90h]
  _QWORD *v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h]
  __int64 v29; // [rsp+50h] [rbp-78h]
  int v30; // [rsp+60h] [rbp-68h] BYREF
  void *v31; // [rsp+68h] [rbp-60h]
  int *v32; // [rsp+70h] [rbp-58h]
  int *v33; // [rsp+78h] [rbp-50h]
  __int64 v34; // [rsp+80h] [rbp-48h]
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 488) & 1) == 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(0);
    BUG();
  }
  v27 = a2;
  v29 = a3;
  v25 = off_236278;
  v26 = a1;
  v28 = a4;
  v30 = 0;
  v31 = nullptr;
  v32 = &v30;
  v33 = &v30;
  v34 = 0;
  sub_314A0(a1, (__int64 (__fastcall ***)(_QWORD, __int64))&v25, 1);
  v6 = *(_QWORD *)(a4 + 24);
  if ( v6 )
  {
    v7 = a2[3];
    v8 = 0;
    v9 = &v24;
    v23 = a2 + 2;
    do
    {
      v10 = *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * v8);
      v11 = v31;
      if ( !v31 )
        goto LABEL_11;
      v12 = &v30;
      do
      {
        while ( 1 )
        {
          v13 = v11[2];
          v14 = v11[3];
          if ( *((_DWORD *)v11 + 8) >= v10 )
            break;
          v11 = (_QWORD *)v11[3];
          if ( !v14 )
            goto LABEL_9;
        }
        v12 = (int *)v11;
        v11 = (_QWORD *)v11[2];
      }
      while ( v13 );
LABEL_9:
      if ( v12 != &v30 && v10 >= v12[8] )
        v15 = v12[9];
      else
LABEL_11:
        v15 = -1;
      v16 = a2[4];
      v24 = v15;
      v17 = a2[2];
      if ( v16 < v7 + 1 )
      {
        v22 = v9;
        v21 = sub_1987B0(v23, v17, v7 + 1, 4);
        v7 = a2[3];
        v9 = v22;
        a2[2] = v21;
        v17 = v21;
      }
      *(_DWORD *)(v17 + 4 * v7) = v15;
      ++v8;
      v7 = a2[3] + 1LL;
      a2[3] = v7;
    }
    while ( v6 != v8 );
  }
  v18 = (_QWORD **)v31;
  v26 = 0;
  v25 = off_236278;
  v27 = nullptr;
  v29 = 0;
  if ( v31 )
  {
    do
    {
      sub_2DD90(v18[3]);
      v19 = v18;
      v18 = (_QWORD **)v18[2];
      operator delete(v19, 0x28u);
    }
    while ( v18 );
  }
  return 0;
}
