__int64 __fastcall sub_269130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char a6, double a7)
{
  unsigned int v8; // r12d
  unsigned int v10; // eax
  _QWORD *v12; // r13
  size_t v13; // r15
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r15
  const char *v17; // r8
  int v18; // eax
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // [rsp+18h] [rbp-A8h]
  const char *v24; // [rsp+30h] [rbp-90h] BYREF
  __int128 v25; // [rsp+38h] [rbp-88h]
  __int64 v26[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v27; // [rsp+60h] [rbp-60h]
  __int128 v28; // [rsp+68h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-48h]
  unsigned __int64 v30; // [rsp+88h] [rbp-38h]

  v8 = a4;
  v30 = __readfsqword(0x28u);
  if ( a6 )
  {
    v10 = 73;
    if ( *(_QWORD *)(a1 + 40) )
      v10 = **(_QWORD **)(a1 + 32) | 0x40000000;
    sub_262740((void **)a1, a2, 0, 0, (char *)&unk_418793, a5, v10);
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    sub_262740((void **)a3, a2, 0, v8, (char *)&byte_42C450, a5, 0x49u);
    return sub_268570(a1, v8 + *(_DWORD *)(a2 + 592), a5, 1u, a7);
  }
  v12 = *(_QWORD **)(a3 + 24);
  a7 = 0.0;
  v27 = 0;
  v28 = 0;
  v13 = v12[11];
  v22 = v12 + 6;
  v26[0] = v12[8];
  v26[1] = v12[9];
  if ( !v13 )
  {
    v29 = v12[13];
    goto LABEL_10;
  }
  v19 = (void *)qalloc_or_throw(v13, a2, a3, a4);
  v20 = (const void *)v12[10];
  *((_QWORD *)&v28 + 1) = v13;
  v27 = (__int64)v19;
  memcpy(v19, v20, v13);
  v21 = v12[13];
  *(_QWORD *)&v28 = v13;
  v29 = v21;
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_10:
    v14 = 0;
    v15 = 0;
    do
    {
      v24 = nullptr;
      v16 = 8 * v15;
      v25 = 0;
      v26[0] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v15);
      if ( !(unsigned __int8)sub_265AA0((__int64)v26, (__int64 *)&v24, v22, nullptr, 0.0) )
        sub_261630(v26, (__int64 *)&v24);
      sub_2656E0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a5);
      v17 = s1;
      if ( (_QWORD)v25 )
        v17 = v24;
      (*(void (**)(_QWORD *, _QWORD, const char *, ...))*a5)(a5, v8, "%s %s", &byte_42C468, v17);
      v18 = tag_strlen();
      sub_262740(
        (void **)a3,
        a2,
        v8 + v18 + 5,
        0,
        byte_41912D,
        a5,
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + v16) | 0x40000000);
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree((__int64)v24);
      }
      v15 = ++v14;
    }
    while ( (unsigned __int64)v14 < *(_QWORD *)(a1 + 40) );
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  return sub_268570(a1, v8 + *(_DWORD *)(a2 + 592), a5, 1u, a7);
}

