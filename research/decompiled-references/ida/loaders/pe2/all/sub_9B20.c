__int64 __fastcall sub_9B20(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // r14d
  __int64 v8; // rbx
  __int64 (*v9)(); // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rsi
  const char *v14; // rdi
  __int64 v16; // r8
  __int64 v17; // rax
  const char *v18; // rcx
  const char *v19; // [rsp+10h] [rbp-48h] BYREF
  __int64 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 8) == 0;
  v21 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
    v5 = v4 & (*(_QWORD *)(a1 + 152) + qword_379D8);
    if ( a2 )
    {
      v6 = *(int *)(a1 + 12);
      v7 = 0;
      while ( 1 )
      {
        v8 = v4 & v5;
        v9 = sub_7020;
        if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 24LL) == 523 )
          v9 = sub_7040;
        ++v7;
        ((void (__fastcall *)(__int64, __int64, _QWORD))v9)(v8, v6, 0);
        get_default_reftype();
        op_offset();
        v6 = *(int *)(a1 + 12);
        v5 = v6 + v8;
        if ( a2 == v7 )
          break;
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 165) )
  {
    v10 = *(_QWORD *)(a1 + 96) + (*(_QWORD *)(a1 + 104) << 6) - 64LL;
    v11 = *(_QWORD *)(a1 + 136);
    if ( v11 < *(_QWORD *)(a1 + 120) )
      *(_QWORD *)(a1 + 120) = v11;
    v12 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 128) < v12 )
      *(_QWORD *)(a1 + 128) = v12;
    if ( a2 )
      *(_BYTE *)(v10 + 56) = 1;
    v13 = (char *)s1;
    if ( *(_QWORD *)(v10 + 8) )
      v13 = *(char **)v10;
    sub_8100((__int64)&v19, v13);
    if ( *(_BYTE *)(a1 + 166) )
    {
      sub_97C0();
      v16 = 0;
      v17 = *(_QWORD *)(a1 + 80);
      if ( !*(_BYTE *)(a1 + 8) )
      {
        if ( *(_WORD *)(v17 + 24) == 523 )
          v16 = *(_QWORD *)(v17 + 48);
        else
          v16 = *(unsigned int *)(v17 + 52);
      }
      v18 = s1;
      if ( v20 )
        v18 = v19;
      sub_9250(
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL)
      & ((unsigned int)(32 * *(_DWORD *)(a1 + 160)) + qword_379D8 + *(unsigned int *)(v17 + 224)),
        (_DWORD *)(a1 + 36),
        (__int64)v18,
        v16,
        *(_DWORD *)(a1 + 12));
      ++*(_DWORD *)(a1 + 160);
    }
    else
    {
      sub_97C0();
      if ( byte_379E4 )
      {
        v14 = s1;
        if ( *(_QWORD *)(v10 + 8) )
          v14 = *(const char **)v10;
        if ( !strcasecmp(v14, "PSXDLL.DLL") )
        {
          byte_379E4 = 0;
          netnode_supset();
        }
      }
    }
    if ( v19 )
    {
      v20 = 0;
      qfree();
    }
  }
  return 0;
}

