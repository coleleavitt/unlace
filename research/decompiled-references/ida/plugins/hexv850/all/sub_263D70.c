__int64 __fastcall sub_263D70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, char a6)
{
  unsigned int v9; // eax
  _QWORD *v11; // r13
  size_t v12; // r15
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r15
  const char *v16; // r8
  int v17; // eax
  void *v18; // rax
  const void *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-A8h]
  const char *v23; // [rsp+30h] [rbp-90h] BYREF
  __int128 v24; // [rsp+38h] [rbp-88h]
  __int64 v25[2]; // [rsp+50h] [rbp-70h] BYREF
  void *v26; // [rsp+60h] [rbp-60h]
  __int128 v27; // [rsp+68h] [rbp-58h]
  __int64 v28; // [rsp+78h] [rbp-48h]
  unsigned __int64 v29; // [rsp+88h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( a6 )
  {
    v9 = 73;
    if ( *(_QWORD *)(a1 + 40) )
      v9 = **(_QWORD **)(a1 + 32) | 0x40000000;
    sub_25D380((void **)a1, a2, 0, 0, (char *)&unk_3F5793, a5, v9);
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    sub_25D380((void **)a3, a2, 0, a4, (char *)&byte_407D90, a5, 0x49u);
    return sub_2631B0(a1, a4 + *(_DWORD *)(a2 + 592), a5, 1u);
  }
  v11 = *(_QWORD **)(a3 + 24);
  v26 = nullptr;
  v27 = 0;
  v12 = v11[11];
  v21 = (__int64)(v11 + 6);
  v25[0] = v11[8];
  v25[1] = v11[9];
  if ( !v12 )
  {
    v28 = v11[13];
    goto LABEL_10;
  }
  v18 = (void *)qalloc_or_throw();
  v19 = (const void *)v11[10];
  *((_QWORD *)&v27 + 1) = v12;
  v26 = v18;
  memcpy(v18, v19, v12);
  v20 = v11[13];
  *(_QWORD *)&v27 = v12;
  v28 = v20;
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_10:
    v13 = 0;
    v14 = 0;
    do
    {
      v23 = nullptr;
      v15 = 8 * v14;
      v24 = 0;
      v25[0] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v14);
      if ( !(unsigned __int8)sub_2606E0((__int64)v25, (__int64 *)&v23, v21, nullptr) )
        sub_25C270(v25, (__int64 *)&v23);
      sub_260320((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a5, a3);
      v16 = s1;
      if ( (_QWORD)v24 )
        v16 = v23;
      (*(void (**)(_QWORD *, _QWORD, const char *, ...))*a5)(a5, a4, "%s %s", &byte_407DA8, v16);
      v17 = tag_strlen();
      sub_25D380(
        (void **)a3,
        a2,
        a4 + v17 + 5,
        0,
        byte_3F6143,
        a5,
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + v15) | 0x40000000);
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      v14 = ++v13;
    }
    while ( (unsigned __int64)v13 < *(_QWORD *)(a1 + 40) );
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return sub_2631B0(a1, a4 + *(_DWORD *)(a2 + 592), a5, 1u);
}

