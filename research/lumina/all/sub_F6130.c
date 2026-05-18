__int64 __fastcall sub_F6130(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64 a1),
        unsigned __int8 a6)
{
  __int64 v8; // rbp
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned __int8 v20; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  unsigned int v28; // [rsp+8h] [rbp-40h]

  v8 = (int)a2;
  a2 = (unsigned int)a2;
  v12 = sub_ECB40(a1, (unsigned int)a2);
  if ( !v12 )
  {
    if ( a3 )
    {
      a2 = (unsigned __int64)a3;
      v14 = a1[16] + 56 * v8 - 56;
      v15 = sub_F11D0(v14, a3, a4, a6, a5, v13);
      if ( !v15 && a6 )
      {
        v19 = *a1;
        v20 = *(_BYTE *)(*a1 + 100);
        if ( (*(_BYTE *)(v14 + 20) & 2) == 0 )
        {
          *(_BYTE *)(v14 + 22) = v20;
          v19 = *a1;
          goto LABEL_15;
        }
        a2 = v20;
        if ( *(_BYTE *)(v14 + 22) == v20 )
        {
LABEL_15:
          v26 = *(_QWORD *)(v19 + 24);
          if ( v26 )
            xmmword_241510(v26, a2, v11);
          return v12;
        }
        v15 = sub_E03B0(v14, v20);
      }
      v12 = 0;
      v19 = *a1;
      if ( !v15 )
        goto LABEL_15;
      *(_DWORD *)(v19 + 80) = v15;
      v28 = v15;
      sub_CA220((__int64 *)v19, v15, v11, v16, v17, v18);
      a2 = v28;
      v12 = sub_D42C0(*a1, v28, v22, v23, v24, v25);
    }
    v19 = *a1;
    goto LABEL_15;
  }
  if ( (unsigned __int64)a5 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    a5((__int64)a3);
  return v12;
}
