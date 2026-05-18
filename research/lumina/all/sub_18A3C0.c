void __fastcall sub_18A3C0(__int64 a1, void *a2, char a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax

  v4 = *(_QWORD *)(a1 + 120);
  if ( !v4 )
  {
    if ( !*(_DWORD *)(a1 + 136) )
    {
      sub_189F30(a1 + 136, (__int64)a2);
      goto LABEL_4;
    }
    if ( !unk_2439A0 )
      sub_198E10(1271);
LABEL_24:
    BUG();
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v4 - 8);
  if ( *(_DWORD *)v6 == 3 )
  {
    v11 = *(_QWORD **)(v6 + 8);
    v12 = v11[1];
    if ( !v12 )
    {
      if ( !unk_2439A0 )
        sub_198E10(1272);
      goto LABEL_24;
    }
    v13 = *v11 + 40 * v12 - 40;
    if ( *(_DWORD *)(v13 + 24) )
    {
      if ( !unk_2439A0 )
        sub_198E10(1273);
      goto LABEL_24;
    }
    sub_189F30(v13 + 24, (__int64)a2);
  }
  else
  {
    if ( *(_DWORD *)v6 != 4 )
    {
      if ( !unk_2439A0 )
        sub_198E10(1274);
      goto LABEL_24;
    }
    v7 = *(__int64 **)(v6 + 8);
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < (unsigned __int64)(v8 + 1) )
    {
      v14 = sub_1987B0(v7, v9, v8 + 1, 16);
      *v7 = v14;
      v9 = v14;
      v8 = v7[1];
    }
    v10 = (_QWORD *)(v9 + 16 * v8);
    *v10 = 0;
    v10[1] = 0;
    ++v7[1];
    sub_189F30((__int64)v10, (__int64)a2);
  }
LABEL_4:
  if ( a2 )
  {
    if ( a3 )
    {
      sub_189C20((__int64)a2);
      operator delete(a2, 0x10u);
    }
  }
}
