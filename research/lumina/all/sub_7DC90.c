unsigned __int64 __fastcall sub_7DC90(__int64 *a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int8 v4; // al
  unsigned __int64 v6; // rbx
  size_t v8; // r13
  __int64 v9; // r12
  size_t v10; // r14
  __int64 v11; // rsi
  __int64 i; // rcx
  __int64 v13; // rax
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = *(_BYTE *)(a2 + 8) - 10;
  if ( v4 > 0x27u )
  {
    if ( !unk_2439A0 )
      sub_198E10(1583);
    BUG();
  }
  v15 = 0;
  ptr = nullptr;
  ((void (__fastcall *)(void **, __int64, _QWORD))funcs_7DCE5[(char)v4])(&ptr, a2, a4);
  if ( a3 && *a3 )
  {
    for ( i = sub_1997C0((char *)ptr, "\n"); i; i = sub_1997C0(nullptr, "\n") )
      sub_2AAE0(a1);
  }
  else
  {
    v6 = v15;
    if ( (_QWORD)v15 )
    {
      v8 = v15 - 1;
      if ( (_QWORD)v15 != 1 )
      {
        v9 = a1[1];
        v10 = v15 - 1;
        if ( v9 )
        {
          --v9;
          v10 = v8 + v9;
          v6 = v15 + v9;
        }
        v11 = *a1;
        if ( a1[2] < v6 )
        {
          v13 = sub_1987B0(a1, v11, v6, 1);
          *a1 = v13;
          v11 = v13;
        }
        a1[1] = v6;
        *(_BYTE *)(v11 + v10) = 0;
        memcpy((void *)(v9 + *a1), ptr, v8);
      }
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    j__free(ptr);
  }
  return v16 - __readfsqword(0x28u);
}
