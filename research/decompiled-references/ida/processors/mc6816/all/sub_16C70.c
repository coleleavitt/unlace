unsigned __int64 __fastcall sub_16C70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rax
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  char *v10; // rax
  _BYTE v12[136]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp-30h]

  v4 = 32;
  v13 = __readfsqword(0x28u);
  if ( a4 < 0 )
    v4 = 45;
  btoa64();
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a3 + 24);
  v8 = *(_WORD *)(v6 + 4) == 1;
  v9 = *(_QWORD *)(v6 + 168);
  v10 = byte_1A764;
  if ( v8 )
  {
    if ( v7 )
      v10 = *(char **)(a3 + 16);
    sub_15E00(a2, (__int64)&unk_1A534, v10, v9, v4, v12);
  }
  else
  {
    if ( v7 )
      v10 = *(char **)(a3 + 16);
    sub_15F70(a2, (__int64)&unk_1A552, v10, v9, v4, v12);
  }
  return v13 - __readfsqword(0x28u);
}

