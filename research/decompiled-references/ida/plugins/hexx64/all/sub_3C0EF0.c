__int64 __fastcall sub_3C0EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  int v7; // eax
  int v8; // r13d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // r13d
  __int64 v17; // rbx
  __int64 v18; // rbp
  char v19; // al
  int v20; // eax
  __int64 v22; // [rsp+0h] [rbp-38h]
  __int64 v23; // [rsp+0h] [rbp-38h]
  __int64 v24; // [rsp+8h] [rbp-30h]
  __int64 v25; // [rsp+8h] [rbp-30h]
  __int64 v26; // [rsp+10h] [rbp-28h]
  __int64 v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+18h] [rbp-20h]

  v6 = 0;
  ((void (__fastcall *)(__int64, const char *, const char *, _QWORD, __int64, __int64))callui)(
    129,
    "Edit/Comments/Enter",
    "hx:EditCmt",
    0,
    a5,
    a6);
  v8 = v7;
  callui(129, "View/Open/Hex", "hx:GenPseudo", 0, v9, v10, v22, v24, v26, v28);
  v16 = v15 | v8;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(a1 + 880);
      v18 = 80LL * v6;
      callui(127, v17 + v18 + 5824, v11, v12, v13, v14, v23, v25, v27, v29);
      if ( v19 )
      {
        callui(
          129,
          *(_QWORD *)(v18 + v17 + 5888),
          *(_QWORD *)(v18 + v17 + 5832),
          *(_DWORD *)(v18 + v17 + 5896) & 3,
          v13,
          v14,
          v23,
          v25,
          v27,
          v29);
        v16 |= v20;
      }
      if ( v6 )
        break;
      v6 = 2;
    }
    ++v6;
  }
  while ( v6 != 10 );
  return v16;
}

