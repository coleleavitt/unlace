__int64 __fastcall sub_644C0(__int64 *a1, bool *a2)
{
  char v2; // al
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int64 (*v6)(void); // rdx
  unsigned int v7; // edx
  __int64 (*v8)(void); // rax
  unsigned __int16 v9; // si
  unsigned __int16 v11; // ax
  unsigned int v12; // [rsp+0h] [rbp-20h]

  v2 = *((_BYTE *)a1 + 90);
  if ( (v2 & 2) != 0 )
    return 1;
  if ( (v2 & 1) != 0 )
  {
    *a2 = 1;
    return 0;
  }
  else
  {
    v4 = *a1;
    v5 = (_QWORD *)a1[1];
    v6 = *(__int64 (**)(void))(*a1 + 288);
    if ( (char *)v6 == (char *)sub_5D660 )
    {
      v7 = *(_DWORD *)((char *)a1 + 94);
    }
    else
    {
      v7 = v6();
      v4 = *a1;
    }
    v8 = *(__int64 (**)(void))(v4 + 280);
    if ( (char *)v8 == (char *)sub_5D650 )
    {
      v9 = *((_WORD *)a1 + 49);
    }
    else
    {
      v12 = v7;
      v11 = v8();
      v7 = v12;
      v9 = v11;
    }
    *a2 = (sub_64400(v5, v9, v7) & 0x20) != 0;
    return 0;
  }
}

