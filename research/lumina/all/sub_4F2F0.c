__int64 __fastcall sub_4F2F0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v5; // rdi
  int v7; // r8d
  void *v8; // rax
  unsigned int v9; // ebp
  char *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v13; // rax
  void *v14; // rdi
  const char *v16; // rsi
  void *v17; // rsi
  __int64 v18; // rax
  void *v19; // [rsp+0h] [rbp-88h] BYREF
  __int128 v20; // [rsp+8h] [rbp-80h]
  void *v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+46h] [rbp-42h]
  __int16 v24; // [rsp+4Ah] [rbp-3Eh]
  int v25; // [rsp+4Ch] [rbp-3Ch]
  __int16 v26; // [rsp+50h] [rbp-38h]
  int v27; // [rsp+52h] [rbp-36h]
  __int16 v28; // [rsp+56h] [rbp-32h]
  unsigned __int64 v29; // [rsp+58h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 432);
  if ( !v5 || (v7 = *(_DWORD *)a2, v25 = 0, v26 = 0, v27 = 0, v28 = 0, v23 = 0, v24 = 0, !v7) && !*(_WORD *)(a2 + 4) )
  {
    if ( !unk_2439A0 )
      sub_198E10(3160);
    BUG();
  }
  v8 = (void *)*a4;
  if ( *a4 )
  {
    a4[1] = 0;
    j__free(v8);
    *a4 = 0;
    a4[2] = 0;
    v5 = *(_QWORD *)(a1 + 432);
  }
  v19 = nullptr;
  v20 = 0;
  v9 = sub_5E210(v5, a2, &v19, a4);
  if ( v9 )
  {
    if ( (unsigned __int64)a4[1] <= 1 )
    {
      v17 = (void *)*a4;
      if ( (unsigned __int64)a4[2] <= 0xD )
      {
        v18 = sub_1987B0(a4, v17, 14, 1);
        *a4 = v18;
        v17 = (void *)v18;
      }
      a4[1] = 14;
      qmemcpy(v17, "Unknown error", 13);
      *(_BYTE *)(*a4 + 13) = 0;
    }
  }
  else if ( (word_2439A4 & 0x200) != 0 )
  {
    sub_4EA40((__int64)&v21, (int *)a2);
    v16 = s1;
    if ( v22 )
      v16 = (const char *)v21;
    sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"License %s has been checked out\n", v16);
    if ( v21 )
    {
      v22 = 0;
      j__free(v21);
    }
  }
  v10 = (char *)v19;
  if ( v19 )
  {
    v11 = v20;
    if ( (_QWORD)v20 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[32 * v12];
        v14 = *((void **)v13 + 1);
        if ( v14 )
        {
          *((_QWORD *)v13 + 2) = 0;
          j__free(v14);
          v10 = (char *)v19;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v20 = 0;
    j__free(v10);
  }
  return v9;
}
