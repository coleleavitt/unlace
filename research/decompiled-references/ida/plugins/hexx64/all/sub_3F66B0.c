__int64 __fastcall sub_3F66B0(__int64 a1, __int64 a2, __m128i a3)
{
  const char *v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r13d
  __int64 v16; // r12
  unsigned __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  char v18[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v4 = *(const char **)(a2 + 40);
  v19 = __readfsqword(0x28u);
  if ( (!strcmp(v4, "__bextr_u32") || !strcmp(v4, "__bextr_u64"))
    && (v5 = *(_QWORD *)(a2 + 72), v6 = sub_11FD80((char *)(*(_QWORD *)(v5 + 24) + 160LL), (__int64 *)&v17, 0),
                                   (_BYTE)v6) )
  {
    v7 = *(_QWORD *)(v5 + 24);
    v8 = *(_DWORD *)(v7 + 4);
    v9 = 8 * v8;
    if ( v9 < v17 )
      v17 = 8 * v8;
    sub_1273B0(v7 + 80, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(a2 + 24), 1, a3);
    sub_126010(
      *(char **)(v5 + 24),
      *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
      23,
      *(_QWORD *)(a2 + 24),
      (unsigned __int8 *)(*(_QWORD *)(v5 + 24) + 80LL),
      a3);
    v11 = v17;
    if ( v17 < v9 )
    {
      v12 = -1;
      if ( (unsigned __int64)(int)v17 <= 0x3F )
        v12 = (1LL << v17) - 1;
      sub_126240(
        *(char **)(v5 + 24),
        *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
        0x14u,
        *(_QWORD *)(a2 + 24),
        v12,
        *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4LL),
        a3);
    }
    v13 = *(_QWORD *)(v5 + 24);
    if ( *(_BYTE *)v13 == 4 )
    {
      v16 = *(_QWORD *)(v13 + 8);
      *(_DWORD *)a2 = *(_DWORD *)v16;
      sub_11CA10((char *)(a2 + 32), (char *)(v16 + 32));
      sub_11CA10((char *)(a2 + 48), (char *)(v16 + 48));
      LODWORD(v16) = *(_DWORD *)(a2 + 68);
      sub_11CDA0(a2 + 64);
      *(_DWORD *)(a2 + 68) = v16;
    }
    else
    {
      *(_DWORD *)a2 = 4;
      sub_123A40((__int64)v18, *(unsigned __int8 **)(v5 + 24), v10, v11);
      sub_11CA10((char *)(a2 + 32), v18);
      v14 = *(_DWORD *)(a2 + 68);
      sub_11CDA0(a2 + 64);
      *(_DWORD *)(a2 + 68) = v14;
      sub_11CDA0((__int64)v18);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

