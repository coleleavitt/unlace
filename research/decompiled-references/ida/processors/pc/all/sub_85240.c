unsigned __int64 __fastcall sub_85240(__int64 a1, unsigned int a2, int a3, __int64 a4, char a5)
{
  __int64 *v6; // rdi
  __int64 v8; // r13
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  int dtype_size; // eax
  char *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rcx
  __int64 v20; // rdi
  struct _Unwind_Exception *v22; // rbx
  char *v23; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a3 != -1 )
  {
    v6 = *(__int64 **)a1;
    v8 = a2;
    v10 = a5;
    v11 = v6[1];
    v12 = *v6;
    if ( v6[2] < (unsigned __int64)(v11 + 1) )
    {
      v12 = qvector_reserve();
      *v6 = v12;
      v11 = v6[1];
    }
    v13 = v12 + 12 * v11;
    *(_QWORD *)v13 = 0;
    *(_WORD *)(v13 + 8) = 0;
    ++v6[1];
    v23 = 0;
    v24 = 0;
    dtype_size = get_dtype_size();
    sub_84A20((__int64 *)&v23, a3, dtype_size, *(_QWORD *)(a1 + 16) == 64);
    v15 = (char *)s1;
    if ( (_QWORD)v24 )
      v15 = v23;
    v16 = sub_845A0(v15, (_WORD *)(v13 + 4));
    if ( (unsigned int)(v16 - 16) <= 0xB )
    {
      *(_DWORD *)v13 = byte_15BCC8[v16 - 16];
    }
    else
    {
      *(_DWORD *)v13 = v16;
      if ( v16 == -1 )
      {
        if ( !under_debugger )
        {
          v22 = (struct _Unwind_Exception *)interr();
          if ( v23 )
          {
            *(_QWORD *)&v24 = 0;
            qfree();
          }
          _Unwind_Resume(v22);
        }
        BUG();
      }
    }
    if ( !*(_WORD *)(v13 + 6) )
    {
      v17 = *(_QWORD *)(a1 + 16);
      *(_WORD *)(v13 + 4) = 0;
      *(_WORD *)(v13 + 6) = v17;
    }
    *(_BYTE *)(v13 + 9) = v8;
    if ( !a5 && (unsigned int)v8 <= 7 )
    {
      v18 = 0;
      if ( (dword_95820[v8] & *(_DWORD *)(a1 + 24)) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 8);
        v18 = 2;
        if ( *(_WORD *)(v19 + 24) == 216 && *(_BYTE *)(v19 + 81) == 1 )
          v18 = 2 * (*(_WORD *)(v19 + 46) != *(_WORD *)(v19 + 86));
      }
      v10 = v18 | 1;
      if ( (dword_95840[v8] & *(_DWORD *)(a1 + 24)) == 0 )
        v10 = v18;
    }
    v20 = (__int64)v23;
    *(_BYTE *)(v13 + 8) = v10;
    if ( v20 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
    }
  }
  return v25 - __readfsqword(0x28u);
}
