_QWORD *__fastcall sub_11C720(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v6; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v21; // rdi

  v6 = *(_QWORD *)(a3 + 24);
  if ( v6 )
    xmmword_241500(v6);
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
    xmmword_241500(v9);
  if ( a3 == a1 )
  {
    v15 = 1;
    v12 = nullptr;
    sub_F63C0(a3, 1, "source and destination must be distinct");
  }
  else
  {
    v12 = sub_D2260(0x48u, (__int64)a2);
    if ( v12 )
    {
      v12[5] = sub_11C5F0(a1, a3, a4);
      v15 = a1;
      v16 = sub_11C5F0(a1, a1, a2);
      v12[1] = v16;
      *v12 = a1;
      v12[4] = a3;
      *((_DWORD *)v12 + 6) = 1;
      *((_DWORD *)v12 + 15) = 0;
      v17 = v12[5];
      if ( v16 && v17 )
      {
        if ( !*(_BYTE *)(v16 + 16) )
        {
          ++*(_DWORD *)(v17 + 24);
          goto LABEL_11;
        }
        v15 = 1;
        sub_F63C0(a1, 1, "destination database is in use");
      }
      v21 = (__int64)v12;
      v12 = nullptr;
      sub_C91C0(v21, v15);
    }
    else
    {
      *(_DWORD *)(a1 + 80) = 7;
      v15 = 7;
      sub_CA220((__int64 *)a1, 7, v10, v11, v13, v14);
    }
  }
LABEL_11:
  v18 = *(_QWORD *)(a1 + 24);
  if ( v18 )
    xmmword_241510(v18, v15, v17);
  v19 = *(_QWORD *)(a3 + 24);
  if ( v19 )
    xmmword_241510(v19, v15, v17);
  return v12;
}
