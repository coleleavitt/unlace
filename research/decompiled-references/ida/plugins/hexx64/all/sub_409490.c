__int64 __fastcall sub_409490(__int64 a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  char **v5; // rax
  char *v6; // r13
  __int64 v7; // r12
  char **v8; // r12
  char *v9; // rax
  const char **v10; // r12
  unsigned int v11; // ebx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v14; // [rsp+8h] [rbp-110h]
  __int64 v15[31]; // [rsp+20h] [rbp-F8h] BYREF

  v15[25] = __readfsqword(0x28u);
  s1 = nullptr;
  v14 = 0;
  v5 = sub_3EB450(a2, (__int64 *)&s1);
  v6 = s1;
  v7 = (__int64)v5;
  if ( !s1 )
    return 0;
  if ( v5 )
  {
    sub_413900((__int64)v15, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40));
    v15[23] = a1;
    v15[0] = (__int64)&off_4ECC30;
    if ( !(unsigned int)sub_3FD040(v15, v7, (__m128i)0LL, a4, a5) )
    {
      *(_BYTE *)(a1 + 896) = 1;
      v15[0] = (__int64)&off_4EA590;
      sub_4139F0(v15);
      goto LABEL_19;
    }
    v15[0] = (__int64)&off_4EA590;
    sub_4139F0(v15);
  }
  v8 = sub_3EBB10(v6);
  if ( v8 )
  {
    if ( !(unsigned __int8)func_does_return() )
    {
LABEL_11:
      v11 = 0;
      goto LABEL_12;
    }
    v9 = v8[3];
    if ( v9 )
    {
      if ( !((unsigned int (__fastcall *)(__int64, char **))v9)(a1, v8) )
        goto LABEL_18;
    }
  }
  v10 = sub_333280(v6, 0.0);
  if ( !v10 )
  {
    if ( (unsigned __int8)sub_1D30E0(*(_QWORD *)(a1 + 800), a2, v6) )
      goto LABEL_19;
    if ( !sub_1D3280(v6) )
    {
      if ( !strncmp(v6, "gnu_", 4u) )
        v6 += 4;
      if ( strncmp(v6, "mcount", 6u) || v6[6] && strcmp(v6 + 6, "_nc") )
        goto LABEL_11;
      sub_3FB370(a1, 31, 0.0);
      goto LABEL_19;
    }
    if ( (unsigned __int8)func_does_return() )
    {
LABEL_19:
      v11 = 1;
      goto LABEL_12;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
LABEL_18:
    *(_BYTE *)(a1 + 896) = 1;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)func_does_return() )
    goto LABEL_11;
  v11 = sub_408FA0(a1, (__int64)v10, 0.0, *(double *)a4.m128_u64, a5);
LABEL_12:
  if ( s1 )
  {
    *(_QWORD *)&v14 = 0;
    qfree((__int64)s1);
  }
  return v11;
}

